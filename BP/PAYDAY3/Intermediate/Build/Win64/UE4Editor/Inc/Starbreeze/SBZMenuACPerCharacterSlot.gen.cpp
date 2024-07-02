// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMenuACPerCharacterSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMenuACPerCharacterSlot() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMenuACSlots();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZMenuACPerCharacterSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMenuACPerCharacterSlot"), sizeof(FSBZMenuACPerCharacterSlot), Get_Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMenuACPerCharacterSlot>()
{
	return FSBZMenuACPerCharacterSlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMenuACPerCharacterSlot(FSBZMenuACPerCharacterSlot::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMenuACPerCharacterSlot"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMenuACPerCharacterSlot
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMenuACPerCharacterSlot()
	{
		UScriptStruct::DeferCppStructOps<FSBZMenuACPerCharacterSlot>(FName(TEXT("SBZMenuACPerCharacterSlot")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMenuACPerCharacterSlot;
	struct Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Slots_ValueProp;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Slots_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Slots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuACPerCharacterSlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMenuACPerCharacterSlot>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::NewProp_Slots_ValueProp = { "Slots", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZMenuACSlots, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::NewProp_Slots_Key_KeyProp = { "Slots_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::NewProp_Slots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuACPerCharacterSlot" },
		{ "ModuleRelativePath", "Public/SBZMenuACPerCharacterSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMenuACPerCharacterSlot, Slots), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::NewProp_Slots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::NewProp_Slots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::NewProp_Slots_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::NewProp_Slots_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::NewProp_Slots,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMenuACPerCharacterSlot",
		sizeof(FSBZMenuACPerCharacterSlot),
		alignof(FSBZMenuACPerCharacterSlot),
		Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMenuACPerCharacterSlot"), sizeof(FSBZMenuACPerCharacterSlot), Get_Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot_Hash() { return 2640957319U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
