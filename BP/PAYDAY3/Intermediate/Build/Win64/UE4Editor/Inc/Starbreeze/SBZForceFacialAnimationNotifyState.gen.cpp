// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZForceFacialAnimationNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZForceFacialAnimationNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZForceFacialAnimationNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZForceFacialAnimationNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	void USBZForceFacialAnimationNotifyState::StaticRegisterNativesUSBZForceFacialAnimationNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZForceFacialAnimationNotifyState_NoRegister()
	{
		return USBZForceFacialAnimationNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacialAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FacialAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZForceFacialAnimationNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZForceFacialAnimationNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics::NewProp_FacialAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZForceFacialAnimationNotifyState" },
		{ "ModuleRelativePath", "Public/SBZForceFacialAnimationNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics::NewProp_FacialAnimation = { "FacialAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZForceFacialAnimationNotifyState, FacialAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics::NewProp_FacialAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics::NewProp_FacialAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics::NewProp_FacialAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZForceFacialAnimationNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics::ClassParams = {
		&USBZForceFacialAnimationNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZForceFacialAnimationNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZForceFacialAnimationNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZForceFacialAnimationNotifyState, 2632580377);
	template<> STARBREEZE_API UClass* StaticClass<USBZForceFacialAnimationNotifyState>()
	{
		return USBZForceFacialAnimationNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZForceFacialAnimationNotifyState(Z_Construct_UClass_USBZForceFacialAnimationNotifyState, &USBZForceFacialAnimationNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZForceFacialAnimationNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZForceFacialAnimationNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
