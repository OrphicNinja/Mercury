// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAIVisibilityNodeComputationFrequency.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAIVisibilityNodeComputationFrequency() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityNodeComputationFrequency();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAIVisibilityNodeComputationFrequency_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityNodeComputationFrequency, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAIVisibilityNodeComputationFrequency"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAIVisibilityNodeComputationFrequency>()
	{
		return ESBZAIVisibilityNodeComputationFrequency_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAIVisibilityNodeComputationFrequency(ESBZAIVisibilityNodeComputationFrequency_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAIVisibilityNodeComputationFrequency"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityNodeComputationFrequency_Hash() { return 2174924260U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityNodeComputationFrequency()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAIVisibilityNodeComputationFrequency"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityNodeComputationFrequency_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAIVisibilityNodeComputationFrequency::Once", (int64)ESBZAIVisibilityNodeComputationFrequency::Once },
				{ "ESBZAIVisibilityNodeComputationFrequency::EveryFrame", (int64)ESBZAIVisibilityNodeComputationFrequency::EveryFrame },
				{ "ESBZAIVisibilityNodeComputationFrequency::Automatic", (int64)ESBZAIVisibilityNodeComputationFrequency::Automatic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Automatic.Name", "ESBZAIVisibilityNodeComputationFrequency::Automatic" },
				{ "BlueprintType", "true" },
				{ "EveryFrame.Name", "ESBZAIVisibilityNodeComputationFrequency::EveryFrame" },
				{ "ModuleRelativePath", "Public/ESBZAIVisibilityNodeComputationFrequency.h" },
				{ "Once.Name", "ESBZAIVisibilityNodeComputationFrequency::Once" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAIVisibilityNodeComputationFrequency",
				"ESBZAIVisibilityNodeComputationFrequency",
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
