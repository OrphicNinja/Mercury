// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDownedByTypeVO.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDownedByTypeVO() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDownedByTypeVO();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FSBZDownedByTypeVO::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDownedByTypeVO, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDownedByTypeVO"), sizeof(FSBZDownedByTypeVO), Get_Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDownedByTypeVO>()
{
	return FSBZDownedByTypeVO::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDownedByTypeVO(FSBZDownedByTypeVO::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDownedByTypeVO"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDownedByTypeVO
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDownedByTypeVO()
	{
		UScriptStruct::DeferCppStructOps<FSBZDownedByTypeVO>(FName(TEXT("SBZDownedByTypeVO")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDownedByTypeVO;
	struct Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownedByVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownedByVO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TypeTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDownedByTypeVO.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDownedByTypeVO>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::NewProp_DownedByVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDownedByTypeVO" },
		{ "ModuleRelativePath", "Public/SBZDownedByTypeVO.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::NewProp_DownedByVO = { "DownedByVO", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDownedByTypeVO, DownedByVO), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::NewProp_DownedByVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::NewProp_DownedByVO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::NewProp_TypeTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDownedByTypeVO" },
		{ "ModuleRelativePath", "Public/SBZDownedByTypeVO.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::NewProp_TypeTag = { "TypeTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDownedByTypeVO, TypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::NewProp_TypeTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::NewProp_TypeTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::NewProp_DownedByVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::NewProp_TypeTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDownedByTypeVO",
		sizeof(FSBZDownedByTypeVO),
		alignof(FSBZDownedByTypeVO),
		Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDownedByTypeVO()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDownedByTypeVO"), sizeof(FSBZDownedByTypeVO), Get_Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDownedByTypeVO_Hash() { return 4264215832U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
