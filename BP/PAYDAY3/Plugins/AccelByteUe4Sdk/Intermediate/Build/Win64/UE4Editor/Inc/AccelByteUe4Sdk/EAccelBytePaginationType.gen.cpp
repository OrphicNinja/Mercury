// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelBytePaginationType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelBytePaginationType() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePaginationType();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelBytePaginationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePaginationType, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelBytePaginationType"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelBytePaginationType>()
	{
		return EAccelBytePaginationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelBytePaginationType(EAccelBytePaginationType_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelBytePaginationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePaginationType_Hash() { return 2016486379U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePaginationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelBytePaginationType"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePaginationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelBytePaginationType::FIRST", (int64)EAccelBytePaginationType::FIRST },
				{ "EAccelBytePaginationType::NEXT", (int64)EAccelBytePaginationType::NEXT },
				{ "EAccelBytePaginationType::PREVIOUS", (int64)EAccelBytePaginationType::PREVIOUS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FIRST.Name", "EAccelBytePaginationType::FIRST" },
				{ "ModuleRelativePath", "Public/EAccelBytePaginationType.h" },
				{ "NEXT.Name", "EAccelBytePaginationType::NEXT" },
				{ "PREVIOUS.Name", "EAccelBytePaginationType::PREVIOUS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelBytePaginationType",
				"EAccelBytePaginationType",
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
