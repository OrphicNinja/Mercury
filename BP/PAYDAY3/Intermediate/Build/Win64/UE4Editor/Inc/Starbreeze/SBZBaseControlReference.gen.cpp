// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBaseControlReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBaseControlReference() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBaseControlReference();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
// End Cross Module References
class UScriptStruct* FSBZBaseControlReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBaseControlReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBaseControlReference, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBaseControlReference"), sizeof(FSBZBaseControlReference), Get_Z_Construct_UScriptStruct_FSBZBaseControlReference_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBaseControlReference>()
{
	return FSBZBaseControlReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBaseControlReference(FSBZBaseControlReference::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBaseControlReference"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBaseControlReference
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBaseControlReference()
	{
		UScriptStruct::DeferCppStructOps<FSBZBaseControlReference>(FName(TEXT("SBZBaseControlReference")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBaseControlReference;
	struct Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAction_MetaData[];
#endif
		static void NewProp_bIsAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInputRegistered_MetaData[];
#endif
		static void NewProp_bIsInputRegistered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInputRegistered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInputConsumed_MetaData[];
#endif
		static void NewProp_bIsInputConsumed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInputConsumed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseControlReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBaseControlReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_DisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseControlReference" },
		{ "ModuleRelativePath", "Public/SBZBaseControlReference.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBaseControlReference, DisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_DisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_DisplayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseControlReference" },
		{ "ModuleRelativePath", "Public/SBZBaseControlReference.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsAction_SetBit(void* Obj)
	{
		((FSBZBaseControlReference*)Obj)->bIsAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsAction = { "bIsAction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZBaseControlReference), &Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsAction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsInputRegistered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseControlReference" },
		{ "ModuleRelativePath", "Public/SBZBaseControlReference.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsInputRegistered_SetBit(void* Obj)
	{
		((FSBZBaseControlReference*)Obj)->bIsInputRegistered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsInputRegistered = { "bIsInputRegistered", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZBaseControlReference), &Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsInputRegistered_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsInputRegistered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsInputRegistered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_EventType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseControlReference" },
		{ "ModuleRelativePath", "Public/SBZBaseControlReference.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBaseControlReference, EventType), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_EventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_EventType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsInputConsumed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseControlReference" },
		{ "ModuleRelativePath", "Public/SBZBaseControlReference.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsInputConsumed_SetBit(void* Obj)
	{
		((FSBZBaseControlReference*)Obj)->bIsInputConsumed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsInputConsumed = { "bIsInputConsumed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZBaseControlReference), &Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsInputConsumed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsInputConsumed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsInputConsumed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_DisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsInputRegistered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::NewProp_bIsInputConsumed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBaseControlReference",
		sizeof(FSBZBaseControlReference),
		alignof(FSBZBaseControlReference),
		Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBaseControlReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBaseControlReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBaseControlReference"), sizeof(FSBZBaseControlReference), Get_Z_Construct_UScriptStruct_FSBZBaseControlReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBaseControlReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBaseControlReference_Hash() { return 582931115U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
