// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteEntitlementClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteEntitlementClass() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementClass();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteEntitlementClass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementClass, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteEntitlementClass"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteEntitlementClass>()
	{
		return EAccelByteEntitlementClass_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteEntitlementClass(EAccelByteEntitlementClass_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteEntitlementClass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementClass_Hash() { return 3382283759U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementClass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteEntitlementClass"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementClass_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteEntitlementClass::NONE", (int64)EAccelByteEntitlementClass::NONE },
				{ "EAccelByteEntitlementClass::APP", (int64)EAccelByteEntitlementClass::APP },
				{ "EAccelByteEntitlementClass::ENTITLEMENT", (int64)EAccelByteEntitlementClass::ENTITLEMENT },
				{ "EAccelByteEntitlementClass::CODE", (int64)EAccelByteEntitlementClass::CODE },
				{ "EAccelByteEntitlementClass::SUBSCRIPTION", (int64)EAccelByteEntitlementClass::SUBSCRIPTION },
				{ "EAccelByteEntitlementClass::MEDIA", (int64)EAccelByteEntitlementClass::MEDIA },
				{ "EAccelByteEntitlementClass::OPTIONBOX", (int64)EAccelByteEntitlementClass::OPTIONBOX },
				{ "EAccelByteEntitlementClass::LOOTBOX", (int64)EAccelByteEntitlementClass::LOOTBOX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "APP.Name", "EAccelByteEntitlementClass::APP" },
				{ "BlueprintType", "true" },
				{ "CODE.Name", "EAccelByteEntitlementClass::CODE" },
				{ "ENTITLEMENT.Name", "EAccelByteEntitlementClass::ENTITLEMENT" },
				{ "LOOTBOX.Name", "EAccelByteEntitlementClass::LOOTBOX" },
				{ "MEDIA.Name", "EAccelByteEntitlementClass::MEDIA" },
				{ "ModuleRelativePath", "Public/EAccelByteEntitlementClass.h" },
				{ "NONE.Name", "EAccelByteEntitlementClass::NONE" },
				{ "OPTIONBOX.Name", "EAccelByteEntitlementClass::OPTIONBOX" },
				{ "SUBSCRIPTION.Name", "EAccelByteEntitlementClass::SUBSCRIPTION" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteEntitlementClass",
				"EAccelByteEntitlementClass",
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
