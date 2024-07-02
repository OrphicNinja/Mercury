// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUIHUDContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUIHUDContext() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIHUDContext();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZUIHUDContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZUIHUDContext_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZUIHUDContext, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZUIHUDContext"), sizeof(FSBZUIHUDContext), Get_Z_Construct_UScriptStruct_FSBZUIHUDContext_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZUIHUDContext>()
{
	return FSBZUIHUDContext::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZUIHUDContext(FSBZUIHUDContext::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZUIHUDContext"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIHUDContext
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIHUDContext()
	{
		UScriptStruct::DeferCppStructOps<FSBZUIHUDContext>(FName(TEXT("SBZUIHUDContext")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIHUDContext;
	struct Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerHUDDisplayed_MetaData[];
#endif
		static void NewProp_bIsPlayerHUDDisplayed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerHUDDisplayed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZUIHUDContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZUIHUDContext>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::NewProp_bIsPlayerHUDDisplayed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIHUDContext" },
		{ "ModuleRelativePath", "Public/SBZUIHUDContext.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::NewProp_bIsPlayerHUDDisplayed_SetBit(void* Obj)
	{
		((FSBZUIHUDContext*)Obj)->bIsPlayerHUDDisplayed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::NewProp_bIsPlayerHUDDisplayed = { "bIsPlayerHUDDisplayed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZUIHUDContext), &Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::NewProp_bIsPlayerHUDDisplayed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::NewProp_bIsPlayerHUDDisplayed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::NewProp_bIsPlayerHUDDisplayed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::NewProp_bIsPlayerHUDDisplayed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZUIHUDContext",
		sizeof(FSBZUIHUDContext),
		alignof(FSBZUIHUDContext),
		Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZUIHUDContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZUIHUDContext_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZUIHUDContext"), sizeof(FSBZUIHUDContext), Get_Z_Construct_UScriptStruct_FSBZUIHUDContext_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZUIHUDContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZUIHUDContext_Hash() { return 2921722364U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
