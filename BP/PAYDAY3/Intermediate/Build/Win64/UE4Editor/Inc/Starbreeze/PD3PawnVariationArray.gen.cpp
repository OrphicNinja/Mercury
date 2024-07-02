// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3PawnVariationArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3PawnVariationArray() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3PawnVariationArray();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
class UScriptStruct* FPD3PawnVariationArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPD3PawnVariationArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPD3PawnVariationArray, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PD3PawnVariationArray"), sizeof(FPD3PawnVariationArray), Get_Z_Construct_UScriptStruct_FPD3PawnVariationArray_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPD3PawnVariationArray>()
{
	return FPD3PawnVariationArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPD3PawnVariationArray(FPD3PawnVariationArray::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PD3PawnVariationArray"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPD3PawnVariationArray
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPD3PawnVariationArray()
	{
		UScriptStruct::DeferCppStructOps<FPD3PawnVariationArray>(FName(TEXT("PD3PawnVariationArray")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPD3PawnVariationArray;
	struct Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PawnArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PawnArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PD3PawnVariationArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPD3PawnVariationArray>();
	}
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::NewProp_PawnArray_Inner = { "PawnArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::NewProp_PawnArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PawnVariationArray" },
		{ "ModuleRelativePath", "Public/PD3PawnVariationArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::NewProp_PawnArray = { "PawnArray", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PawnVariationArray, PawnArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::NewProp_PawnArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::NewProp_PawnArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::NewProp_PawnArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::NewProp_PawnArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PD3PawnVariationArray",
		sizeof(FPD3PawnVariationArray),
		alignof(FPD3PawnVariationArray),
		Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPD3PawnVariationArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPD3PawnVariationArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PD3PawnVariationArray"), sizeof(FPD3PawnVariationArray), Get_Z_Construct_UScriptStruct_FPD3PawnVariationArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPD3PawnVariationArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPD3PawnVariationArray_Hash() { return 3145142647U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
