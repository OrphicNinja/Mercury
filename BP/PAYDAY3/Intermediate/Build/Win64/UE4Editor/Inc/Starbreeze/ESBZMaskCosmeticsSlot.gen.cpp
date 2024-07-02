// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZMaskCosmeticsSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZMaskCosmeticsSlot() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMaskCosmeticsSlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZMaskCosmeticsSlot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZMaskCosmeticsSlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZMaskCosmeticsSlot"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZMaskCosmeticsSlot>()
	{
		return ESBZMaskCosmeticsSlot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZMaskCosmeticsSlot(ESBZMaskCosmeticsSlot_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZMaskCosmeticsSlot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZMaskCosmeticsSlot_Hash() { return 1188716159U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZMaskCosmeticsSlot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZMaskCosmeticsSlot"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZMaskCosmeticsSlot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZMaskCosmeticsSlot::MouldSlot", (int64)ESBZMaskCosmeticsSlot::MouldSlot },
				{ "ESBZMaskCosmeticsSlot::MaterialSlot", (int64)ESBZMaskCosmeticsSlot::MaterialSlot },
				{ "ESBZMaskCosmeticsSlot::PatternSlot", (int64)ESBZMaskCosmeticsSlot::PatternSlot },
				{ "ESBZMaskCosmeticsSlot::VFXSlot", (int64)ESBZMaskCosmeticsSlot::VFXSlot },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MaterialSlot.Name", "ESBZMaskCosmeticsSlot::MaterialSlot" },
				{ "ModuleRelativePath", "Public/ESBZMaskCosmeticsSlot.h" },
				{ "MouldSlot.Name", "ESBZMaskCosmeticsSlot::MouldSlot" },
				{ "PatternSlot.Name", "ESBZMaskCosmeticsSlot::PatternSlot" },
				{ "VFXSlot.Name", "ESBZMaskCosmeticsSlot::VFXSlot" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZMaskCosmeticsSlot",
				"ESBZMaskCosmeticsSlot",
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
