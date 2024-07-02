// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsMenuInputAxis.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsMenuInputAxis() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZSettingsMenuInputAxis::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSettingsMenuInputAxis"), sizeof(FSBZSettingsMenuInputAxis), Get_Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSettingsMenuInputAxis>()
{
	return FSBZSettingsMenuInputAxis::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSettingsMenuInputAxis(FSBZSettingsMenuInputAxis::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSettingsMenuInputAxis"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingsMenuInputAxis
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingsMenuInputAxis()
	{
		UScriptStruct::DeferCppStructOps<FSBZSettingsMenuInputAxis>(FName(TEXT("SBZSettingsMenuInputAxis")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingsMenuInputAxis;
	struct Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuInputAxis.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSettingsMenuInputAxis>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::NewProp_AxisName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuInputAxis" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuInputAxis.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuInputAxis, AxisName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::NewProp_AxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::NewProp_AxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::NewProp_Scale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuInputAxis" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuInputAxis.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuInputAxis, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::NewProp_AxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::NewProp_Scale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSettingsMenuInputAxis",
		sizeof(FSBZSettingsMenuInputAxis),
		alignof(FSBZSettingsMenuInputAxis),
		Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSettingsMenuInputAxis"), sizeof(FSBZSettingsMenuInputAxis), Get_Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis_Hash() { return 212185532U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
