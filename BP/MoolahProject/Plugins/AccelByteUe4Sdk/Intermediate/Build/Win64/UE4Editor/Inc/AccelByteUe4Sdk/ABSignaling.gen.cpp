// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABSignaling.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABSignaling() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSignaling_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSignaling();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSendSignalingMessageRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSignalingP2PNotif__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABSignaling::execSendSignalingMessage)
	{
		P_GET_STRUCT_REF(FSendSignalingMessageRequest,Z_Param_Out_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SendSignalingMessage(Z_Param_Out_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABSignaling::execSetSignalingP2PNotif)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSignalingP2PNotif(FDSignalingP2PNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	void UABSignaling::StaticRegisterNativesUABSignaling()
	{
		UClass* Class = UABSignaling::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendSignalingMessage", &UABSignaling::execSendSignalingMessage },
			{ "SetSignalingP2PNotif", &UABSignaling::execSetSignalingP2PNotif },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics
	{
		struct ABSignaling_eventSendSignalingMessage_Parms
		{
			FSendSignalingMessageRequest Request;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSignaling_eventSendSignalingMessage_Parms, Request), Z_Construct_UScriptStruct_FSendSignalingMessageRequest, METADATA_PARAMS(Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSignaling_eventSendSignalingMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSignaling.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSignaling, nullptr, "SendSignalingMessage", nullptr, nullptr, sizeof(ABSignaling_eventSendSignalingMessage_Parms), Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABSignaling_SendSignalingMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABSignaling_SendSignalingMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics
	{
		struct ABSignaling_eventSetSignalingP2PNotif_Parms
		{
			FScriptDelegate OnNotif;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnNotif;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSignaling_eventSetSignalingP2PNotif_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DSignalingP2PNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABSignaling.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABSignaling, nullptr, "SetSignalingP2PNotif", nullptr, nullptr, sizeof(ABSignaling_eventSetSignalingP2PNotif_Parms), Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABSignaling_NoRegister()
	{
		return UABSignaling::StaticClass();
	}
	struct Z_Construct_UClass_UABSignaling_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABSignaling_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABSignaling_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABSignaling_SendSignalingMessage, "SendSignalingMessage" }, // 1393100931
		{ &Z_Construct_UFunction_UABSignaling_SetSignalingP2PNotif, "SetSignalingP2PNotif" }, // 1866376827
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABSignaling_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABSignaling.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABSignaling.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABSignaling_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABSignaling>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABSignaling_Statics::ClassParams = {
		&UABSignaling::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABSignaling_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABSignaling_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABSignaling()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABSignaling_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABSignaling, 3669515097);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABSignaling>()
	{
		return UABSignaling::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABSignaling(Z_Construct_UClass_UABSignaling, &UABSignaling::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABSignaling"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABSignaling);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
