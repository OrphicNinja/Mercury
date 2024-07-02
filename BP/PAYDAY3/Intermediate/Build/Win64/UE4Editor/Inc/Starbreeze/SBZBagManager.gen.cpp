// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBagManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBagManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagType_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagPersistentData();
// End Cross Module References
	DEFINE_FUNCTION(USBZBagManager::execClaimBag)
	{
		P_GET_STRUCT(FSBZBagHandle,Z_Param_Handle);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClaimBag(Z_Param_Handle,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBagManager::execCreateBag)
	{
		P_GET_OBJECT(USBZBagType,Z_Param_BagType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZBagHandle*)Z_Param__Result=P_THIS->CreateBag(Z_Param_BagType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBagManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZBagManager**)Z_Param__Result=USBZBagManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBagManager::execGetValidBagData)
	{
		P_GET_STRUCT(FSBZBagHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZBagPersistentData*)Z_Param__Result=P_THIS->GetValidBagData(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBagManager::execIsValidHandle)
	{
		P_GET_STRUCT_REF(FSBZBagHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidHandle(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBagManager::execMulticast_ClaimBag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BagId);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ClaimBag_Implementation(Z_Param_BagId,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBagManager::execMulticast_CreateBag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BagId);
		P_GET_OBJECT(USBZBagType,Z_Param_BagType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_CreateBag_Implementation(Z_Param_BagId,Z_Param_BagType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBagManager::execMulticast_CreateBagArray)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FirstBagId);
		P_GET_OBJECT(USBZBagType,Z_Param_BagType);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfBags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_CreateBagArray_Implementation(Z_Param_FirstBagId,Z_Param_BagType,Z_Param_NumberOfBags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBagManager::execMulticast_RemoveBag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BagId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RemoveBag_Implementation(Z_Param_BagId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBagManager::execMulticast_RemoveClaim)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BagId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RemoveClaim_Implementation(Z_Param_BagId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBagManager::execMulticast_SecureBag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BagId);
		P_GET_UBOOL(Z_Param_bClearClaim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SecureBag_Implementation(Z_Param_BagId,Z_Param_bClearClaim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBagManager::execOnRep_Bags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Bags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBagManager::execRemoveClaim)
	{
		P_GET_STRUCT(FSBZBagHandle,Z_Param_Handle);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveClaim(Z_Param_Handle,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBagManager::execSecureBag)
	{
		P_GET_STRUCT(FSBZBagHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bClearClaim);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SecureBag(Z_Param_Handle,Z_Param_bClearClaim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBagManager::execTryRemoveClaim)
	{
		P_GET_STRUCT(FSBZBagHandle,Z_Param_Handle);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryRemoveClaim(Z_Param_Handle,Z_Param_Actor);
		P_NATIVE_END;
	}
	static FName NAME_USBZBagManager_Multicast_ClaimBag = FName(TEXT("Multicast_ClaimBag"));
	void USBZBagManager::Multicast_ClaimBag(const int32 BagId, AActor* Actor)
	{
		SBZBagManager_eventMulticast_ClaimBag_Parms Parms;
		Parms.BagId=BagId;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_USBZBagManager_Multicast_ClaimBag),&Parms);
	}
	static FName NAME_USBZBagManager_Multicast_CreateBag = FName(TEXT("Multicast_CreateBag"));
	void USBZBagManager::Multicast_CreateBag(const int32 BagId, const USBZBagType* BagType)
	{
		SBZBagManager_eventMulticast_CreateBag_Parms Parms;
		Parms.BagId=BagId;
		Parms.BagType=BagType;
		ProcessEvent(FindFunctionChecked(NAME_USBZBagManager_Multicast_CreateBag),&Parms);
	}
	static FName NAME_USBZBagManager_Multicast_CreateBagArray = FName(TEXT("Multicast_CreateBagArray"));
	void USBZBagManager::Multicast_CreateBagArray(const int32 FirstBagId, const USBZBagType* BagType, const int32 NumberOfBags)
	{
		SBZBagManager_eventMulticast_CreateBagArray_Parms Parms;
		Parms.FirstBagId=FirstBagId;
		Parms.BagType=BagType;
		Parms.NumberOfBags=NumberOfBags;
		ProcessEvent(FindFunctionChecked(NAME_USBZBagManager_Multicast_CreateBagArray),&Parms);
	}
	static FName NAME_USBZBagManager_Multicast_RemoveBag = FName(TEXT("Multicast_RemoveBag"));
	void USBZBagManager::Multicast_RemoveBag(const int32 BagId)
	{
		SBZBagManager_eventMulticast_RemoveBag_Parms Parms;
		Parms.BagId=BagId;
		ProcessEvent(FindFunctionChecked(NAME_USBZBagManager_Multicast_RemoveBag),&Parms);
	}
	static FName NAME_USBZBagManager_Multicast_RemoveClaim = FName(TEXT("Multicast_RemoveClaim"));
	void USBZBagManager::Multicast_RemoveClaim(const int32 BagId)
	{
		SBZBagManager_eventMulticast_RemoveClaim_Parms Parms;
		Parms.BagId=BagId;
		ProcessEvent(FindFunctionChecked(NAME_USBZBagManager_Multicast_RemoveClaim),&Parms);
	}
	static FName NAME_USBZBagManager_Multicast_SecureBag = FName(TEXT("Multicast_SecureBag"));
	void USBZBagManager::Multicast_SecureBag(const int32 BagId, bool bClearClaim)
	{
		SBZBagManager_eventMulticast_SecureBag_Parms Parms;
		Parms.BagId=BagId;
		Parms.bClearClaim=bClearClaim ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZBagManager_Multicast_SecureBag),&Parms);
	}
	void USBZBagManager::StaticRegisterNativesUSBZBagManager()
	{
		UClass* Class = USBZBagManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClaimBag", &USBZBagManager::execClaimBag },
			{ "CreateBag", &USBZBagManager::execCreateBag },
			{ "Get", &USBZBagManager::execGet },
			{ "GetValidBagData", &USBZBagManager::execGetValidBagData },
			{ "IsValidHandle", &USBZBagManager::execIsValidHandle },
			{ "Multicast_ClaimBag", &USBZBagManager::execMulticast_ClaimBag },
			{ "Multicast_CreateBag", &USBZBagManager::execMulticast_CreateBag },
			{ "Multicast_CreateBagArray", &USBZBagManager::execMulticast_CreateBagArray },
			{ "Multicast_RemoveBag", &USBZBagManager::execMulticast_RemoveBag },
			{ "Multicast_RemoveClaim", &USBZBagManager::execMulticast_RemoveClaim },
			{ "Multicast_SecureBag", &USBZBagManager::execMulticast_SecureBag },
			{ "OnRep_Bags", &USBZBagManager::execOnRep_Bags },
			{ "RemoveClaim", &USBZBagManager::execRemoveClaim },
			{ "SecureBag", &USBZBagManager::execSecureBag },
			{ "TryRemoveClaim", &USBZBagManager::execTryRemoveClaim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics
	{
		struct SBZBagManager_eventClaimBag_Parms
		{
			FSBZBagHandle Handle;
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventClaimBag_Parms, Handle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventClaimBag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBagManager_eventClaimBag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagManager_eventClaimBag_Parms), &Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagManager, nullptr, "ClaimBag", nullptr, nullptr, sizeof(SBZBagManager_eventClaimBag_Parms), Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagManager_ClaimBag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagManager_ClaimBag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBagManager_CreateBag_Statics
	{
		struct SBZBagManager_eventCreateBag_Parms
		{
			const USBZBagType* BagType;
			FSBZBagHandle ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_CreateBag_Statics::NewProp_BagType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBagManager_CreateBag_Statics::NewProp_BagType = { "BagType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventCreateBag_Parms, BagType), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_CreateBag_Statics::NewProp_BagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_CreateBag_Statics::NewProp_BagType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBagManager_CreateBag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventCreateBag_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBagManager_CreateBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_CreateBag_Statics::NewProp_BagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_CreateBag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_CreateBag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagManager_CreateBag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagManager, nullptr, "CreateBag", nullptr, nullptr, sizeof(SBZBagManager_eventCreateBag_Parms), Z_Construct_UFunction_USBZBagManager_CreateBag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_CreateBag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_CreateBag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_CreateBag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagManager_CreateBag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagManager_CreateBag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBagManager_Get_Statics
	{
		struct SBZBagManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZBagManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBagManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Get_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBagManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZBagManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Get_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Get_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBagManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZBagManager_eventGet_Parms), Z_Construct_UFunction_USBZBagManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBagManager_GetValidBagData_Statics
	{
		struct SBZBagManager_eventGetValidBagData_Parms
		{
			FSBZBagHandle Handle;
			FSBZBagPersistentData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBagManager_GetValidBagData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventGetValidBagData_Parms, Handle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBagManager_GetValidBagData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventGetValidBagData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZBagPersistentData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBagManager_GetValidBagData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_GetValidBagData_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_GetValidBagData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_GetValidBagData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagManager_GetValidBagData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagManager, nullptr, "GetValidBagData", nullptr, nullptr, sizeof(SBZBagManager_eventGetValidBagData_Parms), Z_Construct_UFunction_USBZBagManager_GetValidBagData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_GetValidBagData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_GetValidBagData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_GetValidBagData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagManager_GetValidBagData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagManager_GetValidBagData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics
	{
		struct SBZBagManager_eventIsValidHandle_Parms
		{
			FSBZBagHandle Handle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventIsValidHandle_Parms, Handle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::NewProp_Handle_MetaData)) };
	void Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBagManager_eventIsValidHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagManager_eventIsValidHandle_Parms), &Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagManager, nullptr, "IsValidHandle", nullptr, nullptr, sizeof(SBZBagManager_eventIsValidHandle_Parms), Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagManager_IsValidHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagManager_IsValidHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BagId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics::NewProp_BagId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics::NewProp_BagId = { "BagId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventMulticast_ClaimBag_Parms, BagId), METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics::NewProp_BagId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics::NewProp_BagId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventMulticast_ClaimBag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics::NewProp_BagId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagManager, nullptr, "Multicast_ClaimBag", nullptr, nullptr, sizeof(SBZBagManager_eventMulticast_ClaimBag_Parms), Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BagId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::NewProp_BagId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::NewProp_BagId = { "BagId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventMulticast_CreateBag_Parms, BagId), METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::NewProp_BagId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::NewProp_BagId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::NewProp_BagType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::NewProp_BagType = { "BagType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventMulticast_CreateBag_Parms, BagType), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::NewProp_BagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::NewProp_BagType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::NewProp_BagId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::NewProp_BagType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagManager, nullptr, "Multicast_CreateBag", nullptr, nullptr, sizeof(SBZBagManager_eventMulticast_CreateBag_Parms), Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstBagId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstBagId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfBags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfBags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::NewProp_FirstBagId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::NewProp_FirstBagId = { "FirstBagId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventMulticast_CreateBagArray_Parms, FirstBagId), METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::NewProp_FirstBagId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::NewProp_FirstBagId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::NewProp_BagType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::NewProp_BagType = { "BagType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventMulticast_CreateBagArray_Parms, BagType), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::NewProp_BagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::NewProp_BagType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::NewProp_NumberOfBags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::NewProp_NumberOfBags = { "NumberOfBags", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventMulticast_CreateBagArray_Parms, NumberOfBags), METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::NewProp_NumberOfBags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::NewProp_NumberOfBags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::NewProp_FirstBagId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::NewProp_BagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::NewProp_NumberOfBags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagManager, nullptr, "Multicast_CreateBagArray", nullptr, nullptr, sizeof(SBZBagManager_eventMulticast_CreateBagArray_Parms), Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BagId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag_Statics::NewProp_BagId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag_Statics::NewProp_BagId = { "BagId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventMulticast_RemoveBag_Parms, BagId), METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag_Statics::NewProp_BagId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag_Statics::NewProp_BagId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag_Statics::NewProp_BagId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagManager, nullptr, "Multicast_RemoveBag", nullptr, nullptr, sizeof(SBZBagManager_eventMulticast_RemoveBag_Parms), Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BagId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim_Statics::NewProp_BagId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim_Statics::NewProp_BagId = { "BagId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventMulticast_RemoveClaim_Parms, BagId), METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim_Statics::NewProp_BagId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim_Statics::NewProp_BagId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim_Statics::NewProp_BagId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagManager, nullptr, "Multicast_RemoveClaim", nullptr, nullptr, sizeof(SBZBagManager_eventMulticast_RemoveClaim_Parms), Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BagId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearClaim_MetaData[];
#endif
		static void NewProp_bClearClaim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearClaim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::NewProp_BagId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::NewProp_BagId = { "BagId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventMulticast_SecureBag_Parms, BagId), METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::NewProp_BagId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::NewProp_BagId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::NewProp_bClearClaim_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::NewProp_bClearClaim_SetBit(void* Obj)
	{
		((SBZBagManager_eventMulticast_SecureBag_Parms*)Obj)->bClearClaim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::NewProp_bClearClaim = { "bClearClaim", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagManager_eventMulticast_SecureBag_Parms), &Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::NewProp_bClearClaim_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::NewProp_bClearClaim_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::NewProp_bClearClaim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::NewProp_BagId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::NewProp_bClearClaim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagManager, nullptr, "Multicast_SecureBag", nullptr, nullptr, sizeof(SBZBagManager_eventMulticast_SecureBag_Parms), Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBagManager_OnRep_Bags_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_OnRep_Bags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagManager_OnRep_Bags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagManager, nullptr, "OnRep_Bags", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_OnRep_Bags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_OnRep_Bags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagManager_OnRep_Bags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagManager_OnRep_Bags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics
	{
		struct SBZBagManager_eventRemoveClaim_Parms
		{
			FSBZBagHandle Handle;
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventRemoveClaim_Parms, Handle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventRemoveClaim_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBagManager_eventRemoveClaim_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagManager_eventRemoveClaim_Parms), &Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagManager, nullptr, "RemoveClaim", nullptr, nullptr, sizeof(SBZBagManager_eventRemoveClaim_Parms), Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagManager_RemoveClaim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagManager_RemoveClaim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBagManager_SecureBag_Statics
	{
		struct SBZBagManager_eventSecureBag_Parms
		{
			FSBZBagHandle Handle;
			bool bClearClaim;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bClearClaim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearClaim;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventSecureBag_Parms, Handle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::NewProp_bClearClaim_SetBit(void* Obj)
	{
		((SBZBagManager_eventSecureBag_Parms*)Obj)->bClearClaim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::NewProp_bClearClaim = { "bClearClaim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagManager_eventSecureBag_Parms), &Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::NewProp_bClearClaim_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBagManager_eventSecureBag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagManager_eventSecureBag_Parms), &Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::NewProp_bClearClaim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagManager, nullptr, "SecureBag", nullptr, nullptr, sizeof(SBZBagManager_eventSecureBag_Parms), Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagManager_SecureBag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagManager_SecureBag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics
	{
		struct SBZBagManager_eventTryRemoveClaim_Parms
		{
			FSBZBagHandle Handle;
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventTryRemoveClaim_Parms, Handle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagManager_eventTryRemoveClaim_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBagManager_eventTryRemoveClaim_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagManager_eventTryRemoveClaim_Parms), &Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagManager, nullptr, "TryRemoveClaim", nullptr, nullptr, sizeof(SBZBagManager_eventTryRemoveClaim_Parms), Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagManager_TryRemoveClaim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagManager_TryRemoveClaim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBagManager_NoRegister()
	{
		return USBZBagManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZBagManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBagManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBagManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBagManager_ClaimBag, "ClaimBag" }, // 1776436919
		{ &Z_Construct_UFunction_USBZBagManager_CreateBag, "CreateBag" }, // 2259697769
		{ &Z_Construct_UFunction_USBZBagManager_Get, "Get" }, // 1880848466
		{ &Z_Construct_UFunction_USBZBagManager_GetValidBagData, "GetValidBagData" }, // 3603935149
		{ &Z_Construct_UFunction_USBZBagManager_IsValidHandle, "IsValidHandle" }, // 387778351
		{ &Z_Construct_UFunction_USBZBagManager_Multicast_ClaimBag, "Multicast_ClaimBag" }, // 2269420949
		{ &Z_Construct_UFunction_USBZBagManager_Multicast_CreateBag, "Multicast_CreateBag" }, // 2071782905
		{ &Z_Construct_UFunction_USBZBagManager_Multicast_CreateBagArray, "Multicast_CreateBagArray" }, // 2534001625
		{ &Z_Construct_UFunction_USBZBagManager_Multicast_RemoveBag, "Multicast_RemoveBag" }, // 354697147
		{ &Z_Construct_UFunction_USBZBagManager_Multicast_RemoveClaim, "Multicast_RemoveClaim" }, // 3499121019
		{ &Z_Construct_UFunction_USBZBagManager_Multicast_SecureBag, "Multicast_SecureBag" }, // 3329742452
		{ &Z_Construct_UFunction_USBZBagManager_OnRep_Bags, "OnRep_Bags" }, // 2315156240
		{ &Z_Construct_UFunction_USBZBagManager_RemoveClaim, "RemoveClaim" }, // 817314431
		{ &Z_Construct_UFunction_USBZBagManager_SecureBag, "SecureBag" }, // 3680691783
		{ &Z_Construct_UFunction_USBZBagManager_TryRemoveClaim, "TryRemoveClaim" }, // 1974309583
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZBagManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBagManager_Statics::NewProp_Bags_Inner = { "Bags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZBagPersistentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagManager_Statics::NewProp_Bags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagManager" },
		{ "ModuleRelativePath", "Public/SBZBagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBagManager_Statics::NewProp_Bags = { "Bags", "OnRep_Bags", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBagManager, Bags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBagManager_Statics::NewProp_Bags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagManager_Statics::NewProp_Bags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBagManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagManager_Statics::NewProp_Bags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagManager_Statics::NewProp_Bags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBagManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBagManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBagManager_Statics::ClassParams = {
		&USBZBagManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBagManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagManager_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBagManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBagManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBagManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBagManager, 3375878029);
	template<> STARBREEZE_API UClass* StaticClass<USBZBagManager>()
	{
		return USBZBagManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBagManager(Z_Construct_UClass_USBZBagManager, &USBZBagManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBagManager"), false, nullptr, nullptr, nullptr);

	void USBZBagManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Bags(TEXT("Bags"));

		const bool bIsValid = true
			&& Name_Bags == ClassReps[(int32)ENetFields_Private::Bags].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZBagManager"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBagManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
