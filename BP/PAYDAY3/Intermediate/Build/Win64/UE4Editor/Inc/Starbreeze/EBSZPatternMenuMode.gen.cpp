// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/EBSZPatternMenuMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBSZPatternMenuMode() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EBSZPatternMenuMode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* EBSZPatternMenuMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_EBSZPatternMenuMode, Z_Construct_UPackage__Script_Starbreeze(), TEXT("EBSZPatternMenuMode"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<EBSZPatternMenuMode>()
	{
		return EBSZPatternMenuMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBSZPatternMenuMode(EBSZPatternMenuMode_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("EBSZPatternMenuMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_EBSZPatternMenuMode_Hash() { return 620073795U; }
	UEnum* Z_Construct_UEnum_Starbreeze_EBSZPatternMenuMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBSZPatternMenuMode"), 0, Get_Z_Construct_UEnum_Starbreeze_EBSZPatternMenuMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBSZPatternMenuMode::Pattern", (int64)EBSZPatternMenuMode::Pattern },
				{ "EBSZPatternMenuMode::SprayCans", (int64)EBSZPatternMenuMode::SprayCans },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EBSZPatternMenuMode.h" },
				{ "Pattern.Name", "EBSZPatternMenuMode::Pattern" },
				{ "SprayCans.Name", "EBSZPatternMenuMode::SprayCans" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"EBSZPatternMenuMode",
				"EBSZPatternMenuMode",
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
