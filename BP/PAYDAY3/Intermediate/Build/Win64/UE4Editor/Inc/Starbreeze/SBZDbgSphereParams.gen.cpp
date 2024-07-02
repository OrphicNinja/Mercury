// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDbgSphereParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDbgSphereParams() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDbgSphereParams();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FSBZDbgSphereParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDbgSphereParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDbgSphereParams, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDbgSphereParams"), sizeof(FSBZDbgSphereParams), Get_Z_Construct_UScriptStruct_FSBZDbgSphereParams_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDbgSphereParams>()
{
	return FSBZDbgSphereParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDbgSphereParams(FSBZDbgSphereParams::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDbgSphereParams"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDbgSphereParams
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDbgSphereParams()
	{
		UScriptStruct::DeferCppStructOps<FSBZDbgSphereParams>(FName(TEXT("SBZDbgSphereParams")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDbgSphereParams;
	struct Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Segments;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDbgSphereParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDbgSphereParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgSphereParams" },
		{ "ModuleRelativePath", "Public/SBZDbgSphereParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgSphereParams, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgSphereParams" },
		{ "ModuleRelativePath", "Public/SBZDbgSphereParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgSphereParams, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Segments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgSphereParams" },
		{ "ModuleRelativePath", "Public/SBZDbgSphereParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgSphereParams, Segments), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Segments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgSphereParams" },
		{ "ModuleRelativePath", "Public/SBZDbgSphereParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgSphereParams, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_bPersistent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgSphereParams" },
		{ "ModuleRelativePath", "Public/SBZDbgSphereParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_bPersistent_SetBit(void* Obj)
	{
		((FSBZDbgSphereParams*)Obj)->bPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_bPersistent = { "bPersistent", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZDbgSphereParams), &Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_bPersistent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_bPersistent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_bPersistent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Life_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgSphereParams" },
		{ "ModuleRelativePath", "Public/SBZDbgSphereParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Life = { "Life", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgSphereParams, Life), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Life_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Life_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgSphereParams" },
		{ "ModuleRelativePath", "Public/SBZDbgSphereParams.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgSphereParams, Priority), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Segments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_bPersistent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Life,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::NewProp_Priority,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDbgSphereParams",
		sizeof(FSBZDbgSphereParams),
		alignof(FSBZDbgSphereParams),
		Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDbgSphereParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDbgSphereParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDbgSphereParams"), sizeof(FSBZDbgSphereParams), Get_Z_Construct_UScriptStruct_FSBZDbgSphereParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDbgSphereParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDbgSphereParams_Hash() { return 3452089433U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
