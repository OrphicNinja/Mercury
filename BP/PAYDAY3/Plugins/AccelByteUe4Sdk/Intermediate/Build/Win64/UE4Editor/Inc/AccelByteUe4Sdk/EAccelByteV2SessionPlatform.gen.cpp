// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteV2SessionPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteV2SessionPlatform() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionPlatform();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteV2SessionPlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionPlatform, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteV2SessionPlatform"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteV2SessionPlatform>()
	{
		return EAccelByteV2SessionPlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteV2SessionPlatform(EAccelByteV2SessionPlatform_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteV2SessionPlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionPlatform_Hash() { return 3887228089U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionPlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteV2SessionPlatform"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionPlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteV2SessionPlatform::Unknown", (int64)EAccelByteV2SessionPlatform::Unknown },
				{ "EAccelByteV2SessionPlatform::Steam", (int64)EAccelByteV2SessionPlatform::Steam },
				{ "EAccelByteV2SessionPlatform::EOS", (int64)EAccelByteV2SessionPlatform::EOS },
				{ "EAccelByteV2SessionPlatform::Xbox", (int64)EAccelByteV2SessionPlatform::Xbox },
				{ "EAccelByteV2SessionPlatform::PS4", (int64)EAccelByteV2SessionPlatform::PS4 },
				{ "EAccelByteV2SessionPlatform::PS5", (int64)EAccelByteV2SessionPlatform::PS5 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EOS.Name", "EAccelByteV2SessionPlatform::EOS" },
				{ "ModuleRelativePath", "Public/EAccelByteV2SessionPlatform.h" },
				{ "PS4.Name", "EAccelByteV2SessionPlatform::PS4" },
				{ "PS5.Name", "EAccelByteV2SessionPlatform::PS5" },
				{ "Steam.Name", "EAccelByteV2SessionPlatform::Steam" },
				{ "Unknown.Name", "EAccelByteV2SessionPlatform::Unknown" },
				{ "Xbox.Name", "EAccelByteV2SessionPlatform::Xbox" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteV2SessionPlatform",
				"EAccelByteV2SessionPlatform",
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
