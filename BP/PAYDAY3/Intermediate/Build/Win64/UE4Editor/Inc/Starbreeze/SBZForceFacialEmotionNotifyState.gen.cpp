// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZForceFacialEmotionNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZForceFacialEmotionNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZForceFacialEmotionNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZForceFacialEmotionNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFacialEmotion();
// End Cross Module References
	void USBZForceFacialEmotionNotifyState::StaticRegisterNativesUSBZForceFacialEmotionNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZForceFacialEmotionNotifyState_NoRegister()
	{
		return USBZForceFacialEmotionNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FacialEmotion_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacialEmotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FacialEmotion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZForceFacialEmotionNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZForceFacialEmotionNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::NewProp_FacialEmotion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::NewProp_FacialEmotion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZForceFacialEmotionNotifyState" },
		{ "ModuleRelativePath", "Public/SBZForceFacialEmotionNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::NewProp_FacialEmotion = { "FacialEmotion", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZForceFacialEmotionNotifyState, FacialEmotion), Z_Construct_UEnum_Starbreeze_ESBZFacialEmotion, METADATA_PARAMS(Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::NewProp_FacialEmotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::NewProp_FacialEmotion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::NewProp_FacialEmotion_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::NewProp_FacialEmotion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZForceFacialEmotionNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::ClassParams = {
		&USBZForceFacialEmotionNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZForceFacialEmotionNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZForceFacialEmotionNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZForceFacialEmotionNotifyState, 1842796639);
	template<> STARBREEZE_API UClass* StaticClass<USBZForceFacialEmotionNotifyState>()
	{
		return USBZForceFacialEmotionNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZForceFacialEmotionNotifyState(Z_Construct_UClass_USBZForceFacialEmotionNotifyState, &USBZForceFacialEmotionNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZForceFacialEmotionNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZForceFacialEmotionNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
