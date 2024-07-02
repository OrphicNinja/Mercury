// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABPresence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPresence() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABPresence_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABPresence();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBulkGetUserPresence__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetAllFriendsStatusResponse__DelegateSignature();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DFriendStatusNotif__DelegateSignature();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelBytePresenceStatus();
	ACCELBYTEUE4SDK_API UFunction* Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DOnSetUserPresence__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UABPresence::execBulkGetUserPresence)
	{
		P_GET_STRUCT_REF(FBulkGetUserPresenceRequest,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BulkGetUserPresence(Z_Param_Out_Request,FDBulkGetUserPresence(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABPresence::execGetAllFriendsStatus)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllFriendsStatus(FDGetAllFriendsStatusResponse(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABPresence::execSetOnFriendStatusNotif)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotif);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnFriendStatusNotif(FDFriendStatusNotif(Z_Param_OnNotif));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABPresence::execSetPresenceStatus)
	{
		P_GET_STRUCT_REF(FAccelBytePresenceStatus,Z_Param_Out_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResponse);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPresenceStatus(Z_Param_Out_Request,FDOnSetUserPresence(Z_Param_OnResponse),FDErrorHandler(Z_Param_OnError));
		P_NATIVE_END;
	}
	void UABPresence::StaticRegisterNativesUABPresence()
	{
		UClass* Class = UABPresence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BulkGetUserPresence", &UABPresence::execBulkGetUserPresence },
			{ "GetAllFriendsStatus", &UABPresence::execGetAllFriendsStatus },
			{ "SetOnFriendStatusNotif", &UABPresence::execSetOnFriendStatusNotif },
			{ "SetPresenceStatus", &UABPresence::execSetPresenceStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics
	{
		struct ABPresence_eventBulkGetUserPresence_Parms
		{
			FBulkGetUserPresenceRequest Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPresence_eventBulkGetUserPresence_Parms, Request), Z_Construct_UScriptStruct_FBulkGetUserPresenceRequest, METADATA_PARAMS(Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPresence_eventBulkGetUserPresence_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DBulkGetUserPresence__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPresence_eventBulkGetUserPresence_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPresence, nullptr, "BulkGetUserPresence", nullptr, nullptr, sizeof(ABPresence_eventBulkGetUserPresence_Parms), Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABPresence_BulkGetUserPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABPresence_BulkGetUserPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics
	{
		struct ABPresence_eventGetAllFriendsStatus_Parms
		{
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPresence_eventGetAllFriendsStatus_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DGetAllFriendsStatusResponse__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPresence_eventGetAllFriendsStatus_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPresence, nullptr, "GetAllFriendsStatus", nullptr, nullptr, sizeof(ABPresence_eventGetAllFriendsStatus_Parms), Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABPresence_GetAllFriendsStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABPresence_GetAllFriendsStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics
	{
		struct ABPresence_eventSetOnFriendStatusNotif_Parms
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
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::NewProp_OnNotif = { "OnNotif", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPresence_eventSetOnFriendStatusNotif_Parms, OnNotif), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DFriendStatusNotif__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::NewProp_OnNotif,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPresence, nullptr, "SetOnFriendStatusNotif", nullptr, nullptr, sizeof(ABPresence_eventSetOnFriendStatusNotif_Parms), Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics
	{
		struct ABPresence_eventSetPresenceStatus_Parms
		{
			FAccelBytePresenceStatus Request;
			FScriptDelegate OnResponse;
			FScriptDelegate OnError;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPresence_eventSetPresenceStatus_Parms, Request), Z_Construct_UScriptStruct_FAccelBytePresenceStatus, METADATA_PARAMS(Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::NewProp_Request_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPresence_eventSetPresenceStatus_Parms, OnResponse), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DOnSetUserPresence__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPresence_eventSetPresenceStatus_Parms, OnError), Z_Construct_UDelegateFunction_AccelByteUe4Sdk_DErrorHandler__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::NewProp_OnResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::NewProp_OnError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPresence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPresence, nullptr, "SetPresenceStatus", nullptr, nullptr, sizeof(ABPresence_eventSetPresenceStatus_Parms), Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABPresence_SetPresenceStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABPresence_SetPresenceStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABPresence_NoRegister()
	{
		return UABPresence::StaticClass();
	}
	struct Z_Construct_UClass_UABPresence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABPresence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABPresence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABPresence_BulkGetUserPresence, "BulkGetUserPresence" }, // 3408939587
		{ &Z_Construct_UFunction_UABPresence_GetAllFriendsStatus, "GetAllFriendsStatus" }, // 1576967850
		{ &Z_Construct_UFunction_UABPresence_SetOnFriendStatusNotif, "SetOnFriendStatusNotif" }, // 3854141411
		{ &Z_Construct_UFunction_UABPresence_SetPresenceStatus, "SetPresenceStatus" }, // 988430965
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABPresence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABPresence.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABPresence.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABPresence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABPresence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABPresence_Statics::ClassParams = {
		&UABPresence::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABPresence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABPresence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABPresence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABPresence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABPresence, 2878598468);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABPresence>()
	{
		return UABPresence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABPresence(Z_Construct_UClass_UABPresence, &UABPresence::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UABPresence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABPresence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
