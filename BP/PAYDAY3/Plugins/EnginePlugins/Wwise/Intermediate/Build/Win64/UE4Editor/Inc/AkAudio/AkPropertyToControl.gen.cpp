// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkPropertyToControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPropertyToControl() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkPropertyToControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkPropertyToControl_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPropertyToControl, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPropertyToControl"), sizeof(FAkPropertyToControl), Get_Z_Construct_UScriptStruct_FAkPropertyToControl_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkPropertyToControl>()
{
	return FAkPropertyToControl::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkPropertyToControl(FAkPropertyToControl::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkPropertyToControl"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkPropertyToControl
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkPropertyToControl()
	{
		UScriptStruct::DeferCppStructOps<FAkPropertyToControl>(FName(TEXT("AkPropertyToControl")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkPropertyToControl;
	struct Z_Construct_UScriptStruct_FAkPropertyToControl_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkPropertyToControl.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPropertyToControl>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPropertyToControl" },
		{ "ModuleRelativePath", "Public/AkPropertyToControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty = { "ItemProperty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkPropertyToControl, ItemProperty), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::NewProp_ItemProperty,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkPropertyToControl",
		sizeof(FAkPropertyToControl),
		alignof(FAkPropertyToControl),
		Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkPropertyToControl_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkPropertyToControl"), sizeof(FAkPropertyToControl), Get_Z_Construct_UScriptStruct_FAkPropertyToControl_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkPropertyToControl_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkPropertyToControl_Hash() { return 2862425978U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
