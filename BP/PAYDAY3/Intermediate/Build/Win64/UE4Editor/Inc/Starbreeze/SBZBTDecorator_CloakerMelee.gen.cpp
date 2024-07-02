// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_CloakerMelee.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_CloakerMelee() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_CloakerMelee_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_CloakerMelee();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
	void USBZBTDecorator_CloakerMelee::StaticRegisterNativesUSBZBTDecorator_CloakerMelee()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_CloakerMelee_NoRegister()
	{
		return USBZBTDecorator_CloakerMelee::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerAcceptanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerAcceptanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickAcceptanceRadius2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickAcceptanceRadius2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickAcceptanceRadiusZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KickAcceptanceRadiusZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TelegraphAttackTriggerDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TelegraphAttackTriggerDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_CloakerMelee.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_CloakerMelee.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_FilterClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_CloakerMelee" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_CloakerMelee.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_CloakerMelee, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_TriggerAcceptanceRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_CloakerMelee" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_CloakerMelee.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_TriggerAcceptanceRadius = { "TriggerAcceptanceRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_CloakerMelee, TriggerAcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_TriggerAcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_TriggerAcceptanceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_KickAcceptanceRadius2D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_CloakerMelee" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_CloakerMelee.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_KickAcceptanceRadius2D = { "KickAcceptanceRadius2D", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_CloakerMelee, KickAcceptanceRadius2D), METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_KickAcceptanceRadius2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_KickAcceptanceRadius2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_KickAcceptanceRadiusZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_CloakerMelee" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_CloakerMelee.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_KickAcceptanceRadiusZ = { "KickAcceptanceRadiusZ", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_CloakerMelee, KickAcceptanceRadiusZ), METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_KickAcceptanceRadiusZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_KickAcceptanceRadiusZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_TelegraphAttackTriggerDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_CloakerMelee" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_CloakerMelee.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_TelegraphAttackTriggerDistance = { "TelegraphAttackTriggerDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_CloakerMelee, TelegraphAttackTriggerDistance), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_TelegraphAttackTriggerDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_TelegraphAttackTriggerDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_TriggerAcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_KickAcceptanceRadius2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_KickAcceptanceRadiusZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::NewProp_TelegraphAttackTriggerDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_CloakerMelee>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::ClassParams = {
		&USBZBTDecorator_CloakerMelee::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_CloakerMelee()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_CloakerMelee_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_CloakerMelee, 3065814097);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_CloakerMelee>()
	{
		return USBZBTDecorator_CloakerMelee::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_CloakerMelee(Z_Construct_UClass_USBZBTDecorator_CloakerMelee, &USBZBTDecorator_CloakerMelee::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_CloakerMelee"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_CloakerMelee);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
