// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZProgressTextDisplayOption.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZProgressTextDisplayOption() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZProgressTextDisplayOption();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZProgressTextDisplayOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZProgressTextDisplayOption, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZProgressTextDisplayOption"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZProgressTextDisplayOption>()
	{
		return ESBZProgressTextDisplayOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZProgressTextDisplayOption(ESBZProgressTextDisplayOption_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZProgressTextDisplayOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZProgressTextDisplayOption_Hash() { return 1045011768U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZProgressTextDisplayOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZProgressTextDisplayOption"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZProgressTextDisplayOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZProgressTextDisplayOption::None", (int64)ESBZProgressTextDisplayOption::None },
				{ "ESBZProgressTextDisplayOption::ShowFraction", (int64)ESBZProgressTextDisplayOption::ShowFraction },
				{ "ESBZProgressTextDisplayOption::ShowPercentage", (int64)ESBZProgressTextDisplayOption::ShowPercentage },
				{ "ESBZProgressTextDisplayOption::ShowSpeed", (int64)ESBZProgressTextDisplayOption::ShowSpeed },
				{ "ESBZProgressTextDisplayOption::ShowActualTime", (int64)ESBZProgressTextDisplayOption::ShowActualTime },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZProgressTextDisplayOption.h" },
				{ "None.Name", "ESBZProgressTextDisplayOption::None" },
				{ "ShowActualTime.Name", "ESBZProgressTextDisplayOption::ShowActualTime" },
				{ "ShowFraction.Name", "ESBZProgressTextDisplayOption::ShowFraction" },
				{ "ShowPercentage.Name", "ESBZProgressTextDisplayOption::ShowPercentage" },
				{ "ShowSpeed.Name", "ESBZProgressTextDisplayOption::ShowSpeed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZProgressTextDisplayOption",
				"ESBZProgressTextDisplayOption",
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
