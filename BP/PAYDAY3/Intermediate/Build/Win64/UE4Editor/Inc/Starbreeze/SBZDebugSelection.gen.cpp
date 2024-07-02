// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDebugSelection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDebugSelection() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDebugSelection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZDebugSelection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDebugSelection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDebugSelection, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDebugSelection"), sizeof(FSBZDebugSelection), Get_Z_Construct_UScriptStruct_FSBZDebugSelection_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDebugSelection>()
{
	return FSBZDebugSelection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDebugSelection(FSBZDebugSelection::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDebugSelection"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDebugSelection
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDebugSelection()
	{
		UScriptStruct::DeferCppStructOps<FSBZDebugSelection>(FName(TEXT("SBZDebugSelection")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDebugSelection;
	struct Z_Construct_UScriptStruct_FSBZDebugSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthStencil_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DepthStencil;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDebugSelection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDebugSelection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewProp_Object_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugSelection" },
		{ "ModuleRelativePath", "Public/SBZDebugSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDebugSelection, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewProp_SocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugSelection" },
		{ "ModuleRelativePath", "Public/SBZDebugSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDebugSelection, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewProp_DepthStencil_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugSelection" },
		{ "ModuleRelativePath", "Public/SBZDebugSelection.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewProp_DepthStencil = { "DepthStencil", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDebugSelection, DepthStencil), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewProp_DepthStencil_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewProp_DepthStencil_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::NewProp_DepthStencil,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDebugSelection",
		sizeof(FSBZDebugSelection),
		alignof(FSBZDebugSelection),
		Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDebugSelection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDebugSelection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDebugSelection"), sizeof(FSBZDebugSelection), Get_Z_Construct_UScriptStruct_FSBZDebugSelection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDebugSelection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDebugSelection_Hash() { return 3412251284U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
