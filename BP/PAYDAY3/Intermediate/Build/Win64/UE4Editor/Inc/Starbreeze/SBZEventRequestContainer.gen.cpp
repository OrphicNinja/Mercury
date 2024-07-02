// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEventRequestContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEventRequestContainer() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEventRequestContainer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEventRequest();
// End Cross Module References
class UScriptStruct* FSBZEventRequestContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZEventRequestContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZEventRequestContainer, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZEventRequestContainer"), sizeof(FSBZEventRequestContainer), Get_Z_Construct_UScriptStruct_FSBZEventRequestContainer_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZEventRequestContainer>()
{
	return FSBZEventRequestContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZEventRequestContainer(FSBZEventRequestContainer::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZEventRequestContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEventRequestContainer
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEventRequestContainer()
	{
		UScriptStruct::DeferCppStructOps<FSBZEventRequestContainer>(FName(TEXT("SBZEventRequestContainer")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZEventRequestContainer;
	struct Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventRequests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventRequests;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZEventRequestContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZEventRequestContainer>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::NewProp_EventRequests_Inner = { "EventRequests", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZEventRequest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::NewProp_EventRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEventRequestContainer" },
		{ "ModuleRelativePath", "Public/SBZEventRequestContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::NewProp_EventRequests = { "EventRequests", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEventRequestContainer, EventRequests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::NewProp_EventRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::NewProp_EventRequests_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::NewProp_EventRequests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::NewProp_EventRequests,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZEventRequestContainer",
		sizeof(FSBZEventRequestContainer),
		alignof(FSBZEventRequestContainer),
		Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZEventRequestContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZEventRequestContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZEventRequestContainer"), sizeof(FSBZEventRequestContainer), Get_Z_Construct_UScriptStruct_FSBZEventRequestContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZEventRequestContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZEventRequestContainer_Hash() { return 2711389388U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
