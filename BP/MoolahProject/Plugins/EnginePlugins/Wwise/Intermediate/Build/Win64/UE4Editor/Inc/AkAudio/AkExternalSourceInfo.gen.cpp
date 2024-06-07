// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkExternalSourceInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkExternalSourceInfo() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkCodecId();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FAkExternalSourceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkExternalSourceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkExternalSourceInfo, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkExternalSourceInfo"), sizeof(FAkExternalSourceInfo), Get_Z_Construct_UScriptStruct_FAkExternalSourceInfo_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkExternalSourceInfo>()
{
	return FAkExternalSourceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkExternalSourceInfo(FAkExternalSourceInfo::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkExternalSourceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkExternalSourceInfo
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkExternalSourceInfo()
	{
		UScriptStruct::DeferCppStructOps<FAkExternalSourceInfo>(FName(TEXT("AkExternalSourceInfo")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkExternalSourceInfo;
	struct Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSrcName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalSrcName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CodecID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CodecID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CodecID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalSourceAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsStreamed_MetaData[];
#endif
		static void NewProp_IsStreamed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsStreamed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkExternalSourceInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkExternalSourceInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSrcName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkExternalSourceInfo" },
		{ "ModuleRelativePath", "Public/AkExternalSourceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSrcName = { "ExternalSrcName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkExternalSourceInfo, ExternalSrcName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSrcName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSrcName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkExternalSourceInfo" },
		{ "ModuleRelativePath", "Public/AkExternalSourceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID = { "CodecID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkExternalSourceInfo, CodecID), Z_Construct_UEnum_AkAudio_AkCodecId, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_FileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkExternalSourceInfo" },
		{ "ModuleRelativePath", "Public/AkExternalSourceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkExternalSourceInfo, FileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSourceAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkExternalSourceInfo" },
		{ "ModuleRelativePath", "Public/AkExternalSourceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSourceAsset = { "ExternalSourceAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkExternalSourceInfo, ExternalSourceAsset), Z_Construct_UClass_UAkExternalMediaAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSourceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSourceAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkExternalSourceInfo" },
		{ "ModuleRelativePath", "Public/AkExternalSourceInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed_SetBit(void* Obj)
	{
		((FAkExternalSourceInfo*)Obj)->IsStreamed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed = { "IsStreamed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkExternalSourceInfo), &Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSrcName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_CodecID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_ExternalSourceAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::NewProp_IsStreamed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkExternalSourceInfo",
		sizeof(FAkExternalSourceInfo),
		alignof(FAkExternalSourceInfo),
		Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkExternalSourceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkExternalSourceInfo"), sizeof(FAkExternalSourceInfo), Get_Z_Construct_UScriptStruct_FAkExternalSourceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkExternalSourceInfo_Hash() { return 4284253621U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
