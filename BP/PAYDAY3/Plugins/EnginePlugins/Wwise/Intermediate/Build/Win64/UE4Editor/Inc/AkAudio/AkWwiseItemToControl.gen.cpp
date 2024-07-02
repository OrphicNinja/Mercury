// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkWwiseItemToControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWwiseItemToControl() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails();
// End Cross Module References
class UScriptStruct* FAkWwiseItemToControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWwiseItemToControl, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWwiseItemToControl"), sizeof(FAkWwiseItemToControl), Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWwiseItemToControl>()
{
	return FAkWwiseItemToControl::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWwiseItemToControl(FAkWwiseItemToControl::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWwiseItemToControl"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseItemToControl
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseItemToControl()
	{
		UScriptStruct::DeferCppStructOps<FAkWwiseItemToControl>(FName(TEXT("AkWwiseItemToControl")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWwiseItemToControl;
	struct Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemPicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkWwiseItemToControl.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWwiseItemToControl>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkWwiseItemToControl" },
		{ "ModuleRelativePath", "Public/AkWwiseItemToControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked = { "ItemPicked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkWwiseItemToControl, ItemPicked), Z_Construct_UScriptStruct_FAkWwiseObjectDetails, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkWwiseItemToControl" },
		{ "ModuleRelativePath", "Public/AkWwiseItemToControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath = { "ItemPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkWwiseItemToControl, ItemPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::NewProp_ItemPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkWwiseItemToControl",
		sizeof(FAkWwiseItemToControl),
		alignof(FAkWwiseItemToControl),
		Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWwiseItemToControl"), sizeof(FAkWwiseItemToControl), Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWwiseItemToControl_Hash() { return 1603651921U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
