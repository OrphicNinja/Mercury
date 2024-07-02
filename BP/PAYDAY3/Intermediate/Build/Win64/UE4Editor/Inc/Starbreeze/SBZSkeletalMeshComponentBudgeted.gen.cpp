// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkeletalMeshComponentBudgeted.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkeletalMeshComponentBudgeted() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted();
	ANIMATIONBUDGETALLOCATOR_API UClass* Z_Construct_UClass_USkeletalMeshComponentBudgeted();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCapsuleShadowingData_NoRegister();
// End Cross Module References
	void USBZSkeletalMeshComponentBudgeted::StaticRegisterNativesUSBZSkeletalMeshComponentBudgeted()
	{
	}
	UClass* Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_NoRegister()
	{
		return USBZSkeletalMeshComponentBudgeted::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleShadowingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleShadowingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponentBudgeted,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "SBZSkeletalMeshComponentBudgeted.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkeletalMeshComponentBudgeted.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics::NewProp_CapsuleShadowingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkeletalMeshComponentBudgeted" },
		{ "ModuleRelativePath", "Public/SBZSkeletalMeshComponentBudgeted.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics::NewProp_CapsuleShadowingData = { "CapsuleShadowingData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkeletalMeshComponentBudgeted, CapsuleShadowingData), Z_Construct_UClass_USBZCapsuleShadowingData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics::NewProp_CapsuleShadowingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics::NewProp_CapsuleShadowingData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics::NewProp_CapsuleShadowingData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkeletalMeshComponentBudgeted>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics::ClassParams = {
		&USBZSkeletalMeshComponentBudgeted::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkeletalMeshComponentBudgeted, 2146346925);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkeletalMeshComponentBudgeted>()
	{
		return USBZSkeletalMeshComponentBudgeted::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkeletalMeshComponentBudgeted(Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted, &USBZSkeletalMeshComponentBudgeted::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkeletalMeshComponentBudgeted"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkeletalMeshComponentBudgeted);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
