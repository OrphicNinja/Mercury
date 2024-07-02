// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZSubobjectiveComplete.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZSubobjectiveComplete() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSubobjectiveComplete();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZSubobjectiveComplete_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZSubobjectiveComplete, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZSubobjectiveComplete"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZSubobjectiveComplete>()
	{
		return ESBZSubobjectiveComplete_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZSubobjectiveComplete(ESBZSubobjectiveComplete_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZSubobjectiveComplete"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZSubobjectiveComplete_Hash() { return 1443754699U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZSubobjectiveComplete()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZSubobjectiveComplete"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZSubobjectiveComplete_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZSubobjectiveComplete::None", (int64)ESBZSubobjectiveComplete::None },
				{ "ESBZSubobjectiveComplete::CompleteOnAll", (int64)ESBZSubobjectiveComplete::CompleteOnAll },
				{ "ESBZSubobjectiveComplete::CompleteOnAllOrFail", (int64)ESBZSubobjectiveComplete::CompleteOnAllOrFail },
				{ "ESBZSubobjectiveComplete::CompleteOnAllEnded", (int64)ESBZSubobjectiveComplete::CompleteOnAllEnded },
				{ "ESBZSubobjectiveComplete::ProgressOnComplete", (int64)ESBZSubobjectiveComplete::ProgressOnComplete },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CompleteOnAll.Name", "ESBZSubobjectiveComplete::CompleteOnAll" },
				{ "CompleteOnAllEnded.Name", "ESBZSubobjectiveComplete::CompleteOnAllEnded" },
				{ "CompleteOnAllOrFail.Name", "ESBZSubobjectiveComplete::CompleteOnAllOrFail" },
				{ "ModuleRelativePath", "Public/ESBZSubobjectiveComplete.h" },
				{ "None.Name", "ESBZSubobjectiveComplete::None" },
				{ "ProgressOnComplete.Name", "ESBZSubobjectiveComplete::ProgressOnComplete" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZSubobjectiveComplete",
				"ESBZSubobjectiveComplete",
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
