// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractReqData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractReqData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractReqData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZInteractReqData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInteractReqData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInteractReqData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInteractReqData"), sizeof(FSBZInteractReqData), Get_Z_Construct_UScriptStruct_FSBZInteractReqData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInteractReqData>()
{
	return FSBZInteractReqData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInteractReqData(FSBZInteractReqData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInteractReqData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractReqData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractReqData()
	{
		UScriptStruct::DeferCppStructOps<FSBZInteractReqData>(FName(TEXT("SBZInteractReqData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractReqData;
	struct Z_Construct_UScriptStruct_FSBZInteractReqData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailTextArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailTextArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FailTextArray;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SuccessTextOverrideArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessTextOverrideArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SuccessTextOverrideArray;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHiddenFailArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHiddenFailArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IsHiddenFailArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractReqData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInteractReqData>();
	}
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_FailTextArray_Inner = { "FailTextArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_FailTextArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractReqData" },
		{ "ModuleRelativePath", "Public/SBZInteractReqData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_FailTextArray = { "FailTextArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractReqData, FailTextArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_FailTextArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_FailTextArray_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_SuccessTextOverrideArray_Inner = { "SuccessTextOverrideArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_SuccessTextOverrideArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractReqData" },
		{ "ModuleRelativePath", "Public/SBZInteractReqData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_SuccessTextOverrideArray = { "SuccessTextOverrideArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractReqData, SuccessTextOverrideArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_SuccessTextOverrideArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_SuccessTextOverrideArray_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_IsHiddenFailArray_Inner = { "IsHiddenFailArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_IsHiddenFailArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractReqData" },
		{ "ModuleRelativePath", "Public/SBZInteractReqData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_IsHiddenFailArray = { "IsHiddenFailArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractReqData, IsHiddenFailArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_IsHiddenFailArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_IsHiddenFailArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_FailTextArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_FailTextArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_SuccessTextOverrideArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_SuccessTextOverrideArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_IsHiddenFailArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::NewProp_IsHiddenFailArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInteractReqData",
		sizeof(FSBZInteractReqData),
		alignof(FSBZInteractReqData),
		Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractReqData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInteractReqData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInteractReqData"), sizeof(FSBZInteractReqData), Get_Z_Construct_UScriptStruct_FSBZInteractReqData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInteractReqData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInteractReqData_Hash() { return 769474131U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
