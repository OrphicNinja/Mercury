// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLocationInformation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLocationInformation() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLocationInformation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZLocationInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLocationInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLocationInformation, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLocationInformation"), sizeof(FSBZLocationInformation), Get_Z_Construct_UScriptStruct_FSBZLocationInformation_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLocationInformation>()
{
	return FSBZLocationInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLocationInformation(FSBZLocationInformation::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLocationInformation"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLocationInformation
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLocationInformation()
	{
		UScriptStruct::DeferCppStructOps<FSBZLocationInformation>(FName(TEXT("SBZLocationInformation")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLocationInformation;
	struct Z_Construct_UScriptStruct_FSBZLocationInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MainInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SecondaryInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AdditionalInformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLocationInformation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLocationInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewProp_MainInformation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocationInformation" },
		{ "ModuleRelativePath", "Public/SBZLocationInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewProp_MainInformation = { "MainInformation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLocationInformation, MainInformation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewProp_MainInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewProp_MainInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewProp_SecondaryInformation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocationInformation" },
		{ "ModuleRelativePath", "Public/SBZLocationInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewProp_SecondaryInformation = { "SecondaryInformation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLocationInformation, SecondaryInformation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewProp_SecondaryInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewProp_SecondaryInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewProp_AdditionalInformation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocationInformation" },
		{ "ModuleRelativePath", "Public/SBZLocationInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewProp_AdditionalInformation = { "AdditionalInformation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLocationInformation, AdditionalInformation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewProp_AdditionalInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewProp_AdditionalInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewProp_MainInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewProp_SecondaryInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::NewProp_AdditionalInformation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLocationInformation",
		sizeof(FSBZLocationInformation),
		alignof(FSBZLocationInformation),
		Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLocationInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLocationInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLocationInformation"), sizeof(FSBZLocationInformation), Get_Z_Construct_UScriptStruct_FSBZLocationInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLocationInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLocationInformation_Hash() { return 1722214121U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
