// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnManagerFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnManagerFunctionLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnManagerFunctionLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnManagerFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActorSpawnRequestHandle();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActorSpawnRequest();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSpawnRequestStatus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnSpawnRequestHandle();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnSpawnRequest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnRequestOptions();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDynamicDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPawnSpawnDynamicDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPawnSpawnRequestDoneDynamicDelegate__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
// End Cross Module References
	DEFINE_FUNCTION(USBZSpawnManagerFunctionLibrary::execGetActorRequest)
	{
		P_GET_STRUCT_REF(FSBZActorSpawnRequestHandle,Z_Param_Out_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZActorSpawnRequest*)Z_Param__Result=USBZSpawnManagerFunctionLibrary::GetActorRequest(Z_Param_Out_Handle,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnManagerFunctionLibrary::execGetActorRequestCount)
	{
		P_GET_STRUCT_REF(FSBZActorSpawnRequestHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZSpawnManagerFunctionLibrary::GetActorRequestCount(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnManagerFunctionLibrary::execGetActorRequestStatus)
	{
		P_GET_STRUCT_REF(FSBZActorSpawnRequestHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZSpawnRequestStatus*)Z_Param__Result=USBZSpawnManagerFunctionLibrary::GetActorRequestStatus(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnManagerFunctionLibrary::execGetCreatedActors)
	{
		P_GET_STRUCT_REF(FSBZActorSpawnRequestHandle,Z_Param_Out_Handle);
		P_GET_UBOOL(Z_Param_bRemoveMissingActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=USBZSpawnManagerFunctionLibrary::GetCreatedActors(Z_Param_Out_Handle,Z_Param_bRemoveMissingActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnManagerFunctionLibrary::execGetCreatedPawns)
	{
		P_GET_STRUCT_REF(FSBZPawnSpawnRequestHandle,Z_Param_Out_Handle);
		P_GET_UBOOL(Z_Param_bIncludeMissingPawns);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<APawn*>*)Z_Param__Result=USBZSpawnManagerFunctionLibrary::GetCreatedPawns(Z_Param_Out_Handle,Z_Param_bIncludeMissingPawns);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnManagerFunctionLibrary::execGetPawnRequest)
	{
		P_GET_STRUCT_REF(FSBZPawnSpawnRequestHandle,Z_Param_Out_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZPawnSpawnRequest*)Z_Param__Result=USBZSpawnManagerFunctionLibrary::GetPawnRequest(Z_Param_Out_Handle,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnManagerFunctionLibrary::execGetPawnRequestCount)
	{
		P_GET_STRUCT_REF(FSBZPawnSpawnRequestHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZSpawnManagerFunctionLibrary::GetPawnRequestCount(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnManagerFunctionLibrary::execGetPawnRequestStatus)
	{
		P_GET_STRUCT_REF(FSBZPawnSpawnRequestHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZSpawnRequestStatus*)Z_Param__Result=USBZSpawnManagerFunctionLibrary::GetPawnRequestStatus(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnManagerFunctionLibrary::execRequestActor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FSBZActorSpawnRequest,Z_Param_Out_RequestArray);
		P_GET_STRUCT(FSBZSpawnRequestOptions,Z_Param_Options);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Spawned);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_RequestDone);
		P_GET_PROPERTY(FNameProperty,Z_Param_DebugName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZActorSpawnRequestHandle*)Z_Param__Result=USBZSpawnManagerFunctionLibrary::RequestActor(Z_Param_WorldContextObject,Z_Param_Out_RequestArray,Z_Param_Options,FSBZActorSpawnRequestDynamicDelegate(Z_Param_Out_Spawned),FSBZActorSpawnRequestDoneDynamicDelegate(Z_Param_Out_RequestDone),Z_Param_DebugName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnManagerFunctionLibrary::execRequestPawn)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FSBZPawnSpawnRequest,Z_Param_Out_RequestArray);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Spawned);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_RequestDone);
		P_GET_STRUCT(FSBZSpawnRequestOptions,Z_Param_Options);
		P_GET_PROPERTY(FNameProperty,Z_Param_DebugName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZPawnSpawnRequestHandle*)Z_Param__Result=USBZSpawnManagerFunctionLibrary::RequestPawn(Z_Param_WorldContextObject,Z_Param_Out_RequestArray,FSBZPawnSpawnDynamicDelegate(Z_Param_Out_Spawned),FSBZPawnSpawnRequestDoneDynamicDelegate(Z_Param_Out_RequestDone),Z_Param_Options,Z_Param_DebugName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnManagerFunctionLibrary::execWaitForActorRequest)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FSBZActorSpawnRequestHandle,Z_Param_Handle);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZSpawnManagerFunctionLibrary::WaitForActorRequest(Z_Param_WorldContextObject,Z_Param_Handle,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnManagerFunctionLibrary::execWaitForPawnRequest)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FSBZPawnSpawnRequestHandle,Z_Param_Handle);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZSpawnManagerFunctionLibrary::WaitForPawnRequest(Z_Param_WorldContextObject,Z_Param_Handle,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	void USBZSpawnManagerFunctionLibrary::StaticRegisterNativesUSBZSpawnManagerFunctionLibrary()
	{
		UClass* Class = USBZSpawnManagerFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorRequest", &USBZSpawnManagerFunctionLibrary::execGetActorRequest },
			{ "GetActorRequestCount", &USBZSpawnManagerFunctionLibrary::execGetActorRequestCount },
			{ "GetActorRequestStatus", &USBZSpawnManagerFunctionLibrary::execGetActorRequestStatus },
			{ "GetCreatedActors", &USBZSpawnManagerFunctionLibrary::execGetCreatedActors },
			{ "GetCreatedPawns", &USBZSpawnManagerFunctionLibrary::execGetCreatedPawns },
			{ "GetPawnRequest", &USBZSpawnManagerFunctionLibrary::execGetPawnRequest },
			{ "GetPawnRequestCount", &USBZSpawnManagerFunctionLibrary::execGetPawnRequestCount },
			{ "GetPawnRequestStatus", &USBZSpawnManagerFunctionLibrary::execGetPawnRequestStatus },
			{ "RequestActor", &USBZSpawnManagerFunctionLibrary::execRequestActor },
			{ "RequestPawn", &USBZSpawnManagerFunctionLibrary::execRequestPawn },
			{ "WaitForActorRequest", &USBZSpawnManagerFunctionLibrary::execWaitForActorRequest },
			{ "WaitForPawnRequest", &USBZSpawnManagerFunctionLibrary::execWaitForPawnRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics
	{
		struct SBZSpawnManagerFunctionLibrary_eventGetActorRequest_Parms
		{
			FSBZActorSpawnRequestHandle Handle;
			int32 Index;
			FSBZActorSpawnRequest ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetActorRequest_Parms, Handle), Z_Construct_UScriptStruct_FSBZActorSpawnRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetActorRequest_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetActorRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZActorSpawnRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnManagerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnManagerFunctionLibrary, nullptr, "GetActorRequest", nullptr, nullptr, sizeof(SBZSpawnManagerFunctionLibrary_eventGetActorRequest_Parms), Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics
	{
		struct SBZSpawnManagerFunctionLibrary_eventGetActorRequestCount_Parms
		{
			FSBZActorSpawnRequestHandle Handle;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetActorRequestCount_Parms, Handle), Z_Construct_UScriptStruct_FSBZActorSpawnRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetActorRequestCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnManagerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnManagerFunctionLibrary, nullptr, "GetActorRequestCount", nullptr, nullptr, sizeof(SBZSpawnManagerFunctionLibrary_eventGetActorRequestCount_Parms), Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics
	{
		struct SBZSpawnManagerFunctionLibrary_eventGetActorRequestStatus_Parms
		{
			FSBZActorSpawnRequestHandle Handle;
			ESBZSpawnRequestStatus ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetActorRequestStatus_Parms, Handle), Z_Construct_UScriptStruct_FSBZActorSpawnRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetActorRequestStatus_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZSpawnRequestStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnManagerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnManagerFunctionLibrary, nullptr, "GetActorRequestStatus", nullptr, nullptr, sizeof(SBZSpawnManagerFunctionLibrary_eventGetActorRequestStatus_Parms), Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics
	{
		struct SBZSpawnManagerFunctionLibrary_eventGetCreatedActors_Parms
		{
			FSBZActorSpawnRequestHandle Handle;
			bool bRemoveMissingActors;
			TArray<AActor*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bRemoveMissingActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveMissingActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetCreatedActors_Parms, Handle), Z_Construct_UScriptStruct_FSBZActorSpawnRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::NewProp_Handle_MetaData)) };
	void Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::NewProp_bRemoveMissingActors_SetBit(void* Obj)
	{
		((SBZSpawnManagerFunctionLibrary_eventGetCreatedActors_Parms*)Obj)->bRemoveMissingActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::NewProp_bRemoveMissingActors = { "bRemoveMissingActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSpawnManagerFunctionLibrary_eventGetCreatedActors_Parms), &Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::NewProp_bRemoveMissingActors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetCreatedActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::NewProp_bRemoveMissingActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnManagerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnManagerFunctionLibrary, nullptr, "GetCreatedActors", nullptr, nullptr, sizeof(SBZSpawnManagerFunctionLibrary_eventGetCreatedActors_Parms), Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics
	{
		struct SBZSpawnManagerFunctionLibrary_eventGetCreatedPawns_Parms
		{
			FSBZPawnSpawnRequestHandle Handle;
			bool bIncludeMissingPawns;
			TArray<APawn*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bIncludeMissingPawns_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeMissingPawns;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetCreatedPawns_Parms, Handle), Z_Construct_UScriptStruct_FSBZPawnSpawnRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::NewProp_Handle_MetaData)) };
	void Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::NewProp_bIncludeMissingPawns_SetBit(void* Obj)
	{
		((SBZSpawnManagerFunctionLibrary_eventGetCreatedPawns_Parms*)Obj)->bIncludeMissingPawns = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::NewProp_bIncludeMissingPawns = { "bIncludeMissingPawns", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSpawnManagerFunctionLibrary_eventGetCreatedPawns_Parms), &Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::NewProp_bIncludeMissingPawns_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetCreatedPawns_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::NewProp_bIncludeMissingPawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnManagerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnManagerFunctionLibrary, nullptr, "GetCreatedPawns", nullptr, nullptr, sizeof(SBZSpawnManagerFunctionLibrary_eventGetCreatedPawns_Parms), Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics
	{
		struct SBZSpawnManagerFunctionLibrary_eventGetPawnRequest_Parms
		{
			FSBZPawnSpawnRequestHandle Handle;
			int32 Index;
			FSBZPawnSpawnRequest ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetPawnRequest_Parms, Handle), Z_Construct_UScriptStruct_FSBZPawnSpawnRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetPawnRequest_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetPawnRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZPawnSpawnRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnManagerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnManagerFunctionLibrary, nullptr, "GetPawnRequest", nullptr, nullptr, sizeof(SBZSpawnManagerFunctionLibrary_eventGetPawnRequest_Parms), Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics
	{
		struct SBZSpawnManagerFunctionLibrary_eventGetPawnRequestCount_Parms
		{
			FSBZPawnSpawnRequestHandle Handle;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetPawnRequestCount_Parms, Handle), Z_Construct_UScriptStruct_FSBZPawnSpawnRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetPawnRequestCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnManagerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnManagerFunctionLibrary, nullptr, "GetPawnRequestCount", nullptr, nullptr, sizeof(SBZSpawnManagerFunctionLibrary_eventGetPawnRequestCount_Parms), Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics
	{
		struct SBZSpawnManagerFunctionLibrary_eventGetPawnRequestStatus_Parms
		{
			FSBZPawnSpawnRequestHandle Handle;
			ESBZSpawnRequestStatus ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetPawnRequestStatus_Parms, Handle), Z_Construct_UScriptStruct_FSBZPawnSpawnRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventGetPawnRequestStatus_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZSpawnRequestStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnManagerFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnManagerFunctionLibrary, nullptr, "GetPawnRequestStatus", nullptr, nullptr, sizeof(SBZSpawnManagerFunctionLibrary_eventGetPawnRequestStatus_Parms), Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics
	{
		struct SBZSpawnManagerFunctionLibrary_eventRequestActor_Parms
		{
			const UObject* WorldContextObject;
			TArray<FSBZActorSpawnRequest> RequestArray;
			FSBZSpawnRequestOptions Options;
			FScriptDelegate Spawned;
			FScriptDelegate RequestDone;
			FName DebugName;
			FSBZActorSpawnRequestHandle ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequestArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Spawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestDone_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_RequestDone;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventRequestActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_RequestArray_Inner = { "RequestArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZActorSpawnRequest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_RequestArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_RequestArray = { "RequestArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventRequestActor_Parms, RequestArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_RequestArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_RequestArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventRequestActor_Parms, Options), Z_Construct_UScriptStruct_FSBZSpawnRequestOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_Spawned_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_Spawned = { "Spawned", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventRequestActor_Parms, Spawned), Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_Spawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_Spawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_RequestDone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_RequestDone = { "RequestDone", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventRequestActor_Parms, RequestDone), Z_Construct_UDelegateFunction_Starbreeze_SBZActorSpawnRequestDoneDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_RequestDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_RequestDone_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventRequestActor_Parms, DebugName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventRequestActor_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZActorSpawnRequestHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_RequestArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_RequestArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_Spawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_RequestDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_DebugName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnManagerFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnManagerFunctionLibrary, nullptr, "RequestActor", nullptr, nullptr, sizeof(SBZSpawnManagerFunctionLibrary_eventRequestActor_Parms), Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics
	{
		struct SBZSpawnManagerFunctionLibrary_eventRequestPawn_Parms
		{
			const UObject* WorldContextObject;
			TArray<FSBZPawnSpawnRequest> RequestArray;
			FScriptDelegate Spawned;
			FScriptDelegate RequestDone;
			FSBZSpawnRequestOptions Options;
			FName DebugName;
			FSBZPawnSpawnRequestHandle ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequestArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Spawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestDone_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_RequestDone;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventRequestPawn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_RequestArray_Inner = { "RequestArray", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPawnSpawnRequest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_RequestArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_RequestArray = { "RequestArray", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventRequestPawn_Parms, RequestArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_RequestArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_RequestArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_Spawned_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_Spawned = { "Spawned", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventRequestPawn_Parms, Spawned), Z_Construct_UDelegateFunction_Starbreeze_SBZPawnSpawnDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_Spawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_Spawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_RequestDone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_RequestDone = { "RequestDone", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventRequestPawn_Parms, RequestDone), Z_Construct_UDelegateFunction_Starbreeze_SBZPawnSpawnRequestDoneDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_RequestDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_RequestDone_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventRequestPawn_Parms, Options), Z_Construct_UScriptStruct_FSBZSpawnRequestOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventRequestPawn_Parms, DebugName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventRequestPawn_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZPawnSpawnRequestHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_RequestArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_RequestArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_Spawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_RequestDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_DebugName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnManagerFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnManagerFunctionLibrary, nullptr, "RequestPawn", nullptr, nullptr, sizeof(SBZSpawnManagerFunctionLibrary_eventRequestPawn_Parms), Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics
	{
		struct SBZSpawnManagerFunctionLibrary_eventWaitForActorRequest_Parms
		{
			const UObject* WorldContextObject;
			FSBZActorSpawnRequestHandle Handle;
			FLatentActionInfo LatentInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventWaitForActorRequest_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventWaitForActorRequest_Parms, Handle), Z_Construct_UScriptStruct_FSBZActorSpawnRequestHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventWaitForActorRequest_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SBZSpawnManagerFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnManagerFunctionLibrary, nullptr, "WaitForActorRequest", nullptr, nullptr, sizeof(SBZSpawnManagerFunctionLibrary_eventWaitForActorRequest_Parms), Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics
	{
		struct SBZSpawnManagerFunctionLibrary_eventWaitForPawnRequest_Parms
		{
			const UObject* WorldContextObject;
			FSBZPawnSpawnRequestHandle Handle;
			FLatentActionInfo LatentInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventWaitForPawnRequest_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventWaitForPawnRequest_Parms, Handle), Z_Construct_UScriptStruct_FSBZPawnSpawnRequestHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManagerFunctionLibrary_eventWaitForPawnRequest_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SBZSpawnManagerFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnManagerFunctionLibrary, nullptr, "WaitForPawnRequest", nullptr, nullptr, sizeof(SBZSpawnManagerFunctionLibrary_eventWaitForPawnRequest_Parms), Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSpawnManagerFunctionLibrary_NoRegister()
	{
		return USBZSpawnManagerFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZSpawnManagerFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSpawnManagerFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSpawnManagerFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequest, "GetActorRequest" }, // 3243700932
		{ &Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestCount, "GetActorRequestCount" }, // 363866551
		{ &Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetActorRequestStatus, "GetActorRequestStatus" }, // 4114805033
		{ &Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedActors, "GetCreatedActors" }, // 1073059156
		{ &Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetCreatedPawns, "GetCreatedPawns" }, // 2354553386
		{ &Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequest, "GetPawnRequest" }, // 290565542
		{ &Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestCount, "GetPawnRequestCount" }, // 4195535755
		{ &Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_GetPawnRequestStatus, "GetPawnRequestStatus" }, // 3840581461
		{ &Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestActor, "RequestActor" }, // 4020880913
		{ &Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_RequestPawn, "RequestPawn" }, // 768113690
		{ &Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForActorRequest, "WaitForActorRequest" }, // 861174554
		{ &Z_Construct_UFunction_USBZSpawnManagerFunctionLibrary_WaitForPawnRequest, "WaitForPawnRequest" }, // 3484974220
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnManagerFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSpawnManagerFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnManagerFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSpawnManagerFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSpawnManagerFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSpawnManagerFunctionLibrary_Statics::ClassParams = {
		&USBZSpawnManagerFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSpawnManagerFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnManagerFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSpawnManagerFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSpawnManagerFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSpawnManagerFunctionLibrary, 1394988080);
	template<> STARBREEZE_API UClass* StaticClass<USBZSpawnManagerFunctionLibrary>()
	{
		return USBZSpawnManagerFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSpawnManagerFunctionLibrary(Z_Construct_UClass_USBZSpawnManagerFunctionLibrary, &USBZSpawnManagerFunctionLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSpawnManagerFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSpawnManagerFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
