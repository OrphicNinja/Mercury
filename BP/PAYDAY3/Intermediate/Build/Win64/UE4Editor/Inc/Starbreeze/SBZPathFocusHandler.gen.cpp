// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPathFocusHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPathFocusHandler() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPathFocusHandler();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPathFocusSettings_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZPathFocusHandler::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPathFocusHandler_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPathFocusHandler, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPathFocusHandler"), sizeof(FSBZPathFocusHandler), Get_Z_Construct_UScriptStruct_FSBZPathFocusHandler_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPathFocusHandler>()
{
	return FSBZPathFocusHandler::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPathFocusHandler(FSBZPathFocusHandler::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPathFocusHandler"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPathFocusHandler
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPathFocusHandler()
	{
		UScriptStruct::DeferCppStructOps<FSBZPathFocusHandler>(FName(TEXT("SBZPathFocusHandler")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPathFocusHandler;
	struct Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPathFocusHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPathFocusHandler>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewProp_CurrentEnemy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPathFocusHandler" },
		{ "ModuleRelativePath", "Public/SBZPathFocusHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewProp_CurrentEnemy = { "CurrentEnemy", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPathFocusHandler, CurrentEnemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewProp_CurrentEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewProp_CurrentEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewProp_TargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPathFocusHandler" },
		{ "ModuleRelativePath", "Public/SBZPathFocusHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPathFocusHandler, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPathFocusHandler" },
		{ "ModuleRelativePath", "Public/SBZPathFocusHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPathFocusHandler, Settings), Z_Construct_UClass_USBZPathFocusSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewProp_CurrentEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::NewProp_Settings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPathFocusHandler",
		sizeof(FSBZPathFocusHandler),
		alignof(FSBZPathFocusHandler),
		Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPathFocusHandler()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPathFocusHandler_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPathFocusHandler"), sizeof(FSBZPathFocusHandler), Get_Z_Construct_UScriptStruct_FSBZPathFocusHandler_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPathFocusHandler_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPathFocusHandler_Hash() { return 81606678U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
