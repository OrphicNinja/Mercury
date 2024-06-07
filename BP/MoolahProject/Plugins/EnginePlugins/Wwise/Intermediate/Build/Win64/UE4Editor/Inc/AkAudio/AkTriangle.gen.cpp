// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkTriangle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkTriangle() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkTriangle();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkTriangle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkTriangle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkTriangle, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkTriangle"), sizeof(FAkTriangle), Get_Z_Construct_UScriptStruct_FAkTriangle_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkTriangle>()
{
	return FAkTriangle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkTriangle(FAkTriangle::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkTriangle"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkTriangle
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkTriangle()
	{
		UScriptStruct::DeferCppStructOps<FAkTriangle>(FName(TEXT("AkTriangle")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkTriangle;
	struct Z_Construct_UScriptStruct_FAkTriangle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point0_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_Point0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_Point1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_Point2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Surface_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_Surface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkTriangle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkTriangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkTriangle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkTriangle" },
		{ "ModuleRelativePath", "Public/AkTriangle.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0 = { "Point0", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkTriangle, Point0), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkTriangle" },
		{ "ModuleRelativePath", "Public/AkTriangle.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1 = { "Point1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkTriangle, Point1), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkTriangle" },
		{ "ModuleRelativePath", "Public/AkTriangle.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2 = { "Point2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkTriangle, Point2), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkTriangle" },
		{ "ModuleRelativePath", "Public/AkTriangle.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface = { "Surface", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkTriangle, Surface), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkTriangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkTriangle",
		sizeof(FAkTriangle),
		alignof(FAkTriangle),
		Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkTriangle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkTriangle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkTriangle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkTriangle"), sizeof(FAkTriangle), Get_Z_Construct_UScriptStruct_FAkTriangle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkTriangle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkTriangle_Hash() { return 4279553269U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
