// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilityRowQueryParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilityRowQueryParam() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam();
// End Cross Module References
class UScriptStruct* FSBZAgilityRowQueryParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgilityRowQueryParam"), sizeof(FSBZAgilityRowQueryParam), Get_Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgilityRowQueryParam>()
{
	return FSBZAgilityRowQueryParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgilityRowQueryParam(FSBZAgilityRowQueryParam::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgilityRowQueryParam"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityRowQueryParam
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityRowQueryParam()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgilityRowQueryParam>(FName(TEXT("SBZAgilityRowQueryParam")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityRowQueryParam;
	struct Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilityTypeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AgilityTypeName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AgilityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AgilityType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationQueryParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationQueryParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationQueryParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityRowQueryParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgilityRowQueryParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AgilityTypeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityRowQueryParam" },
		{ "ModuleRelativePath", "Public/SBZAgilityRowQueryParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AgilityTypeName = { "AgilityTypeName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityRowQueryParam, AgilityTypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AgilityTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AgilityTypeName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AgilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AgilityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityRowQueryParam" },
		{ "ModuleRelativePath", "Public/SBZAgilityRowQueryParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AgilityType = { "AgilityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityRowQueryParam, AgilityType), Z_Construct_UEnum_Starbreeze_ESBZAgilityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AgilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AgilityType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AnimationQueryParams_Inner = { "AnimationQueryParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAgilityAnimationQueryParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AnimationQueryParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityRowQueryParam" },
		{ "ModuleRelativePath", "Public/SBZAgilityRowQueryParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AnimationQueryParams = { "AnimationQueryParams", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityRowQueryParam, AnimationQueryParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AnimationQueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AnimationQueryParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AgilityTypeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AgilityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AgilityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AnimationQueryParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::NewProp_AnimationQueryParams,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgilityRowQueryParam",
		sizeof(FSBZAgilityRowQueryParam),
		alignof(FSBZAgilityRowQueryParam),
		Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgilityRowQueryParam"), sizeof(FSBZAgilityRowQueryParam), Get_Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityRowQueryParam_Hash() { return 1933887590U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
