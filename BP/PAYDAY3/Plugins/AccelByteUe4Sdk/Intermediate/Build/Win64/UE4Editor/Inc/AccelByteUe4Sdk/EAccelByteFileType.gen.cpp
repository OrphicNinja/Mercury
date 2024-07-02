// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteFileType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteFileType() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteFileType();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteFileType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteFileType, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteFileType"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteFileType>()
	{
		return EAccelByteFileType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteFileType(EAccelByteFileType_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteFileType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteFileType_Hash() { return 478944607U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteFileType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteFileType"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteFileType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteFileType::JPEG", (int64)EAccelByteFileType::JPEG },
				{ "EAccelByteFileType::JPG", (int64)EAccelByteFileType::JPG },
				{ "EAccelByteFileType::PNG", (int64)EAccelByteFileType::PNG },
				{ "EAccelByteFileType::BMP", (int64)EAccelByteFileType::BMP },
				{ "EAccelByteFileType::GIF", (int64)EAccelByteFileType::GIF },
				{ "EAccelByteFileType::MP3", (int64)EAccelByteFileType::MP3 },
				{ "EAccelByteFileType::BIN", (int64)EAccelByteFileType::BIN },
				{ "EAccelByteFileType::WEBP", (int64)EAccelByteFileType::WEBP },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BIN.Name", "EAccelByteFileType::BIN" },
				{ "BlueprintType", "true" },
				{ "BMP.Name", "EAccelByteFileType::BMP" },
				{ "GIF.Name", "EAccelByteFileType::GIF" },
				{ "JPEG.Name", "EAccelByteFileType::JPEG" },
				{ "JPG.Name", "EAccelByteFileType::JPG" },
				{ "ModuleRelativePath", "Public/EAccelByteFileType.h" },
				{ "MP3.Name", "EAccelByteFileType::MP3" },
				{ "PNG.Name", "EAccelByteFileType::PNG" },
				{ "WEBP.Name", "EAccelByteFileType::WEBP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteFileType",
				"EAccelByteFileType",
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
