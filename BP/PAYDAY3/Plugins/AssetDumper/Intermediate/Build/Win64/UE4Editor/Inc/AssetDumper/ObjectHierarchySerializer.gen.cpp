// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDumper/Public/Toolkit/ObjectHierarchySerializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectHierarchySerializer() {}
// Cross Module References
	ASSETDUMPER_API UClass* Z_Construct_UClass_UObjectHierarchySerializer_NoRegister();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UObjectHierarchySerializer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AssetDumper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ASSETDUMPER_API UClass* Z_Construct_UClass_UPropertySerializer_NoRegister();
// End Cross Module References
	void UObjectHierarchySerializer::StaticRegisterNativesUObjectHierarchySerializer()
	{
	}
	UClass* Z_Construct_UClass_UObjectHierarchySerializer_NoRegister()
	{
		return UObjectHierarchySerializer::StaticClass();
	}
	struct Z_Construct_UClass_UObjectHierarchySerializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePackage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourcePackage;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ObjectIndices_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectIndices_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ObjectIndices;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadedObjects_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadedObjects_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LoadedObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertySerializer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PropertySerializer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectMarks_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectMarks_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectMarks_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ObjectMarks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectHierarchySerializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetDumper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectHierarchySerializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Toolkit/ObjectHierarchySerializer.h" },
		{ "ModuleRelativePath", "Public/Toolkit/ObjectHierarchySerializer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_SourcePackage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Toolkit/ObjectHierarchySerializer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_SourcePackage = { "SourcePackage", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectHierarchySerializer, SourcePackage), Z_Construct_UClass_UPackage, METADATA_PARAMS(Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_SourcePackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_SourcePackage_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectIndices_ValueProp = { "ObjectIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectIndices_Key_KeyProp = { "ObjectIndices_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Toolkit/ObjectHierarchySerializer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectIndices = { "ObjectIndices", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectHierarchySerializer, ObjectIndices), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectIndices_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_LoadedObjects_ValueProp = { "LoadedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_LoadedObjects_Key_KeyProp = { "LoadedObjects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_LoadedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Toolkit/ObjectHierarchySerializer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_LoadedObjects = { "LoadedObjects", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectHierarchySerializer, LoadedObjects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_LoadedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_LoadedObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_PropertySerializer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Toolkit/ObjectHierarchySerializer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_PropertySerializer = { "PropertySerializer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectHierarchySerializer, PropertySerializer), Z_Construct_UClass_UPropertySerializer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_PropertySerializer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_PropertySerializer_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectMarks_ValueProp = { "ObjectMarks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectMarks_Key_KeyProp = { "ObjectMarks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectMarks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Toolkit/ObjectHierarchySerializer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectMarks = { "ObjectMarks", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectHierarchySerializer, ObjectMarks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectMarks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectMarks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectHierarchySerializer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_SourcePackage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectIndices_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectIndices_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_LoadedObjects_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_LoadedObjects_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_LoadedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_PropertySerializer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectMarks_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectMarks_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectHierarchySerializer_Statics::NewProp_ObjectMarks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectHierarchySerializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectHierarchySerializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectHierarchySerializer_Statics::ClassParams = {
		&UObjectHierarchySerializer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectHierarchySerializer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectHierarchySerializer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectHierarchySerializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectHierarchySerializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectHierarchySerializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectHierarchySerializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectHierarchySerializer, 153417139);
	template<> ASSETDUMPER_API UClass* StaticClass<UObjectHierarchySerializer>()
	{
		return UObjectHierarchySerializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectHierarchySerializer(Z_Construct_UClass_UObjectHierarchySerializer, &UObjectHierarchySerializer::StaticClass, TEXT("/Script/AssetDumper"), TEXT("UObjectHierarchySerializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectHierarchySerializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
