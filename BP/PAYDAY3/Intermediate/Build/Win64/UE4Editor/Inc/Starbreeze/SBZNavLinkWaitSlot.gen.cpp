// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNavLinkWaitSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNavLinkWaitSlot() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZNavLinkWaitSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZNavLinkWaitSlot"), sizeof(FSBZNavLinkWaitSlot), Get_Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZNavLinkWaitSlot>()
{
	return FSBZNavLinkWaitSlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZNavLinkWaitSlot(FSBZNavLinkWaitSlot::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZNavLinkWaitSlot"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZNavLinkWaitSlot
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZNavLinkWaitSlot()
	{
		UScriptStruct::DeferCppStructOps<FSBZNavLinkWaitSlot>(FName(TEXT("SBZNavLinkWaitSlot")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZNavLinkWaitSlot;
	struct Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Occupant_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Occupant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZNavLinkWaitSlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZNavLinkWaitSlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkWaitSlot" },
		{ "ModuleRelativePath", "Public/SBZNavLinkWaitSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNavLinkWaitSlot, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::NewProp_Occupant_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkWaitSlot" },
		{ "ModuleRelativePath", "Public/SBZNavLinkWaitSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::NewProp_Occupant = { "Occupant", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNavLinkWaitSlot, Occupant), Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::NewProp_Occupant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::NewProp_Occupant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::NewProp_Occupant,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZNavLinkWaitSlot",
		sizeof(FSBZNavLinkWaitSlot),
		alignof(FSBZNavLinkWaitSlot),
		Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZNavLinkWaitSlot"), sizeof(FSBZNavLinkWaitSlot), Get_Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZNavLinkWaitSlot_Hash() { return 2231577335U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
