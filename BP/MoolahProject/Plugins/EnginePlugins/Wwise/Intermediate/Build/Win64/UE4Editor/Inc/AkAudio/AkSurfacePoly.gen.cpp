// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSurfacePoly.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfacePoly() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
// End Cross Module References
class UScriptStruct* FAkSurfacePoly::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkSurfacePoly_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSurfacePoly, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSurfacePoly"), sizeof(FAkSurfacePoly), Get_Z_Construct_UScriptStruct_FAkSurfacePoly_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSurfacePoly>()
{
	return FAkSurfacePoly::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkSurfacePoly(FAkSurfacePoly::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkSurfacePoly"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkSurfacePoly
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkSurfacePoly()
	{
		UScriptStruct::DeferCppStructOps<FAkSurfacePoly>(FName(TEXT("AkSurfacePoly")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkSurfacePoly;
	struct Z_Construct_UScriptStruct_FAkSurfacePoly_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Occlusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Occlusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSurface_MetaData[];
#endif
		static void NewProp_EnableSurface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableSurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkSurfacePoly.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSurfacePoly>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfacePoly" },
		{ "ModuleRelativePath", "Public/AkSurfacePoly.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSurfacePoly, Texture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfacePoly" },
		{ "ModuleRelativePath", "Public/AkSurfacePoly.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion = { "Occlusion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSurfacePoly, Occlusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfacePoly" },
		{ "ModuleRelativePath", "Public/AkSurfacePoly.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_SetBit(void* Obj)
	{
		((FAkSurfacePoly*)Obj)->EnableSurface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface = { "EnableSurface", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkSurfacePoly), &Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfacePoly" },
		{ "ModuleRelativePath", "Public/AkSurfacePoly.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSurfacePoly, SurfaceArea), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_Occlusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_EnableSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::NewProp_SurfaceArea,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSurfacePoly",
		sizeof(FAkSurfacePoly),
		alignof(FAkSurfacePoly),
		Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkSurfacePoly_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkSurfacePoly"), sizeof(FAkSurfacePoly), Get_Z_Construct_UScriptStruct_FAkSurfacePoly_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkSurfacePoly_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkSurfacePoly_Hash() { return 3019919880U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
