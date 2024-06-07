// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsLocalizedPolicyVersionObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsLocalizedPolicyVersionObject() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsLocalizedPolicyVersionObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsLocalizedPolicyVersionObject"), sizeof(FAccelByteModelsLocalizedPolicyVersionObject), Get_Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsLocalizedPolicyVersionObject>()
{
	return FAccelByteModelsLocalizedPolicyVersionObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject(FAccelByteModelsLocalizedPolicyVersionObject::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsLocalizedPolicyVersionObject"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsLocalizedPolicyVersionObject
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsLocalizedPolicyVersionObject()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsLocalizedPolicyVersionObject>(FName(TEXT("AccelByteModelsLocalizedPolicyVersionObject")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsLocalizedPolicyVersionObject;
	struct Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocaleCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocaleCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttachmentLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentVersionIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttachmentVersionIdentifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDefaultSelection_MetaData[];
#endif
		static void NewProp_IsDefaultSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDefaultSelection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLocalizedPolicyVersionObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsLocalizedPolicyVersionObject>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLocalizedPolicyVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLocalizedPolicyVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLocalizedPolicyVersionObject, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLocalizedPolicyVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLocalizedPolicyVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLocalizedPolicyVersionObject, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_UpdatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLocalizedPolicyVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLocalizedPolicyVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_UpdatedAt = { "UpdatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLocalizedPolicyVersionObject, UpdatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_UpdatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_UpdatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_LocaleCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLocalizedPolicyVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLocalizedPolicyVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_LocaleCode = { "LocaleCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLocalizedPolicyVersionObject, LocaleCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_LocaleCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_LocaleCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_ContentType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLocalizedPolicyVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLocalizedPolicyVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLocalizedPolicyVersionObject, ContentType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_ContentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_AttachmentLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLocalizedPolicyVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLocalizedPolicyVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_AttachmentLocation = { "AttachmentLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLocalizedPolicyVersionObject, AttachmentLocation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_AttachmentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_AttachmentLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_AttachmentVersionIdentifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLocalizedPolicyVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLocalizedPolicyVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_AttachmentVersionIdentifier = { "AttachmentVersionIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLocalizedPolicyVersionObject, AttachmentVersionIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_AttachmentVersionIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_AttachmentVersionIdentifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLocalizedPolicyVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLocalizedPolicyVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLocalizedPolicyVersionObject, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLocalizedPolicyVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLocalizedPolicyVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLocalizedPolicyVersionObject, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_PublishedDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLocalizedPolicyVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLocalizedPolicyVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_PublishedDate = { "PublishedDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsLocalizedPolicyVersionObject, PublishedDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_PublishedDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_PublishedDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_IsDefaultSelection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsLocalizedPolicyVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsLocalizedPolicyVersionObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_IsDefaultSelection_SetBit(void* Obj)
	{
		((FAccelByteModelsLocalizedPolicyVersionObject*)Obj)->IsDefaultSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_IsDefaultSelection = { "IsDefaultSelection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsLocalizedPolicyVersionObject), &Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_IsDefaultSelection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_IsDefaultSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_IsDefaultSelection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_UpdatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_LocaleCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_ContentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_AttachmentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_AttachmentVersionIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_PublishedDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::NewProp_IsDefaultSelection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsLocalizedPolicyVersionObject",
		sizeof(FAccelByteModelsLocalizedPolicyVersionObject),
		alignof(FAccelByteModelsLocalizedPolicyVersionObject),
		Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsLocalizedPolicyVersionObject"), sizeof(FAccelByteModelsLocalizedPolicyVersionObject), Get_Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject_Hash() { return 3138878525U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
