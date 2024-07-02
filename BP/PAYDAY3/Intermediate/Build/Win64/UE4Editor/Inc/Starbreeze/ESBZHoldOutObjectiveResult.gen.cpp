// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZHoldOutObjectiveResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZHoldOutObjectiveResult() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHoldOutObjectiveResult();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZHoldOutObjectiveResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZHoldOutObjectiveResult, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZHoldOutObjectiveResult"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZHoldOutObjectiveResult>()
	{
		return ESBZHoldOutObjectiveResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZHoldOutObjectiveResult(ESBZHoldOutObjectiveResult_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZHoldOutObjectiveResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZHoldOutObjectiveResult_Hash() { return 471570123U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZHoldOutObjectiveResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZHoldOutObjectiveResult"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZHoldOutObjectiveResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZHoldOutObjectiveResult::Succeeded", (int64)ESBZHoldOutObjectiveResult::Succeeded },
				{ "ESBZHoldOutObjectiveResult::Failed", (int64)ESBZHoldOutObjectiveResult::Failed },
				{ "ESBZHoldOutObjectiveResult::Aborted", (int64)ESBZHoldOutObjectiveResult::Aborted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aborted.Name", "ESBZHoldOutObjectiveResult::Aborted" },
				{ "BlueprintType", "true" },
				{ "Failed.Name", "ESBZHoldOutObjectiveResult::Failed" },
				{ "ModuleRelativePath", "Public/ESBZHoldOutObjectiveResult.h" },
				{ "Succeeded.Name", "ESBZHoldOutObjectiveResult::Succeeded" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZHoldOutObjectiveResult",
				"ESBZHoldOutObjectiveResult",
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
