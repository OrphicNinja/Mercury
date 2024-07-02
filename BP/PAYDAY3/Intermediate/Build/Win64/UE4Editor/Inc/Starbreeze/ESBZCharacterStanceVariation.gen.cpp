// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZCharacterStanceVariation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZCharacterStanceVariation() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterStanceVariation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZCharacterStanceVariation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZCharacterStanceVariation, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZCharacterStanceVariation"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZCharacterStanceVariation>()
	{
		return ESBZCharacterStanceVariation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZCharacterStanceVariation(ESBZCharacterStanceVariation_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZCharacterStanceVariation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZCharacterStanceVariation_Hash() { return 2008889240U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterStanceVariation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZCharacterStanceVariation"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZCharacterStanceVariation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZCharacterStanceVariation::Normal", (int64)ESBZCharacterStanceVariation::Normal },
				{ "ESBZCharacterStanceVariation::Slow", (int64)ESBZCharacterStanceVariation::Slow },
				{ "ESBZCharacterStanceVariation::Fast", (int64)ESBZCharacterStanceVariation::Fast },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Fast.Name", "ESBZCharacterStanceVariation::Fast" },
				{ "ModuleRelativePath", "Public/ESBZCharacterStanceVariation.h" },
				{ "Normal.Name", "ESBZCharacterStanceVariation::Normal" },
				{ "Slow.Name", "ESBZCharacterStanceVariation::Slow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZCharacterStanceVariation",
				"ESBZCharacterStanceVariation",
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
