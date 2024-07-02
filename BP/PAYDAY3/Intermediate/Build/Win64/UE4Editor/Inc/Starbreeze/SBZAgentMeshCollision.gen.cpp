// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgentMeshCollision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgentMeshCollision() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentMeshCollision();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZShape();
// End Cross Module References
class UScriptStruct* FSBZAgentMeshCollision::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgentMeshCollision, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgentMeshCollision"), sizeof(FSBZAgentMeshCollision), Get_Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgentMeshCollision>()
{
	return FSBZAgentMeshCollision::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgentMeshCollision(FSBZAgentMeshCollision::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgentMeshCollision"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentMeshCollision
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentMeshCollision()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgentMeshCollision>(FName(TEXT("SBZAgentMeshCollision")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentMeshCollision;
	struct Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_BodyIndex_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BodyIndex;
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_BoneIndex_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneIndex;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterial_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalMaterial;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shapes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shapes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Shapes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransformsUpToDate_MetaData[];
#endif
		static void NewProp_bTransformsUpToDate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransformsUpToDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgentMeshCollision>();
	}
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BodyIndex_Inner = { "BodyIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BodyIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentMeshCollision" },
		{ "ModuleRelativePath", "Public/SBZAgentMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BodyIndex = { "BodyIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentMeshCollision, BodyIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BodyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BodyIndex_MetaData)) };
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BoneIndex_Inner = { "BoneIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BoneIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentMeshCollision" },
		{ "ModuleRelativePath", "Public/SBZAgentMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentMeshCollision, BoneIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BoneIndex_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BoneNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentMeshCollision" },
		{ "ModuleRelativePath", "Public/SBZAgentMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentMeshCollision, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BoneNames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_Transform_Inner = { "Transform", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_Transform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentMeshCollision" },
		{ "ModuleRelativePath", "Public/SBZAgentMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentMeshCollision, Transform), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_PhysicalMaterial_Inner = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_PhysicalMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentMeshCollision" },
		{ "ModuleRelativePath", "Public/SBZAgentMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentMeshCollision, PhysicalMaterial), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_PhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_PhysicalMaterial_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_Shapes_Inner = { "Shapes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZShape, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_Shapes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentMeshCollision" },
		{ "ModuleRelativePath", "Public/SBZAgentMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_Shapes = { "Shapes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentMeshCollision, Shapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_Shapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_Shapes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_bTransformsUpToDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentMeshCollision" },
		{ "ModuleRelativePath", "Public/SBZAgentMeshCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_bTransformsUpToDate_SetBit(void* Obj)
	{
		((FSBZAgentMeshCollision*)Obj)->bTransformsUpToDate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_bTransformsUpToDate = { "bTransformsUpToDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZAgentMeshCollision), &Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_bTransformsUpToDate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_bTransformsUpToDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_bTransformsUpToDate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BodyIndex_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BoneIndex_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BoneIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_BoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_Transform_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_PhysicalMaterial_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_PhysicalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_Shapes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_Shapes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::NewProp_bTransformsUpToDate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgentMeshCollision",
		sizeof(FSBZAgentMeshCollision),
		alignof(FSBZAgentMeshCollision),
		Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentMeshCollision()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgentMeshCollision"), sizeof(FSBZAgentMeshCollision), Get_Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgentMeshCollision_Hash() { return 3048294882U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
