// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3CallerReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3CallerReason() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3CallerReason();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionNotificationAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FPD3CallerReason::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPD3CallerReason_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPD3CallerReason, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PD3CallerReason"), sizeof(FPD3CallerReason), Get_Z_Construct_UScriptStruct_FPD3CallerReason_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPD3CallerReason>()
{
	return FPD3CallerReason::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPD3CallerReason(FPD3CallerReason::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PD3CallerReason"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPD3CallerReason
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPD3CallerReason()
	{
		UScriptStruct::DeferCppStructOps<FPD3CallerReason>(FName(TEXT("PD3CallerReason")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPD3CallerReason;
	struct Z_Construct_UScriptStruct_FPD3CallerReason_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3CallerReason_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PD3CallerReason.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPD3CallerReason_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPD3CallerReason>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3CallerReason_Statics::NewProp_Reason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3CallerReason" },
		{ "ModuleRelativePath", "Public/PD3CallerReason.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPD3CallerReason_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Reason, FPD3CallerReason), STRUCT_OFFSET(FPD3CallerReason, Reason), Z_Construct_UClass_USBZActionNotificationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3CallerReason_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3CallerReason_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPD3CallerReason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3CallerReason_Statics::NewProp_Reason,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPD3CallerReason_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PD3CallerReason",
		sizeof(FPD3CallerReason),
		alignof(FPD3CallerReason),
		Z_Construct_UScriptStruct_FPD3CallerReason_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3CallerReason_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3CallerReason_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3CallerReason_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPD3CallerReason()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPD3CallerReason_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PD3CallerReason"), sizeof(FPD3CallerReason), Get_Z_Construct_UScriptStruct_FPD3CallerReason_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPD3CallerReason_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPD3CallerReason_Hash() { return 1151917269U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
