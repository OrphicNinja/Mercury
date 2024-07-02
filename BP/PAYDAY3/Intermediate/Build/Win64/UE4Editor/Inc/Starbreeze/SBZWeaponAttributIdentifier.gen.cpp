// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponAttributIdentifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponAttributIdentifier() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWeaponAttribute();
// End Cross Module References
class UScriptStruct* FSBZWeaponAttributIdentifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponAttributIdentifier"), sizeof(FSBZWeaponAttributIdentifier), Get_Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponAttributIdentifier>()
{
	return FSBZWeaponAttributIdentifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponAttributIdentifier(FSBZWeaponAttributIdentifier::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponAttributIdentifier"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponAttributIdentifier
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponAttributIdentifier()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponAttributIdentifier>(FName(TEXT("SBZWeaponAttributIdentifier")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponAttributIdentifier;
	struct Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsParent_MetaData[];
#endif
		static void NewProp_bIsParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsParent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChildAttributeArray_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChildAttributeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildAttributeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildAttributeArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponAttributIdentifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponAttributIdentifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAttributIdentifier" },
		{ "ModuleRelativePath", "Public/SBZWeaponAttributIdentifier.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAttributIdentifier, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_Context_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAttributIdentifier" },
		{ "ModuleRelativePath", "Public/SBZWeaponAttributIdentifier.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAttributIdentifier, Context), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_bIsParent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAttributIdentifier" },
		{ "ModuleRelativePath", "Public/SBZWeaponAttributIdentifier.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_bIsParent_SetBit(void* Obj)
	{
		((FSBZWeaponAttributIdentifier*)Obj)->bIsParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_bIsParent = { "bIsParent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZWeaponAttributIdentifier), &Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_bIsParent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_bIsParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_bIsParent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_ChildAttributeArray_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_ChildAttributeArray_Inner = { "ChildAttributeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZWeaponAttribute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_ChildAttributeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAttributIdentifier" },
		{ "ModuleRelativePath", "Public/SBZWeaponAttributIdentifier.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_ChildAttributeArray = { "ChildAttributeArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAttributIdentifier, ChildAttributeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_ChildAttributeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_ChildAttributeArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAttributIdentifier" },
		{ "ModuleRelativePath", "Public/SBZWeaponAttributIdentifier.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAttributIdentifier, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_bIsParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_ChildAttributeArray_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_ChildAttributeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_ChildAttributeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponAttributIdentifier",
		sizeof(FSBZWeaponAttributIdentifier),
		alignof(FSBZWeaponAttributIdentifier),
		Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponAttributIdentifier"), sizeof(FSBZWeaponAttributIdentifier), Get_Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponAttributIdentifier_Hash() { return 3154847856U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
