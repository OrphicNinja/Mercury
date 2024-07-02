// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularMeshVisibility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularMeshVisibility() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZModularMeshVisibility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FSBZModularMeshVisibility::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZModularMeshVisibility, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZModularMeshVisibility"), sizeof(FSBZModularMeshVisibility), Get_Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZModularMeshVisibility>()
{
	return FSBZModularMeshVisibility::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZModularMeshVisibility(FSBZModularMeshVisibility::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZModularMeshVisibility"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZModularMeshVisibility
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZModularMeshVisibility()
	{
		UScriptStruct::DeferCppStructOps<FSBZModularMeshVisibility>(FName(TEXT("SBZModularMeshVisibility")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZModularMeshVisibility;
	struct Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModularMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModularMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisibilityState_MetaData[];
#endif
		static void NewProp_bVisibilityState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisibilityState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZModularMeshVisibility.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZModularMeshVisibility>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_ModularMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshVisibility" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZModularMeshVisibility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_ModularMesh = { "ModularMesh", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshVisibility, ModularMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_ModularMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_ModularMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshVisibility" },
		{ "ModuleRelativePath", "Public/SBZModularMeshVisibility.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZModularMeshVisibility, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_bVisibilityState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularMeshVisibility" },
		{ "ModuleRelativePath", "Public/SBZModularMeshVisibility.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_bVisibilityState_SetBit(void* Obj)
	{
		((FSBZModularMeshVisibility*)Obj)->bVisibilityState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_bVisibilityState = { "bVisibilityState", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZModularMeshVisibility), &Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_bVisibilityState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_bVisibilityState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_bVisibilityState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_ModularMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::NewProp_bVisibilityState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZModularMeshVisibility",
		sizeof(FSBZModularMeshVisibility),
		alignof(FSBZModularMeshVisibility),
		Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZModularMeshVisibility()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZModularMeshVisibility"), sizeof(FSBZModularMeshVisibility), Get_Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZModularMeshVisibility_Hash() { return 1547623676U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
