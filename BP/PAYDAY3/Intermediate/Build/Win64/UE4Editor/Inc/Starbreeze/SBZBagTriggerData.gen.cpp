// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBagTriggerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBagTriggerData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagTriggerData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagFilter();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZBagCustomFilter__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZBagTriggerDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZBagTriggerSecuredDelegate__DelegateSignature();
// End Cross Module References
class UScriptStruct* FSBZBagTriggerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBagTriggerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBagTriggerData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBagTriggerData"), sizeof(FSBZBagTriggerData), Get_Z_Construct_UScriptStruct_FSBZBagTriggerData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBagTriggerData>()
{
	return FSBZBagTriggerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBagTriggerData(FSBZBagTriggerData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBagTriggerData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBagTriggerData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBagTriggerData()
	{
		UScriptStruct::DeferCppStructOps<FSBZBagTriggerData>(FName(TEXT("SBZBagTriggerData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBagTriggerData;
	struct Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasicFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_FilterDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CompleteDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecuredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_SecuredDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBagTriggerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_BasicFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerData" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_BasicFilter = { "BasicFilter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBagTriggerData, BasicFilter), Z_Construct_UScriptStruct_FSBZBagFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_BasicFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_BasicFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_FilterDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerData" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerData.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_FilterDelegate = { "FilterDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBagTriggerData, FilterDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZBagCustomFilter__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_FilterDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_FilterDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerData" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBagTriggerData, Target), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_Count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerData" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBagTriggerData, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_CompleteDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerData" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerData.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_CompleteDelegate = { "CompleteDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBagTriggerData, CompleteDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZBagTriggerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_CompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_CompleteDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_SecuredDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagTriggerData" },
		{ "ModuleRelativePath", "Public/SBZBagTriggerData.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_SecuredDelegate = { "SecuredDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBagTriggerData, SecuredDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZBagTriggerSecuredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_SecuredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_SecuredDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_BasicFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_FilterDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_CompleteDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::NewProp_SecuredDelegate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBagTriggerData",
		sizeof(FSBZBagTriggerData),
		alignof(FSBZBagTriggerData),
		Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBagTriggerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBagTriggerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBagTriggerData"), sizeof(FSBZBagTriggerData), Get_Z_Construct_UScriptStruct_FSBZBagTriggerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBagTriggerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBagTriggerData_Hash() { return 3115401969U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
