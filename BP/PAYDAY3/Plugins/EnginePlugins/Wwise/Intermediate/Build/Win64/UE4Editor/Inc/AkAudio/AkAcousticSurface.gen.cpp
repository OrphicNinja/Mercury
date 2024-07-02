// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAcousticSurface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticSurface() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticSurface();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkAcousticSurface::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAcousticSurface_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAcousticSurface, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAcousticSurface"), sizeof(FAkAcousticSurface), Get_Z_Construct_UScriptStruct_FAkAcousticSurface_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAcousticSurface>()
{
	return FAkAcousticSurface::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAcousticSurface(FAkAcousticSurface::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAcousticSurface"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAcousticSurface
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAcousticSurface()
	{
		UScriptStruct::DeferCppStructOps<FAkAcousticSurface>(FName(TEXT("AkAcousticSurface")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAcousticSurface;
	struct Z_Construct_UScriptStruct_FAkAcousticSurface_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Occlusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Occlusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkAcousticSurface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAcousticSurface>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAcousticSurface" },
		{ "ModuleRelativePath", "Public/AkAcousticSurface.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAcousticSurface, Texture), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAcousticSurface" },
		{ "ModuleRelativePath", "Public/AkAcousticSurface.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion = { "Occlusion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAcousticSurface, Occlusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAcousticSurface" },
		{ "ModuleRelativePath", "Public/AkAcousticSurface.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAcousticSurface, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAcousticSurface",
		sizeof(FAkAcousticSurface),
		alignof(FAkAcousticSurface),
		Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticSurface()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAcousticSurface_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAcousticSurface"), sizeof(FAkAcousticSurface), Get_Z_Construct_UScriptStruct_FAkAcousticSurface_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAcousticSurface_Hash() { return 184537564U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
