// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInputActionKeyboardBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInputActionKeyboardBinding() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FSBZInputActionKeyboardBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInputActionKeyboardBinding"), sizeof(FSBZInputActionKeyboardBinding), Get_Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInputActionKeyboardBinding>()
{
	return FSBZInputActionKeyboardBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInputActionKeyboardBinding(FSBZInputActionKeyboardBinding::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInputActionKeyboardBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInputActionKeyboardBinding
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInputActionKeyboardBinding()
	{
		UScriptStruct::DeferCppStructOps<FSBZInputActionKeyboardBinding>(FName(TEXT("SBZInputActionKeyboardBinding")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInputActionKeyboardBinding;
	struct Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInputActionKeyboardBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInputActionKeyboardBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewProp_ActionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInputActionKeyboardBinding" },
		{ "ModuleRelativePath", "Public/SBZInputActionKeyboardBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInputActionKeyboardBinding, ActionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewProp_ActionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewProp_KeyPrimary_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInputActionKeyboardBinding" },
		{ "ModuleRelativePath", "Public/SBZInputActionKeyboardBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewProp_KeyPrimary = { "KeyPrimary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInputActionKeyboardBinding, KeyPrimary), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewProp_KeyPrimary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewProp_KeyPrimary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewProp_KeySecondary_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInputActionKeyboardBinding" },
		{ "ModuleRelativePath", "Public/SBZInputActionKeyboardBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewProp_KeySecondary = { "KeySecondary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInputActionKeyboardBinding, KeySecondary), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewProp_KeySecondary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewProp_KeySecondary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewProp_KeyPrimary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::NewProp_KeySecondary,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInputActionKeyboardBinding",
		sizeof(FSBZInputActionKeyboardBinding),
		alignof(FSBZInputActionKeyboardBinding),
		Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInputActionKeyboardBinding"), sizeof(FSBZInputActionKeyboardBinding), Get_Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding_Hash() { return 2482198172U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
