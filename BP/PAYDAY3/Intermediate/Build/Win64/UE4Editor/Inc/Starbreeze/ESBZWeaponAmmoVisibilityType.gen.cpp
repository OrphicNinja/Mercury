// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZWeaponAmmoVisibilityType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZWeaponAmmoVisibilityType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWeaponAmmoVisibilityType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZWeaponAmmoVisibilityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZWeaponAmmoVisibilityType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZWeaponAmmoVisibilityType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZWeaponAmmoVisibilityType>()
	{
		return ESBZWeaponAmmoVisibilityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZWeaponAmmoVisibilityType(ESBZWeaponAmmoVisibilityType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZWeaponAmmoVisibilityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZWeaponAmmoVisibilityType_Hash() { return 333476244U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZWeaponAmmoVisibilityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZWeaponAmmoVisibilityType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZWeaponAmmoVisibilityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZWeaponAmmoVisibilityType::Never", (int64)ESBZWeaponAmmoVisibilityType::Never },
				{ "ESBZWeaponAmmoVisibilityType::Reload", (int64)ESBZWeaponAmmoVisibilityType::Reload },
				{ "ESBZWeaponAmmoVisibilityType::Always", (int64)ESBZWeaponAmmoVisibilityType::Always },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.Name", "ESBZWeaponAmmoVisibilityType::Always" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZWeaponAmmoVisibilityType.h" },
				{ "Never.Name", "ESBZWeaponAmmoVisibilityType::Never" },
				{ "Reload.Name", "ESBZWeaponAmmoVisibilityType::Reload" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZWeaponAmmoVisibilityType",
				"ESBZWeaponAmmoVisibilityType",
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
