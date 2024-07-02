// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAIVisibilityStances.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAIVisibilityStances() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityStances();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAIVisibilityStances_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityStances, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAIVisibilityStances"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAIVisibilityStances>()
	{
		return ESBZAIVisibilityStances_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAIVisibilityStances(ESBZAIVisibilityStances_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAIVisibilityStances"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityStances_Hash() { return 1788845465U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityStances()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAIVisibilityStances"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityStances_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAIVisibilityStances::None", (int64)ESBZAIVisibilityStances::None },
				{ "ESBZAIVisibilityStances::Crouch", (int64)ESBZAIVisibilityStances::Crouch },
				{ "ESBZAIVisibilityStances::Stand", (int64)ESBZAIVisibilityStances::Stand },
				{ "ESBZAIVisibilityStances::Invalid", (int64)ESBZAIVisibilityStances::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Crouch.Name", "ESBZAIVisibilityStances::Crouch" },
				{ "Invalid.Name", "ESBZAIVisibilityStances::Invalid" },
				{ "ModuleRelativePath", "Public/ESBZAIVisibilityStances.h" },
				{ "None.Name", "ESBZAIVisibilityStances::None" },
				{ "Stand.Name", "ESBZAIVisibilityStances::Stand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAIVisibilityStances",
				"ESBZAIVisibilityStances",
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
