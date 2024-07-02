// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDbgLineParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDbgLineParams() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDbgLineParams();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FSBZDbgLineParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDbgLineParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDbgLineParams, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDbgLineParams"), sizeof(FSBZDbgLineParams), Get_Z_Construct_UScriptStruct_FSBZDbgLineParams_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDbgLineParams>()
{
	return FSBZDbgLineParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDbgLineParams(FSBZDbgLineParams::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDbgLineParams"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDbgLineParams
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDbgLineParams()
	{
		UScriptStruct::DeferCppStructOps<FSBZDbgLineParams>(FName(TEXT("SBZDbgLineParams")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDbgLineParams;
	struct Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPersistent_MetaData[];
#endif
		static void NewProp_bPersistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Life_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Life;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDbgLineParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDbgLineParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Start_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgLineParams" },
		{ "ModuleRelativePath", "Public/SBZDbgLineParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgLineParams, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_End_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgLineParams" },
		{ "ModuleRelativePath", "Public/SBZDbgLineParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgLineParams, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Thickness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgLineParams" },
		{ "ModuleRelativePath", "Public/SBZDbgLineParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgLineParams, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgLineParams" },
		{ "ModuleRelativePath", "Public/SBZDbgLineParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgLineParams, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_bPersistent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgLineParams" },
		{ "ModuleRelativePath", "Public/SBZDbgLineParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_bPersistent_SetBit(void* Obj)
	{
		((FSBZDbgLineParams*)Obj)->bPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_bPersistent = { "bPersistent", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZDbgLineParams), &Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_bPersistent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_bPersistent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_bPersistent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Life_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgLineParams" },
		{ "ModuleRelativePath", "Public/SBZDbgLineParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Life = { "Life", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgLineParams, Life), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Life_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Life_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgLineParams" },
		{ "ModuleRelativePath", "Public/SBZDbgLineParams.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgLineParams, Priority), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_bPersistent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Life,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::NewProp_Priority,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDbgLineParams",
		sizeof(FSBZDbgLineParams),
		alignof(FSBZDbgLineParams),
		Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDbgLineParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDbgLineParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDbgLineParams"), sizeof(FSBZDbgLineParams), Get_Z_Construct_UScriptStruct_FSBZDbgLineParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDbgLineParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDbgLineParams_Hash() { return 1694567007U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
