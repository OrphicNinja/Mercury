// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZMuzzleSuppressor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZMuzzleSuppressor() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMuzzleSuppressor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZMuzzleSuppressor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZMuzzleSuppressor, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZMuzzleSuppressor"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZMuzzleSuppressor>()
	{
		return ESBZMuzzleSuppressor_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZMuzzleSuppressor(ESBZMuzzleSuppressor_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZMuzzleSuppressor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZMuzzleSuppressor_Hash() { return 3014018685U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZMuzzleSuppressor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZMuzzleSuppressor"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZMuzzleSuppressor_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZMuzzleSuppressor::None", (int64)ESBZMuzzleSuppressor::None },
				{ "ESBZMuzzleSuppressor::Small", (int64)ESBZMuzzleSuppressor::Small },
				{ "ESBZMuzzleSuppressor::Medium", (int64)ESBZMuzzleSuppressor::Medium },
				{ "ESBZMuzzleSuppressor::Large", (int64)ESBZMuzzleSuppressor::Large },
				{ "ESBZMuzzleSuppressor::MAX", (int64)ESBZMuzzleSuppressor::MAX },
				{ "ESBZMuzzleSuppressor::Last", (int64)ESBZMuzzleSuppressor::Last },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Large.Name", "ESBZMuzzleSuppressor::Large" },
				{ "Last.Name", "ESBZMuzzleSuppressor::Last" },
				{ "MAX.Name", "ESBZMuzzleSuppressor::MAX" },
				{ "Medium.Name", "ESBZMuzzleSuppressor::Medium" },
				{ "ModuleRelativePath", "Public/ESBZMuzzleSuppressor.h" },
				{ "None.Name", "ESBZMuzzleSuppressor::None" },
				{ "Small.Name", "ESBZMuzzleSuppressor::Small" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZMuzzleSuppressor",
				"ESBZMuzzleSuppressor",
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
