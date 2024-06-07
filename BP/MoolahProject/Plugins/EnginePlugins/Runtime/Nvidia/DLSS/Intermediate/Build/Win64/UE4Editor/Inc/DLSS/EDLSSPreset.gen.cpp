// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DLSS/Public/EDLSSPreset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDLSSPreset() {}
// Cross Module References
	DLSS_API UEnum* Z_Construct_UEnum_DLSS_EDLSSPreset();
	UPackage* Z_Construct_UPackage__Script_DLSS();
// End Cross Module References
	static UEnum* EDLSSPreset_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DLSS_EDLSSPreset, Z_Construct_UPackage__Script_DLSS(), TEXT("EDLSSPreset"));
		}
		return Singleton;
	}
	template<> DLSS_API UEnum* StaticEnum<EDLSSPreset>()
	{
		return EDLSSPreset_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDLSSPreset(EDLSSPreset_StaticEnum, TEXT("/Script/DLSS"), TEXT("EDLSSPreset"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DLSS_EDLSSPreset_Hash() { return 2333212320U; }
	UEnum* Z_Construct_UEnum_DLSS_EDLSSPreset()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DLSS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDLSSPreset"), 0, Get_Z_Construct_UEnum_DLSS_EDLSSPreset_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDLSSPreset::Default", (int64)EDLSSPreset::Default },
				{ "EDLSSPreset::A", (int64)EDLSSPreset::A },
				{ "EDLSSPreset::B", (int64)EDLSSPreset::B },
				{ "EDLSSPreset::C", (int64)EDLSSPreset::C },
				{ "EDLSSPreset::D", (int64)EDLSSPreset::D },
				{ "EDLSSPreset::E", (int64)EDLSSPreset::E },
				{ "EDLSSPreset::F", (int64)EDLSSPreset::F },
				{ "EDLSSPreset::G", (int64)EDLSSPreset::G },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A.Name", "EDLSSPreset::A" },
				{ "B.Name", "EDLSSPreset::B" },
				{ "BlueprintType", "true" },
				{ "C.Name", "EDLSSPreset::C" },
				{ "D.Name", "EDLSSPreset::D" },
				{ "Default.Name", "EDLSSPreset::Default" },
				{ "E.Name", "EDLSSPreset::E" },
				{ "F.Name", "EDLSSPreset::F" },
				{ "G.Name", "EDLSSPreset::G" },
				{ "ModuleRelativePath", "Public/EDLSSPreset.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DLSS,
				nullptr,
				"EDLSSPreset",
				"EDLSSPreset",
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
