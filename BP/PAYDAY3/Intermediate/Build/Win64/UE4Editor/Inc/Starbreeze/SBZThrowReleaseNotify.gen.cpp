// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThrowReleaseNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThrowReleaseNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowReleaseNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowReleaseNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void USBZThrowReleaseNotify::StaticRegisterNativesUSBZThrowReleaseNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZThrowReleaseNotify_NoRegister()
	{
		return USBZThrowReleaseNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZThrowReleaseNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseThrowBoneTransform_MetaData[];
#endif
		static void NewProp_bUseThrowBoneTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseThrowBoneTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowBoneComponentTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrowBoneComponentTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZThrowReleaseNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThrowReleaseNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZThrowReleaseNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowReleaseNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThrowReleaseNotify_Statics::NewProp_bUseThrowBoneTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowReleaseNotify" },
		{ "ModuleRelativePath", "Public/SBZThrowReleaseNotify.h" },
	};
#endif
	void Z_Construct_UClass_USBZThrowReleaseNotify_Statics::NewProp_bUseThrowBoneTransform_SetBit(void* Obj)
	{
		((USBZThrowReleaseNotify*)Obj)->bUseThrowBoneTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZThrowReleaseNotify_Statics::NewProp_bUseThrowBoneTransform = { "bUseThrowBoneTransform", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZThrowReleaseNotify), &Z_Construct_UClass_USBZThrowReleaseNotify_Statics::NewProp_bUseThrowBoneTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZThrowReleaseNotify_Statics::NewProp_bUseThrowBoneTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThrowReleaseNotify_Statics::NewProp_bUseThrowBoneTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThrowReleaseNotify_Statics::NewProp_ThrowBoneComponentTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowReleaseNotify" },
		{ "ModuleRelativePath", "Public/SBZThrowReleaseNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZThrowReleaseNotify_Statics::NewProp_ThrowBoneComponentTransform = { "ThrowBoneComponentTransform", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZThrowReleaseNotify, ThrowBoneComponentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USBZThrowReleaseNotify_Statics::NewProp_ThrowBoneComponentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThrowReleaseNotify_Statics::NewProp_ThrowBoneComponentTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZThrowReleaseNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZThrowReleaseNotify_Statics::NewProp_bUseThrowBoneTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZThrowReleaseNotify_Statics::NewProp_ThrowBoneComponentTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZThrowReleaseNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZThrowReleaseNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZThrowReleaseNotify_Statics::ClassParams = {
		&USBZThrowReleaseNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZThrowReleaseNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZThrowReleaseNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZThrowReleaseNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThrowReleaseNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZThrowReleaseNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZThrowReleaseNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZThrowReleaseNotify, 2695865010);
	template<> STARBREEZE_API UClass* StaticClass<USBZThrowReleaseNotify>()
	{
		return USBZThrowReleaseNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZThrowReleaseNotify(Z_Construct_UClass_USBZThrowReleaseNotify, &USBZThrowReleaseNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZThrowReleaseNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZThrowReleaseNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
