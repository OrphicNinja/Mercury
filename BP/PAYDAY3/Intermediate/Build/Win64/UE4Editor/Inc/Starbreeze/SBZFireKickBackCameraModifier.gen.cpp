// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFireKickBackCameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFireKickBackCameraModifier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFireKickBackCameraModifier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFireKickBackCameraModifier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCameraModifier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZFireKickBackCameraModifier::StaticRegisterNativesUSBZFireKickBackCameraModifier()
	{
	}
	UClass* Z_Construct_UClass_USBZFireKickBackCameraModifier_NoRegister()
	{
		return USBZFireKickBackCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_USBZFireKickBackCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFireKickBackCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFireKickBackCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFireKickBackCameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFireKickBackCameraModifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFireKickBackCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFireKickBackCameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFireKickBackCameraModifier_Statics::ClassParams = {
		&USBZFireKickBackCameraModifier::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZFireKickBackCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFireKickBackCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFireKickBackCameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFireKickBackCameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFireKickBackCameraModifier, 3149443838);
	template<> STARBREEZE_API UClass* StaticClass<USBZFireKickBackCameraModifier>()
	{
		return USBZFireKickBackCameraModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFireKickBackCameraModifier(Z_Construct_UClass_USBZFireKickBackCameraModifier, &USBZFireKickBackCameraModifier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFireKickBackCameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFireKickBackCameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
