// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGasVolumeTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGasVolumeTarget() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGasVolumeTarget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZGasVolumeTarget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGasVolumeTarget, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGasVolumeTarget"), sizeof(FSBZGasVolumeTarget), Get_Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGasVolumeTarget>()
{
	return FSBZGasVolumeTarget::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGasVolumeTarget(FSBZGasVolumeTarget::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGasVolumeTarget"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGasVolumeTarget
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGasVolumeTarget()
	{
		UScriptStruct::DeferCppStructOps<FSBZGasVolumeTarget>(FName(TEXT("SBZGasVolumeTarget")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGasVolumeTarget;
	struct Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PendingTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasReceivedDamage_MetaData[];
#endif
		static void NewProp_bHasReceivedDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasReceivedDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeTarget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGasVolumeTarget>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeTarget" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGasVolumeTarget, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_PendingTimeSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeTarget" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_PendingTimeSeconds = { "PendingTimeSeconds", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGasVolumeTarget, PendingTimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_PendingTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_PendingTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_bHasReceivedDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeTarget" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeTarget.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_bHasReceivedDamage_SetBit(void* Obj)
	{
		((FSBZGasVolumeTarget*)Obj)->bHasReceivedDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_bHasReceivedDamage = { "bHasReceivedDamage", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZGasVolumeTarget), &Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_bHasReceivedDamage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_bHasReceivedDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_bHasReceivedDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_PendingTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::NewProp_bHasReceivedDamage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZGasVolumeTarget",
		sizeof(FSBZGasVolumeTarget),
		alignof(FSBZGasVolumeTarget),
		Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGasVolumeTarget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGasVolumeTarget"), sizeof(FSBZGasVolumeTarget), Get_Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGasVolumeTarget_Hash() { return 1394305207U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
