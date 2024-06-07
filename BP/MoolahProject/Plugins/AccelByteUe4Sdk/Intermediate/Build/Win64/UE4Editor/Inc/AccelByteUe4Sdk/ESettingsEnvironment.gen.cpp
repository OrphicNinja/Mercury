// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ESettingsEnvironment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESettingsEnvironment() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_ESettingsEnvironment();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* ESettingsEnvironment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_ESettingsEnvironment, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("ESettingsEnvironment"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<ESettingsEnvironment>()
	{
		return ESettingsEnvironment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESettingsEnvironment(ESettingsEnvironment_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("ESettingsEnvironment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_ESettingsEnvironment_Hash() { return 364607822U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_ESettingsEnvironment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESettingsEnvironment"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_ESettingsEnvironment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESettingsEnvironment::Development", (int64)ESettingsEnvironment::Development },
				{ "ESettingsEnvironment::Certification", (int64)ESettingsEnvironment::Certification },
				{ "ESettingsEnvironment::Production", (int64)ESettingsEnvironment::Production },
				{ "ESettingsEnvironment::Sandbox", (int64)ESettingsEnvironment::Sandbox },
				{ "ESettingsEnvironment::Integration", (int64)ESettingsEnvironment::Integration },
				{ "ESettingsEnvironment::QA", (int64)ESettingsEnvironment::QA },
				{ "ESettingsEnvironment::Default", (int64)ESettingsEnvironment::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Certification.Name", "ESettingsEnvironment::Certification" },
				{ "Default.Name", "ESettingsEnvironment::Default" },
				{ "Development.Name", "ESettingsEnvironment::Development" },
				{ "Integration.Name", "ESettingsEnvironment::Integration" },
				{ "ModuleRelativePath", "Public/ESettingsEnvironment.h" },
				{ "Production.Name", "ESettingsEnvironment::Production" },
				{ "QA.Name", "ESettingsEnvironment::QA" },
				{ "Sandbox.Name", "ESettingsEnvironment::Sandbox" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"ESettingsEnvironment",
				"ESettingsEnvironment",
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
