// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMicroCameraActivateNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMicroCameraActivateNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMicroCameraActivateNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMicroCameraActivateNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMicroCameraActivateNotify::StaticRegisterNativesUSBZMicroCameraActivateNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZMicroCameraActivateNotify_NoRegister()
	{
		return USBZMicroCameraActivateNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZMicroCameraActivateNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMicroCameraActivateNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMicroCameraActivateNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZMicroCameraActivateNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMicroCameraActivateNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMicroCameraActivateNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMicroCameraActivateNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMicroCameraActivateNotify_Statics::ClassParams = {
		&USBZMicroCameraActivateNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMicroCameraActivateNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMicroCameraActivateNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMicroCameraActivateNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMicroCameraActivateNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMicroCameraActivateNotify, 3040176629);
	template<> STARBREEZE_API UClass* StaticClass<USBZMicroCameraActivateNotify>()
	{
		return USBZMicroCameraActivateNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMicroCameraActivateNotify(Z_Construct_UClass_USBZMicroCameraActivateNotify, &USBZMicroCameraActivateNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMicroCameraActivateNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMicroCameraActivateNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
