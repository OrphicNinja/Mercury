// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZItemLoadoutSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZItemLoadoutSlot() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZItemLoadoutSlot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZItemLoadoutSlot"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZItemLoadoutSlot>()
	{
		return ESBZItemLoadoutSlot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZItemLoadoutSlot(ESBZItemLoadoutSlot_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZItemLoadoutSlot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot_Hash() { return 3374251746U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZItemLoadoutSlot"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZItemLoadoutSlot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZItemLoadoutSlot::Throwable", (int64)ESBZItemLoadoutSlot::Throwable },
				{ "ESBZItemLoadoutSlot::Placeable", (int64)ESBZItemLoadoutSlot::Placeable },
				{ "ESBZItemLoadoutSlot::Tool", (int64)ESBZItemLoadoutSlot::Tool },
				{ "ESBZItemLoadoutSlot::Armour", (int64)ESBZItemLoadoutSlot::Armour },
				{ "ESBZItemLoadoutSlot::OverkillWeapon", (int64)ESBZItemLoadoutSlot::OverkillWeapon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Armour.Name", "ESBZItemLoadoutSlot::Armour" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZItemLoadoutSlot.h" },
				{ "OverkillWeapon.Name", "ESBZItemLoadoutSlot::OverkillWeapon" },
				{ "Placeable.Name", "ESBZItemLoadoutSlot::Placeable" },
				{ "Throwable.Name", "ESBZItemLoadoutSlot::Throwable" },
				{ "Tool.Name", "ESBZItemLoadoutSlot::Tool" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZItemLoadoutSlot",
				"ESBZItemLoadoutSlot",
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
