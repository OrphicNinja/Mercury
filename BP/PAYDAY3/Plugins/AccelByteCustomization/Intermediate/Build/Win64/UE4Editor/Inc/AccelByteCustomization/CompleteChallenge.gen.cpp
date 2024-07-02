// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/CompleteChallenge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompleteChallenge() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FCompleteChallenge();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeErrorResponse();
// End Cross Module References
class UScriptStruct* FCompleteChallenge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTECUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FCompleteChallenge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompleteChallenge, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("CompleteChallenge"), sizeof(FCompleteChallenge), Get_Z_Construct_UScriptStruct_FCompleteChallenge_Hash());
	}
	return Singleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FCompleteChallenge>()
{
	return FCompleteChallenge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompleteChallenge(FCompleteChallenge::StaticStruct, TEXT("/Script/AccelByteCustomization"), TEXT("CompleteChallenge"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteCustomization_StaticRegisterNativesFCompleteChallenge
{
	FScriptStruct_AccelByteCustomization_StaticRegisterNativesFCompleteChallenge()
	{
		UScriptStruct::DeferCppStructOps<FCompleteChallenge>(FName(TEXT("CompleteChallenge")));
	}
} ScriptStruct_AccelByteCustomization_StaticRegisterNativesFCompleteChallenge;
	struct Z_Construct_UScriptStruct_FCompleteChallenge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteChallenge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CompleteChallenge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompleteChallenge>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Error_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CompleteChallenge" },
		{ "ModuleRelativePath", "Public/CompleteChallenge.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompleteChallenge, Error), Z_Construct_UScriptStruct_FChallengeErrorResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Success_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CompleteChallenge" },
		{ "ModuleRelativePath", "Public/CompleteChallenge.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FCompleteChallenge*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCompleteChallenge), &Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CompleteChallenge" },
		{ "ModuleRelativePath", "Public/CompleteChallenge.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCompleteChallenge, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompleteChallenge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompleteChallenge_Statics::NewProp_UserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompleteChallenge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
		nullptr,
		&NewStructOps,
		"CompleteChallenge",
		sizeof(FCompleteChallenge),
		alignof(FCompleteChallenge),
		Z_Construct_UScriptStruct_FCompleteChallenge_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteChallenge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompleteChallenge_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompleteChallenge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompleteChallenge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompleteChallenge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompleteChallenge"), sizeof(FCompleteChallenge), Get_Z_Construct_UScriptStruct_FCompleteChallenge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCompleteChallenge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompleteChallenge_Hash() { return 2881584886U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
