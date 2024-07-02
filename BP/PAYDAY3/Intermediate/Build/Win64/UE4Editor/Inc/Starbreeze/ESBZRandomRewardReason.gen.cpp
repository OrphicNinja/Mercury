// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZRandomRewardReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZRandomRewardReason() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRandomRewardReason();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZRandomRewardReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZRandomRewardReason, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZRandomRewardReason"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZRandomRewardReason>()
	{
		return ESBZRandomRewardReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZRandomRewardReason(ESBZRandomRewardReason_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZRandomRewardReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZRandomRewardReason_Hash() { return 4131641502U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZRandomRewardReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZRandomRewardReason"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZRandomRewardReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZRandomRewardReason::HeistSuccessfullyCompleted", (int64)ESBZRandomRewardReason::HeistSuccessfullyCompleted },
				{ "ESBZRandomRewardReason::RenownLeveledUp", (int64)ESBZRandomRewardReason::RenownLeveledUp },
				{ "ESBZRandomRewardReason::InfamyLeveledUp", (int64)ESBZRandomRewardReason::InfamyLeveledUp },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HeistSuccessfullyCompleted.Name", "ESBZRandomRewardReason::HeistSuccessfullyCompleted" },
				{ "InfamyLeveledUp.Name", "ESBZRandomRewardReason::InfamyLeveledUp" },
				{ "ModuleRelativePath", "Public/ESBZRandomRewardReason.h" },
				{ "RenownLeveledUp.Name", "ESBZRandomRewardReason::RenownLeveledUp" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZRandomRewardReason",
				"ESBZRandomRewardReason",
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
