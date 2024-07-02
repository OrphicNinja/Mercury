// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDisablePlayerHandRigTransform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDisablePlayerHandRigTransform() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDisablePlayerHandRigTransform_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDisablePlayerHandRigTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZDisablePlayerHandRigTransform::StaticRegisterNativesUSBZDisablePlayerHandRigTransform()
	{
	}
	UClass* Z_Construct_UClass_USBZDisablePlayerHandRigTransform_NoRegister()
	{
		return USBZDisablePlayerHandRigTransform::StaticClass();
	}
	struct Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledHandRigTransformFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisabledHandRigTransformFlags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZDisablePlayerHandRigTransform.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDisablePlayerHandRigTransform.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics::NewProp_DisabledHandRigTransformFlags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisablePlayerHandRigTransform" },
		{ "ModuleRelativePath", "Public/SBZDisablePlayerHandRigTransform.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics::NewProp_DisabledHandRigTransformFlags = { "DisabledHandRigTransformFlags", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDisablePlayerHandRigTransform, DisabledHandRigTransformFlags), METADATA_PARAMS(Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics::NewProp_DisabledHandRigTransformFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics::NewProp_DisabledHandRigTransformFlags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics::NewProp_DisabledHandRigTransformFlags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDisablePlayerHandRigTransform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics::ClassParams = {
		&USBZDisablePlayerHandRigTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDisablePlayerHandRigTransform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDisablePlayerHandRigTransform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDisablePlayerHandRigTransform, 210124252);
	template<> STARBREEZE_API UClass* StaticClass<USBZDisablePlayerHandRigTransform>()
	{
		return USBZDisablePlayerHandRigTransform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDisablePlayerHandRigTransform(Z_Construct_UClass_USBZDisablePlayerHandRigTransform, &USBZDisablePlayerHandRigTransform::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDisablePlayerHandRigTransform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDisablePlayerHandRigTransform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
