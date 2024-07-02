// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZViewTargetWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZViewTargetWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZViewTargetWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZViewTargetWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCameraState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZViewTargetWidget::execOnSecurityCameraRuntimeStateChanged)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecurityCameraRuntimeStateChanged(Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZViewTargetWidget::execOnSecurityCameraStateChanged)
	{
		P_GET_ENUM(ESBZCameraState,Z_Param_OldState);
		P_GET_ENUM(ESBZCameraState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecurityCameraStateChanged(ESBZCameraState(Z_Param_OldState),ESBZCameraState(Z_Param_NewState));
		P_NATIVE_END;
	}
	static FName NAME_USBZViewTargetWidget_OnFocusedChanged = FName(TEXT("OnFocusedChanged"));
	void USBZViewTargetWidget::OnFocusedChanged(bool bIsFocused)
	{
		SBZViewTargetWidget_eventOnFocusedChanged_Parms Parms;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZViewTargetWidget_OnFocusedChanged),&Parms);
	}
	static FName NAME_USBZViewTargetWidget_OnNewTarget = FName(TEXT("OnNewTarget"));
	void USBZViewTargetWidget::OnNewTarget()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZViewTargetWidget_OnNewTarget),NULL);
	}
	static FName NAME_USBZViewTargetWidget_SecurityCameraRuntimeStateChanged = FName(TEXT("SecurityCameraRuntimeStateChanged"));
	void USBZViewTargetWidget::SecurityCameraRuntimeStateChanged(uint8 NewState)
	{
		SBZViewTargetWidget_eventSecurityCameraRuntimeStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_USBZViewTargetWidget_SecurityCameraRuntimeStateChanged),&Parms);
	}
	static FName NAME_USBZViewTargetWidget_SecurityCameraStateChanged = FName(TEXT("SecurityCameraStateChanged"));
	void USBZViewTargetWidget::SecurityCameraStateChanged(ESBZCameraState CurrentState)
	{
		SBZViewTargetWidget_eventSecurityCameraStateChanged_Parms Parms;
		Parms.CurrentState=CurrentState;
		ProcessEvent(FindFunctionChecked(NAME_USBZViewTargetWidget_SecurityCameraStateChanged),&Parms);
	}
	void USBZViewTargetWidget::StaticRegisterNativesUSBZViewTargetWidget()
	{
		UClass* Class = USBZViewTargetWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSecurityCameraRuntimeStateChanged", &USBZViewTargetWidget::execOnSecurityCameraRuntimeStateChanged },
			{ "OnSecurityCameraStateChanged", &USBZViewTargetWidget::execOnSecurityCameraStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZViewTargetWidget_OnFocusedChanged_Statics
	{
		static void NewProp_bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZViewTargetWidget_OnFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZViewTargetWidget_eventOnFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZViewTargetWidget_OnFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZViewTargetWidget_eventOnFocusedChanged_Parms), &Z_Construct_UFunction_USBZViewTargetWidget_OnFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZViewTargetWidget_OnFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetWidget_OnFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZViewTargetWidget_OnFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZViewTargetWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZViewTargetWidget_OnFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZViewTargetWidget, nullptr, "OnFocusedChanged", nullptr, nullptr, sizeof(SBZViewTargetWidget_eventOnFocusedChanged_Parms), Z_Construct_UFunction_USBZViewTargetWidget_OnFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetWidget_OnFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZViewTargetWidget_OnFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetWidget_OnFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZViewTargetWidget_OnFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZViewTargetWidget_OnFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZViewTargetWidget_OnNewTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZViewTargetWidget_OnNewTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZViewTargetWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZViewTargetWidget_OnNewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZViewTargetWidget, nullptr, "OnNewTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZViewTargetWidget_OnNewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetWidget_OnNewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZViewTargetWidget_OnNewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZViewTargetWidget_OnNewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraRuntimeStateChanged_Statics
	{
		struct SBZViewTargetWidget_eventOnSecurityCameraRuntimeStateChanged_Parms
		{
			uint8 NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraRuntimeStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetWidget_eventOnSecurityCameraRuntimeStateChanged_Parms, NewState), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraRuntimeStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraRuntimeStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraRuntimeStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZViewTargetWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraRuntimeStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZViewTargetWidget, nullptr, "OnSecurityCameraRuntimeStateChanged", nullptr, nullptr, sizeof(SBZViewTargetWidget_eventOnSecurityCameraRuntimeStateChanged_Parms), Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraRuntimeStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraRuntimeStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraRuntimeStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraRuntimeStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraRuntimeStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraRuntimeStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics
	{
		struct SBZViewTargetWidget_eventOnSecurityCameraStateChanged_Parms
		{
			ESBZCameraState OldState;
			ESBZCameraState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetWidget_eventOnSecurityCameraStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZCameraState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetWidget_eventOnSecurityCameraStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZCameraState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZViewTargetWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZViewTargetWidget, nullptr, "OnSecurityCameraStateChanged", nullptr, nullptr, sizeof(SBZViewTargetWidget_eventOnSecurityCameraStateChanged_Parms), Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraRuntimeStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraRuntimeStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetWidget_eventSecurityCameraRuntimeStateChanged_Parms, NewState), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraRuntimeStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraRuntimeStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraRuntimeStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZViewTargetWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraRuntimeStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZViewTargetWidget, nullptr, "SecurityCameraRuntimeStateChanged", nullptr, nullptr, sizeof(SBZViewTargetWidget_eventSecurityCameraRuntimeStateChanged_Parms), Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraRuntimeStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraRuntimeStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraRuntimeStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraRuntimeStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraRuntimeStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraRuntimeStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraStateChanged_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraStateChanged_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetWidget_eventSecurityCameraStateChanged_Parms, CurrentState), Z_Construct_UEnum_Starbreeze_ESBZCameraState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraStateChanged_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraStateChanged_Statics::NewProp_CurrentState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZViewTargetWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZViewTargetWidget, nullptr, "SecurityCameraStateChanged", nullptr, nullptr, sizeof(SBZViewTargetWidget_eventSecurityCameraStateChanged_Parms), Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZViewTargetWidget_NoRegister()
	{
		return USBZViewTargetWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZViewTargetWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewTargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewTargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZViewTargetWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZViewTargetWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZViewTargetWidget_OnFocusedChanged, "OnFocusedChanged" }, // 873214630
		{ &Z_Construct_UFunction_USBZViewTargetWidget_OnNewTarget, "OnNewTarget" }, // 1024016247
		{ &Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraRuntimeStateChanged, "OnSecurityCameraRuntimeStateChanged" }, // 2172749480
		{ &Z_Construct_UFunction_USBZViewTargetWidget_OnSecurityCameraStateChanged, "OnSecurityCameraStateChanged" }, // 3775042327
		{ &Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraRuntimeStateChanged, "SecurityCameraRuntimeStateChanged" }, // 157574466
		{ &Z_Construct_UFunction_USBZViewTargetWidget_SecurityCameraStateChanged, "SecurityCameraStateChanged" }, // 754035355
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZViewTargetWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZViewTargetWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZViewTargetWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZViewTargetWidget_Statics::NewProp_ViewTargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZViewTargetWidget" },
		{ "ModuleRelativePath", "Public/SBZViewTargetWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZViewTargetWidget_Statics::NewProp_ViewTargetActor = { "ViewTargetActor", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZViewTargetWidget, ViewTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZViewTargetWidget_Statics::NewProp_ViewTargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetWidget_Statics::NewProp_ViewTargetActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZViewTargetWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZViewTargetWidget_Statics::NewProp_ViewTargetActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZViewTargetWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZViewTargetWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZViewTargetWidget_Statics::ClassParams = {
		&USBZViewTargetWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZViewTargetWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZViewTargetWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZViewTargetWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZViewTargetWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZViewTargetWidget, 687249815);
	template<> STARBREEZE_API UClass* StaticClass<USBZViewTargetWidget>()
	{
		return USBZViewTargetWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZViewTargetWidget(Z_Construct_UClass_USBZViewTargetWidget, &USBZViewTargetWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZViewTargetWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZViewTargetWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
