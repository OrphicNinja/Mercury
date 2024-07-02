// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTelegraphAttackSoundComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTelegraphAttackSoundComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTelegraphAttackSoundComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTelegraphAttackSoundComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnTelegraphAttackComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	void USBZTelegraphAttackSoundComponent::StaticRegisterNativesUSBZTelegraphAttackSoundComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZTelegraphAttackSoundComponent_NoRegister()
	{
		return USBZTelegraphAttackSoundComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TelegraphStartEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TelegraphStartEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TelegraphStopEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TelegraphStopEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZOnTelegraphAttackComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZTelegraphAttackSoundComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTelegraphAttackSoundComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::NewProp_TelegraphStartEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTelegraphAttackSoundComponent" },
		{ "ModuleRelativePath", "Public/SBZTelegraphAttackSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::NewProp_TelegraphStartEvent = { "TelegraphStartEvent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTelegraphAttackSoundComponent, TelegraphStartEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::NewProp_TelegraphStartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::NewProp_TelegraphStartEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::NewProp_TelegraphStopEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTelegraphAttackSoundComponent" },
		{ "ModuleRelativePath", "Public/SBZTelegraphAttackSoundComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::NewProp_TelegraphStopEvent = { "TelegraphStopEvent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTelegraphAttackSoundComponent, TelegraphStopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::NewProp_TelegraphStopEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::NewProp_TelegraphStopEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::NewProp_TelegraphStartEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::NewProp_TelegraphStopEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTelegraphAttackSoundComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::ClassParams = {
		&USBZTelegraphAttackSoundComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTelegraphAttackSoundComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTelegraphAttackSoundComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTelegraphAttackSoundComponent, 1712197608);
	template<> STARBREEZE_API UClass* StaticClass<USBZTelegraphAttackSoundComponent>()
	{
		return USBZTelegraphAttackSoundComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTelegraphAttackSoundComponent(Z_Construct_UClass_USBZTelegraphAttackSoundComponent, &USBZTelegraphAttackSoundComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTelegraphAttackSoundComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTelegraphAttackSoundComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
