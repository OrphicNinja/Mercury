// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZYawControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZYawControl() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZYawControl();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
class UScriptStruct* FSBZYawControl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZYawControl_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZYawControl, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZYawControl"), sizeof(FSBZYawControl), Get_Z_Construct_UScriptStruct_FSBZYawControl_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZYawControl>()
{
	return FSBZYawControl::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZYawControl(FSBZYawControl::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZYawControl"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZYawControl
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZYawControl()
	{
		UScriptStruct::DeferCppStructOps<FSBZYawControl>(FName(TEXT("SBZYawControl")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZYawControl;
	struct Z_Construct_UScriptStruct_FSBZYawControl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YawCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZYawControl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZYawControl.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZYawControl>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewProp_YawCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZYawControl" },
		{ "ModuleRelativePath", "Public/SBZYawControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewProp_YawCurve = { "YawCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZYawControl, YawCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewProp_YawCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewProp_YawCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewProp_BlendCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZYawControl" },
		{ "ModuleRelativePath", "Public/SBZYawControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewProp_BlendCurve = { "BlendCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZYawControl, BlendCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewProp_BlendCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewProp_BlendCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewProp_Bounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZYawControl" },
		{ "ModuleRelativePath", "Public/SBZYawControl.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZYawControl, Bounds), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewProp_Bounds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZYawControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewProp_YawCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewProp_BlendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZYawControl_Statics::NewProp_Bounds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZYawControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZYawControl",
		sizeof(FSBZYawControl),
		alignof(FSBZYawControl),
		Z_Construct_UScriptStruct_FSBZYawControl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZYawControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZYawControl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZYawControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZYawControl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZYawControl_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZYawControl"), sizeof(FSBZYawControl), Get_Z_Construct_UScriptStruct_FSBZYawControl_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZYawControl_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZYawControl_Hash() { return 15922989U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
