// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDefeatStateAnimationHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDefeatStateAnimationHandler() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZDefeatStateAnimationHandler::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDefeatStateAnimationHandler"), sizeof(FSBZDefeatStateAnimationHandler), Get_Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDefeatStateAnimationHandler>()
{
	return FSBZDefeatStateAnimationHandler::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDefeatStateAnimationHandler(FSBZDefeatStateAnimationHandler::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDefeatStateAnimationHandler"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDefeatStateAnimationHandler
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDefeatStateAnimationHandler()
	{
		UScriptStruct::DeferCppStructOps<FSBZDefeatStateAnimationHandler>(FName(TEXT("SBZDefeatStateAnimationHandler")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDefeatStateAnimationHandler;
	struct Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleSubdued_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleSubdued;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleDowned_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleDowned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleBleedOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleBleedOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownedAimOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownedAimOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefeated_MetaData[];
#endif
		static void NewProp_bDefeated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefeated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubdued_MetaData[];
#endif
		static void NewProp_bSubdued_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubdued;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDowned_MetaData[];
#endif
		static void NewProp_bDowned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDowned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBleedOut_MetaData[];
#endif
		static void NewProp_bBleedOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBleedOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDefeatStateAnimationHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDefeatStateAnimationHandler>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_IdleSubdued_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDefeatStateAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZDefeatStateAnimationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_IdleSubdued = { "IdleSubdued", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDefeatStateAnimationHandler, IdleSubdued), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_IdleSubdued_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_IdleSubdued_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_IdleDowned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDefeatStateAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZDefeatStateAnimationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_IdleDowned = { "IdleDowned", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDefeatStateAnimationHandler, IdleDowned), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_IdleDowned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_IdleDowned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_IdleBleedOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDefeatStateAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZDefeatStateAnimationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_IdleBleedOut = { "IdleBleedOut", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDefeatStateAnimationHandler, IdleBleedOut), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_IdleBleedOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_IdleBleedOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_DownedAimOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDefeatStateAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZDefeatStateAnimationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_DownedAimOffset = { "DownedAimOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDefeatStateAnimationHandler, DownedAimOffset), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_DownedAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_DownedAimOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bDefeated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDefeatStateAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZDefeatStateAnimationHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bDefeated_SetBit(void* Obj)
	{
		((FSBZDefeatStateAnimationHandler*)Obj)->bDefeated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bDefeated = { "bDefeated", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZDefeatStateAnimationHandler), &Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bDefeated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bDefeated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bDefeated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bSubdued_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDefeatStateAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZDefeatStateAnimationHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bSubdued_SetBit(void* Obj)
	{
		((FSBZDefeatStateAnimationHandler*)Obj)->bSubdued = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bSubdued = { "bSubdued", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZDefeatStateAnimationHandler), &Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bSubdued_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bSubdued_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bSubdued_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bDowned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDefeatStateAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZDefeatStateAnimationHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bDowned_SetBit(void* Obj)
	{
		((FSBZDefeatStateAnimationHandler*)Obj)->bDowned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bDowned = { "bDowned", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZDefeatStateAnimationHandler), &Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bDowned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bDowned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bDowned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bBleedOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDefeatStateAnimationHandler" },
		{ "ModuleRelativePath", "Public/SBZDefeatStateAnimationHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bBleedOut_SetBit(void* Obj)
	{
		((FSBZDefeatStateAnimationHandler*)Obj)->bBleedOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bBleedOut = { "bBleedOut", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZDefeatStateAnimationHandler), &Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bBleedOut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bBleedOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bBleedOut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_IdleSubdued,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_IdleDowned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_IdleBleedOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_DownedAimOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bDefeated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bSubdued,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bDowned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::NewProp_bBleedOut,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDefeatStateAnimationHandler",
		sizeof(FSBZDefeatStateAnimationHandler),
		alignof(FSBZDefeatStateAnimationHandler),
		Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDefeatStateAnimationHandler"), sizeof(FSBZDefeatStateAnimationHandler), Get_Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDefeatStateAnimationHandler_Hash() { return 4163582110U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
