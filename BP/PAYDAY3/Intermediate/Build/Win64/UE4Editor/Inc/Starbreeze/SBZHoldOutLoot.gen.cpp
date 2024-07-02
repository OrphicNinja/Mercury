// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutLoot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutLoot() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutLoot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutLoot();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSingleBagGenerator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	void ASBZHoldOutLoot::StaticRegisterNativesASBZHoldOutLoot()
	{
	}
	UClass* Z_Construct_UClass_ASBZHoldOutLoot_NoRegister()
	{
		return ASBZHoldOutLoot::StaticClass();
	}
	struct Z_Construct_UClass_ASBZHoldOutLoot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnAKEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnAKEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackerAKEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackerAKEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZHoldOutLoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZSingleBagGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutLoot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHoldOutLoot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutLoot.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutLoot_Statics::NewProp_AkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutLoot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutLoot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHoldOutLoot_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutLoot, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutLoot_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutLoot_Statics::NewProp_AkComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutLoot_Statics::NewProp_SpawnAKEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutLoot" },
		{ "ModuleRelativePath", "Public/SBZHoldOutLoot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHoldOutLoot_Statics::NewProp_SpawnAKEvent = { "SpawnAKEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutLoot, SpawnAKEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutLoot_Statics::NewProp_SpawnAKEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutLoot_Statics::NewProp_SpawnAKEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutLoot_Statics::NewProp_TrackerAKEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutLoot" },
		{ "ModuleRelativePath", "Public/SBZHoldOutLoot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHoldOutLoot_Statics::NewProp_TrackerAKEvent = { "TrackerAKEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutLoot, TrackerAKEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutLoot_Statics::NewProp_TrackerAKEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutLoot_Statics::NewProp_TrackerAKEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZHoldOutLoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutLoot_Statics::NewProp_AkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutLoot_Statics::NewProp_SpawnAKEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutLoot_Statics::NewProp_TrackerAKEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZHoldOutLoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZHoldOutLoot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZHoldOutLoot_Statics::ClassParams = {
		&ASBZHoldOutLoot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZHoldOutLoot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutLoot_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutLoot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutLoot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZHoldOutLoot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZHoldOutLoot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZHoldOutLoot, 3341401484);
	template<> STARBREEZE_API UClass* StaticClass<ASBZHoldOutLoot>()
	{
		return ASBZHoldOutLoot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZHoldOutLoot(Z_Construct_UClass_ASBZHoldOutLoot, &ASBZHoldOutLoot::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZHoldOutLoot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZHoldOutLoot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
