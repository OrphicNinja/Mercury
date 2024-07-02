// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ETimerScorerSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETimerScorerSetting() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ETimerScorerSetting();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ETimerScorerSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ETimerScorerSetting, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ETimerScorerSetting"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ETimerScorerSetting>()
	{
		return ETimerScorerSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETimerScorerSetting(ETimerScorerSetting_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ETimerScorerSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ETimerScorerSetting_Hash() { return 1871168023U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ETimerScorerSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETimerScorerSetting"), 0, Get_Z_Construct_UEnum_Starbreeze_ETimerScorerSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETimerScorerSetting::Activate", (int64)ETimerScorerSetting::Activate },
				{ "ETimerScorerSetting::Deactivate", (int64)ETimerScorerSetting::Deactivate },
				{ "ETimerScorerSetting::Select", (int64)ETimerScorerSetting::Select },
				{ "ETimerScorerSetting::Deselect", (int64)ETimerScorerSetting::Deselect },
				{ "ETimerScorerSetting::Success", (int64)ETimerScorerSetting::Success },
				{ "ETimerScorerSetting::Fail", (int64)ETimerScorerSetting::Fail },
				{ "ETimerScorerSetting::Abort", (int64)ETimerScorerSetting::Abort },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Abort.Name", "ETimerScorerSetting::Abort" },
				{ "Activate.Name", "ETimerScorerSetting::Activate" },
				{ "BlueprintType", "true" },
				{ "Deactivate.Name", "ETimerScorerSetting::Deactivate" },
				{ "Deselect.Name", "ETimerScorerSetting::Deselect" },
				{ "Fail.Name", "ETimerScorerSetting::Fail" },
				{ "ModuleRelativePath", "Public/ETimerScorerSetting.h" },
				{ "Select.Name", "ETimerScorerSetting::Select" },
				{ "Success.Name", "ETimerScorerSetting::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ETimerScorerSetting",
				"ETimerScorerSetting",
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
