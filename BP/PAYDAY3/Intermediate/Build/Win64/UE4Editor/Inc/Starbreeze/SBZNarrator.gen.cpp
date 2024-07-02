// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNarrator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNarrator() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZNarrator_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZNarrator();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterVoiceComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceComponentInterface_NoRegister();
// End Cross Module References
	void ASBZNarrator::StaticRegisterNativesASBZNarrator()
	{
	}
	UClass* Z_Construct_UClass_ASBZNarrator_NoRegister()
	{
		return ASBZNarrator::StaticClass();
	}
	struct Z_Construct_UClass_ASBZNarrator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZNarrator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZNarrator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZNarrator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNarrator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZNarrator_Statics::NewProp_VoiceComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNarrator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZNarrator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZNarrator_Statics::NewProp_VoiceComponent = { "VoiceComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZNarrator, VoiceComponent), Z_Construct_UClass_USBZCharacterVoiceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZNarrator_Statics::NewProp_VoiceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZNarrator_Statics::NewProp_VoiceComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZNarrator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZNarrator_Statics::NewProp_VoiceComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZNarrator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZVoiceComponentInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZNarrator, ISBZVoiceComponentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZNarrator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZNarrator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZNarrator_Statics::ClassParams = {
		&ASBZNarrator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZNarrator_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZNarrator_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZNarrator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZNarrator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZNarrator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZNarrator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZNarrator, 2860793465);
	template<> STARBREEZE_API UClass* StaticClass<ASBZNarrator>()
	{
		return ASBZNarrator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZNarrator(Z_Construct_UClass_ASBZNarrator, &ASBZNarrator::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZNarrator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZNarrator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
