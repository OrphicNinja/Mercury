// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsMenuInputAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsMenuInputAction() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZSettingsMenuInputAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSettingsMenuInputAction"), sizeof(FSBZSettingsMenuInputAction), Get_Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSettingsMenuInputAction>()
{
	return FSBZSettingsMenuInputAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSettingsMenuInputAction(FSBZSettingsMenuInputAction::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSettingsMenuInputAction"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingsMenuInputAction
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingsMenuInputAction()
	{
		UScriptStruct::DeferCppStructOps<FSBZSettingsMenuInputAction>(FName(TEXT("SBZSettingsMenuInputAction")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingsMenuInputAction;
	struct Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuInputAction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSettingsMenuInputAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Statics::NewProp_ActionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuInputAction" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuInputAction.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuInputAction, ActionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Statics::NewProp_ActionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Statics::NewProp_ActionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSettingsMenuInputAction",
		sizeof(FSBZSettingsMenuInputAction),
		alignof(FSBZSettingsMenuInputAction),
		Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSettingsMenuInputAction"), sizeof(FSBZSettingsMenuInputAction), Get_Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction_Hash() { return 586666625U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
