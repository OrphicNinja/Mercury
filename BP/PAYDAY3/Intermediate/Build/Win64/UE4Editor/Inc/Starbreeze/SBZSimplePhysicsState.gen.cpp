// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSimplePhysicsState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSimplePhysicsState() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSimplePhysicsState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
// End Cross Module References
class UScriptStruct* FSBZSimplePhysicsState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSimplePhysicsState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSimplePhysicsState"), sizeof(FSBZSimplePhysicsState), Get_Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSimplePhysicsState>()
{
	return FSBZSimplePhysicsState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSimplePhysicsState(FSBZSimplePhysicsState::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSimplePhysicsState"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSimplePhysicsState
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSimplePhysicsState()
	{
		UScriptStruct::DeferCppStructOps<FSBZSimplePhysicsState>(FName(TEXT("SBZSimplePhysicsState")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSimplePhysicsState;
	struct Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastRot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnsurePos_MetaData[];
#endif
		static void NewProp_bEnsurePos_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnsurePos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSimplePhysicsState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSimplePhysicsState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_LastPos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSimplePhysicsState" },
		{ "ModuleRelativePath", "Public/SBZSimplePhysicsState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_LastPos = { "LastPos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSimplePhysicsState, LastPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_LastPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_LastPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_LastRot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSimplePhysicsState" },
		{ "ModuleRelativePath", "Public/SBZSimplePhysicsState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_LastRot = { "LastRot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSimplePhysicsState, LastRot), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_LastRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_LastRot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_bEnsurePos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSimplePhysicsState" },
		{ "ModuleRelativePath", "Public/SBZSimplePhysicsState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_bEnsurePos_SetBit(void* Obj)
	{
		((FSBZSimplePhysicsState*)Obj)->bEnsurePos = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_bEnsurePos = { "bEnsurePos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSimplePhysicsState), &Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_bEnsurePos_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_bEnsurePos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_bEnsurePos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_LastPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_LastRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::NewProp_bEnsurePos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSimplePhysicsState",
		sizeof(FSBZSimplePhysicsState),
		alignof(FSBZSimplePhysicsState),
		Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSimplePhysicsState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSimplePhysicsState"), sizeof(FSBZSimplePhysicsState), Get_Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSimplePhysicsState_Hash() { return 236935053U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
