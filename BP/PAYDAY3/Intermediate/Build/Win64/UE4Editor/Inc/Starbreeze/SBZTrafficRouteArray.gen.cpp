// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficRouteArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficRouteArray() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficRouteArray();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficRoute();
// End Cross Module References
class UScriptStruct* FSBZTrafficRouteArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTrafficRouteArray, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTrafficRouteArray"), sizeof(FSBZTrafficRouteArray), Get_Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTrafficRouteArray>()
{
	return FSBZTrafficRouteArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTrafficRouteArray(FSBZTrafficRouteArray::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTrafficRouteArray"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficRouteArray
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficRouteArray()
	{
		UScriptStruct::DeferCppStructOps<FSBZTrafficRouteArray>(FName(TEXT("SBZTrafficRouteArray")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficRouteArray;
	struct Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RouteArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RouteArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RouteArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficRouteArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTrafficRouteArray>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::NewProp_RouteArray_Inner = { "RouteArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZTrafficRoute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::NewProp_RouteArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficRouteArray" },
		{ "ModuleRelativePath", "Public/SBZTrafficRouteArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::NewProp_RouteArray = { "RouteArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficRouteArray, RouteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::NewProp_RouteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::NewProp_RouteArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::NewProp_RouteArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::NewProp_RouteArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTrafficRouteArray",
		sizeof(FSBZTrafficRouteArray),
		alignof(FSBZTrafficRouteArray),
		Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficRouteArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTrafficRouteArray"), sizeof(FSBZTrafficRouteArray), Get_Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficRouteArray_Hash() { return 506649093U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
