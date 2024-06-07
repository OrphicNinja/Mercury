// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamlineBlueprint/Public/UStreamlineDLSSGMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUStreamlineDLSSGMode() {}
// Cross Module References
	STREAMLINEBLUEPRINT_API UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode();
	UPackage* Z_Construct_UPackage__Script_StreamlineBlueprint();
// End Cross Module References
	static UEnum* UStreamlineDLSSGMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode, Z_Construct_UPackage__Script_StreamlineBlueprint(), TEXT("UStreamlineDLSSGMode"));
		}
		return Singleton;
	}
	template<> STREAMLINEBLUEPRINT_API UEnum* StaticEnum<UStreamlineDLSSGMode>()
	{
		return UStreamlineDLSSGMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_UStreamlineDLSSGMode(UStreamlineDLSSGMode_StaticEnum, TEXT("/Script/StreamlineBlueprint"), TEXT("UStreamlineDLSSGMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode_Hash() { return 3414401524U; }
	UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StreamlineBlueprint();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("UStreamlineDLSSGMode"), 0, Get_Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "UStreamlineDLSSGMode::Off", (int64)UStreamlineDLSSGMode::Off },
				{ "UStreamlineDLSSGMode::On", (int64)UStreamlineDLSSGMode::On },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/UStreamlineDLSSGMode.h" },
				{ "Off.Name", "UStreamlineDLSSGMode::Off" },
				{ "On.Name", "UStreamlineDLSSGMode::On" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
				nullptr,
				"UStreamlineDLSSGMode",
				"UStreamlineDLSSGMode",
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
