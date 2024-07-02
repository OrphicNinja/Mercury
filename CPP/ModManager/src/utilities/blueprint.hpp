#pragma once

#include <array>
#include <fstream>
#include <iostream>
#include <filesystem>

#include <Unreal/Hooks.hpp>
#include <Unreal/AActor.hpp>
#include <Unreal/FProperty.hpp>
#include <Unreal/UClass.hpp>

#include <Unreal/UFunction.hpp>
#include <Unreal/UFunctionStructs.hpp>
#include <Unreal/UObject.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/FString.hpp>
#include <Unreal/Core/Containers/Array.hpp>

#include <utilities/debug.hpp>

namespace debug = MMM::utilities::debug;

using namespace Unreal;
using namespace RC;
using namespace RC::Unreal;

namespace MMM
{
    namespace utilities
    {
        namespace blueprint
        {
            bool HookBPFunction(AActor *actor, std::string functionNameInBP, UnrealScriptFunctionCallable functionInCPP, UnrealScriptFunctionCallable EmptyFunction)
            {
                FName function = FName(debug::ConvertStringToWstring(functionNameInBP));
                UFunction* function_in_blueprint = actor->GetFunctionByName(function);
                Unreal::UObjectGlobals::RegisterHook(function_in_blueprint, EmptyFunction, functionInCPP, nullptr);
                debug::Debug2(STR("Hooking function: "), functionNameInBP);
                return true;
            }

            void UpdateDownloadProgress(UObject *actor, auto ModsUpdating)
            {
                 for (auto i : ModsUpdating)
                {
                    UFunction* UpdateModDownloadProgress_In_BP = actor->GetFunctionByName(L"UpdateModDownloadProgress");
                    static auto ParamStructSize = UpdateModDownloadProgress_In_BP->GetParmsSize();
                    auto ParamData = static_cast<uint8*>(_malloca(ParamStructSize));
                    FMemory::Memzero(ParamData, ParamStructSize);
                    auto PakNameProperty = UpdateModDownloadProgress_In_BP->FindProperty(FName(STR("PakName")));
                    auto ProgressProperty = UpdateModDownloadProgress_In_BP->FindProperty(FName(STR("Progress")));
                    FString PakName = FString(debug::ConvertStringToWstring(i.mod.name).c_str());
                    float Progress = i.currentProgressPercent;
                    *std::bit_cast<FString*>(&ParamData[PakNameProperty->GetOffset_Internal()]) = static_cast<FString>(PakName);
                    *std::bit_cast<float*>(&ParamData[ProgressProperty->GetOffset_Internal()]) = static_cast<float>(Progress);
                    actor->ProcessEvent(UpdateModDownloadProgress_In_BP, ParamData);
                }
            }
        }
    }
}
