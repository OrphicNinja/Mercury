// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAISquadOrderType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAISquadOrderType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAISquadOrderType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAISquadOrderType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAISquadOrderType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAISquadOrderType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAISquadOrderType>()
	{
		return ESBZAISquadOrderType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAISquadOrderType(ESBZAISquadOrderType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAISquadOrderType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAISquadOrderType_Hash() { return 3721286299U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAISquadOrderType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAISquadOrderType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAISquadOrderType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAISquadOrderType::None", (int64)ESBZAISquadOrderType::None },
				{ "ESBZAISquadOrderType::Attack", (int64)ESBZAISquadOrderType::Attack },
				{ "ESBZAISquadOrderType::Defend", (int64)ESBZAISquadOrderType::Defend },
				{ "ESBZAISquadOrderType::Protect", (int64)ESBZAISquadOrderType::Protect },
				{ "ESBZAISquadOrderType::Sabotage", (int64)ESBZAISquadOrderType::Sabotage },
				{ "ESBZAISquadOrderType::Retreat", (int64)ESBZAISquadOrderType::Retreat },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.Name", "ESBZAISquadOrderType::Attack" },
				{ "BlueprintType", "true" },
				{ "Defend.Name", "ESBZAISquadOrderType::Defend" },
				{ "ModuleRelativePath", "Public/ESBZAISquadOrderType.h" },
				{ "None.Name", "ESBZAISquadOrderType::None" },
				{ "Protect.Name", "ESBZAISquadOrderType::Protect" },
				{ "Retreat.Name", "ESBZAISquadOrderType::Retreat" },
				{ "Sabotage.Name", "ESBZAISquadOrderType::Sabotage" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAISquadOrderType",
				"ESBZAISquadOrderType",
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
