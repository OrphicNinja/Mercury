// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsItemImage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsItemImage() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemImage();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsItemImage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsItemImage, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsItemImage"), sizeof(FAccelByteModelsItemImage), Get_Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsItemImage>()
{
	return FAccelByteModelsItemImage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsItemImage(FAccelByteModelsItemImage::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsItemImage"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsItemImage
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsItemImage()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsItemImage>(FName(TEXT("AccelByteModelsItemImage")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsItemImage;
	struct Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_As_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_As;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Caption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Caption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImageUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallImageUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SmallImageUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemImage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsItemImage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_As_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemImage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemImage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_As = { "As", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemImage, As), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_As_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_As_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_Caption_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemImage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemImage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_Caption = { "Caption", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemImage, Caption), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_Caption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_Caption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_Height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemImage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemImage.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemImage, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_Width_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemImage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemImage.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemImage, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_ImageUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemImage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemImage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_ImageUrl = { "ImageUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemImage, ImageUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_ImageUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_ImageUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_SmallImageUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemImage" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemImage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_SmallImageUrl = { "SmallImageUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemImage, SmallImageUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_SmallImageUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_SmallImageUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_As,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_Caption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_ImageUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::NewProp_SmallImageUrl,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsItemImage",
		sizeof(FAccelByteModelsItemImage),
		alignof(FAccelByteModelsItemImage),
		Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemImage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsItemImage"), sizeof(FAccelByteModelsItemImage), Get_Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsItemImage_Hash() { return 3690286297U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
