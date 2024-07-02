// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SrcMesh_BP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSrcMesh_BP() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSrcMesh_BP();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FSrcMesh_BP::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSrcMesh_BP_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSrcMesh_BP, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SrcMesh_BP"), sizeof(FSrcMesh_BP), Get_Z_Construct_UScriptStruct_FSrcMesh_BP_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSrcMesh_BP>()
{
	return FSrcMesh_BP::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSrcMesh_BP(FSrcMesh_BP::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SrcMesh_BP"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSrcMesh_BP
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSrcMesh_BP()
	{
		UScriptStruct::DeferCppStructOps<FSrcMesh_BP>(FName(TEXT("SrcMesh_BP")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSrcMesh_BP;
	struct Z_Construct_UScriptStruct_FSrcMesh_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SrcSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcSkinnedSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SrcSkinnedSkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SrcMesh_BP.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSrcMesh_BP>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::NewProp_SrcSkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SrcMesh_BP" },
		{ "ModuleRelativePath", "Public/SrcMesh_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::NewProp_SrcSkeletalMesh = { "SrcSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSrcMesh_BP, SrcSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::NewProp_SrcSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::NewProp_SrcSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::NewProp_SrcSkinnedSkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SrcMesh_BP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SrcMesh_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::NewProp_SrcSkinnedSkeletalMesh = { "SrcSkinnedSkeletalMesh", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSrcMesh_BP, SrcSkinnedSkeletalMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::NewProp_SrcSkinnedSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::NewProp_SrcSkinnedSkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::NewProp_SrcSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::NewProp_SrcSkinnedSkeletalMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SrcMesh_BP",
		sizeof(FSrcMesh_BP),
		alignof(FSrcMesh_BP),
		Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSrcMesh_BP()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSrcMesh_BP_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SrcMesh_BP"), sizeof(FSrcMesh_BP), Get_Z_Construct_UScriptStruct_FSrcMesh_BP_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSrcMesh_BP_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSrcMesh_BP_Hash() { return 3170079684U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
