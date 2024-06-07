// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMultiPositionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMultiPositionType() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* AkMultiPositionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkMultiPositionType, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMultiPositionType"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkMultiPositionType>()
	{
		return AkMultiPositionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AkMultiPositionType(AkMultiPositionType_StaticEnum, TEXT("/Script/AkAudio"), TEXT("AkMultiPositionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_AkMultiPositionType_Hash() { return 2585094720U; }
	UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AkMultiPositionType"), 0, Get_Z_Construct_UEnum_AkAudio_AkMultiPositionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AkMultiPositionType::SingleSource", (int64)AkMultiPositionType::SingleSource },
				{ "AkMultiPositionType::MultiSources", (int64)AkMultiPositionType::MultiSources },
				{ "AkMultiPositionType::MultiDirections", (int64)AkMultiPositionType::MultiDirections },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AkMultiPositionType.h" },
				{ "MultiDirections.Name", "AkMultiPositionType::MultiDirections" },
				{ "MultiSources.Name", "AkMultiPositionType::MultiSources" },
				{ "SingleSource.Name", "AkMultiPositionType::SingleSource" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"AkMultiPositionType",
				"AkMultiPositionType",
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
