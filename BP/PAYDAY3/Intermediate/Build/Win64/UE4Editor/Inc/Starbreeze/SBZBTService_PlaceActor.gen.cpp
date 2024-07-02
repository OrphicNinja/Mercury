// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_PlaceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_PlaceActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_PlaceActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_PlaceActor();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZBTService_PlaceActor::StaticRegisterNativesUSBZBTService_PlaceActor()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_PlaceActor_NoRegister()
	{
		return USBZBTService_PlaceActor::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_PlaceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacingCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlacingCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForbiddenPlacementTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForbiddenPlacementTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_PlaceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_PlaceActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_PlaceActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_PlaceActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_PlaceActor_Statics::NewProp_PlacingCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_PlaceActor" },
		{ "ModuleRelativePath", "Public/SBZBTService_PlaceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_PlaceActor_Statics::NewProp_PlacingCooldown = { "PlacingCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_PlaceActor, PlacingCooldown), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_PlaceActor_Statics::NewProp_PlacingCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_PlaceActor_Statics::NewProp_PlacingCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_PlaceActor_Statics::NewProp_RandomChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_PlaceActor" },
		{ "ModuleRelativePath", "Public/SBZBTService_PlaceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_PlaceActor_Statics::NewProp_RandomChance = { "RandomChance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_PlaceActor, RandomChance), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_PlaceActor_Statics::NewProp_RandomChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_PlaceActor_Statics::NewProp_RandomChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_PlaceActor_Statics::NewProp_ForbiddenPlacementTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_PlaceActor" },
		{ "ModuleRelativePath", "Public/SBZBTService_PlaceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_PlaceActor_Statics::NewProp_ForbiddenPlacementTags = { "ForbiddenPlacementTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_PlaceActor, ForbiddenPlacementTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_PlaceActor_Statics::NewProp_ForbiddenPlacementTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_PlaceActor_Statics::NewProp_ForbiddenPlacementTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_PlaceActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_PlaceActor_Statics::NewProp_PlacingCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_PlaceActor_Statics::NewProp_RandomChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_PlaceActor_Statics::NewProp_ForbiddenPlacementTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_PlaceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_PlaceActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_PlaceActor_Statics::ClassParams = {
		&USBZBTService_PlaceActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTService_PlaceActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_PlaceActor_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_PlaceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_PlaceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_PlaceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_PlaceActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_PlaceActor, 3841396805);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_PlaceActor>()
	{
		return USBZBTService_PlaceActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_PlaceActor(Z_Construct_UClass_USBZBTService_PlaceActor, &USBZBTService_PlaceActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_PlaceActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_PlaceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
