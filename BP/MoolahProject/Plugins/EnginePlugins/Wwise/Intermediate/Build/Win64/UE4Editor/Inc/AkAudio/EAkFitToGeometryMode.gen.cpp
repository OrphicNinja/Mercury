// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkFitToGeometryMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkFitToGeometryMode() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* EAkFitToGeometryMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkFitToGeometryMode"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkFitToGeometryMode>()
	{
		return EAkFitToGeometryMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkFitToGeometryMode(EAkFitToGeometryMode_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkFitToGeometryMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Hash() { return 1227109033U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkFitToGeometryMode"), 0, Get_Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkFitToGeometryMode::OrientedBox", (int64)EAkFitToGeometryMode::OrientedBox },
				{ "EAkFitToGeometryMode::AlignedBox", (int64)EAkFitToGeometryMode::AlignedBox },
				{ "EAkFitToGeometryMode::ConvexPolyhedron", (int64)EAkFitToGeometryMode::ConvexPolyhedron },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlignedBox.Name", "EAkFitToGeometryMode::AlignedBox" },
				{ "BlueprintType", "true" },
				{ "ConvexPolyhedron.Name", "EAkFitToGeometryMode::ConvexPolyhedron" },
				{ "ModuleRelativePath", "Public/EAkFitToGeometryMode.h" },
				{ "OrientedBox.Name", "EAkFitToGeometryMode::OrientedBox" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkFitToGeometryMode",
				"EAkFitToGeometryMode",
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
