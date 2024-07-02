// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDbgCapsuleParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDbgCapsuleParams() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDbgCapsuleParams();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FSBZDbgCapsuleParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDbgCapsuleParams"), sizeof(FSBZDbgCapsuleParams), Get_Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDbgCapsuleParams>()
{
	return FSBZDbgCapsuleParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDbgCapsuleParams(FSBZDbgCapsuleParams::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDbgCapsuleParams"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDbgCapsuleParams
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDbgCapsuleParams()
	{
		UScriptStruct::DeferCppStructOps<FSBZDbgCapsuleParams>(FName(TEXT("SBZDbgCapsuleParams")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDbgCapsuleParams;
	struct Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDbgCapsuleParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDbgCapsuleParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgCapsuleParams" },
		{ "ModuleRelativePath", "Public/SBZDbgCapsuleParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgCapsuleParams, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_HalfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgCapsuleParams" },
		{ "ModuleRelativePath", "Public/SBZDbgCapsuleParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgCapsuleParams, HalfHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_HalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_HalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgCapsuleParams" },
		{ "ModuleRelativePath", "Public/SBZDbgCapsuleParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgCapsuleParams, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgCapsuleParams" },
		{ "ModuleRelativePath", "Public/SBZDbgCapsuleParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgCapsuleParams, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Thickness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgCapsuleParams" },
		{ "ModuleRelativePath", "Public/SBZDbgCapsuleParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgCapsuleParams, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgCapsuleParams" },
		{ "ModuleRelativePath", "Public/SBZDbgCapsuleParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgCapsuleParams, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_bPersistent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgCapsuleParams" },
		{ "ModuleRelativePath", "Public/SBZDbgCapsuleParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_bPersistent_SetBit(void* Obj)
	{
		((FSBZDbgCapsuleParams*)Obj)->bPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_bPersistent = { "bPersistent", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZDbgCapsuleParams), &Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_bPersistent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_bPersistent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_bPersistent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Life_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgCapsuleParams" },
		{ "ModuleRelativePath", "Public/SBZDbgCapsuleParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Life = { "Life", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgCapsuleParams, Life), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Life_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Life_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgCapsuleParams" },
		{ "ModuleRelativePath", "Public/SBZDbgCapsuleParams.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgCapsuleParams, Priority), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_HalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_bPersistent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Life,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::NewProp_Priority,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDbgCapsuleParams",
		sizeof(FSBZDbgCapsuleParams),
		alignof(FSBZDbgCapsuleParams),
		Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDbgCapsuleParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDbgCapsuleParams"), sizeof(FSBZDbgCapsuleParams), Get_Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDbgCapsuleParams_Hash() { return 2133820272U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
