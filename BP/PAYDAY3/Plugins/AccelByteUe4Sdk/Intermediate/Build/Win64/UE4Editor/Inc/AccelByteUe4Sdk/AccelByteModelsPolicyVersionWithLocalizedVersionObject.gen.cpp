// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPolicyVersionWithLocalizedVersionObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsPolicyVersionWithLocalizedVersionObject() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject();
// End Cross Module References
class UScriptStruct* FAccelByteModelsPolicyVersionWithLocalizedVersionObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsPolicyVersionWithLocalizedVersionObject"), sizeof(FAccelByteModelsPolicyVersionWithLocalizedVersionObject), Get_Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsPolicyVersionWithLocalizedVersionObject>()
{
	return FAccelByteModelsPolicyVersionWithLocalizedVersionObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject(FAccelByteModelsPolicyVersionWithLocalizedVersionObject::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsPolicyVersionWithLocalizedVersionObject"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPolicyVersionWithLocalizedVersionObject
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPolicyVersionWithLocalizedVersionObject()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsPolicyVersionWithLocalizedVersionObject>(FName(TEXT("AccelByteModelsPolicyVersionWithLocalizedVersionObject")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPolicyVersionWithLocalizedVersionObject;
	struct Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayVersion;
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalizedPolicyVersions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedPolicyVersions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedPolicyVersions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCommitted_MetaData[];
#endif
		static void NewProp_IsCommitted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCommitted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCrucial_MetaData[];
#endif
		static void NewProp_IsCrucial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCrucial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInEffect_MetaData[];
#endif
		static void NewProp_IsInEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPolicyVersionWithLocalizedVersionObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsPolicyVersionWithLocalizedVersionObject>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPolicyVersionWithLocalizedVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPolicyVersionWithLocalizedVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPolicyVersionWithLocalizedVersionObject, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPolicyVersionWithLocalizedVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPolicyVersionWithLocalizedVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPolicyVersionWithLocalizedVersionObject, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_UpdatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPolicyVersionWithLocalizedVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPolicyVersionWithLocalizedVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_UpdatedAt = { "UpdatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPolicyVersionWithLocalizedVersionObject, UpdatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_UpdatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_UpdatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_DisplayVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPolicyVersionWithLocalizedVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPolicyVersionWithLocalizedVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_DisplayVersion = { "DisplayVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPolicyVersionWithLocalizedVersionObject, DisplayVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_DisplayVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_DisplayVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPolicyVersionWithLocalizedVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPolicyVersionWithLocalizedVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPolicyVersionWithLocalizedVersionObject, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPolicyVersionWithLocalizedVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPolicyVersionWithLocalizedVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPolicyVersionWithLocalizedVersionObject, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_PublishedDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPolicyVersionWithLocalizedVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPolicyVersionWithLocalizedVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_PublishedDate = { "PublishedDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPolicyVersionWithLocalizedVersionObject, PublishedDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_PublishedDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_PublishedDate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_LocalizedPolicyVersions_Inner = { "LocalizedPolicyVersions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsLocalizedPolicyVersionObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_LocalizedPolicyVersions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPolicyVersionWithLocalizedVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPolicyVersionWithLocalizedVersionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_LocalizedPolicyVersions = { "LocalizedPolicyVersions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPolicyVersionWithLocalizedVersionObject, LocalizedPolicyVersions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_LocalizedPolicyVersions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_LocalizedPolicyVersions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsCommitted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPolicyVersionWithLocalizedVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPolicyVersionWithLocalizedVersionObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsCommitted_SetBit(void* Obj)
	{
		((FAccelByteModelsPolicyVersionWithLocalizedVersionObject*)Obj)->IsCommitted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsCommitted = { "IsCommitted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsPolicyVersionWithLocalizedVersionObject), &Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsCommitted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsCommitted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsCommitted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsCrucial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPolicyVersionWithLocalizedVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPolicyVersionWithLocalizedVersionObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsCrucial_SetBit(void* Obj)
	{
		((FAccelByteModelsPolicyVersionWithLocalizedVersionObject*)Obj)->IsCrucial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsCrucial = { "IsCrucial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsPolicyVersionWithLocalizedVersionObject), &Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsCrucial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsCrucial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsCrucial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsInEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPolicyVersionWithLocalizedVersionObject" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPolicyVersionWithLocalizedVersionObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsInEffect_SetBit(void* Obj)
	{
		((FAccelByteModelsPolicyVersionWithLocalizedVersionObject*)Obj)->IsInEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsInEffect = { "IsInEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsPolicyVersionWithLocalizedVersionObject), &Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsInEffect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsInEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsInEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_UpdatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_DisplayVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_PublishedDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_LocalizedPolicyVersions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_LocalizedPolicyVersions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsCommitted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsCrucial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::NewProp_IsInEffect,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsPolicyVersionWithLocalizedVersionObject",
		sizeof(FAccelByteModelsPolicyVersionWithLocalizedVersionObject),
		alignof(FAccelByteModelsPolicyVersionWithLocalizedVersionObject),
		Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsPolicyVersionWithLocalizedVersionObject"), sizeof(FAccelByteModelsPolicyVersionWithLocalizedVersionObject), Get_Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPolicyVersionWithLocalizedVersionObject_Hash() { return 2406780861U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
