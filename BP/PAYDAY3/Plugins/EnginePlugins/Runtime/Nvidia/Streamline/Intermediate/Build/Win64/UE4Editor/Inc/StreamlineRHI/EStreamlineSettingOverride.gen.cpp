// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamlineRHI/Public/EStreamlineSettingOverride.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStreamlineSettingOverride() {}
// Cross Module References
	STREAMLINERHI_API UEnum* Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride();
	UPackage* Z_Construct_UPackage__Script_StreamlineRHI();
// End Cross Module References
	static UEnum* EStreamlineSettingOverride_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride, Z_Construct_UPackage__Script_StreamlineRHI(), TEXT("EStreamlineSettingOverride"));
		}
		return Singleton;
	}
	template<> STREAMLINERHI_API UEnum* StaticEnum<EStreamlineSettingOverride>()
	{
		return EStreamlineSettingOverride_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStreamlineSettingOverride(EStreamlineSettingOverride_StaticEnum, TEXT("/Script/StreamlineRHI"), TEXT("EStreamlineSettingOverride"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride_Hash() { return 3695562621U; }
	UEnum* Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StreamlineRHI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStreamlineSettingOverride"), 0, Get_Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStreamlineSettingOverride::Enabled", (int64)EStreamlineSettingOverride::Enabled },
				{ "EStreamlineSettingOverride::Disabled", (int64)EStreamlineSettingOverride::Disabled },
				{ "EStreamlineSettingOverride::UseProjectSettings", (int64)EStreamlineSettingOverride::UseProjectSettings },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disabled.Name", "EStreamlineSettingOverride::Disabled" },
				{ "Enabled.Name", "EStreamlineSettingOverride::Enabled" },
				{ "ModuleRelativePath", "Public/EStreamlineSettingOverride.h" },
				{ "UseProjectSettings.Name", "EStreamlineSettingOverride::UseProjectSettings" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StreamlineRHI,
				nullptr,
				"EStreamlineSettingOverride",
				"EStreamlineSettingOverride",
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
