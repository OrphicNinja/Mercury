// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPivotSwitchHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPivotSwitchHandler() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPivotSwitchHandler();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZPivotSwitchHandler::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPivotSwitchHandler, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPivotSwitchHandler"), sizeof(FSBZPivotSwitchHandler), Get_Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPivotSwitchHandler>()
{
	return FSBZPivotSwitchHandler::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPivotSwitchHandler(FSBZPivotSwitchHandler::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPivotSwitchHandler"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPivotSwitchHandler
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPivotSwitchHandler()
	{
		UScriptStruct::DeferCppStructOps<FSBZPivotSwitchHandler>(FName(TEXT("SBZPivotSwitchHandler")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPivotSwitchHandler;
	struct Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimOffsetAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPivotSwitchHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPivotSwitchHandler>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_bActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPivotSwitchHandler" },
		{ "ModuleRelativePath", "Public/SBZPivotSwitchHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((FSBZPivotSwitchHandler*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZPivotSwitchHandler), &Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_Angle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPivotSwitchHandler" },
		{ "ModuleRelativePath", "Public/SBZPivotSwitchHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPivotSwitchHandler, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_AimOffsetAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPivotSwitchHandler" },
		{ "ModuleRelativePath", "Public/SBZPivotSwitchHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_AimOffsetAngle = { "AimOffsetAngle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPivotSwitchHandler, AimOffsetAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_AimOffsetAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_AimOffsetAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_CurValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPivotSwitchHandler" },
		{ "ModuleRelativePath", "Public/SBZPivotSwitchHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_CurValue = { "CurValue", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPivotSwitchHandler, CurValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_CurValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_CurValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_bActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_AimOffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::NewProp_CurValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPivotSwitchHandler",
		sizeof(FSBZPivotSwitchHandler),
		alignof(FSBZPivotSwitchHandler),
		Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPivotSwitchHandler()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPivotSwitchHandler"), sizeof(FSBZPivotSwitchHandler), Get_Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPivotSwitchHandler_Hash() { return 2431865833U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
