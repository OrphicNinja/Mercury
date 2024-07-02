// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuCrimeNetStoryModeButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuCrimeNetStoryModeButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMainMenuCrimeNetStoryModeButton::StaticRegisterNativesUSBZMainMenuCrimeNetStoryModeButton()
	{
	}
	UClass* Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_NoRegister()
	{
		return USBZMainMenuCrimeNetStoryModeButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsIntroVideo_MetaData[];
#endif
		static void NewProp_bIsIntroVideo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsIntroVideo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuCrimeNetStoryModeButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetStoryModeButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::NewProp_bIsIntroVideo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetStoryModeButton" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetStoryModeButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::NewProp_bIsIntroVideo_SetBit(void* Obj)
	{
		((USBZMainMenuCrimeNetStoryModeButton*)Obj)->bIsIntroVideo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::NewProp_bIsIntroVideo = { "bIsIntroVideo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMainMenuCrimeNetStoryModeButton), &Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::NewProp_bIsIntroVideo_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::NewProp_bIsIntroVideo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::NewProp_bIsIntroVideo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::NewProp_bIsIntroVideo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuCrimeNetStoryModeButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::ClassParams = {
		&USBZMainMenuCrimeNetStoryModeButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuCrimeNetStoryModeButton, 3378032566);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuCrimeNetStoryModeButton>()
	{
		return USBZMainMenuCrimeNetStoryModeButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuCrimeNetStoryModeButton(Z_Construct_UClass_USBZMainMenuCrimeNetStoryModeButton, &USBZMainMenuCrimeNetStoryModeButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuCrimeNetStoryModeButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuCrimeNetStoryModeButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
