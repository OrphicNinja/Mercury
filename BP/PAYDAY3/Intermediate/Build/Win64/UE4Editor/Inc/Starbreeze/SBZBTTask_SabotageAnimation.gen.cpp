// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_SabotageAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_SabotageAnimation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_SabotageAnimation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_SabotageAnimation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSabotageAnimationData();
// End Cross Module References
	void USBZBTTask_SabotageAnimation::StaticRegisterNativesUSBZBTTask_SabotageAnimation()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_SabotageAnimation_NoRegister()
	{
		return USBZBTTask_SabotageAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SabotageAnimations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SabotageAnimations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SabotageAnimations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_SabotageAnimation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_SabotageAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::NewProp_SabotageAnimations_Inner = { "SabotageAnimations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSabotageAnimationData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::NewProp_SabotageAnimations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_SabotageAnimation" },
		{ "ModuleRelativePath", "Public/SBZBTTask_SabotageAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::NewProp_SabotageAnimations = { "SabotageAnimations", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_SabotageAnimation, SabotageAnimations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::NewProp_SabotageAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::NewProp_SabotageAnimations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::NewProp_SabotageAnimations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::NewProp_SabotageAnimations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_SabotageAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::ClassParams = {
		&USBZBTTask_SabotageAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_SabotageAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_SabotageAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_SabotageAnimation, 3199155118);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_SabotageAnimation>()
	{
		return USBZBTTask_SabotageAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_SabotageAnimation(Z_Construct_UClass_USBZBTTask_SabotageAnimation, &USBZBTTask_SabotageAnimation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_SabotageAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_SabotageAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
