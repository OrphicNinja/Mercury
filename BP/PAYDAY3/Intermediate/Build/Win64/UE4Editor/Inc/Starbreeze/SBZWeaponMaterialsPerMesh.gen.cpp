// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponMaterialsPerMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponMaterialsPerMesh() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZWeaponMaterialsPerMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponMaterialsPerMesh"), sizeof(FSBZWeaponMaterialsPerMesh), Get_Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponMaterialsPerMesh>()
{
	return FSBZWeaponMaterialsPerMesh::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponMaterialsPerMesh(FSBZWeaponMaterialsPerMesh::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponMaterialsPerMesh"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponMaterialsPerMesh
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponMaterialsPerMesh()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponMaterialsPerMesh>(FName(TEXT("SBZWeaponMaterialsPerMesh")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponMaterialsPerMesh;
	struct Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponMaterialPerMesh_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMaterialPerMesh_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMaterialPerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WeaponMaterialPerMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponMaterialsPerMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponMaterialsPerMesh>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::NewProp_WeaponMaterialPerMesh_ValueProp = { "WeaponMaterialPerMesh", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::NewProp_WeaponMaterialPerMesh_Key_KeyProp = { "WeaponMaterialPerMesh_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::NewProp_WeaponMaterialPerMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponMaterialsPerMesh" },
		{ "ModuleRelativePath", "Public/SBZWeaponMaterialsPerMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::NewProp_WeaponMaterialPerMesh = { "WeaponMaterialPerMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponMaterialsPerMesh, WeaponMaterialPerMesh), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::NewProp_WeaponMaterialPerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::NewProp_WeaponMaterialPerMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::NewProp_WeaponMaterialPerMesh_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::NewProp_WeaponMaterialPerMesh_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::NewProp_WeaponMaterialPerMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponMaterialsPerMesh",
		sizeof(FSBZWeaponMaterialsPerMesh),
		alignof(FSBZWeaponMaterialsPerMesh),
		Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponMaterialsPerMesh"), sizeof(FSBZWeaponMaterialsPerMesh), Get_Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponMaterialsPerMesh_Hash() { return 427661151U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
