// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLookFocusHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLookFocusHandler() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLookFocusHandler();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZLookFocusHandler::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLookFocusHandler_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLookFocusHandler, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLookFocusHandler"), sizeof(FSBZLookFocusHandler), Get_Z_Construct_UScriptStruct_FSBZLookFocusHandler_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLookFocusHandler>()
{
	return FSBZLookFocusHandler::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLookFocusHandler(FSBZLookFocusHandler::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLookFocusHandler"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLookFocusHandler
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLookFocusHandler()
	{
		UScriptStruct::DeferCppStructOps<FSBZLookFocusHandler>(FName(TEXT("SBZLookFocusHandler")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLookFocusHandler;
	struct Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Goal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLookFocusHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLookFocusHandler>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::NewProp_Goal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusHandler" },
		{ "ModuleRelativePath", "Public/SBZLookFocusHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookFocusHandler, Goal), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::NewProp_Goal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::NewProp_Goal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::NewProp_Animation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLookFocusHandler" },
		{ "ModuleRelativePath", "Public/SBZLookFocusHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLookFocusHandler, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::NewProp_Animation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::NewProp_Animation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLookFocusHandler",
		sizeof(FSBZLookFocusHandler),
		alignof(FSBZLookFocusHandler),
		Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLookFocusHandler()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLookFocusHandler_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLookFocusHandler"), sizeof(FSBZLookFocusHandler), Get_Z_Construct_UScriptStruct_FSBZLookFocusHandler_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLookFocusHandler_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLookFocusHandler_Hash() { return 663606397U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
