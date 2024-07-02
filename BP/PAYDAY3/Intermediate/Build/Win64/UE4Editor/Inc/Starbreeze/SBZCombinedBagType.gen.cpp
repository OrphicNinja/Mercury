// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCombinedBagType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCombinedBagType() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCombinedBagType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagType_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZCombinedBagType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCombinedBagType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCombinedBagType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCombinedBagType"), sizeof(FSBZCombinedBagType), Get_Z_Construct_UScriptStruct_FSBZCombinedBagType_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCombinedBagType>()
{
	return FSBZCombinedBagType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCombinedBagType(FSBZCombinedBagType::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCombinedBagType"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCombinedBagType
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCombinedBagType()
	{
		UScriptStruct::DeferCppStructOps<FSBZCombinedBagType>(FName(TEXT("SBZCombinedBagType")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCombinedBagType;
	struct Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InBagType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutBagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutBagType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCombinedBagType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCombinedBagType>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::NewProp_InBagType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCombinedBagType" },
		{ "ModuleRelativePath", "Public/SBZCombinedBagType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::NewProp_InBagType = { "InBagType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCombinedBagType, InBagType), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::NewProp_InBagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::NewProp_InBagType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::NewProp_OutBagType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCombinedBagType" },
		{ "ModuleRelativePath", "Public/SBZCombinedBagType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::NewProp_OutBagType = { "OutBagType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCombinedBagType, OutBagType), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::NewProp_OutBagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::NewProp_OutBagType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::NewProp_InBagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::NewProp_OutBagType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCombinedBagType",
		sizeof(FSBZCombinedBagType),
		alignof(FSBZCombinedBagType),
		Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCombinedBagType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCombinedBagType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCombinedBagType"), sizeof(FSBZCombinedBagType), Get_Z_Construct_UScriptStruct_FSBZCombinedBagType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCombinedBagType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCombinedBagType_Hash() { return 2041736032U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
