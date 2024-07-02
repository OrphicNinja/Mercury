// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRappellingRopeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRappellingRopeSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRappellingRopeSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRappellingRope_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCablePointAttachment();
// End Cross Module References
class UScriptStruct* FSBZRappellingRopeSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRappellingRopeSettings"), sizeof(FSBZRappellingRopeSettings), Get_Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRappellingRopeSettings>()
{
	return FSBZRappellingRopeSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRappellingRopeSettings(FSBZRappellingRopeSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRappellingRopeSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRappellingRopeSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRappellingRopeSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZRappellingRopeSettings>(FName(TEXT("SBZRappellingRopeSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRappellingRopeSettings;
	struct Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RappellingRopeClassToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RappellingRopeClassToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DespawnDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DespawnDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttachStart_MetaData[];
#endif
		static void NewProp_bAttachStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttachStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartAttachment;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointAttachments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointAttachments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointAttachments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttachEnd_MetaData[];
#endif
		static void NewProp_bAttachEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttachEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollisionPlane_MetaData[];
#endif
		static void NewProp_bEnableCollisionPlane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollisionPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStiffness_MetaData[];
#endif
		static void NewProp_bEnableStiffness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSegmentLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSegmentLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSegmentCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSegmentCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRappellingRopeSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_RappellingRopeClassToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRopeSettings" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_RappellingRopeClassToSpawn = { "RappellingRopeClassToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRappellingRopeSettings, RappellingRopeClassToSpawn), Z_Construct_UClass_ASBZRappellingRope_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_RappellingRopeClassToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_RappellingRopeClassToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_DespawnDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRopeSettings" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_DespawnDelay = { "DespawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRappellingRopeSettings, DespawnDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_DespawnDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_DespawnDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bAttachStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRopeSettings" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bAttachStart_SetBit(void* Obj)
	{
		((FSBZRappellingRopeSettings*)Obj)->bAttachStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bAttachStart = { "bAttachStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZRappellingRopeSettings), &Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bAttachStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bAttachStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bAttachStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_StartAttachment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRopeSettings" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_StartAttachment = { "StartAttachment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRappellingRopeSettings, StartAttachment), Z_Construct_UScriptStruct_FSBZCablePointAttachment, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_StartAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_StartAttachment_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_PointAttachments_Inner = { "PointAttachments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCablePointAttachment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_PointAttachments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRopeSettings" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_PointAttachments = { "PointAttachments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRappellingRopeSettings, PointAttachments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_PointAttachments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_PointAttachments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bAttachEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRopeSettings" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bAttachEnd_SetBit(void* Obj)
	{
		((FSBZRappellingRopeSettings*)Obj)->bAttachEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bAttachEnd = { "bAttachEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZRappellingRopeSettings), &Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bAttachEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bAttachEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bAttachEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_EndAttachment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRopeSettings" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_EndAttachment = { "EndAttachment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRappellingRopeSettings, EndAttachment), Z_Construct_UScriptStruct_FSBZCablePointAttachment, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_EndAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_EndAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bEnableCollisionPlane_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRopeSettings" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bEnableCollisionPlane_SetBit(void* Obj)
	{
		((FSBZRappellingRopeSettings*)Obj)->bEnableCollisionPlane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bEnableCollisionPlane = { "bEnableCollisionPlane", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZRappellingRopeSettings), &Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bEnableCollisionPlane_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bEnableCollisionPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bEnableCollisionPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bEnableStiffness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRopeSettings" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bEnableStiffness_SetBit(void* Obj)
	{
		((FSBZRappellingRopeSettings*)Obj)->bEnableStiffness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bEnableStiffness = { "bEnableStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZRappellingRopeSettings), &Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bEnableStiffness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bEnableStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bEnableStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_MinSegmentLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRopeSettings" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_MinSegmentLength = { "MinSegmentLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRappellingRopeSettings, MinSegmentLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_MinSegmentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_MinSegmentLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_MaxSegmentCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRopeSettings" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_MaxSegmentCount = { "MaxSegmentCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRappellingRopeSettings, MaxSegmentCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_MaxSegmentCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_MaxSegmentCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_RappellingRopeClassToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_DespawnDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bAttachStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_StartAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_PointAttachments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_PointAttachments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bAttachEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_EndAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bEnableCollisionPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_bEnableStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_MinSegmentLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::NewProp_MaxSegmentCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRappellingRopeSettings",
		sizeof(FSBZRappellingRopeSettings),
		alignof(FSBZRappellingRopeSettings),
		Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRappellingRopeSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRappellingRopeSettings"), sizeof(FSBZRappellingRopeSettings), Get_Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRappellingRopeSettings_Hash() { return 1228718597U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
