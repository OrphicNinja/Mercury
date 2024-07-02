// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCableCollisionPlane.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCableCollisionPlane() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCableCollisionPlane();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
// End Cross Module References
class UScriptStruct* FSBZCableCollisionPlane::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCableCollisionPlane, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCableCollisionPlane"), sizeof(FSBZCableCollisionPlane), Get_Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCableCollisionPlane>()
{
	return FSBZCableCollisionPlane::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCableCollisionPlane(FSBZCableCollisionPlane::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCableCollisionPlane"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCableCollisionPlane
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCableCollisionPlane()
	{
		UScriptStruct::DeferCppStructOps<FSBZCableCollisionPlane>(FName(TEXT("SBZCableCollisionPlane")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCableCollisionPlane;
	struct Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Plane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideFriction_MetaData[];
#endif
		static void NewProp_bOverrideFriction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCableCollisionPlane.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCableCollisionPlane>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_Plane_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCableCollisionPlane" },
		{ "ModuleRelativePath", "Public/SBZCableCollisionPlane.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCableCollisionPlane, Plane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_Plane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_Plane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_bOverrideFriction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCableCollisionPlane" },
		{ "ModuleRelativePath", "Public/SBZCableCollisionPlane.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_bOverrideFriction_SetBit(void* Obj)
	{
		((FSBZCableCollisionPlane*)Obj)->bOverrideFriction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_bOverrideFriction = { "bOverrideFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCableCollisionPlane), &Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_bOverrideFriction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_bOverrideFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_bOverrideFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_Friction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCableCollisionPlane" },
		{ "ModuleRelativePath", "Public/SBZCableCollisionPlane.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCableCollisionPlane, Friction), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_Friction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_Plane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_bOverrideFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::NewProp_Friction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCableCollisionPlane",
		sizeof(FSBZCableCollisionPlane),
		alignof(FSBZCableCollisionPlane),
		Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCableCollisionPlane()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCableCollisionPlane"), sizeof(FSBZCableCollisionPlane), Get_Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCableCollisionPlane_Hash() { return 3344546211U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
