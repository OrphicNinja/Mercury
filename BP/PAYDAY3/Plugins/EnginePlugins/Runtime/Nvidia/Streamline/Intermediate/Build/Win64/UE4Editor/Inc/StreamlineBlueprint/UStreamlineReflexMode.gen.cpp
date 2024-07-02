// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamlineBlueprint/Public/UStreamlineReflexMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUStreamlineReflexMode() {}
// Cross Module References
	STREAMLINEBLUEPRINT_API UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode();
	UPackage* Z_Construct_UPackage__Script_StreamlineBlueprint();
// End Cross Module References
	static UEnum* UStreamlineReflexMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode, Z_Construct_UPackage__Script_StreamlineBlueprint(), TEXT("UStreamlineReflexMode"));
		}
		return Singleton;
	}
	template<> STREAMLINEBLUEPRINT_API UEnum* StaticEnum<UStreamlineReflexMode>()
	{
		return UStreamlineReflexMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_UStreamlineReflexMode(UStreamlineReflexMode_StaticEnum, TEXT("/Script/StreamlineBlueprint"), TEXT("UStreamlineReflexMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode_Hash() { return 3432919216U; }
	UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StreamlineBlueprint();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("UStreamlineReflexMode"), 0, Get_Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "UStreamlineReflexMode::Disabled", (int64)UStreamlineReflexMode::Disabled },
				{ "UStreamlineReflexMode::Enabled", (int64)UStreamlineReflexMode::Enabled },
				{ "UStreamlineReflexMode::EnabledPlusBoost", (int64)UStreamlineReflexMode::EnabledPlusBoost },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Disabled.Name", "UStreamlineReflexMode::Disabled" },
				{ "Enabled.Name", "UStreamlineReflexMode::Enabled" },
				{ "EnabledPlusBoost.Name", "UStreamlineReflexMode::EnabledPlusBoost" },
				{ "ModuleRelativePath", "Public/UStreamlineReflexMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
				nullptr,
				"UStreamlineReflexMode",
				"UStreamlineReflexMode",
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
