// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimationContainerCopy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimationContainerCopy() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationContainerCopy();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZAnimationContainerCopy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAnimationContainerCopy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAnimationContainerCopy, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAnimationContainerCopy"), sizeof(FSBZAnimationContainerCopy), Get_Z_Construct_UScriptStruct_FSBZAnimationContainerCopy_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAnimationContainerCopy>()
{
	return FSBZAnimationContainerCopy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAnimationContainerCopy(FSBZAnimationContainerCopy::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAnimationContainerCopy"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimationContainerCopy
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimationContainerCopy()
	{
		UScriptStruct::DeferCppStructOps<FSBZAnimationContainerCopy>(FName(TEXT("SBZAnimationContainerCopy")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAnimationContainerCopy;
	struct Z_Construct_UScriptStruct_FSBZAnimationContainerCopy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAnimationContainerCopy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimationContainerCopy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAnimationContainerCopy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAnimationContainerCopy>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAnimationContainerCopy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAnimationContainerCopy",
		sizeof(FSBZAnimationContainerCopy),
		alignof(FSBZAnimationContainerCopy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAnimationContainerCopy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAnimationContainerCopy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationContainerCopy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAnimationContainerCopy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAnimationContainerCopy"), sizeof(FSBZAnimationContainerCopy), Get_Z_Construct_UScriptStruct_FSBZAnimationContainerCopy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAnimationContainerCopy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAnimationContainerCopy_Hash() { return 2854964882U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
