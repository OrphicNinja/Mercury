// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3HUDEscapeVolumeWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3HUDEscapeVolumeWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDEscapeVolumeWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDEscapeVolumeWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent();
// End Cross Module References
	DEFINE_FUNCTION(UPD3HUDEscapeVolumeWidget::execOnPlayersInEscapeChangedEvent)
	{
		P_GET_STRUCT_REF(FSBZPlayerInEscapeChangedEvent,Z_Param_Out_PlayerInEscapeChangedEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayersInEscapeChangedEvent(Z_Param_Out_PlayerInEscapeChangedEvent);
		P_NATIVE_END;
	}
	static FName NAME_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume = FName(TEXT("OnAllPlayersLeftVolume"));
	void UPD3HUDEscapeVolumeWidget::OnAllPlayersLeftVolume(int32 PlayersInVolumeOnLeft, int32 TotalPlayers)
	{
		PD3HUDEscapeVolumeWidget_eventOnAllPlayersLeftVolume_Parms Parms;
		Parms.PlayersInVolumeOnLeft=PlayersInVolumeOnLeft;
		Parms.TotalPlayers=TotalPlayers;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume),&Parms);
	}
	static FName NAME_UPD3HUDEscapeVolumeWidget_OnEscapeTimerChanged = FName(TEXT("OnEscapeTimerChanged"));
	void UPD3HUDEscapeVolumeWidget::OnEscapeTimerChanged(int32 NewTime)
	{
		PD3HUDEscapeVolumeWidget_eventOnEscapeTimerChanged_Parms Parms;
		Parms.NewTime=NewTime;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDEscapeVolumeWidget_OnEscapeTimerChanged),&Parms);
	}
	static FName NAME_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged = FName(TEXT("OnPlayerCountChanged"));
	void UPD3HUDEscapeVolumeWidget::OnPlayerCountChanged(int32 PlayersInVolumeOnChanged, int32 TotalPlayers)
	{
		PD3HUDEscapeVolumeWidget_eventOnPlayerCountChanged_Parms Parms;
		Parms.PlayersInVolumeOnChanged=PlayersInVolumeOnChanged;
		Parms.TotalPlayers=TotalPlayers;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged),&Parms);
	}
	static FName NAME_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume = FName(TEXT("OnPlayersEnteredVolume"));
	void UPD3HUDEscapeVolumeWidget::OnPlayersEnteredVolume(int32 PlayersInVolumeOnEntered, int32 TotalPlayers)
	{
		PD3HUDEscapeVolumeWidget_eventOnPlayersEnteredVolume_Parms Parms;
		Parms.PlayersInVolumeOnEntered=PlayersInVolumeOnEntered;
		Parms.TotalPlayers=TotalPlayers;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume),&Parms);
	}
	void UPD3HUDEscapeVolumeWidget::StaticRegisterNativesUPD3HUDEscapeVolumeWidget()
	{
		UClass* Class = UPD3HUDEscapeVolumeWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayersInEscapeChangedEvent", &UPD3HUDEscapeVolumeWidget::execOnPlayersInEscapeChangedEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayersInVolumeOnLeft;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalPlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume_Statics::NewProp_PlayersInVolumeOnLeft = { "PlayersInVolumeOnLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDEscapeVolumeWidget_eventOnAllPlayersLeftVolume_Parms, PlayersInVolumeOnLeft), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume_Statics::NewProp_TotalPlayers = { "TotalPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDEscapeVolumeWidget_eventOnAllPlayersLeftVolume_Parms, TotalPlayers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume_Statics::NewProp_PlayersInVolumeOnLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume_Statics::NewProp_TotalPlayers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDEscapeVolumeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDEscapeVolumeWidget, nullptr, "OnAllPlayersLeftVolume", nullptr, nullptr, sizeof(PD3HUDEscapeVolumeWidget_eventOnAllPlayersLeftVolume_Parms), Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnEscapeTimerChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnEscapeTimerChanged_Statics::NewProp_NewTime = { "NewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDEscapeVolumeWidget_eventOnEscapeTimerChanged_Parms, NewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnEscapeTimerChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnEscapeTimerChanged_Statics::NewProp_NewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnEscapeTimerChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDEscapeVolumeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnEscapeTimerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDEscapeVolumeWidget, nullptr, "OnEscapeTimerChanged", nullptr, nullptr, sizeof(PD3HUDEscapeVolumeWidget_eventOnEscapeTimerChanged_Parms), Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnEscapeTimerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnEscapeTimerChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnEscapeTimerChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnEscapeTimerChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnEscapeTimerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnEscapeTimerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayersInVolumeOnChanged;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalPlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged_Statics::NewProp_PlayersInVolumeOnChanged = { "PlayersInVolumeOnChanged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDEscapeVolumeWidget_eventOnPlayerCountChanged_Parms, PlayersInVolumeOnChanged), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged_Statics::NewProp_TotalPlayers = { "TotalPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDEscapeVolumeWidget_eventOnPlayerCountChanged_Parms, TotalPlayers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged_Statics::NewProp_PlayersInVolumeOnChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged_Statics::NewProp_TotalPlayers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDEscapeVolumeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDEscapeVolumeWidget, nullptr, "OnPlayerCountChanged", nullptr, nullptr, sizeof(PD3HUDEscapeVolumeWidget_eventOnPlayerCountChanged_Parms), Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayersInVolumeOnEntered;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalPlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume_Statics::NewProp_PlayersInVolumeOnEntered = { "PlayersInVolumeOnEntered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDEscapeVolumeWidget_eventOnPlayersEnteredVolume_Parms, PlayersInVolumeOnEntered), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume_Statics::NewProp_TotalPlayers = { "TotalPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDEscapeVolumeWidget_eventOnPlayersEnteredVolume_Parms, TotalPlayers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume_Statics::NewProp_PlayersInVolumeOnEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume_Statics::NewProp_TotalPlayers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDEscapeVolumeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDEscapeVolumeWidget, nullptr, "OnPlayersEnteredVolume", nullptr, nullptr, sizeof(PD3HUDEscapeVolumeWidget_eventOnPlayersEnteredVolume_Parms), Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent_Statics
	{
		struct PD3HUDEscapeVolumeWidget_eventOnPlayersInEscapeChangedEvent_Parms
		{
			FSBZPlayerInEscapeChangedEvent PlayerInEscapeChangedEvent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInEscapeChangedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerInEscapeChangedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent_Statics::NewProp_PlayerInEscapeChangedEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent_Statics::NewProp_PlayerInEscapeChangedEvent = { "PlayerInEscapeChangedEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDEscapeVolumeWidget_eventOnPlayersInEscapeChangedEvent_Parms, PlayerInEscapeChangedEvent), Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent_Statics::NewProp_PlayerInEscapeChangedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent_Statics::NewProp_PlayerInEscapeChangedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent_Statics::NewProp_PlayerInEscapeChangedEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDEscapeVolumeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDEscapeVolumeWidget, nullptr, "OnPlayersInEscapeChangedEvent", nullptr, nullptr, sizeof(PD3HUDEscapeVolumeWidget_eventOnPlayersInEscapeChangedEvent_Parms), Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3HUDEscapeVolumeWidget_NoRegister()
	{
		return UPD3HUDEscapeVolumeWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3HUDEscapeVolumeWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3HUDEscapeVolumeWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3HUDEscapeVolumeWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnAllPlayersLeftVolume, "OnAllPlayersLeftVolume" }, // 1417381366
		{ &Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnEscapeTimerChanged, "OnEscapeTimerChanged" }, // 3776298175
		{ &Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayerCountChanged, "OnPlayerCountChanged" }, // 2625452515
		{ &Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersEnteredVolume, "OnPlayersEnteredVolume" }, // 3513910583
		{ &Z_Construct_UFunction_UPD3HUDEscapeVolumeWidget_OnPlayersInEscapeChangedEvent, "OnPlayersInEscapeChangedEvent" }, // 2648754347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDEscapeVolumeWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3HUDEscapeVolumeWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDEscapeVolumeWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3HUDEscapeVolumeWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3HUDEscapeVolumeWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3HUDEscapeVolumeWidget_Statics::ClassParams = {
		&UPD3HUDEscapeVolumeWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3HUDEscapeVolumeWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDEscapeVolumeWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3HUDEscapeVolumeWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3HUDEscapeVolumeWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3HUDEscapeVolumeWidget, 232610427);
	template<> STARBREEZE_API UClass* StaticClass<UPD3HUDEscapeVolumeWidget>()
	{
		return UPD3HUDEscapeVolumeWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3HUDEscapeVolumeWidget(Z_Construct_UClass_UPD3HUDEscapeVolumeWidget, &UPD3HUDEscapeVolumeWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3HUDEscapeVolumeWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3HUDEscapeVolumeWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
