// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZClampCameraRotationModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZClampCameraRotationModifier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClampCameraRotationModifier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClampCameraRotationModifier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCameraModifier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLockCameraData();
// End Cross Module References
	void USBZClampCameraRotationModifier::StaticRegisterNativesUSBZClampCameraRotationModifier()
	{
	}
	UClass* Z_Construct_UClass_USBZClampCameraRotationModifier_NoRegister()
	{
		return USBZClampCameraRotationModifier::StaticClass();
	}
	struct Z_Construct_UClass_USBZClampCameraRotationModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataArray;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IdArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IdArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZClampCameraRotationModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZClampCameraRotationModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_DataArray_Inner = { "DataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLockCameraData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_DataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZClampCameraRotationModifier" },
		{ "ModuleRelativePath", "Public/SBZClampCameraRotationModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_DataArray = { "DataArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZClampCameraRotationModifier, DataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_DataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_DataArray_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_IdArray_Inner = { "IdArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_IdArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZClampCameraRotationModifier" },
		{ "ModuleRelativePath", "Public/SBZClampCameraRotationModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_IdArray = { "IdArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZClampCameraRotationModifier, IdArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_IdArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_IdArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_LastId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZClampCameraRotationModifier" },
		{ "ModuleRelativePath", "Public/SBZClampCameraRotationModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_LastId = { "LastId", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZClampCameraRotationModifier, LastId), METADATA_PARAMS(Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_LastId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_LastId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_CurrentIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZClampCameraRotationModifier" },
		{ "ModuleRelativePath", "Public/SBZClampCameraRotationModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZClampCameraRotationModifier, CurrentIndex), METADATA_PARAMS(Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_CurrentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_CurrentIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_DataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_DataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_IdArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_IdArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_LastId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::NewProp_CurrentIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZClampCameraRotationModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::ClassParams = {
		&USBZClampCameraRotationModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZClampCameraRotationModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZClampCameraRotationModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZClampCameraRotationModifier, 39775719);
	template<> STARBREEZE_API UClass* StaticClass<USBZClampCameraRotationModifier>()
	{
		return USBZClampCameraRotationModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZClampCameraRotationModifier(Z_Construct_UClass_USBZClampCameraRotationModifier, &USBZClampCameraRotationModifier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZClampCameraRotationModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZClampCameraRotationModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
