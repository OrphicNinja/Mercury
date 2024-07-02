// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EHttpCacheType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHttpCacheType() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EHttpCacheType();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EHttpCacheType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EHttpCacheType, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EHttpCacheType"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EHttpCacheType>()
	{
		return EHttpCacheType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHttpCacheType(EHttpCacheType_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EHttpCacheType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EHttpCacheType_Hash() { return 1145296841U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EHttpCacheType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHttpCacheType"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EHttpCacheType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHttpCacheType::UNKNOWN", (int64)EHttpCacheType::UNKNOWN },
				{ "EHttpCacheType::STORAGE", (int64)EHttpCacheType::STORAGE },
				{ "EHttpCacheType::MEMORY", (int64)EHttpCacheType::MEMORY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MEMORY.Name", "EHttpCacheType::MEMORY" },
				{ "ModuleRelativePath", "Public/EHttpCacheType.h" },
				{ "STORAGE.Name", "EHttpCacheType::STORAGE" },
				{ "UNKNOWN.Name", "EHttpCacheType::UNKNOWN" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EHttpCacheType",
				"EHttpCacheType",
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
