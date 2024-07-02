// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/EPD3DispatchCallerReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPD3DispatchCallerReason() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DispatchCallerReason();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* EPD3DispatchCallerReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_EPD3DispatchCallerReason, Z_Construct_UPackage__Script_Starbreeze(), TEXT("EPD3DispatchCallerReason"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<EPD3DispatchCallerReason>()
	{
		return EPD3DispatchCallerReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPD3DispatchCallerReason(EPD3DispatchCallerReason_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("EPD3DispatchCallerReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_EPD3DispatchCallerReason_Hash() { return 2524973750U; }
	UEnum* Z_Construct_UEnum_Starbreeze_EPD3DispatchCallerReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPD3DispatchCallerReason"), 0, Get_Z_Construct_UEnum_Starbreeze_EPD3DispatchCallerReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPD3DispatchCallerReason::Criminal", (int64)EPD3DispatchCallerReason::Criminal },
				{ "EPD3DispatchCallerReason::DeadBody", (int64)EPD3DispatchCallerReason::DeadBody },
				{ "EPD3DispatchCallerReason::Hostage", (int64)EPD3DispatchCallerReason::Hostage },
				{ "EPD3DispatchCallerReason::Object", (int64)EPD3DispatchCallerReason::Object },
				{ "EPD3DispatchCallerReason::Gunfire", (int64)EPD3DispatchCallerReason::Gunfire },
				{ "EPD3DispatchCallerReason::Suspect", (int64)EPD3DispatchCallerReason::Suspect },
				{ "EPD3DispatchCallerReason::Hostile", (int64)EPD3DispatchCallerReason::Hostile },
				{ "EPD3DispatchCallerReason::GenericAlarm", (int64)EPD3DispatchCallerReason::GenericAlarm },
				{ "EPD3DispatchCallerReason::GenericSearch", (int64)EPD3DispatchCallerReason::GenericSearch },
				{ "EPD3DispatchCallerReason::Escaped", (int64)EPD3DispatchCallerReason::Escaped },
				{ "EPD3DispatchCallerReason::Cuffed", (int64)EPD3DispatchCallerReason::Cuffed },
				{ "EPD3DispatchCallerReason::UnlockedGate", (int64)EPD3DispatchCallerReason::UnlockedGate },
				{ "EPD3DispatchCallerReason::Sabotage", (int64)EPD3DispatchCallerReason::Sabotage },
				{ "EPD3DispatchCallerReason::BrokenWindow", (int64)EPD3DispatchCallerReason::BrokenWindow },
				{ "EPD3DispatchCallerReason::BrokenCamera", (int64)EPD3DispatchCallerReason::BrokenCamera },
				{ "EPD3DispatchCallerReason::None", (int64)EPD3DispatchCallerReason::None },
				{ "EPD3DispatchCallerReason::MAX", (int64)EPD3DispatchCallerReason::MAX },
				{ "EPD3DispatchCallerReason::Default", (int64)EPD3DispatchCallerReason::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BrokenCamera.Name", "EPD3DispatchCallerReason::BrokenCamera" },
				{ "BrokenWindow.Name", "EPD3DispatchCallerReason::BrokenWindow" },
				{ "Criminal.Name", "EPD3DispatchCallerReason::Criminal" },
				{ "Cuffed.Name", "EPD3DispatchCallerReason::Cuffed" },
				{ "DeadBody.Name", "EPD3DispatchCallerReason::DeadBody" },
				{ "Default.Name", "EPD3DispatchCallerReason::Default" },
				{ "Escaped.Name", "EPD3DispatchCallerReason::Escaped" },
				{ "GenericAlarm.Name", "EPD3DispatchCallerReason::GenericAlarm" },
				{ "GenericSearch.Name", "EPD3DispatchCallerReason::GenericSearch" },
				{ "Gunfire.Name", "EPD3DispatchCallerReason::Gunfire" },
				{ "Hostage.Name", "EPD3DispatchCallerReason::Hostage" },
				{ "Hostile.Name", "EPD3DispatchCallerReason::Hostile" },
				{ "MAX.Name", "EPD3DispatchCallerReason::MAX" },
				{ "ModuleRelativePath", "Public/EPD3DispatchCallerReason.h" },
				{ "None.Name", "EPD3DispatchCallerReason::None" },
				{ "Object.Name", "EPD3DispatchCallerReason::Object" },
				{ "Sabotage.Name", "EPD3DispatchCallerReason::Sabotage" },
				{ "Suspect.Name", "EPD3DispatchCallerReason::Suspect" },
				{ "UnlockedGate.Name", "EPD3DispatchCallerReason::UnlockedGate" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"EPD3DispatchCallerReason",
				"EPD3DispatchCallerReason",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
