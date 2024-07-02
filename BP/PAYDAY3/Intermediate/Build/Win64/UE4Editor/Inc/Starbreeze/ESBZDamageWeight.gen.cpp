// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZDamageWeight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZDamageWeight() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDamageWeight();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZDamageWeight_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZDamageWeight, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZDamageWeight"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZDamageWeight>()
	{
		return ESBZDamageWeight_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZDamageWeight(ESBZDamageWeight_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZDamageWeight"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZDamageWeight_Hash() { return 3448635753U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZDamageWeight()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZDamageWeight"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZDamageWeight_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZDamageWeight::Flinch", (int64)ESBZDamageWeight::Flinch },
				{ "ESBZDamageWeight::Interrupt", (int64)ESBZDamageWeight::Interrupt },
				{ "ESBZDamageWeight::Stun", (int64)ESBZDamageWeight::Stun },
				{ "ESBZDamageWeight::Incapacitate", (int64)ESBZDamageWeight::Incapacitate },
				{ "ESBZDamageWeight::MAX", (int64)ESBZDamageWeight::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Flinch.Name", "ESBZDamageWeight::Flinch" },
				{ "Incapacitate.Name", "ESBZDamageWeight::Incapacitate" },
				{ "Interrupt.Name", "ESBZDamageWeight::Interrupt" },
				{ "MAX.Name", "ESBZDamageWeight::MAX" },
				{ "ModuleRelativePath", "Public/ESBZDamageWeight.h" },
				{ "Stun.Name", "ESBZDamageWeight::Stun" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZDamageWeight",
				"ESBZDamageWeight",
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
