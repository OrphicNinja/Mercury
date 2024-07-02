// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EP2PConnectionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEP2PConnectionType() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EP2PConnectionType();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EP2PConnectionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EP2PConnectionType, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EP2PConnectionType"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EP2PConnectionType>()
	{
		return EP2PConnectionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EP2PConnectionType(EP2PConnectionType_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EP2PConnectionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EP2PConnectionType_Hash() { return 2035375286U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EP2PConnectionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EP2PConnectionType"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EP2PConnectionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EP2PConnectionType::None", (int64)EP2PConnectionType::None },
				{ "EP2PConnectionType::Host", (int64)EP2PConnectionType::Host },
				{ "EP2PConnectionType::Srflx", (int64)EP2PConnectionType::Srflx },
				{ "EP2PConnectionType::Prflx", (int64)EP2PConnectionType::Prflx },
				{ "EP2PConnectionType::Relay", (int64)EP2PConnectionType::Relay },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Host.Name", "EP2PConnectionType::Host" },
				{ "ModuleRelativePath", "Public/EP2PConnectionType.h" },
				{ "None.Name", "EP2PConnectionType::None" },
				{ "Prflx.Name", "EP2PConnectionType::Prflx" },
				{ "Relay.Name", "EP2PConnectionType::Relay" },
				{ "Srflx.Name", "EP2PConnectionType::Srflx" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EP2PConnectionType",
				"EP2PConnectionType",
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
