// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActionPhaseBaseWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActionPhaseBaseWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionPhaseBaseWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionPhaseBaseWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReference();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerController_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIStackChangedEvent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZControlsReferenceWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZActionPhaseBaseWidget::execHideControlsReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideControlsReference();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZActionPhaseBaseWidget::execOnActiveControlsReferenceChanged)
	{
		P_GET_STRUCT_REF(FSBZControlsReference,Z_Param_Out_InControlsReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActiveControlsReferenceChanged(Z_Param_Out_InControlsReference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZActionPhaseBaseWidget::execOnControllerStateChanged)
	{
		P_GET_OBJECT(ASBZPlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OldStateName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewStateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnControllerStateChanged(Z_Param_PlayerController,Z_Param_Out_OldStateName,Z_Param_Out_NewStateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZActionPhaseBaseWidget::execOnStackLockChanged)
	{
		P_GET_UBOOL(Z_Param_bIsStackLocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStackLockChanged(Z_Param_bIsStackLocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZActionPhaseBaseWidget::execOnStackStateChanged)
	{
		P_GET_STRUCT(FSBZUIStackChangedEvent,Z_Param_UIStackStateChangedEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStackStateChanged(Z_Param_UIStackStateChangedEvent);
		P_NATIVE_END;
	}
	void USBZActionPhaseBaseWidget::StaticRegisterNativesUSBZActionPhaseBaseWidget()
	{
		UClass* Class = USBZActionPhaseBaseWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideControlsReference", &USBZActionPhaseBaseWidget::execHideControlsReference },
			{ "OnActiveControlsReferenceChanged", &USBZActionPhaseBaseWidget::execOnActiveControlsReferenceChanged },
			{ "OnControllerStateChanged", &USBZActionPhaseBaseWidget::execOnControllerStateChanged },
			{ "OnStackLockChanged", &USBZActionPhaseBaseWidget::execOnStackLockChanged },
			{ "OnStackStateChanged", &USBZActionPhaseBaseWidget::execOnStackStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZActionPhaseBaseWidget_HideControlsReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActionPhaseBaseWidget_HideControlsReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActionPhaseBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActionPhaseBaseWidget_HideControlsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActionPhaseBaseWidget, nullptr, "HideControlsReference", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActionPhaseBaseWidget_HideControlsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionPhaseBaseWidget_HideControlsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActionPhaseBaseWidget_HideControlsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActionPhaseBaseWidget_HideControlsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged_Statics
	{
		struct SBZActionPhaseBaseWidget_eventOnActiveControlsReferenceChanged_Parms
		{
			FSBZControlsReference InControlsReference;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InControlsReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged_Statics::NewProp_InControlsReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged_Statics::NewProp_InControlsReference = { "InControlsReference", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActionPhaseBaseWidget_eventOnActiveControlsReferenceChanged_Parms, InControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged_Statics::NewProp_InControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged_Statics::NewProp_InControlsReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged_Statics::NewProp_InControlsReference,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActionPhaseBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActionPhaseBaseWidget, nullptr, "OnActiveControlsReferenceChanged", nullptr, nullptr, sizeof(SBZActionPhaseBaseWidget_eventOnActiveControlsReferenceChanged_Parms), Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics
	{
		struct SBZActionPhaseBaseWidget_eventOnControllerStateChanged_Parms
		{
			ASBZPlayerController* PlayerController;
			FName OldStateName;
			FName NewStateName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldStateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldStateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewStateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewStateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActionPhaseBaseWidget_eventOnControllerStateChanged_Parms, PlayerController), Z_Construct_UClass_ASBZPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::NewProp_OldStateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::NewProp_OldStateName = { "OldStateName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActionPhaseBaseWidget_eventOnControllerStateChanged_Parms, OldStateName), METADATA_PARAMS(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::NewProp_OldStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::NewProp_OldStateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::NewProp_NewStateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::NewProp_NewStateName = { "NewStateName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActionPhaseBaseWidget_eventOnControllerStateChanged_Parms, NewStateName), METADATA_PARAMS(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::NewProp_NewStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::NewProp_NewStateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::NewProp_OldStateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::NewProp_NewStateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActionPhaseBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActionPhaseBaseWidget, nullptr, "OnControllerStateChanged", nullptr, nullptr, sizeof(SBZActionPhaseBaseWidget_eventOnControllerStateChanged_Parms), Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackLockChanged_Statics
	{
		struct SBZActionPhaseBaseWidget_eventOnStackLockChanged_Parms
		{
			bool bIsStackLocked;
		};
		static void NewProp_bIsStackLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStackLocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackLockChanged_Statics::NewProp_bIsStackLocked_SetBit(void* Obj)
	{
		((SBZActionPhaseBaseWidget_eventOnStackLockChanged_Parms*)Obj)->bIsStackLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackLockChanged_Statics::NewProp_bIsStackLocked = { "bIsStackLocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZActionPhaseBaseWidget_eventOnStackLockChanged_Parms), &Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackLockChanged_Statics::NewProp_bIsStackLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackLockChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackLockChanged_Statics::NewProp_bIsStackLocked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackLockChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActionPhaseBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackLockChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActionPhaseBaseWidget, nullptr, "OnStackLockChanged", nullptr, nullptr, sizeof(SBZActionPhaseBaseWidget_eventOnStackLockChanged_Parms), Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackLockChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackLockChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackLockChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackLockChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackLockChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackLockChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackStateChanged_Statics
	{
		struct SBZActionPhaseBaseWidget_eventOnStackStateChanged_Parms
		{
			FSBZUIStackChangedEvent UIStackStateChangedEvent;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIStackStateChangedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackStateChanged_Statics::NewProp_UIStackStateChangedEvent = { "UIStackStateChangedEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActionPhaseBaseWidget_eventOnStackStateChanged_Parms, UIStackStateChangedEvent), Z_Construct_UScriptStruct_FSBZUIStackChangedEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackStateChanged_Statics::NewProp_UIStackStateChangedEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActionPhaseBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActionPhaseBaseWidget, nullptr, "OnStackStateChanged", nullptr, nullptr, sizeof(SBZActionPhaseBaseWidget_eventOnStackStateChanged_Parms), Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZActionPhaseBaseWidget_NoRegister()
	{
		return USBZActionPhaseBaseWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_Playing_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_Playing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_Spectating_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_Spectating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_Shared_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_Shared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_ControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_ControlsReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZHUDWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZActionPhaseBaseWidget_HideControlsReference, "HideControlsReference" }, // 2884427353
		{ &Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnActiveControlsReferenceChanged, "OnActiveControlsReferenceChanged" }, // 4193973362
		{ &Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnControllerStateChanged, "OnControllerStateChanged" }, // 420159827
		{ &Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackLockChanged, "OnStackLockChanged" }, // 567612096
		{ &Z_Construct_UFunction_USBZActionPhaseBaseWidget_OnStackStateChanged, "OnStackStateChanged" }, // 2509048626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZActionPhaseBaseWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZActionPhaseBaseWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_Playing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionPhaseBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZActionPhaseBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_Playing = { "Widget_Playing", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActionPhaseBaseWidget, Widget_Playing), Z_Construct_UClass_USBZWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_Playing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_Playing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_Spectating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionPhaseBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZActionPhaseBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_Spectating = { "Widget_Spectating", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActionPhaseBaseWidget, Widget_Spectating), Z_Construct_UClass_USBZWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_Spectating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_Spectating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_Shared_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionPhaseBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZActionPhaseBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_Shared = { "Widget_Shared", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActionPhaseBaseWidget, Widget_Shared), Z_Construct_UClass_USBZWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_Shared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_Shared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_ControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionPhaseBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZActionPhaseBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_ControlsReference = { "Widget_ControlsReference", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActionPhaseBaseWidget, Widget_ControlsReference), Z_Construct_UClass_USBZControlsReferenceWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_ControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_ControlsReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_Playing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_Spectating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_Shared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::NewProp_Widget_ControlsReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZActionPhaseBaseWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::ClassParams = {
		&USBZActionPhaseBaseWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZActionPhaseBaseWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZActionPhaseBaseWidget, 2134768302);
	template<> STARBREEZE_API UClass* StaticClass<USBZActionPhaseBaseWidget>()
	{
		return USBZActionPhaseBaseWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZActionPhaseBaseWidget(Z_Construct_UClass_USBZActionPhaseBaseWidget, &USBZActionPhaseBaseWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZActionPhaseBaseWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZActionPhaseBaseWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
