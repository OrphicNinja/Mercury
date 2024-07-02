// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGamepadBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGamepadBinding() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGamepadBinding();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
// End Cross Module References
class UScriptStruct* FSBZGamepadBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGamepadBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGamepadBinding, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGamepadBinding"), sizeof(FSBZGamepadBinding), Get_Z_Construct_UScriptStruct_FSBZGamepadBinding_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGamepadBinding>()
{
	return FSBZGamepadBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGamepadBinding(FSBZGamepadBinding::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGamepadBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGamepadBinding
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGamepadBinding()
	{
		UScriptStruct::DeferCppStructOps<FSBZGamepadBinding>(FName(TEXT("SBZGamepadBinding")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGamepadBinding;
	struct Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameLocalized_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NameLocalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputActions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGamepadBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGamepadBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_NameLocalized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGamepadBinding" },
		{ "ModuleRelativePath", "Public/SBZGamepadBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_NameLocalized = { "NameLocalized", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGamepadBinding, NameLocalized), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_NameLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_NameLocalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGamepadBinding" },
		{ "ModuleRelativePath", "Public/SBZGamepadBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGamepadBinding, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_InputActions_Inner = { "InputActions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGamepadBindingInputAction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_InputActions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGamepadBinding" },
		{ "ModuleRelativePath", "Public/SBZGamepadBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGamepadBinding, InputActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_InputActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_InputActions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_Button_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGamepadBinding" },
		{ "ModuleRelativePath", "Public/SBZGamepadBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGamepadBinding, Button), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_Button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_NameLocalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_InputActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_InputActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::NewProp_Button,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZGamepadBinding",
		sizeof(FSBZGamepadBinding),
		alignof(FSBZGamepadBinding),
		Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGamepadBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGamepadBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGamepadBinding"), sizeof(FSBZGamepadBinding), Get_Z_Construct_UScriptStruct_FSBZGamepadBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGamepadBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGamepadBinding_Hash() { return 1287913083U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
