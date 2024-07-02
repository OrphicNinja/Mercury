// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZLoadoutPlatforms.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZLoadoutPlatforms() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZLoadoutPlatforms();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZLoadoutPlatforms_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZLoadoutPlatforms, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZLoadoutPlatforms"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZLoadoutPlatforms>()
	{
		return ESBZLoadoutPlatforms_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZLoadoutPlatforms(ESBZLoadoutPlatforms_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZLoadoutPlatforms"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZLoadoutPlatforms_Hash() { return 2502235549U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZLoadoutPlatforms()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZLoadoutPlatforms"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZLoadoutPlatforms_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZLoadoutPlatforms::Steam", (int64)ESBZLoadoutPlatforms::Steam },
				{ "ESBZLoadoutPlatforms::PlayStation", (int64)ESBZLoadoutPlatforms::PlayStation },
				{ "ESBZLoadoutPlatforms::XBox", (int64)ESBZLoadoutPlatforms::XBox },
				{ "ESBZLoadoutPlatforms::Epic", (int64)ESBZLoadoutPlatforms::Epic },
				{ "ESBZLoadoutPlatforms::MAX", (int64)ESBZLoadoutPlatforms::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Epic.Name", "ESBZLoadoutPlatforms::Epic" },
				{ "MAX.Name", "ESBZLoadoutPlatforms::MAX" },
				{ "ModuleRelativePath", "Public/ESBZLoadoutPlatforms.h" },
				{ "PlayStation.Name", "ESBZLoadoutPlatforms::PlayStation" },
				{ "Steam.Name", "ESBZLoadoutPlatforms::Steam" },
				{ "XBox.Name", "ESBZLoadoutPlatforms::XBox" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZLoadoutPlatforms",
				"ESBZLoadoutPlatforms",
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
