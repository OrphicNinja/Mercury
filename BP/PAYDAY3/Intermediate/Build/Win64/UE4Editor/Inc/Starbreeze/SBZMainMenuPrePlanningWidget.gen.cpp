// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuPrePlanningWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuPrePlanningWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuPrePlanningWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuPrePlanningWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuPrePlanningWidget::execGetDifficulty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZDifficulty*)Z_Param__Result=P_THIS->GetDifficulty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPrePlanningWidget::execIsAsyncLoadingDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAsyncLoadingDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPrePlanningWidget::execNativeOnPlayerReadyStatusChanged)
	{
		P_GET_UBOOL(Z_Param_bInReadyStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnPlayerReadyStatusChanged(Z_Param_bInReadyStatus);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuPrePlanningWidget_OnAsyncLoadingDone = FName(TEXT("OnAsyncLoadingDone"));
	void USBZMainMenuPrePlanningWidget::OnAsyncLoadingDone()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPrePlanningWidget_OnAsyncLoadingDone),NULL);
	}
	static FName NAME_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent = FName(TEXT("OnLobbyPlayerReadyStatusUpdatedEvent"));
	void USBZMainMenuPrePlanningWidget::OnLobbyPlayerReadyStatusUpdatedEvent(bool bInReadyStatus)
	{
		SBZMainMenuPrePlanningWidget_eventOnLobbyPlayerReadyStatusUpdatedEvent_Parms Parms;
		Parms.bInReadyStatus=bInReadyStatus ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent),&Parms);
	}
	void USBZMainMenuPrePlanningWidget::StaticRegisterNativesUSBZMainMenuPrePlanningWidget()
	{
		UClass* Class = USBZMainMenuPrePlanningWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDifficulty", &USBZMainMenuPrePlanningWidget::execGetDifficulty },
			{ "IsAsyncLoadingDone", &USBZMainMenuPrePlanningWidget::execIsAsyncLoadingDone },
			{ "NativeOnPlayerReadyStatusChanged", &USBZMainMenuPrePlanningWidget::execNativeOnPlayerReadyStatusChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_GetDifficulty_Statics
	{
		struct SBZMainMenuPrePlanningWidget_eventGetDifficulty_Parms
		{
			ESBZDifficulty ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_GetDifficulty_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_GetDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPrePlanningWidget_eventGetDifficulty_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_GetDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_GetDifficulty_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_GetDifficulty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_GetDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_GetDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningWidget, nullptr, "GetDifficulty", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningWidget_eventGetDifficulty_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_GetDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_GetDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_GetDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_GetDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_GetDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_GetDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_IsAsyncLoadingDone_Statics
	{
		struct SBZMainMenuPrePlanningWidget_eventIsAsyncLoadingDone_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_IsAsyncLoadingDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuPrePlanningWidget_eventIsAsyncLoadingDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_IsAsyncLoadingDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuPrePlanningWidget_eventIsAsyncLoadingDone_Parms), &Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_IsAsyncLoadingDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_IsAsyncLoadingDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_IsAsyncLoadingDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_IsAsyncLoadingDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_IsAsyncLoadingDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningWidget, nullptr, "IsAsyncLoadingDone", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningWidget_eventIsAsyncLoadingDone_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_IsAsyncLoadingDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_IsAsyncLoadingDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_IsAsyncLoadingDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_IsAsyncLoadingDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_IsAsyncLoadingDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_IsAsyncLoadingDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_NativeOnPlayerReadyStatusChanged_Statics
	{
		struct SBZMainMenuPrePlanningWidget_eventNativeOnPlayerReadyStatusChanged_Parms
		{
			bool bInReadyStatus;
		};
		static void NewProp_bInReadyStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInReadyStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_NativeOnPlayerReadyStatusChanged_Statics::NewProp_bInReadyStatus_SetBit(void* Obj)
	{
		((SBZMainMenuPrePlanningWidget_eventNativeOnPlayerReadyStatusChanged_Parms*)Obj)->bInReadyStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_NativeOnPlayerReadyStatusChanged_Statics::NewProp_bInReadyStatus = { "bInReadyStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuPrePlanningWidget_eventNativeOnPlayerReadyStatusChanged_Parms), &Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_NativeOnPlayerReadyStatusChanged_Statics::NewProp_bInReadyStatus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_NativeOnPlayerReadyStatusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_NativeOnPlayerReadyStatusChanged_Statics::NewProp_bInReadyStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_NativeOnPlayerReadyStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_NativeOnPlayerReadyStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningWidget, nullptr, "NativeOnPlayerReadyStatusChanged", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningWidget_eventNativeOnPlayerReadyStatusChanged_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_NativeOnPlayerReadyStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_NativeOnPlayerReadyStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_NativeOnPlayerReadyStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_NativeOnPlayerReadyStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_NativeOnPlayerReadyStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_NativeOnPlayerReadyStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnAsyncLoadingDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnAsyncLoadingDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnAsyncLoadingDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningWidget, nullptr, "OnAsyncLoadingDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnAsyncLoadingDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnAsyncLoadingDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnAsyncLoadingDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnAsyncLoadingDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent_Statics
	{
		static void NewProp_bInReadyStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInReadyStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent_Statics::NewProp_bInReadyStatus_SetBit(void* Obj)
	{
		((SBZMainMenuPrePlanningWidget_eventOnLobbyPlayerReadyStatusUpdatedEvent_Parms*)Obj)->bInReadyStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent_Statics::NewProp_bInReadyStatus = { "bInReadyStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuPrePlanningWidget_eventOnLobbyPlayerReadyStatusUpdatedEvent_Parms), &Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent_Statics::NewProp_bInReadyStatus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent_Statics::NewProp_bInReadyStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPrePlanningWidget, nullptr, "OnLobbyPlayerReadyStatusUpdatedEvent", nullptr, nullptr, sizeof(SBZMainMenuPrePlanningWidget_eventOnLobbyPlayerReadyStatusUpdatedEvent_Parms), Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuPrePlanningWidget_NoRegister()
	{
		return USBZMainMenuPrePlanningWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuPrePlanningWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuPrePlanningWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuPrePlanningWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_GetDifficulty, "GetDifficulty" }, // 3690528924
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_IsAsyncLoadingDone, "IsAsyncLoadingDone" }, // 1655648897
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_NativeOnPlayerReadyStatusChanged, "NativeOnPlayerReadyStatusChanged" }, // 3932727487
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnAsyncLoadingDone, "OnAsyncLoadingDone" }, // 2453640112
		{ &Z_Construct_UFunction_USBZMainMenuPrePlanningWidget_OnLobbyPlayerReadyStatusUpdatedEvent, "OnLobbyPlayerReadyStatusUpdatedEvent" }, // 200163509
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPrePlanningWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuPrePlanningWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPrePlanningWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuPrePlanningWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuPrePlanningWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuPrePlanningWidget_Statics::ClassParams = {
		&USBZMainMenuPrePlanningWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPrePlanningWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPrePlanningWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuPrePlanningWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuPrePlanningWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuPrePlanningWidget, 2857159925);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuPrePlanningWidget>()
	{
		return USBZMainMenuPrePlanningWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuPrePlanningWidget(Z_Construct_UClass_USBZMainMenuPrePlanningWidget, &USBZMainMenuPrePlanningWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuPrePlanningWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuPrePlanningWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
