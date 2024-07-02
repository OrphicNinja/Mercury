// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInputAxisKeyboardBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInputAxisKeyboardBinding() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FSBZInputAxisKeyboardBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInputAxisKeyboardBinding"), sizeof(FSBZInputAxisKeyboardBinding), Get_Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInputAxisKeyboardBinding>()
{
	return FSBZInputAxisKeyboardBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInputAxisKeyboardBinding(FSBZInputAxisKeyboardBinding::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInputAxisKeyboardBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInputAxisKeyboardBinding
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInputAxisKeyboardBinding()
	{
		UScriptStruct::DeferCppStructOps<FSBZInputAxisKeyboardBinding>(FName(TEXT("SBZInputAxisKeyboardBinding")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInputAxisKeyboardBinding;
	struct Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyPrimary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyPrimary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeySecondary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeySecondary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInputAxisKeyboardBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInputAxisKeyboardBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_AxisName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInputAxisKeyboardBinding" },
		{ "ModuleRelativePath", "Public/SBZInputAxisKeyboardBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInputAxisKeyboardBinding, AxisName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_AxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_AxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_Scale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInputAxisKeyboardBinding" },
		{ "ModuleRelativePath", "Public/SBZInputAxisKeyboardBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInputAxisKeyboardBinding, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_KeyPrimary_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInputAxisKeyboardBinding" },
		{ "ModuleRelativePath", "Public/SBZInputAxisKeyboardBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_KeyPrimary = { "KeyPrimary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInputAxisKeyboardBinding, KeyPrimary), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_KeyPrimary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_KeyPrimary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_KeySecondary_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInputAxisKeyboardBinding" },
		{ "ModuleRelativePath", "Public/SBZInputAxisKeyboardBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_KeySecondary = { "KeySecondary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInputAxisKeyboardBinding, KeySecondary), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_KeySecondary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_KeySecondary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_AxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_KeyPrimary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::NewProp_KeySecondary,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInputAxisKeyboardBinding",
		sizeof(FSBZInputAxisKeyboardBinding),
		alignof(FSBZInputAxisKeyboardBinding),
		Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInputAxisKeyboardBinding"), sizeof(FSBZInputAxisKeyboardBinding), Get_Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding_Hash() { return 1764228817U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
