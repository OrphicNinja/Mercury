// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAITaserBattery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAITaserBattery() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAITaserBattery_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAITaserBattery();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIExplosiveWeakPoint();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZAITaserBattery::StaticRegisterNativesUSBZAITaserBattery()
	{
	}
	UClass* Z_Construct_UClass_USBZAITaserBattery_NoRegister()
	{
		return USBZAITaserBattery::StaticClass();
	}
	struct Z_Construct_UClass_USBZAITaserBattery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaseDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TaseDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LawEnforcerTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LawEnforcerTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAITaserBattery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIExplosiveWeakPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITaserBattery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "SBZAITaserBattery.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAITaserBattery.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITaserBattery_Statics::NewProp_TaseDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserBattery" },
		{ "ModuleRelativePath", "Public/SBZAITaserBattery.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAITaserBattery_Statics::NewProp_TaseDuration = { "TaseDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAITaserBattery, TaseDuration), METADATA_PARAMS(Z_Construct_UClass_USBZAITaserBattery_Statics::NewProp_TaseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITaserBattery_Statics::NewProp_TaseDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITaserBattery_Statics::NewProp_LawEnforcerTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserBattery" },
		{ "ModuleRelativePath", "Public/SBZAITaserBattery.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAITaserBattery_Statics::NewProp_LawEnforcerTags = { "LawEnforcerTags", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAITaserBattery, LawEnforcerTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAITaserBattery_Statics::NewProp_LawEnforcerTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITaserBattery_Statics::NewProp_LawEnforcerTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAITaserBattery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAITaserBattery_Statics::NewProp_TaseDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAITaserBattery_Statics::NewProp_LawEnforcerTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAITaserBattery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAITaserBattery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAITaserBattery_Statics::ClassParams = {
		&USBZAITaserBattery::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAITaserBattery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITaserBattery_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAITaserBattery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITaserBattery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAITaserBattery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAITaserBattery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAITaserBattery, 1956312076);
	template<> STARBREEZE_API UClass* StaticClass<USBZAITaserBattery>()
	{
		return USBZAITaserBattery::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAITaserBattery(Z_Construct_UClass_USBZAITaserBattery, &USBZAITaserBattery::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAITaserBattery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAITaserBattery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
