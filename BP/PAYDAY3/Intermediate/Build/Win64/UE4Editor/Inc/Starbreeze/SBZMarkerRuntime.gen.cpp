// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMarkerRuntime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMarkerRuntime() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMarkerRuntime();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZMarkerRuntime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMarkerRuntime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMarkerRuntime, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMarkerRuntime"), sizeof(FSBZMarkerRuntime), Get_Z_Construct_UScriptStruct_FSBZMarkerRuntime_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMarkerRuntime>()
{
	return FSBZMarkerRuntime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMarkerRuntime(FSBZMarkerRuntime::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMarkerRuntime"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMarkerRuntime
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMarkerRuntime()
	{
		UScriptStruct::DeferCppStructOps<FSBZMarkerRuntime>(FName(TEXT("SBZMarkerRuntime")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMarkerRuntime;
	struct Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanelSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PanelSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMarkerRuntime.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMarkerRuntime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_MarkerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerRuntime" },
		{ "ModuleRelativePath", "Public/SBZMarkerRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_MarkerAsset = { "MarkerAsset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMarkerRuntime, MarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_MarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_MarkerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_MarkerWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMarkerRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_MarkerWidget = { "MarkerWidget", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMarkerRuntime, MarkerWidget), Z_Construct_UClass_USBZMarkerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_MarkerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_MarkerWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_PanelSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMarkerRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_PanelSlot = { "PanelSlot", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMarkerRuntime, PanelSlot), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_PanelSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_PanelSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_Component_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMarkerRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMarkerRuntime, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_MarkerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_MarkerWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_PanelSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::NewProp_Component,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMarkerRuntime",
		sizeof(FSBZMarkerRuntime),
		alignof(FSBZMarkerRuntime),
		Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMarkerRuntime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMarkerRuntime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMarkerRuntime"), sizeof(FSBZMarkerRuntime), Get_Z_Construct_UScriptStruct_FSBZMarkerRuntime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMarkerRuntime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMarkerRuntime_Hash() { return 2409805877U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
