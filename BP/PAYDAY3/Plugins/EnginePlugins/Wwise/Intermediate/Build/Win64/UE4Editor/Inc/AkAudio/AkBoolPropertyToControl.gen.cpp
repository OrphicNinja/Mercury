// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkBoolPropertyToControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkBoolPropertyToControl() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkBoolPropertyToControl();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkBoolPropertyToControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkBoolPropertyToControl, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkBoolPropertyToControl"), sizeof(FAkBoolPropertyToControl), Get_Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkBoolPropertyToControl>()
{
	return FAkBoolPropertyToControl::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkBoolPropertyToControl(FAkBoolPropertyToControl::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkBoolPropertyToControl"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkBoolPropertyToControl
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkBoolPropertyToControl()
	{
		UScriptStruct::DeferCppStructOps<FAkBoolPropertyToControl>(FName(TEXT("AkBoolPropertyToControl")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkBoolPropertyToControl;
	struct Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkBoolPropertyToControl.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkBoolPropertyToControl>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::NewProp_ItemProperty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkBoolPropertyToControl" },
		{ "ModuleRelativePath", "Public/AkBoolPropertyToControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::NewProp_ItemProperty = { "ItemProperty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkBoolPropertyToControl, ItemProperty), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::NewProp_ItemProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::NewProp_ItemProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::NewProp_ItemProperty,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkBoolPropertyToControl",
		sizeof(FAkBoolPropertyToControl),
		alignof(FAkBoolPropertyToControl),
		Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkBoolPropertyToControl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkBoolPropertyToControl"), sizeof(FAkBoolPropertyToControl), Get_Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Hash() { return 3819717237U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
