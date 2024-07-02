// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZResultScreenPlayerListWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZResultScreenPlayerListWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZResultScreenPlayerListWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZResultScreenPlayerListWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICrewState_NoRegister();
// End Cross Module References
	static FName NAME_USBZResultScreenPlayerListWidget_OnMergePartyUpdated = FName(TEXT("OnMergePartyUpdated"));
	void USBZResultScreenPlayerListWidget::OnMergePartyUpdated(const FString& PlayerDisplayName, bool bIsMergePartySelected)
	{
		SBZResultScreenPlayerListWidget_eventOnMergePartyUpdated_Parms Parms;
		Parms.PlayerDisplayName=PlayerDisplayName;
		Parms.bIsMergePartySelected=bIsMergePartySelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZResultScreenPlayerListWidget_OnMergePartyUpdated),&Parms);
	}
	static FName NAME_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete = FName(TEXT("OnSanitizeDisplayNamesComplete"));
	void USBZResultScreenPlayerListWidget::OnSanitizeDisplayNamesComplete(TMap<int32,FString> const& PlayerIdToAccelByteDisplayNameMap)
	{
		SBZResultScreenPlayerListWidget_eventOnSanitizeDisplayNamesComplete_Parms Parms;
		Parms.PlayerIdToAccelByteDisplayNameMap=PlayerIdToAccelByteDisplayNameMap;
		ProcessEvent(FindFunctionChecked(NAME_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete),&Parms);
	}
	static FName NAME_USBZResultScreenPlayerListWidget_OnSetup = FName(TEXT("OnSetup"));
	void USBZResultScreenPlayerListWidget::OnSetup(TArray<ASBZPlayerState*> const& PlayerStateArray, TArray<ASBZAICrewState*> const& AICrewStateArray)
	{
		SBZResultScreenPlayerListWidget_eventOnSetup_Parms Parms;
		Parms.PlayerStateArray=PlayerStateArray;
		Parms.AICrewStateArray=AICrewStateArray;
		ProcessEvent(FindFunctionChecked(NAME_USBZResultScreenPlayerListWidget_OnSetup),&Parms);
	}
	void USBZResultScreenPlayerListWidget::StaticRegisterNativesUSBZResultScreenPlayerListWidget()
	{
	}
	struct Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMergePartySelected_MetaData[];
#endif
		static void NewProp_bIsMergePartySelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMergePartySelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::NewProp_PlayerDisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::NewProp_PlayerDisplayName = { "PlayerDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZResultScreenPlayerListWidget_eventOnMergePartyUpdated_Parms, PlayerDisplayName), METADATA_PARAMS(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::NewProp_PlayerDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::NewProp_PlayerDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected_SetBit(void* Obj)
	{
		((SBZResultScreenPlayerListWidget_eventOnMergePartyUpdated_Parms*)Obj)->bIsMergePartySelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected = { "bIsMergePartySelected", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZResultScreenPlayerListWidget_eventOnMergePartyUpdated_Parms), &Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::NewProp_PlayerDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::NewProp_bIsMergePartySelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZResultScreenPlayerListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZResultScreenPlayerListWidget, nullptr, "OnMergePartyUpdated", nullptr, nullptr, sizeof(SBZResultScreenPlayerListWidget_eventOnMergePartyUpdated_Parms), Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerIdToAccelByteDisplayNameMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIdToAccelByteDisplayNameMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIdToAccelByteDisplayNameMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlayerIdToAccelByteDisplayNameMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::NewProp_PlayerIdToAccelByteDisplayNameMap_ValueProp = { "PlayerIdToAccelByteDisplayNameMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::NewProp_PlayerIdToAccelByteDisplayNameMap_Key_KeyProp = { "PlayerIdToAccelByteDisplayNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::NewProp_PlayerIdToAccelByteDisplayNameMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::NewProp_PlayerIdToAccelByteDisplayNameMap = { "PlayerIdToAccelByteDisplayNameMap", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZResultScreenPlayerListWidget_eventOnSanitizeDisplayNamesComplete_Parms, PlayerIdToAccelByteDisplayNameMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::NewProp_PlayerIdToAccelByteDisplayNameMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::NewProp_PlayerIdToAccelByteDisplayNameMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::NewProp_PlayerIdToAccelByteDisplayNameMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::NewProp_PlayerIdToAccelByteDisplayNameMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::NewProp_PlayerIdToAccelByteDisplayNameMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZResultScreenPlayerListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZResultScreenPlayerListWidget, nullptr, "OnSanitizeDisplayNamesComplete", nullptr, nullptr, sizeof(SBZResultScreenPlayerListWidget_eventOnSanitizeDisplayNamesComplete_Parms), Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStateArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStateArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerStateArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AICrewStateArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AICrewStateArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AICrewStateArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::NewProp_PlayerStateArray_Inner = { "PlayerStateArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::NewProp_PlayerStateArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::NewProp_PlayerStateArray = { "PlayerStateArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZResultScreenPlayerListWidget_eventOnSetup_Parms, PlayerStateArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::NewProp_PlayerStateArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::NewProp_PlayerStateArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::NewProp_AICrewStateArray_Inner = { "AICrewStateArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZAICrewState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::NewProp_AICrewStateArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::NewProp_AICrewStateArray = { "AICrewStateArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZResultScreenPlayerListWidget_eventOnSetup_Parms, AICrewStateArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::NewProp_AICrewStateArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::NewProp_AICrewStateArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::NewProp_PlayerStateArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::NewProp_PlayerStateArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::NewProp_AICrewStateArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::NewProp_AICrewStateArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZResultScreenPlayerListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZResultScreenPlayerListWidget, nullptr, "OnSetup", nullptr, nullptr, sizeof(SBZResultScreenPlayerListWidget_eventOnSetup_Parms), Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZResultScreenPlayerListWidget_NoRegister()
	{
		return USBZResultScreenPlayerListWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZResultScreenPlayerListWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZResultScreenPlayerListWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZResultScreenPlayerListWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnMergePartyUpdated, "OnMergePartyUpdated" }, // 2063389704
		{ &Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSanitizeDisplayNamesComplete, "OnSanitizeDisplayNamesComplete" }, // 2805576891
		{ &Z_Construct_UFunction_USBZResultScreenPlayerListWidget_OnSetup, "OnSetup" }, // 47196369
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZResultScreenPlayerListWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZResultScreenPlayerListWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZResultScreenPlayerListWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZResultScreenPlayerListWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZResultScreenPlayerListWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZResultScreenPlayerListWidget_Statics::ClassParams = {
		&USBZResultScreenPlayerListWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZResultScreenPlayerListWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZResultScreenPlayerListWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZResultScreenPlayerListWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZResultScreenPlayerListWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZResultScreenPlayerListWidget, 1766962761);
	template<> STARBREEZE_API UClass* StaticClass<USBZResultScreenPlayerListWidget>()
	{
		return USBZResultScreenPlayerListWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZResultScreenPlayerListWidget(Z_Construct_UClass_USBZResultScreenPlayerListWidget, &USBZResultScreenPlayerListWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZResultScreenPlayerListWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZResultScreenPlayerListWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
