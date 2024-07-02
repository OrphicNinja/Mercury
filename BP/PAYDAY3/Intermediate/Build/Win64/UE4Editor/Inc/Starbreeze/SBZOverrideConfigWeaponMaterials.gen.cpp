// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOverrideConfigWeaponMaterials.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOverrideConfigWeaponMaterials() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZOverrideConfigWeaponMaterials::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZOverrideConfigWeaponMaterials"), sizeof(FSBZOverrideConfigWeaponMaterials), Get_Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZOverrideConfigWeaponMaterials>()
{
	return FSBZOverrideConfigWeaponMaterials::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZOverrideConfigWeaponMaterials(FSBZOverrideConfigWeaponMaterials::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZOverrideConfigWeaponMaterials"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZOverrideConfigWeaponMaterials
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZOverrideConfigWeaponMaterials()
	{
		UScriptStruct::DeferCppStructOps<FSBZOverrideConfigWeaponMaterials>(FName(TEXT("SBZOverrideConfigWeaponMaterials")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZOverrideConfigWeaponMaterials;
	struct Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMaterialPerMesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMaterialPerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponMaterialPerMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZOverrideConfigWeaponMaterials.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZOverrideConfigWeaponMaterials>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::NewProp_WeaponMaterialPerMesh_Inner = { "WeaponMaterialPerMesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::NewProp_WeaponMaterialPerMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOverrideConfigWeaponMaterials" },
		{ "ModuleRelativePath", "Public/SBZOverrideConfigWeaponMaterials.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::NewProp_WeaponMaterialPerMesh = { "WeaponMaterialPerMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOverrideConfigWeaponMaterials, WeaponMaterialPerMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::NewProp_WeaponMaterialPerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::NewProp_WeaponMaterialPerMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::NewProp_WeaponMaterialPerMesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::NewProp_WeaponMaterialPerMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZOverrideConfigWeaponMaterials",
		sizeof(FSBZOverrideConfigWeaponMaterials),
		alignof(FSBZOverrideConfigWeaponMaterials),
		Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZOverrideConfigWeaponMaterials"), sizeof(FSBZOverrideConfigWeaponMaterials), Get_Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZOverrideConfigWeaponMaterials_Hash() { return 59178346U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
