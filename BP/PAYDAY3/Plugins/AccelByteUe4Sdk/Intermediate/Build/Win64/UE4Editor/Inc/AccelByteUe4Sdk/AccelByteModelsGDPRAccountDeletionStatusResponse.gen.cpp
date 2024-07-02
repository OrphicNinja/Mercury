// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsGDPRAccountDeletionStatusResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsGDPRAccountDeletionStatusResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsGDPRAccountDeletionStatusResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsGDPRAccountDeletionStatusResponse"), sizeof(FAccelByteModelsGDPRAccountDeletionStatusResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsGDPRAccountDeletionStatusResponse>()
{
	return FAccelByteModelsGDPRAccountDeletionStatusResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse(FAccelByteModelsGDPRAccountDeletionStatusResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsGDPRAccountDeletionStatusResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGDPRAccountDeletionStatusResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGDPRAccountDeletionStatusResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsGDPRAccountDeletionStatusResponse>(FName(TEXT("AccelByteModelsGDPRAccountDeletionStatusResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGDPRAccountDeletionStatusResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeletionDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeletionDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeletionStatus_MetaData[];
#endif
		static void NewProp_DeletionStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DeletionStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExecutionDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGDPRAccountDeletionStatusResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsGDPRAccountDeletionStatusResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DeletionDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGDPRAccountDeletionStatusResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGDPRAccountDeletionStatusResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DeletionDate = { "DeletionDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGDPRAccountDeletionStatusResponse, DeletionDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DeletionDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DeletionDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DeletionStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGDPRAccountDeletionStatusResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGDPRAccountDeletionStatusResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DeletionStatus_SetBit(void* Obj)
	{
		((FAccelByteModelsGDPRAccountDeletionStatusResponse*)Obj)->DeletionStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DeletionStatus = { "DeletionStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsGDPRAccountDeletionStatusResponse), &Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DeletionStatus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DeletionStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DeletionStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGDPRAccountDeletionStatusResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGDPRAccountDeletionStatusResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGDPRAccountDeletionStatusResponse, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_ExecutionDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGDPRAccountDeletionStatusResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGDPRAccountDeletionStatusResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_ExecutionDate = { "ExecutionDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGDPRAccountDeletionStatusResponse, ExecutionDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_ExecutionDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_ExecutionDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGDPRAccountDeletionStatusResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGDPRAccountDeletionStatusResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGDPRAccountDeletionStatusResponse, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_UserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGDPRAccountDeletionStatusResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGDPRAccountDeletionStatusResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGDPRAccountDeletionStatusResponse, UserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_UserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_UserID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DeletionDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DeletionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_ExecutionDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::NewProp_UserID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsGDPRAccountDeletionStatusResponse",
		sizeof(FAccelByteModelsGDPRAccountDeletionStatusResponse),
		alignof(FAccelByteModelsGDPRAccountDeletionStatusResponse),
		Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsGDPRAccountDeletionStatusResponse"), sizeof(FAccelByteModelsGDPRAccountDeletionStatusResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGDPRAccountDeletionStatusResponse_Hash() { return 3113055648U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
