// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/EPD3MiniGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPD3MiniGameState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3MiniGameState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* EPD3MiniGameState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_EPD3MiniGameState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("EPD3MiniGameState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<EPD3MiniGameState>()
	{
		return EPD3MiniGameState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPD3MiniGameState(EPD3MiniGameState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("EPD3MiniGameState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_EPD3MiniGameState_Hash() { return 3103647046U; }
	UEnum* Z_Construct_UEnum_Starbreeze_EPD3MiniGameState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPD3MiniGameState"), 0, Get_Z_Construct_UEnum_Starbreeze_EPD3MiniGameState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPD3MiniGameState::None", (int64)EPD3MiniGameState::None },
				{ "EPD3MiniGameState::Initiated", (int64)EPD3MiniGameState::Initiated },
				{ "EPD3MiniGameState::InProgress", (int64)EPD3MiniGameState::InProgress },
				{ "EPD3MiniGameState::Failed", (int64)EPD3MiniGameState::Failed },
				{ "EPD3MiniGameState::Aborted", (int64)EPD3MiniGameState::Aborted },
				{ "EPD3MiniGameState::Success", (int64)EPD3MiniGameState::Success },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aborted.Name", "EPD3MiniGameState::Aborted" },
				{ "BlueprintType", "true" },
				{ "Failed.Name", "EPD3MiniGameState::Failed" },
				{ "Initiated.Name", "EPD3MiniGameState::Initiated" },
				{ "InProgress.Name", "EPD3MiniGameState::InProgress" },
				{ "ModuleRelativePath", "Public/EPD3MiniGameState.h" },
				{ "None.Name", "EPD3MiniGameState::None" },
				{ "Success.Name", "EPD3MiniGameState::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"EPD3MiniGameState",
				"EPD3MiniGameState",
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
