// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZEquippableLoadoutSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZEquippableLoadoutSlot() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZEquippableLoadoutSlot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZEquippableLoadoutSlot"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZEquippableLoadoutSlot>()
	{
		return ESBZEquippableLoadoutSlot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZEquippableLoadoutSlot(ESBZEquippableLoadoutSlot_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZEquippableLoadoutSlot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot_Hash() { return 1481826226U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZEquippableLoadoutSlot"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZEquippableLoadoutSlot::PrimaryWeapon", (int64)ESBZEquippableLoadoutSlot::PrimaryWeapon },
				{ "ESBZEquippableLoadoutSlot::SecondaryWeapon", (int64)ESBZEquippableLoadoutSlot::SecondaryWeapon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZEquippableLoadoutSlot.h" },
				{ "PrimaryWeapon.Name", "ESBZEquippableLoadoutSlot::PrimaryWeapon" },
				{ "SecondaryWeapon.Name", "ESBZEquippableLoadoutSlot::SecondaryWeapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZEquippableLoadoutSlot",
				"ESBZEquippableLoadoutSlot",
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
