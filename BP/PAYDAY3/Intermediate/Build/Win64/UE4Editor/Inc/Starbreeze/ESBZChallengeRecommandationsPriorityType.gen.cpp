// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZChallengeRecommandationsPriorityType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZChallengeRecommandationsPriorityType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZChallengeRecommandationsPriorityType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZChallengeRecommandationsPriorityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZChallengeRecommandationsPriorityType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZChallengeRecommandationsPriorityType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZChallengeRecommandationsPriorityType>()
	{
		return ESBZChallengeRecommandationsPriorityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZChallengeRecommandationsPriorityType(ESBZChallengeRecommandationsPriorityType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZChallengeRecommandationsPriorityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZChallengeRecommandationsPriorityType_Hash() { return 2854065600U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZChallengeRecommandationsPriorityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZChallengeRecommandationsPriorityType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZChallengeRecommandationsPriorityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZChallengeRecommandationsPriorityType::CloseToCompletion", (int64)ESBZChallengeRecommandationsPriorityType::CloseToCompletion },
				{ "ESBZChallengeRecommandationsPriorityType::AnyProgress", (int64)ESBZChallengeRecommandationsPriorityType::AnyProgress },
				{ "ESBZChallengeRecommandationsPriorityType::LowProgress", (int64)ESBZChallengeRecommandationsPriorityType::LowProgress },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnyProgress.Name", "ESBZChallengeRecommandationsPriorityType::AnyProgress" },
				{ "BlueprintType", "true" },
				{ "CloseToCompletion.Name", "ESBZChallengeRecommandationsPriorityType::CloseToCompletion" },
				{ "LowProgress.Name", "ESBZChallengeRecommandationsPriorityType::LowProgress" },
				{ "ModuleRelativePath", "Public/ESBZChallengeRecommandationsPriorityType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZChallengeRecommandationsPriorityType",
				"ESBZChallengeRecommandationsPriorityType",
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
