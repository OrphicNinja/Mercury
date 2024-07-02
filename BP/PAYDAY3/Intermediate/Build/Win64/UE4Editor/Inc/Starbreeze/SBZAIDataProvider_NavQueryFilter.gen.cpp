// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIDataProvider_NavQueryFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIDataProvider_NavQueryFilter() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderTypedValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAIDataProvider_NavQueryFilter>() == std::is_polymorphic<FAIDataProviderTypedValue>(), "USTRUCT FSBZAIDataProvider_NavQueryFilter cannot be polymorphic unless super FAIDataProviderTypedValue is polymorphic");

class UScriptStruct* FSBZAIDataProvider_NavQueryFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAIDataProvider_NavQueryFilter"), sizeof(FSBZAIDataProvider_NavQueryFilter), Get_Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAIDataProvider_NavQueryFilter>()
{
	return FSBZAIDataProvider_NavQueryFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter(FSBZAIDataProvider_NavQueryFilter::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAIDataProvider_NavQueryFilter"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIDataProvider_NavQueryFilter
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIDataProvider_NavQueryFilter()
	{
		UScriptStruct::DeferCppStructOps<FSBZAIDataProvider_NavQueryFilter>(FName(TEXT("SBZAIDataProvider_NavQueryFilter")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIDataProvider_NavQueryFilter;
	struct Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDataProvider_NavQueryFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAIDataProvider_NavQueryFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDataProvider_NavQueryFilter" },
		{ "ModuleRelativePath", "Public/SBZAIDataProvider_NavQueryFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIDataProvider_NavQueryFilter, DefaultValue), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Statics::NewProp_DefaultValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FAIDataProviderTypedValue,
		&NewStructOps,
		"SBZAIDataProvider_NavQueryFilter",
		sizeof(FSBZAIDataProvider_NavQueryFilter),
		alignof(FSBZAIDataProvider_NavQueryFilter),
		Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAIDataProvider_NavQueryFilter"), sizeof(FSBZAIDataProvider_NavQueryFilter), Get_Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAIDataProvider_NavQueryFilter_Hash() { return 1715450085U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
