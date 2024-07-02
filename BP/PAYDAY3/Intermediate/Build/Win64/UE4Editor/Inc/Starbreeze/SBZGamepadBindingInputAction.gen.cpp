// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGamepadBindingInputAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGamepadBindingInputAction() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZGamepadBindingInputAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGamepadBindingInputAction"), sizeof(FSBZGamepadBindingInputAction), Get_Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGamepadBindingInputAction>()
{
	return FSBZGamepadBindingInputAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGamepadBindingInputAction(FSBZGamepadBindingInputAction::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGamepadBindingInputAction"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGamepadBindingInputAction
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGamepadBindingInputAction()
	{
		UScriptStruct::DeferCppStructOps<FSBZGamepadBindingInputAction>(FName(TEXT("SBZGamepadBindingInputAction")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGamepadBindingInputAction;
	struct Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGamepadBindingInputAction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGamepadBindingInputAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Statics::NewProp_ActionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGamepadBindingInputAction" },
		{ "ModuleRelativePath", "Public/SBZGamepadBindingInputAction.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGamepadBindingInputAction, ActionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Statics::NewProp_ActionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Statics::NewProp_ActionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZGamepadBindingInputAction",
		sizeof(FSBZGamepadBindingInputAction),
		alignof(FSBZGamepadBindingInputAction),
		Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGamepadBindingInputAction"), sizeof(FSBZGamepadBindingInputAction), Get_Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction_Hash() { return 4270201610U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
