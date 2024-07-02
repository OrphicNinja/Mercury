// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateGameError.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateGameError() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateGameError_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateGameError();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZServiceStatus();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataGameError_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameErrorWidget_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGameDataState();
// End Cross Module References
	DEFINE_FUNCTION(USBZStateMachineStateGameError::execOnMissionEndPopupClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMissionEndPopupClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZStateMachineStateGameError::execSetNetworkConnected)
	{
		P_GET_ENUM(ESBZServiceStatus,Z_Param_ServiceStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNetworkConnected(ESBZServiceStatus(Z_Param_ServiceStatus));
		P_NATIVE_END;
	}
	void USBZStateMachineStateGameError::StaticRegisterNativesUSBZStateMachineStateGameError()
	{
		UClass* Class = USBZStateMachineStateGameError::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMissionEndPopupClosed", &USBZStateMachineStateGameError::execOnMissionEndPopupClosed },
			{ "SetNetworkConnected", &USBZStateMachineStateGameError::execSetNetworkConnected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZStateMachineStateGameError_OnMissionEndPopupClosed_Statics
	{
		struct SBZStateMachineStateGameError_eventOnMissionEndPopupClosed_Parms
		{
			FName ClosingActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClosingActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZStateMachineStateGameError_OnMissionEndPopupClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateGameError_eventOnMissionEndPopupClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateGameError_OnMissionEndPopupClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateGameError_OnMissionEndPopupClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateGameError_OnMissionEndPopupClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateGameError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateGameError_OnMissionEndPopupClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateGameError, nullptr, "OnMissionEndPopupClosed", nullptr, nullptr, sizeof(SBZStateMachineStateGameError_eventOnMissionEndPopupClosed_Parms), Z_Construct_UFunction_USBZStateMachineStateGameError_OnMissionEndPopupClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateGameError_OnMissionEndPopupClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateGameError_OnMissionEndPopupClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateGameError_OnMissionEndPopupClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateGameError_OnMissionEndPopupClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateGameError_OnMissionEndPopupClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZStateMachineStateGameError_SetNetworkConnected_Statics
	{
		struct SBZStateMachineStateGameError_eventSetNetworkConnected_Parms
		{
			ESBZServiceStatus ServiceStatus;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServiceStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ServiceStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZStateMachineStateGameError_SetNetworkConnected_Statics::NewProp_ServiceStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZStateMachineStateGameError_SetNetworkConnected_Statics::NewProp_ServiceStatus = { "ServiceStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStateMachineStateGameError_eventSetNetworkConnected_Parms, ServiceStatus), Z_Construct_UEnum_Starbreeze_ESBZServiceStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZStateMachineStateGameError_SetNetworkConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateGameError_SetNetworkConnected_Statics::NewProp_ServiceStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZStateMachineStateGameError_SetNetworkConnected_Statics::NewProp_ServiceStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZStateMachineStateGameError_SetNetworkConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStateMachineStateGameError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZStateMachineStateGameError_SetNetworkConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZStateMachineStateGameError, nullptr, "SetNetworkConnected", nullptr, nullptr, sizeof(SBZStateMachineStateGameError_eventSetNetworkConnected_Parms), Z_Construct_UFunction_USBZStateMachineStateGameError_SetNetworkConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateGameError_SetNetworkConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZStateMachineStateGameError_SetNetworkConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZStateMachineStateGameError_SetNetworkConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZStateMachineStateGameError_SetNetworkConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZStateMachineStateGameError_SetNetworkConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateGameError_NoRegister()
	{
		return USBZStateMachineStateGameError::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateGameError_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ErrorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameErrorWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameErrorWidget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameDataState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameDataState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameDataState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateGameError_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZStateMachineStateGameError_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZStateMachineStateGameError_OnMissionEndPopupClosed, "OnMissionEndPopupClosed" }, // 1583150323
		{ &Z_Construct_UFunction_USBZStateMachineStateGameError_SetNetworkConnected, "SetNetworkConnected" }, // 3141294356
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateGameError_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateGameError.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateGameError.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_ErrorData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateGameError" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateGameError.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_ErrorData = { "ErrorData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateGameError, ErrorData), Z_Construct_UClass_USBZStateMachineDataGameError_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_ErrorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_ErrorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_GameErrorWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateGameError" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateGameError.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_GameErrorWidget = { "GameErrorWidget", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateGameError, GameErrorWidget), Z_Construct_UClass_USBZGameErrorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_GameErrorWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_GameErrorWidget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_GameDataState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_GameDataState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateGameError" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateGameError.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_GameDataState = { "GameDataState", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateGameError, GameDataState), Z_Construct_UEnum_Starbreeze_ESBZGameDataState, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_GameDataState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_GameDataState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateGameError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_ErrorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_GameErrorWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_GameDataState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateGameError_Statics::NewProp_GameDataState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateGameError_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateGameError>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateGameError_Statics::ClassParams = {
		&USBZStateMachineStateGameError::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZStateMachineStateGameError_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateGameError_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateGameError_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateGameError_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateGameError()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateGameError_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateGameError, 1474528192);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateGameError>()
	{
		return USBZStateMachineStateGameError::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateGameError(Z_Construct_UClass_USBZStateMachineStateGameError, &USBZStateMachineStateGameError::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateGameError"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateGameError);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
