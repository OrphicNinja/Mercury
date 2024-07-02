// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_BrokenCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_BrokenCamera() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_BrokenCamera_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_BrokenCamera();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USBZAIOrder_BrokenCamera::StaticRegisterNativesUSBZAIOrder_BrokenCamera()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_BrokenCamera_NoRegister()
	{
		return USBZAIOrder_BrokenCamera::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectExtent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_BrokenCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_BrokenCamera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics::NewProp_ProjectExtent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_BrokenCamera" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_BrokenCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics::NewProp_ProjectExtent = { "ProjectExtent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_BrokenCamera, ProjectExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics::NewProp_ProjectExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics::NewProp_ProjectExtent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics::NewProp_ProjectExtent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_BrokenCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics::ClassParams = {
		&USBZAIOrder_BrokenCamera::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_BrokenCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_BrokenCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_BrokenCamera, 518344100);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_BrokenCamera>()
	{
		return USBZAIOrder_BrokenCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_BrokenCamera(Z_Construct_UClass_USBZAIOrder_BrokenCamera, &USBZAIOrder_BrokenCamera::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_BrokenCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_BrokenCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
