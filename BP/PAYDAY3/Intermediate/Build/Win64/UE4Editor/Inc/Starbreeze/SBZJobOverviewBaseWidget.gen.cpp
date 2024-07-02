// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZJobOverviewBaseWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZJobOverviewBaseWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZJobOverviewBaseWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZJobOverviewBaseWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerReadyInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZJobOverviewBaseWidget::execOnPlayerReadyStatusUpdated)
	{
		P_GET_TARRAY_REF(FSBZPlayerReadyInfo,Z_Param_Out_PlayerReadyStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerReadyStatusUpdated(Z_Param_Out_PlayerReadyStatus);
		P_NATIVE_END;
	}
	static FName NAME_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged = FName(TEXT("BP_OnIntroSequenceChanged"));
	void USBZJobOverviewBaseWidget::BP_OnIntroSequenceChanged(bool bIsStarted)
	{
		SBZJobOverviewBaseWidget_eventBP_OnIntroSequenceChanged_Parms Parms;
		Parms.bIsStarted=bIsStarted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged),&Parms);
	}
	static FName NAME_USBZJobOverviewBaseWidget_BP_OnPlayerStateCountChanged = FName(TEXT("BP_OnPlayerStateCountChanged"));
	void USBZJobOverviewBaseWidget::BP_OnPlayerStateCountChanged(ASBZPlayerState* PlayerState)
	{
		SBZJobOverviewBaseWidget_eventBP_OnPlayerStateCountChanged_Parms Parms;
		Parms.PlayerState=PlayerState;
		ProcessEvent(FindFunctionChecked(NAME_USBZJobOverviewBaseWidget_BP_OnPlayerStateCountChanged),&Parms);
	}
	static FName NAME_USBZJobOverviewBaseWidget_BP_OnPlayerStateSkipIntroSequenceChanged = FName(TEXT("BP_OnPlayerStateSkipIntroSequenceChanged"));
	void USBZJobOverviewBaseWidget::BP_OnPlayerStateSkipIntroSequenceChanged(ASBZPlayerState* PlayerState)
	{
		SBZJobOverviewBaseWidget_eventBP_OnPlayerStateSkipIntroSequenceChanged_Parms Parms;
		Parms.PlayerState=PlayerState;
		ProcessEvent(FindFunctionChecked(NAME_USBZJobOverviewBaseWidget_BP_OnPlayerStateSkipIntroSequenceChanged),&Parms);
	}
	void USBZJobOverviewBaseWidget::StaticRegisterNativesUSBZJobOverviewBaseWidget()
	{
		UClass* Class = USBZJobOverviewBaseWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerReadyStatusUpdated", &USBZJobOverviewBaseWidget::execOnPlayerReadyStatusUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged_Statics
	{
		static void NewProp_bIsStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged_Statics::NewProp_bIsStarted_SetBit(void* Obj)
	{
		((SBZJobOverviewBaseWidget_eventBP_OnIntroSequenceChanged_Parms*)Obj)->bIsStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged_Statics::NewProp_bIsStarted = { "bIsStarted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZJobOverviewBaseWidget_eventBP_OnIntroSequenceChanged_Parms), &Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged_Statics::NewProp_bIsStarted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged_Statics::NewProp_bIsStarted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZJobOverviewBaseWidget, nullptr, "BP_OnIntroSequenceChanged", nullptr, nullptr, sizeof(SBZJobOverviewBaseWidget_eventBP_OnIntroSequenceChanged_Parms), Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateCountChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateCountChanged_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewBaseWidget_eventBP_OnPlayerStateCountChanged_Parms, PlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateCountChanged_Statics::NewProp_PlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZJobOverviewBaseWidget, nullptr, "BP_OnPlayerStateCountChanged", nullptr, nullptr, sizeof(SBZJobOverviewBaseWidget_eventBP_OnPlayerStateCountChanged_Parms), Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateSkipIntroSequenceChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateSkipIntroSequenceChanged_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewBaseWidget_eventBP_OnPlayerStateSkipIntroSequenceChanged_Parms, PlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateSkipIntroSequenceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateSkipIntroSequenceChanged_Statics::NewProp_PlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateSkipIntroSequenceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateSkipIntroSequenceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZJobOverviewBaseWidget, nullptr, "BP_OnPlayerStateSkipIntroSequenceChanged", nullptr, nullptr, sizeof(SBZJobOverviewBaseWidget_eventBP_OnPlayerStateSkipIntroSequenceChanged_Parms), Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateSkipIntroSequenceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateSkipIntroSequenceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateSkipIntroSequenceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateSkipIntroSequenceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateSkipIntroSequenceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateSkipIntroSequenceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics
	{
		struct SBZJobOverviewBaseWidget_eventOnPlayerReadyStatusUpdated_Parms
		{
			TArray<FSBZPlayerReadyInfo> PlayerReadyStatus;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerReadyStatus_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerReadyStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerReadyStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics::NewProp_PlayerReadyStatus_Inner = { "PlayerReadyStatus", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPlayerReadyInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics::NewProp_PlayerReadyStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics::NewProp_PlayerReadyStatus = { "PlayerReadyStatus", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewBaseWidget_eventOnPlayerReadyStatusUpdated_Parms, PlayerReadyStatus), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics::NewProp_PlayerReadyStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics::NewProp_PlayerReadyStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics::NewProp_PlayerReadyStatus_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics::NewProp_PlayerReadyStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZJobOverviewBaseWidget, nullptr, "OnPlayerReadyStatusUpdated", nullptr, nullptr, sizeof(SBZJobOverviewBaseWidget_eventOnPlayerReadyStatusUpdated_Parms), Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZJobOverviewBaseWidget_NoRegister()
	{
		return USBZJobOverviewBaseWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStatusWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerStatusWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_PartyWidgetContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_PartyWidgetContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnIntroSequenceChanged, "BP_OnIntroSequenceChanged" }, // 57843953
		{ &Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateCountChanged, "BP_OnPlayerStateCountChanged" }, // 267984736
		{ &Z_Construct_UFunction_USBZJobOverviewBaseWidget_BP_OnPlayerStateSkipIntroSequenceChanged, "BP_OnPlayerStateSkipIntroSequenceChanged" }, // 910262401
		{ &Z_Construct_UFunction_USBZJobOverviewBaseWidget_OnPlayerReadyStatusUpdated, "OnPlayerReadyStatusUpdated" }, // 786943716
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZJobOverviewBaseWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZJobOverviewBaseWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::NewProp_PlayerStatusWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZJobOverviewBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZJobOverviewBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::NewProp_PlayerStatusWidgetClass = { "PlayerStatusWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZJobOverviewBaseWidget, PlayerStatusWidgetClass), Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::NewProp_PlayerStatusWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::NewProp_PlayerStatusWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::NewProp_Panel_PartyWidgetContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZJobOverviewBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZJobOverviewBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::NewProp_Panel_PartyWidgetContainer = { "Panel_PartyWidgetContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZJobOverviewBaseWidget, Panel_PartyWidgetContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::NewProp_Panel_PartyWidgetContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::NewProp_Panel_PartyWidgetContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::NewProp_PlayerStatusWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::NewProp_Panel_PartyWidgetContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZJobOverviewBaseWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::ClassParams = {
		&USBZJobOverviewBaseWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZJobOverviewBaseWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZJobOverviewBaseWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZJobOverviewBaseWidget, 3046782777);
	template<> STARBREEZE_API UClass* StaticClass<USBZJobOverviewBaseWidget>()
	{
		return USBZJobOverviewBaseWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZJobOverviewBaseWidget(Z_Construct_UClass_USBZJobOverviewBaseWidget, &USBZJobOverviewBaseWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZJobOverviewBaseWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZJobOverviewBaseWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
