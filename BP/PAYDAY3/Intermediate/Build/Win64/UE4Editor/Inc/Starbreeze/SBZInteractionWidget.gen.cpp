// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractionWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractionWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractionWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatePawnWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerInteractorComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection();
// End Cross Module References
	static FName NAME_USBZInteractionWidget_OnAISeenPlayer = FName(TEXT("OnAISeenPlayer"));
	void USBZInteractionWidget::OnAISeenPlayer(bool bIsSeenByAI)
	{
		SBZInteractionWidget_eventOnAISeenPlayer_Parms Parms;
		Parms.bIsSeenByAI=bIsSeenByAI ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZInteractionWidget_OnAISeenPlayer),&Parms);
	}
	static FName NAME_USBZInteractionWidget_OnCasingChanged = FName(TEXT("OnCasingChanged"));
	void USBZInteractionWidget::OnCasingChanged(bool bIsCasing)
	{
		SBZInteractionWidget_eventOnCasingChanged_Parms Parms;
		Parms.bIsCasing=bIsCasing ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZInteractionWidget_OnCasingChanged),&Parms);
	}
	static FName NAME_USBZInteractionWidget_OnNewInteractionCollection = FName(TEXT("OnNewInteractionCollection"));
	void USBZInteractionWidget::OnNewInteractionCollection(const USBZPlayerInteractorComponent* Interactor, FSBZInteractDisplayDataCollection const& NewInteractionCollection)
	{
		SBZInteractionWidget_eventOnNewInteractionCollection_Parms Parms;
		Parms.Interactor=Interactor;
		Parms.NewInteractionCollection=NewInteractionCollection;
		ProcessEvent(FindFunctionChecked(NAME_USBZInteractionWidget_OnNewInteractionCollection),&Parms);
	}
	static FName NAME_USBZInteractionWidget_OnPlayerIsInteracting = FName(TEXT("OnPlayerIsInteracting"));
	void USBZInteractionWidget::OnPlayerIsInteracting(const USBZPlayerInteractorComponent* Interactor, bool bIsInteracting)
	{
		SBZInteractionWidget_eventOnPlayerIsInteracting_Parms Parms;
		Parms.Interactor=Interactor;
		Parms.bIsInteracting=bIsInteracting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZInteractionWidget_OnPlayerIsInteracting),&Parms);
	}
	void USBZInteractionWidget::StaticRegisterNativesUSBZInteractionWidget()
	{
	}
	struct Z_Construct_UFunction_USBZInteractionWidget_OnAISeenPlayer_Statics
	{
		static void NewProp_bIsSeenByAI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSeenByAI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZInteractionWidget_OnAISeenPlayer_Statics::NewProp_bIsSeenByAI_SetBit(void* Obj)
	{
		((SBZInteractionWidget_eventOnAISeenPlayer_Parms*)Obj)->bIsSeenByAI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZInteractionWidget_OnAISeenPlayer_Statics::NewProp_bIsSeenByAI = { "bIsSeenByAI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractionWidget_eventOnAISeenPlayer_Parms), &Z_Construct_UFunction_USBZInteractionWidget_OnAISeenPlayer_Statics::NewProp_bIsSeenByAI_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractionWidget_OnAISeenPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractionWidget_OnAISeenPlayer_Statics::NewProp_bIsSeenByAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractionWidget_OnAISeenPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractionWidget_OnAISeenPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractionWidget, nullptr, "OnAISeenPlayer", nullptr, nullptr, sizeof(SBZInteractionWidget_eventOnAISeenPlayer_Parms), Z_Construct_UFunction_USBZInteractionWidget_OnAISeenPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractionWidget_OnAISeenPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractionWidget_OnAISeenPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractionWidget_OnAISeenPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractionWidget_OnAISeenPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractionWidget_OnAISeenPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractionWidget_OnCasingChanged_Statics
	{
		static void NewProp_bIsCasing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCasing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZInteractionWidget_OnCasingChanged_Statics::NewProp_bIsCasing_SetBit(void* Obj)
	{
		((SBZInteractionWidget_eventOnCasingChanged_Parms*)Obj)->bIsCasing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZInteractionWidget_OnCasingChanged_Statics::NewProp_bIsCasing = { "bIsCasing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractionWidget_eventOnCasingChanged_Parms), &Z_Construct_UFunction_USBZInteractionWidget_OnCasingChanged_Statics::NewProp_bIsCasing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractionWidget_OnCasingChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractionWidget_OnCasingChanged_Statics::NewProp_bIsCasing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractionWidget_OnCasingChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractionWidget_OnCasingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractionWidget, nullptr, "OnCasingChanged", nullptr, nullptr, sizeof(SBZInteractionWidget_eventOnCasingChanged_Parms), Z_Construct_UFunction_USBZInteractionWidget_OnCasingChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractionWidget_OnCasingChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractionWidget_OnCasingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractionWidget_OnCasingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractionWidget_OnCasingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractionWidget_OnCasingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewInteractionCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewInteractionCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractionWidget_eventOnNewInteractionCollection_Parms, Interactor), Z_Construct_UClass_USBZPlayerInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::NewProp_Interactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::NewProp_NewInteractionCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::NewProp_NewInteractionCollection = { "NewInteractionCollection", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractionWidget_eventOnNewInteractionCollection_Parms, NewInteractionCollection), Z_Construct_UScriptStruct_FSBZInteractDisplayDataCollection, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::NewProp_NewInteractionCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::NewProp_NewInteractionCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::NewProp_NewInteractionCollection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractionWidget, nullptr, "OnNewInteractionCollection", nullptr, nullptr, sizeof(SBZInteractionWidget_eventOnNewInteractionCollection_Parms), Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsInteracting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInteracting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractionWidget_eventOnPlayerIsInteracting_Parms, Interactor), Z_Construct_UClass_USBZPlayerInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::NewProp_bIsInteracting_SetBit(void* Obj)
	{
		((SBZInteractionWidget_eventOnPlayerIsInteracting_Parms*)Obj)->bIsInteracting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::NewProp_bIsInteracting = { "bIsInteracting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractionWidget_eventOnPlayerIsInteracting_Parms), &Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::NewProp_bIsInteracting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::NewProp_bIsInteracting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInteractionWidget, nullptr, "OnPlayerIsInteracting", nullptr, nullptr, sizeof(SBZInteractionWidget_eventOnPlayerIsInteracting_Parms), Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZInteractionWidget_NoRegister()
	{
		return USBZInteractionWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZInteractionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInteractionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStatePawnWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZInteractionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZInteractionWidget_OnAISeenPlayer, "OnAISeenPlayer" }, // 3545491775
		{ &Z_Construct_UFunction_USBZInteractionWidget_OnCasingChanged, "OnCasingChanged" }, // 1069064220
		{ &Z_Construct_UFunction_USBZInteractionWidget_OnNewInteractionCollection, "OnNewInteractionCollection" }, // 1195062029
		{ &Z_Construct_UFunction_USBZInteractionWidget_OnPlayerIsInteracting, "OnPlayerIsInteracting" }, // 2892516381
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractionWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInteractionWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractionWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInteractionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInteractionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInteractionWidget_Statics::ClassParams = {
		&USBZInteractionWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZInteractionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInteractionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInteractionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInteractionWidget, 4027482583);
	template<> STARBREEZE_API UClass* StaticClass<USBZInteractionWidget>()
	{
		return USBZInteractionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInteractionWidget(Z_Construct_UClass_USBZInteractionWidget, &USBZInteractionWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInteractionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInteractionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
