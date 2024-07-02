// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZGateSoundReduction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZGateSoundReduction() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGateSoundReduction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZGateSoundReduction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZGateSoundReduction, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZGateSoundReduction"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZGateSoundReduction>()
	{
		return ESBZGateSoundReduction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZGateSoundReduction(ESBZGateSoundReduction_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZGateSoundReduction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZGateSoundReduction_Hash() { return 3226326893U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZGateSoundReduction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZGateSoundReduction"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZGateSoundReduction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZGateSoundReduction::None", (int64)ESBZGateSoundReduction::None },
				{ "ESBZGateSoundReduction::Low", (int64)ESBZGateSoundReduction::Low },
				{ "ESBZGateSoundReduction::Medium", (int64)ESBZGateSoundReduction::Medium },
				{ "ESBZGateSoundReduction::High", (int64)ESBZGateSoundReduction::High },
				{ "ESBZGateSoundReduction::Total", (int64)ESBZGateSoundReduction::Total },
				{ "ESBZGateSoundReduction::MAX", (int64)ESBZGateSoundReduction::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "High.Name", "ESBZGateSoundReduction::High" },
				{ "Low.Name", "ESBZGateSoundReduction::Low" },
				{ "MAX.Name", "ESBZGateSoundReduction::MAX" },
				{ "Medium.Name", "ESBZGateSoundReduction::Medium" },
				{ "ModuleRelativePath", "Public/ESBZGateSoundReduction.h" },
				{ "None.Name", "ESBZGateSoundReduction::None" },
				{ "Total.Name", "ESBZGateSoundReduction::Total" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZGateSoundReduction",
				"ESBZGateSoundReduction",
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
