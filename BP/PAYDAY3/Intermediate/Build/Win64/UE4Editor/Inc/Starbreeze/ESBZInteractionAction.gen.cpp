// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZInteractionAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZInteractionAction() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZInteractionAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZInteractionAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZInteractionAction, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZInteractionAction"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZInteractionAction>()
	{
		return ESBZInteractionAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZInteractionAction(ESBZInteractionAction_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZInteractionAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZInteractionAction_Hash() { return 2156946144U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZInteractionAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZInteractionAction"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZInteractionAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZInteractionAction::None", (int64)ESBZInteractionAction::None },
				{ "ESBZInteractionAction::GetDown", (int64)ESBZInteractionAction::GetDown },
				{ "ESBZInteractionAction::HogTie", (int64)ESBZInteractionAction::HogTie },
				{ "ESBZInteractionAction::Follow", (int64)ESBZInteractionAction::Follow },
				{ "ESBZInteractionAction::TradeHostage", (int64)ESBZInteractionAction::TradeHostage },
				{ "ESBZInteractionAction::MAX", (int64)ESBZInteractionAction::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Follow.Name", "ESBZInteractionAction::Follow" },
				{ "GetDown.Name", "ESBZInteractionAction::GetDown" },
				{ "HogTie.Name", "ESBZInteractionAction::HogTie" },
				{ "MAX.Name", "ESBZInteractionAction::MAX" },
				{ "ModuleRelativePath", "Public/ESBZInteractionAction.h" },
				{ "None.Name", "ESBZInteractionAction::None" },
				{ "TradeHostage.Name", "ESBZInteractionAction::TradeHostage" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZInteractionAction",
				"ESBZInteractionAction",
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
