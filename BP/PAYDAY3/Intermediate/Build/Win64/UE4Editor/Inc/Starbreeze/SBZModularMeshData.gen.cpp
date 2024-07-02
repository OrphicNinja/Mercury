// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularMeshData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularMeshData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZModularMeshData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZModularMeshSpawnStep();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneAnimContraint();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartDataAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZModularMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZModularMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZModularMeshData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZModularMeshData"), sizeof(FSBZModularMeshData), Get_Z_Construct_UScriptStruct_FSBZModularMeshData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZModularMeshData>()
{
	return FSBZModularMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZModularMeshData(FSBZModularMeshData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZModularMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZModularMeshData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZModularMeshData()
	{
		UScriptStruct::DeferCppStructOps<FSBZModularMeshData>(FName(TEXT("SBZModularMeshData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZModularMeshData;
	struct Z_Construct_UScriptStruct_FSBZModularMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SkeletalMeshClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpawnStep_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bModifiesBaseMesh_MetaData[];
#endif
		static void NewProp_bModifiesBaseMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModifiesBaseMesh;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AppliedPartBoneToRig_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppliedPartBoneToRig_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AppliedPartBoneToRig;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DontApplyPartBone_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DontApplyPartBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DontApplyPartBone;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DontApplyPartBoneIfAlreadyChanged_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DontApplyPartBoneIfAlreadyChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DontApplyPartBoneIfAlreadyChanged;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MapPartBoneToRigBone_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MapPartBoneToRigBone_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapPartBoneToRigBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MapPartBoneToRigBone;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RigBoneAnimConstraints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RigBoneAnimConstraints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RigBoneAnimConstraints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachBoneParentOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachBoneParentOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotAnimatedPart_MetaData[];
#endif
		static void NewProp_bNotAnimatedPart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotAnimatedPart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnOnlyIfAllTagsArePresent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnOnlyIfAllTagsArePresent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DontSpawnIfTagIsPresent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DontSpawnIfTagIsPresent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisibilityTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisibilityTagState_MetaData[];
#endif
		static void NewProp_bVisibilityTagState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisibilityTagState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentPart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZModularMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SkeletalMeshClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SkeletalMeshClass = { "SkeletalMeshClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, SkeletalMeshClass), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SkeletalMeshClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SkeletalMeshClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnSlot = { "SpawnSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, SpawnSlot), Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnStep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnStep = { "SpawnStep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, SpawnStep), Z_Construct_UEnum_Starbreeze_ESBZModularMeshSpawnStep, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bModifiesBaseMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bModifiesBaseMesh_SetBit(void* Obj)
	{
		((FSBZModularMeshData*)Obj)->bModifiesBaseMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bModifiesBaseMesh = { "bModifiesBaseMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZModularMeshData), &Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bModifiesBaseMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bModifiesBaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bModifiesBaseMesh_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_AppliedPartBoneToRig_Inner = { "AppliedPartBoneToRig", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_AppliedPartBoneToRig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_AppliedPartBoneToRig = { "AppliedPartBoneToRig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, AppliedPartBoneToRig), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_AppliedPartBoneToRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_AppliedPartBoneToRig_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontApplyPartBone_Inner = { "DontApplyPartBone", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontApplyPartBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontApplyPartBone = { "DontApplyPartBone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, DontApplyPartBone), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontApplyPartBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontApplyPartBone_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontApplyPartBoneIfAlreadyChanged_Inner = { "DontApplyPartBoneIfAlreadyChanged", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontApplyPartBoneIfAlreadyChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontApplyPartBoneIfAlreadyChanged = { "DontApplyPartBoneIfAlreadyChanged", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, DontApplyPartBoneIfAlreadyChanged), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontApplyPartBoneIfAlreadyChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontApplyPartBoneIfAlreadyChanged_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_MapPartBoneToRigBone_ValueProp = { "MapPartBoneToRigBone", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_MapPartBoneToRigBone_Key_KeyProp = { "MapPartBoneToRigBone_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_MapPartBoneToRigBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_MapPartBoneToRigBone = { "MapPartBoneToRigBone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, MapPartBoneToRigBone), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_MapPartBoneToRigBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_MapPartBoneToRigBone_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_RigBoneAnimConstraints_Inner = { "RigBoneAnimConstraints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZBoneAnimContraint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_RigBoneAnimConstraints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_RigBoneAnimConstraints = { "RigBoneAnimConstraints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, RigBoneAnimConstraints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_RigBoneAnimConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_RigBoneAnimConstraints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_AttachBoneParentOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_AttachBoneParentOverride = { "AttachBoneParentOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, AttachBoneParentOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_AttachBoneParentOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_AttachBoneParentOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bNotAnimatedPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bNotAnimatedPart_SetBit(void* Obj)
	{
		((FSBZModularMeshData*)Obj)->bNotAnimatedPart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bNotAnimatedPart = { "bNotAnimatedPart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZModularMeshData), &Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bNotAnimatedPart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bNotAnimatedPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bNotAnimatedPart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnOnlyIfAllTagsArePresent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnOnlyIfAllTagsArePresent = { "SpawnOnlyIfAllTagsArePresent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, SpawnOnlyIfAllTagsArePresent), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnOnlyIfAllTagsArePresent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnOnlyIfAllTagsArePresent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontSpawnIfTagIsPresent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontSpawnIfTagIsPresent = { "DontSpawnIfTagIsPresent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, DontSpawnIfTagIsPresent), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontSpawnIfTagIsPresent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontSpawnIfTagIsPresent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_VisibilityTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_VisibilityTag = { "VisibilityTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, VisibilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_VisibilityTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_VisibilityTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bVisibilityTagState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bVisibilityTagState_SetBit(void* Obj)
	{
		((FSBZModularMeshData*)Obj)->bVisibilityTagState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bVisibilityTagState = { "bVisibilityTagState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZModularMeshData), &Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bVisibilityTagState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bVisibilityTagState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bVisibilityTagState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_TagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_TagContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_ParentSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_ParentSlot = { "ParentSlot", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, ParentSlot), Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_ParentSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_ParentSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_ParentPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshData" },
		{ "ModuleRelativePath", "Public/SBZModularMeshData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_ParentPart = { "ParentPart", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshData, ParentPart), Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_ParentPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_ParentPart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SkeletalMeshClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bModifiesBaseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_AppliedPartBoneToRig_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_AppliedPartBoneToRig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontApplyPartBone_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontApplyPartBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontApplyPartBoneIfAlreadyChanged_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontApplyPartBoneIfAlreadyChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_MapPartBoneToRigBone_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_MapPartBoneToRigBone_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_MapPartBoneToRigBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_RigBoneAnimConstraints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_RigBoneAnimConstraints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_AttachBoneParentOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bNotAnimatedPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_SpawnOnlyIfAllTagsArePresent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_DontSpawnIfTagIsPresent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_VisibilityTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_bVisibilityTagState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_TagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_ParentSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::NewProp_ParentPart,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZModularMeshData",
		sizeof(FSBZModularMeshData),
		alignof(FSBZModularMeshData),
		Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZModularMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZModularMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZModularMeshData"), sizeof(FSBZModularMeshData), Get_Z_Construct_UScriptStruct_FSBZModularMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZModularMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZModularMeshData_Hash() { return 2063253807U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
