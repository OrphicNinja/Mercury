// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMicroCameraData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMicroCameraData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMicroCameraData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMicroCameraData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
// End Cross Module References
	void USBZMicroCameraData::StaticRegisterNativesUSBZMicroCameraData()
	{
	}
	UClass* Z_Construct_UClass_USBZMicroCameraData_NoRegister()
	{
		return USBZMicroCameraData::StaticClass();
	}
	struct Z_Construct_UClass_USBZMicroCameraData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundRangeOverloaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoundRangeOverloaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAutoMarkedDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultAutoMarkedDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkedOutline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkedOutline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMicroCameraData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZToolData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMicroCameraData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMicroCameraData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMicroCameraData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMicroCameraData_Statics::NewProp_SoundRangeOverloaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCameraData" },
		{ "ModuleRelativePath", "Public/SBZMicroCameraData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMicroCameraData_Statics::NewProp_SoundRangeOverloaded = { "SoundRangeOverloaded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMicroCameraData, SoundRangeOverloaded), METADATA_PARAMS(Z_Construct_UClass_USBZMicroCameraData_Statics::NewProp_SoundRangeOverloaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMicroCameraData_Statics::NewProp_SoundRangeOverloaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMicroCameraData_Statics::NewProp_DefaultAutoMarkedDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCameraData" },
		{ "ModuleRelativePath", "Public/SBZMicroCameraData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMicroCameraData_Statics::NewProp_DefaultAutoMarkedDuration = { "DefaultAutoMarkedDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMicroCameraData, DefaultAutoMarkedDuration), METADATA_PARAMS(Z_Construct_UClass_USBZMicroCameraData_Statics::NewProp_DefaultAutoMarkedDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMicroCameraData_Statics::NewProp_DefaultAutoMarkedDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMicroCameraData_Statics::NewProp_MarkedOutline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCameraData" },
		{ "ModuleRelativePath", "Public/SBZMicroCameraData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMicroCameraData_Statics::NewProp_MarkedOutline = { "MarkedOutline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMicroCameraData, MarkedOutline), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMicroCameraData_Statics::NewProp_MarkedOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMicroCameraData_Statics::NewProp_MarkedOutline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMicroCameraData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMicroCameraData_Statics::NewProp_SoundRangeOverloaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMicroCameraData_Statics::NewProp_DefaultAutoMarkedDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMicroCameraData_Statics::NewProp_MarkedOutline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMicroCameraData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMicroCameraData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMicroCameraData_Statics::ClassParams = {
		&USBZMicroCameraData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMicroCameraData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMicroCameraData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMicroCameraData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMicroCameraData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMicroCameraData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMicroCameraData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMicroCameraData, 3787269848);
	template<> STARBREEZE_API UClass* StaticClass<USBZMicroCameraData>()
	{
		return USBZMicroCameraData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMicroCameraData(Z_Construct_UClass_USBZMicroCameraData, &USBZMicroCameraData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMicroCameraData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMicroCameraData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
