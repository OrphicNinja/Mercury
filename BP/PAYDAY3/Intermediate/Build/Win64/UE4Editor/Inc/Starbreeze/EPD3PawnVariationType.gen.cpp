// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/EPD3PawnVariationType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPD3PawnVariationType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3PawnVariationType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* EPD3PawnVariationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_EPD3PawnVariationType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("EPD3PawnVariationType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<EPD3PawnVariationType>()
	{
		return EPD3PawnVariationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPD3PawnVariationType(EPD3PawnVariationType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("EPD3PawnVariationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_EPD3PawnVariationType_Hash() { return 3593620879U; }
	UEnum* Z_Construct_UEnum_Starbreeze_EPD3PawnVariationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPD3PawnVariationType"), 0, Get_Z_Construct_UEnum_Starbreeze_EPD3PawnVariationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPD3PawnVariationType::America", (int64)EPD3PawnVariationType::America },
				{ "EPD3PawnVariationType::MAX", (int64)EPD3PawnVariationType::MAX },
				{ "EPD3PawnVariationType::DEFAULT", (int64)EPD3PawnVariationType::DEFAULT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "America.Name", "EPD3PawnVariationType::America" },
				{ "BlueprintType", "true" },
				{ "DEFAULT.Name", "EPD3PawnVariationType::DEFAULT" },
				{ "MAX.Name", "EPD3PawnVariationType::MAX" },
				{ "ModuleRelativePath", "Public/EPD3PawnVariationType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"EPD3PawnVariationType",
				"EPD3PawnVariationType",
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
