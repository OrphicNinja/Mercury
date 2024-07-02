// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3ReviveInteractionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3ReviveInteractionWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3ReviveInteractionWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3ReviveInteractionWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatePawnWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPD3ReviveInteractionWidget::execOnReviveInteractionEnded)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReviveInteractionEnded(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	void UPD3ReviveInteractionWidget::StaticRegisterNativesUPD3ReviveInteractionWidget()
	{
		UClass* Class = UPD3ReviveInteractionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnReviveInteractionEnded", &UPD3ReviveInteractionWidget::execOnReviveInteractionEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics
	{
		struct PD3ReviveInteractionWidget_eventOnReviveInteractionEnded_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3ReviveInteractionWidget_eventOnReviveInteractionEnded_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3ReviveInteractionWidget_eventOnReviveInteractionEnded_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((PD3ReviveInteractionWidget_eventOnReviveInteractionEnded_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3ReviveInteractionWidget_eventOnReviveInteractionEnded_Parms), &Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3ReviveInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3ReviveInteractionWidget, nullptr, "OnReviveInteractionEnded", nullptr, nullptr, sizeof(PD3ReviveInteractionWidget_eventOnReviveInteractionEnded_Parms), Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3ReviveInteractionWidget_NoRegister()
	{
		return UPD3ReviveInteractionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStatePawnWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3ReviveInteractionWidget_OnReviveInteractionEnded, "OnReviveInteractionEnded" }, // 3790863208
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3ReviveInteractionWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3ReviveInteractionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::NewProp_Progress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3ReviveInteractionWidget" },
		{ "ModuleRelativePath", "Public/PD3ReviveInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3ReviveInteractionWidget, Progress), METADATA_PARAMS(Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::NewProp_Progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::NewProp_Progress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3ReviveInteractionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::ClassParams = {
		&UPD3ReviveInteractionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3ReviveInteractionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3ReviveInteractionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3ReviveInteractionWidget, 895601596);
	template<> STARBREEZE_API UClass* StaticClass<UPD3ReviveInteractionWidget>()
	{
		return UPD3ReviveInteractionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3ReviveInteractionWidget(Z_Construct_UClass_UPD3ReviveInteractionWidget, &UPD3ReviveInteractionWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3ReviveInteractionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3ReviveInteractionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
