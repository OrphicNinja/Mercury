// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkGeometryData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGeometryData() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticSurface();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkTriangle();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
class UScriptStruct* FAkGeometryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkGeometryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometryData, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkGeometryData"), sizeof(FAkGeometryData), Get_Z_Construct_UScriptStruct_FAkGeometryData_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkGeometryData>()
{
	return FAkGeometryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkGeometryData(FAkGeometryData::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkGeometryData"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkGeometryData
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkGeometryData()
	{
		UScriptStruct::DeferCppStructOps<FAkGeometryData>(FName(TEXT("AkGeometryData")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkGeometryData;
	struct Z_Construct_UScriptStruct_FAkGeometryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Surfaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Surfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Surfaces;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToOverrideAcousticTexture_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToOverrideAcousticTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ToOverrideAcousticTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToOverrideOcclusion_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToOverrideOcclusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ToOverrideOcclusion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkGeometryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometryData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryData" },
		{ "ModuleRelativePath", "Public/AkGeometryData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometryData, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_Inner = { "Surfaces", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkAcousticSurface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryData" },
		{ "ModuleRelativePath", "Public/AkGeometryData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces = { "Surfaces", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometryData, Surfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkTriangle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryData" },
		{ "ModuleRelativePath", "Public/AkGeometryData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometryData, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_Inner = { "ToOverrideAcousticTexture", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryData" },
		{ "ModuleRelativePath", "Public/AkGeometryData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture = { "ToOverrideAcousticTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometryData, ToOverrideAcousticTexture), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_Inner = { "ToOverrideOcclusion", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryData" },
		{ "ModuleRelativePath", "Public/AkGeometryData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion = { "ToOverrideOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometryData, ToOverrideOcclusion), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkGeometryData",
		sizeof(FAkGeometryData),
		alignof(FAkGeometryData),
		Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkGeometryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkGeometryData"), sizeof(FAkGeometryData), Get_Z_Construct_UScriptStruct_FAkGeometryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkGeometryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkGeometryData_Hash() { return 771714833U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
