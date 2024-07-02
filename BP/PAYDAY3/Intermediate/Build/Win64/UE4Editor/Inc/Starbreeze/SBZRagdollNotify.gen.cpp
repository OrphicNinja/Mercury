// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRagdollNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRagdollNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRagdollNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRagdollNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZRagdollNotify::StaticRegisterNativesUSBZRagdollNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZRagdollNotify_NoRegister()
	{
		return USBZRagdollNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZRagdollNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomOffsetBackward_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomOffsetBackward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRagdollNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRagdollNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZRagdollNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRagdollNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRagdollNotify_Statics::NewProp_RandomOffsetBackward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRagdollNotify" },
		{ "ModuleRelativePath", "Public/SBZRagdollNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZRagdollNotify_Statics::NewProp_RandomOffsetBackward = { "RandomOffsetBackward", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRagdollNotify, RandomOffsetBackward), METADATA_PARAMS(Z_Construct_UClass_USBZRagdollNotify_Statics::NewProp_RandomOffsetBackward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRagdollNotify_Statics::NewProp_RandomOffsetBackward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZRagdollNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRagdollNotify_Statics::NewProp_RandomOffsetBackward,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRagdollNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRagdollNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRagdollNotify_Statics::ClassParams = {
		&USBZRagdollNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZRagdollNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZRagdollNotify_Statics::PropPointers),
		0,
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZRagdollNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRagdollNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRagdollNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRagdollNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRagdollNotify, 358368645);
	template<> STARBREEZE_API UClass* StaticClass<USBZRagdollNotify>()
	{
		return USBZRagdollNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRagdollNotify(Z_Construct_UClass_USBZRagdollNotify, &USBZRagdollNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRagdollNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRagdollNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
