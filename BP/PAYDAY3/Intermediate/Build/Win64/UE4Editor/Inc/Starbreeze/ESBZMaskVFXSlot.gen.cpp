// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZMaskVFXSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZMaskVFXSlot() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMaskVFXSlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZMaskVFXSlot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZMaskVFXSlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZMaskVFXSlot"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZMaskVFXSlot>()
	{
		return ESBZMaskVFXSlot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZMaskVFXSlot(ESBZMaskVFXSlot_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZMaskVFXSlot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZMaskVFXSlot_Hash() { return 1806080635U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZMaskVFXSlot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZMaskVFXSlot"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZMaskVFXSlot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZMaskVFXSlot::Mouth", (int64)ESBZMaskVFXSlot::Mouth },
				{ "ESBZMaskVFXSlot::Nose", (int64)ESBZMaskVFXSlot::Nose },
				{ "ESBZMaskVFXSlot::Eyes", (int64)ESBZMaskVFXSlot::Eyes },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Eyes.Name", "ESBZMaskVFXSlot::Eyes" },
				{ "ModuleRelativePath", "Public/ESBZMaskVFXSlot.h" },
				{ "Mouth.Name", "ESBZMaskVFXSlot::Mouth" },
				{ "Nose.Name", "ESBZMaskVFXSlot::Nose" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZMaskVFXSlot",
				"ESBZMaskVFXSlot",
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
