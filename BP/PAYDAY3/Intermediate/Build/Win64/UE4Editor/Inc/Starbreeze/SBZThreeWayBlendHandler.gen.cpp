// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThreeWayBlendHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThreeWayBlendHandler() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance();
// End Cross Module References
class UScriptStruct* FSBZThreeWayBlendHandler::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZThreeWayBlendHandler"), sizeof(FSBZThreeWayBlendHandler), Get_Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZThreeWayBlendHandler>()
{
	return FSBZThreeWayBlendHandler::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZThreeWayBlendHandler(FSBZThreeWayBlendHandler::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZThreeWayBlendHandler"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZThreeWayBlendHandler
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZThreeWayBlendHandler()
	{
		UScriptStruct::DeferCppStructOps<FSBZThreeWayBlendHandler>(FName(TEXT("SBZThreeWayBlendHandler")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZThreeWayBlendHandler;
	struct Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instance1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Instance1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instance2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Instance2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instance3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Instance3;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZThreeWayBlendHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZThreeWayBlendHandler>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewProp_Instance1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThreeWayBlendHandler" },
		{ "ModuleRelativePath", "Public/SBZThreeWayBlendHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewProp_Instance1 = { "Instance1", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZThreeWayBlendHandler, Instance1), Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewProp_Instance1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewProp_Instance1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewProp_Instance2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThreeWayBlendHandler" },
		{ "ModuleRelativePath", "Public/SBZThreeWayBlendHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewProp_Instance2 = { "Instance2", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZThreeWayBlendHandler, Instance2), Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewProp_Instance2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewProp_Instance2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewProp_Instance3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThreeWayBlendHandler" },
		{ "ModuleRelativePath", "Public/SBZThreeWayBlendHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewProp_Instance3 = { "Instance3", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZThreeWayBlendHandler, Instance3), Z_Construct_UScriptStruct_FSBZThreeWayBlendInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewProp_Instance3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewProp_Instance3_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewProp_Instance1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewProp_Instance2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::NewProp_Instance3,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZThreeWayBlendHandler",
		sizeof(FSBZThreeWayBlendHandler),
		alignof(FSBZThreeWayBlendHandler),
		Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZThreeWayBlendHandler"), sizeof(FSBZThreeWayBlendHandler), Get_Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZThreeWayBlendHandler_Hash() { return 1269235882U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
