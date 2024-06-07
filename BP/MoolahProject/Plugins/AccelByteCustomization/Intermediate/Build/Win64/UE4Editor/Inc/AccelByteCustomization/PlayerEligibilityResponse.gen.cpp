// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/PlayerEligibilityResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerEligibilityResponse() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerEligibilityResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References
class UScriptStruct* FPlayerEligibilityResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTECUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerEligibilityResponse, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("PlayerEligibilityResponse"), sizeof(FPlayerEligibilityResponse), Get_Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FPlayerEligibilityResponse>()
{
	return FPlayerEligibilityResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerEligibilityResponse(FPlayerEligibilityResponse::StaticStruct, TEXT("/Script/AccelByteCustomization"), TEXT("PlayerEligibilityResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteCustomization_StaticRegisterNativesFPlayerEligibilityResponse
{
	FScriptStruct_AccelByteCustomization_StaticRegisterNativesFPlayerEligibilityResponse()
	{
		UScriptStruct::DeferCppStructOps<FPlayerEligibilityResponse>(FName(TEXT("PlayerEligibilityResponse")));
	}
} ScriptStruct_AccelByteCustomization_StaticRegisterNativesFPlayerEligibilityResponse;
	struct Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsComply_MetaData[];
#endif
		static void NewProp_IsComply_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsComply;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerEligibilityResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerEligibilityResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::NewProp_IsComply_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerEligibilityResponse" },
		{ "ModuleRelativePath", "Public/PlayerEligibilityResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::NewProp_IsComply_SetBit(void* Obj)
	{
		((FPlayerEligibilityResponse*)Obj)->IsComply = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::NewProp_IsComply = { "IsComply", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerEligibilityResponse), &Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::NewProp_IsComply_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::NewProp_IsComply_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::NewProp_IsComply_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::NewProp_IsComply,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
		nullptr,
		&NewStructOps,
		"PlayerEligibilityResponse",
		sizeof(FPlayerEligibilityResponse),
		alignof(FPlayerEligibilityResponse),
		Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerEligibilityResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerEligibilityResponse"), sizeof(FPlayerEligibilityResponse), Get_Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerEligibilityResponse_Hash() { return 1711684822U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
