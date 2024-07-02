// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStartMoveHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStartMoveHandler() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStartMoveHandler();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZStartMoveHandler::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZStartMoveHandler_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZStartMoveHandler, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZStartMoveHandler"), sizeof(FSBZStartMoveHandler), Get_Z_Construct_UScriptStruct_FSBZStartMoveHandler_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZStartMoveHandler>()
{
	return FSBZStartMoveHandler::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZStartMoveHandler(FSBZStartMoveHandler::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZStartMoveHandler"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStartMoveHandler
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStartMoveHandler()
	{
		UScriptStruct::DeferCppStructOps<FSBZStartMoveHandler>(FName(TEXT("SBZStartMoveHandler")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZStartMoveHandler;
	struct Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZStartMoveHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZStartMoveHandler>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStartMoveHandler" },
		{ "ModuleRelativePath", "Public/SBZStartMoveHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStartMoveHandler, BlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::NewProp_BlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::NewProp_BlendSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::NewProp_Animation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStartMoveHandler" },
		{ "ModuleRelativePath", "Public/SBZStartMoveHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStartMoveHandler, Animation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::NewProp_Animation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::NewProp_BlendSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::NewProp_Animation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZStartMoveHandler",
		sizeof(FSBZStartMoveHandler),
		alignof(FSBZStartMoveHandler),
		Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZStartMoveHandler()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZStartMoveHandler_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZStartMoveHandler"), sizeof(FSBZStartMoveHandler), Get_Z_Construct_UScriptStruct_FSBZStartMoveHandler_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZStartMoveHandler_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZStartMoveHandler_Hash() { return 1474468358U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
