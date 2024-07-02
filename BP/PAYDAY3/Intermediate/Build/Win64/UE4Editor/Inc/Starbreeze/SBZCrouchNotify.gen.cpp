// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCrouchNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCrouchNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCrouchNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCrouchNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZCrouchNotify::StaticRegisterNativesUSBZCrouchNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZCrouchNotify_NoRegister()
	{
		return USBZCrouchNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZCrouchNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCrouched_MetaData[];
#endif
		static void NewProp_bCrouched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrouched;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCrouchNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCrouchNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZCrouchNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCrouchNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCrouchNotify_Statics::NewProp_bCrouched_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCrouchNotify" },
		{ "ModuleRelativePath", "Public/SBZCrouchNotify.h" },
	};
#endif
	void Z_Construct_UClass_USBZCrouchNotify_Statics::NewProp_bCrouched_SetBit(void* Obj)
	{
		((USBZCrouchNotify*)Obj)->bCrouched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCrouchNotify_Statics::NewProp_bCrouched = { "bCrouched", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCrouchNotify), &Z_Construct_UClass_USBZCrouchNotify_Statics::NewProp_bCrouched_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCrouchNotify_Statics::NewProp_bCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCrouchNotify_Statics::NewProp_bCrouched_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCrouchNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCrouchNotify_Statics::NewProp_bCrouched,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCrouchNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCrouchNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCrouchNotify_Statics::ClassParams = {
		&USBZCrouchNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCrouchNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCrouchNotify_Statics::PropPointers),
		0,
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCrouchNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCrouchNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCrouchNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCrouchNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCrouchNotify, 3692973960);
	template<> STARBREEZE_API UClass* StaticClass<USBZCrouchNotify>()
	{
		return USBZCrouchNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCrouchNotify(Z_Construct_UClass_USBZCrouchNotify, &USBZCrouchNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCrouchNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCrouchNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
