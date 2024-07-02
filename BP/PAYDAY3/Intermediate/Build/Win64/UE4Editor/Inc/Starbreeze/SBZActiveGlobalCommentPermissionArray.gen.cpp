// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActiveGlobalCommentPermissionArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActiveGlobalCommentPermissionArray() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZActiveGlobalCommentPermissionArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZActiveGlobalCommentPermissionArray"), sizeof(FSBZActiveGlobalCommentPermissionArray), Get_Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZActiveGlobalCommentPermissionArray>()
{
	return FSBZActiveGlobalCommentPermissionArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray(FSBZActiveGlobalCommentPermissionArray::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZActiveGlobalCommentPermissionArray"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZActiveGlobalCommentPermissionArray
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZActiveGlobalCommentPermissionArray()
	{
		UScriptStruct::DeferCppStructOps<FSBZActiveGlobalCommentPermissionArray>(FName(TEXT("SBZActiveGlobalCommentPermissionArray")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZActiveGlobalCommentPermissionArray;
	struct Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZActiveGlobalCommentPermissionArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZActiveGlobalCommentPermissionArray>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZActiveGlobalCommentPermissionArray",
		sizeof(FSBZActiveGlobalCommentPermissionArray),
		alignof(FSBZActiveGlobalCommentPermissionArray),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZActiveGlobalCommentPermissionArray"), sizeof(FSBZActiveGlobalCommentPermissionArray), Get_Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZActiveGlobalCommentPermissionArray_Hash() { return 591460857U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
