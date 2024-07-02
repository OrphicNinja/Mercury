// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZDsStateMachineState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZDsStateMachineState() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDsStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZDsStateMachineState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZDsStateMachineState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZDsStateMachineState"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZDsStateMachineState>()
	{
		return ESBZDsStateMachineState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZDsStateMachineState(ESBZDsStateMachineState_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZDsStateMachineState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZDsStateMachineState_Hash() { return 3732469256U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZDsStateMachineState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZDsStateMachineState"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZDsStateMachineState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SM_DsActionPhase", (int64)SM_DsActionPhase },
				{ "SM_DsResult", (int64)SM_DsResult },
				{ "SM_DsWaitingForPlayers", (int64)SM_DsWaitingForPlayers },
				{ "SM_DsLoading", (int64)SM_DsLoading },
				{ "SM_DsRestartLevel", (int64)SM_DsRestartLevel },
				{ "SM_DsUndefined", (int64)SM_DsUndefined },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZDsStateMachineState.h" },
				{ "SM_DsActionPhase.Name", "SM_DsActionPhase" },
				{ "SM_DsLoading.Name", "SM_DsLoading" },
				{ "SM_DsRestartLevel.Name", "SM_DsRestartLevel" },
				{ "SM_DsResult.Name", "SM_DsResult" },
				{ "SM_DsUndefined.Name", "SM_DsUndefined" },
				{ "SM_DsWaitingForPlayers.Name", "SM_DsWaitingForPlayers" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZDsStateMachineState",
				"ESBZDsStateMachineState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
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
