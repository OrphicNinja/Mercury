// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPlugin/Classes/AnimBoneCompressionCodec_ACLBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec_ACLBase() {}
// Cross Module References
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_NoRegister();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec();
	UPackage* Z_Construct_UPackage__Script_ACLPlugin();
	ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel();
// End Cross Module References
	void UAnimBoneCompressionCodec_ACLBase::StaticRegisterNativesUAnimBoneCompressionCodec_ACLBase()
	{
	}
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_NoRegister()
	{
		return UAnimBoneCompressionCodec_ACLBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressionLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultVirtualVertexDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultVirtualVertexDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeVirtualVertexDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SafeVirtualVertexDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErrorThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The base codec implementation for ACL support. */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimBoneCompressionCodec_ACLBase.h" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLBase.h" },
		{ "ToolTip", "The base codec implementation for ACL support." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_CompressionLevel_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** The compression level to use. Higher levels will be slower to compress but yield a lower memory footprint. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLBase.h" },
		{ "ToolTip", "The compression level to use. Higher levels will be slower to compress but yield a lower memory footprint." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_CompressionLevel = { "CompressionLevel", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLBase, CompressionLevel), Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_CompressionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_CompressionLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_DefaultVirtualVertexDistance_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The default virtual vertex distance for normal bones. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLBase.h" },
		{ "ToolTip", "The default virtual vertex distance for normal bones." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_DefaultVirtualVertexDistance = { "DefaultVirtualVertexDistance", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLBase, DefaultVirtualVertexDistance), METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_DefaultVirtualVertexDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_DefaultVirtualVertexDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_SafeVirtualVertexDistance_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The virtual vertex distance for bones that requires extra accuracy. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLBase.h" },
		{ "ToolTip", "The virtual vertex distance for bones that requires extra accuracy." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_SafeVirtualVertexDistance = { "SafeVirtualVertexDistance", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLBase, SafeVirtualVertexDistance), METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_SafeVirtualVertexDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_SafeVirtualVertexDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_ErrorThreshold_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The error threshold to use when optimizing and compressing the animation sequence. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACLBase.h" },
		{ "ToolTip", "The error threshold to use when optimizing and compressing the animation sequence." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_ErrorThreshold = { "ErrorThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACLBase, ErrorThreshold), METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_ErrorThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_ErrorThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_CompressionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_DefaultVirtualVertexDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_SafeVirtualVertexDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::NewProp_ErrorThreshold,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionCodec_ACLBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::ClassParams = {
		&UAnimBoneCompressionCodec_ACLBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::PropPointers), 0),
		0,
		0x000810A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBoneCompressionCodec_ACLBase, 255931238);
	template<> ACLPLUGIN_API UClass* StaticClass<UAnimBoneCompressionCodec_ACLBase>()
	{
		return UAnimBoneCompressionCodec_ACLBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBoneCompressionCodec_ACLBase(Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase, &UAnimBoneCompressionCodec_ACLBase::StaticClass, TEXT("/Script/ACLPlugin"), TEXT("UAnimBoneCompressionCodec_ACLBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionCodec_ACLBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
