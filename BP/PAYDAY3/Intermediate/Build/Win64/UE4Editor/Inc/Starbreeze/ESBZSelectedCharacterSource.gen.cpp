// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZSelectedCharacterSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZSelectedCharacterSource() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSelectedCharacterSource();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZSelectedCharacterSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZSelectedCharacterSource, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZSelectedCharacterSource"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZSelectedCharacterSource>()
	{
		return ESBZSelectedCharacterSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZSelectedCharacterSource(ESBZSelectedCharacterSource_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZSelectedCharacterSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZSelectedCharacterSource_Hash() { return 829953056U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZSelectedCharacterSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZSelectedCharacterSource"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZSelectedCharacterSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZSelectedCharacterSource::PreferredCharacters", (int64)ESBZSelectedCharacterSource::PreferredCharacters },
				{ "ESBZSelectedCharacterSource::InventoryCharacters", (int64)ESBZSelectedCharacterSource::InventoryCharacters },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "InventoryCharacters.Name", "ESBZSelectedCharacterSource::InventoryCharacters" },
				{ "ModuleRelativePath", "Public/ESBZSelectedCharacterSource.h" },
				{ "PreferredCharacters.Name", "ESBZSelectedCharacterSource::PreferredCharacters" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZSelectedCharacterSource",
				"ESBZSelectedCharacterSource",
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
