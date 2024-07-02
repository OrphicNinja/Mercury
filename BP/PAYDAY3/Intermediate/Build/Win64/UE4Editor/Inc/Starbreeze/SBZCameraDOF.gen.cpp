// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCameraDOF.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCameraDOF() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCameraDOF();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZCameraDOF::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCameraDOF_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCameraDOF, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCameraDOF"), sizeof(FSBZCameraDOF), Get_Z_Construct_UScriptStruct_FSBZCameraDOF_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCameraDOF>()
{
	return FSBZCameraDOF::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCameraDOF(FSBZCameraDOF::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCameraDOF"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCameraDOF
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCameraDOF()
	{
		UScriptStruct::DeferCppStructOps<FSBZCameraDOF>(FName(TEXT("SBZCameraDOF")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCameraDOF;
	struct Z_Construct_UScriptStruct_FSBZCameraDOF_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseStaticFocalDistance_MetaData[];
#endif
		static void NewProp_bUseStaticFocalDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseStaticFocalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFocalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFocalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFstop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFstop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldDepthBlurAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldDepthBlurAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldDepthBlurRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldDepthBlurRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCameraDOF.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCameraDOF>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_bUseStaticFocalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCameraDOF" },
		{ "ModuleRelativePath", "Public/SBZCameraDOF.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_bUseStaticFocalDistance_SetBit(void* Obj)
	{
		((FSBZCameraDOF*)Obj)->bUseStaticFocalDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_bUseStaticFocalDistance = { "bUseStaticFocalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCameraDOF), &Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_bUseStaticFocalDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_bUseStaticFocalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_bUseStaticFocalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldFocalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCameraDOF" },
		{ "ModuleRelativePath", "Public/SBZCameraDOF.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldFocalDistance = { "DepthOfFieldFocalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCameraDOF, DepthOfFieldFocalDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldFocalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldFocalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldFstop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCameraDOF" },
		{ "ModuleRelativePath", "Public/SBZCameraDOF.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldFstop = { "DepthOfFieldFstop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCameraDOF, DepthOfFieldFstop), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldFstop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldFstop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldDepthBlurAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCameraDOF" },
		{ "ModuleRelativePath", "Public/SBZCameraDOF.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldDepthBlurAmount = { "DepthOfFieldDepthBlurAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCameraDOF, DepthOfFieldDepthBlurAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldDepthBlurAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldDepthBlurAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldDepthBlurRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCameraDOF" },
		{ "ModuleRelativePath", "Public/SBZCameraDOF.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldDepthBlurRadius = { "DepthOfFieldDepthBlurRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCameraDOF, DepthOfFieldDepthBlurRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldDepthBlurRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldDepthBlurRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_bUseStaticFocalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldFocalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldFstop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldDepthBlurAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::NewProp_DepthOfFieldDepthBlurRadius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCameraDOF",
		sizeof(FSBZCameraDOF),
		alignof(FSBZCameraDOF),
		Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCameraDOF()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCameraDOF_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCameraDOF"), sizeof(FSBZCameraDOF), Get_Z_Construct_UScriptStruct_FSBZCameraDOF_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCameraDOF_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCameraDOF_Hash() { return 502489679U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
