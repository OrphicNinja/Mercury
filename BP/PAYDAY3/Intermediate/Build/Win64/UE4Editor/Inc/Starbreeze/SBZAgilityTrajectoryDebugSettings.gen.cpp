// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilityTrajectoryDebugSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilityTrajectoryDebugSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZAgilityTrajectoryDebugSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgilityTrajectoryDebugSettings"), sizeof(FSBZAgilityTrajectoryDebugSettings), Get_Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgilityTrajectoryDebugSettings>()
{
	return FSBZAgilityTrajectoryDebugSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings(FSBZAgilityTrajectoryDebugSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgilityTrajectoryDebugSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTrajectoryDebugSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTrajectoryDebugSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgilityTrajectoryDebugSettings>(FName(TEXT("SBZAgilityTrajectoryDebugSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTrajectoryDebugSettings;
	struct Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawTrajectory_MetaData[];
#endif
		static void NewProp_bDrawTrajectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawTrajectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_DrawStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawOnlyCurrentStep_MetaData[];
#endif
		static void NewProp_bDrawOnlyCurrentStep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawOnlyCurrentStep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectoryDebugSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgilityTrajectoryDebugSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawTrajectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTrajectoryDebugSettings" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectoryDebugSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawTrajectory_SetBit(void* Obj)
	{
		((FSBZAgilityTrajectoryDebugSettings*)Obj)->bDrawTrajectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawTrajectory = { "bDrawTrajectory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAgilityTrajectoryDebugSettings), &Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawTrajectory_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawTrajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawTrajectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTrajectoryDebugSettings" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectoryDebugSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((FSBZAgilityTrajectoryDebugSettings*)Obj)->bDrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAgilityTrajectoryDebugSettings), &Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_DrawStep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTrajectoryDebugSettings" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectoryDebugSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_DrawStep = { "DrawStep", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTrajectoryDebugSettings, DrawStep), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_DrawStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_DrawStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawOnlyCurrentStep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTrajectoryDebugSettings" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectoryDebugSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawOnlyCurrentStep_SetBit(void* Obj)
	{
		((FSBZAgilityTrajectoryDebugSettings*)Obj)->bDrawOnlyCurrentStep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawOnlyCurrentStep = { "bDrawOnlyCurrentStep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAgilityTrajectoryDebugSettings), &Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawOnlyCurrentStep_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawOnlyCurrentStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawOnlyCurrentStep_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawTrajectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_DrawStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::NewProp_bDrawOnlyCurrentStep,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgilityTrajectoryDebugSettings",
		sizeof(FSBZAgilityTrajectoryDebugSettings),
		alignof(FSBZAgilityTrajectoryDebugSettings),
		Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgilityTrajectoryDebugSettings"), sizeof(FSBZAgilityTrajectoryDebugSettings), Get_Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTrajectoryDebugSettings_Hash() { return 3589160094U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
