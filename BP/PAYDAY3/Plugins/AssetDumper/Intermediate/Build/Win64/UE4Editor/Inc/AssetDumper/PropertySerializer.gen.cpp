// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDumper/Public/Toolkit/PropertySerializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertySerializer() {}
// Cross Module References
	ASSETDUMPER_API UClass* Z_Construct_UClass_UPropertySerializer_NoRegister();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UPropertySerializer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AssetDumper();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UObjectHierarchySerializer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
// End Cross Module References
	void UPropertySerializer::StaticRegisterNativesUPropertySerializer()
	{
	}
	UClass* Z_Construct_UClass_UPropertySerializer_NoRegister()
	{
		return UPropertySerializer::StaticClass();
	}
	struct Z_Construct_UClass_UPropertySerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectHierarchySerializer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectHierarchySerializer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PinnedStructs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinnedStructs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PinnedStructs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertySerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetDumper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertySerializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/PropertySerializer.h" },
		{ "ModuleRelativePath", "Public/Toolkit/PropertySerializer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertySerializer_Statics::NewProp_ObjectHierarchySerializer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Toolkit/PropertySerializer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertySerializer_Statics::NewProp_ObjectHierarchySerializer = { "ObjectHierarchySerializer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertySerializer, ObjectHierarchySerializer), Z_Construct_UClass_UObjectHierarchySerializer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertySerializer_Statics::NewProp_ObjectHierarchySerializer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySerializer_Statics::NewProp_ObjectHierarchySerializer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertySerializer_Statics::NewProp_PinnedStructs_Inner = { "PinnedStructs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertySerializer_Statics::NewProp_PinnedStructs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Toolkit/PropertySerializer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertySerializer_Statics::NewProp_PinnedStructs = { "PinnedStructs", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertySerializer, PinnedStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPropertySerializer_Statics::NewProp_PinnedStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySerializer_Statics::NewProp_PinnedStructs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertySerializer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertySerializer_Statics::NewProp_ObjectHierarchySerializer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertySerializer_Statics::NewProp_PinnedStructs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertySerializer_Statics::NewProp_PinnedStructs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertySerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertySerializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPropertySerializer_Statics::ClassParams = {
		&UPropertySerializer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPropertySerializer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySerializer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertySerializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySerializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertySerializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPropertySerializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPropertySerializer, 4224872622);
	template<> ASSETDUMPER_API UClass* StaticClass<UPropertySerializer>()
	{
		return UPropertySerializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPropertySerializer(Z_Construct_UClass_UPropertySerializer, &UPropertySerializer::StaticClass, TEXT("/Script/AssetDumper"), TEXT("UPropertySerializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertySerializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
