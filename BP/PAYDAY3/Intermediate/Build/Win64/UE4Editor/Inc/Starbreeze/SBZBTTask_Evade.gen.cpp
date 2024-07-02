// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_Evade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_Evade() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_Evade_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_Evade();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
// End Cross Module References
	void USBZBTTask_Evade::StaticRegisterNativesUSBZBTTask_Evade()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_Evade_NoRegister()
	{
		return USBZBTTask_Evade::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_Evade_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeededTimeSinceFireToEvade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeededTimeSinceFireToEvade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastEvadeCoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FastEvadeCoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowEvadeCoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlowEvadeCoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFireDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFireDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSlowEvadeDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSlowEvadeDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFastEvadeDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFastEvadeDist;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_Evade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Evade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_Evade.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Evade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_FilterClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Evade" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Evade.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Evade, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_NeededTimeSinceFireToEvade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Evade" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Evade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_NeededTimeSinceFireToEvade = { "NeededTimeSinceFireToEvade", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Evade, NeededTimeSinceFireToEvade), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_NeededTimeSinceFireToEvade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_NeededTimeSinceFireToEvade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_FastEvadeCoolDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Evade" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Evade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_FastEvadeCoolDown = { "FastEvadeCoolDown", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Evade, FastEvadeCoolDown), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_FastEvadeCoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_FastEvadeCoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_SlowEvadeCoolDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Evade" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Evade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_SlowEvadeCoolDown = { "SlowEvadeCoolDown", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Evade, SlowEvadeCoolDown), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_SlowEvadeCoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_SlowEvadeCoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_MinFireDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Evade" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Evade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_MinFireDist = { "MinFireDist", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Evade, MinFireDist), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_MinFireDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_MinFireDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_MinSlowEvadeDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Evade" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Evade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_MinSlowEvadeDist = { "MinSlowEvadeDist", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Evade, MinSlowEvadeDist), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_MinSlowEvadeDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_MinSlowEvadeDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_MinFastEvadeDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Evade" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Evade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_MinFastEvadeDist = { "MinFastEvadeDist", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Evade, MinFastEvadeDist), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_MinFastEvadeDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_MinFastEvadeDist_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_Evade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_NeededTimeSinceFireToEvade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_FastEvadeCoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_SlowEvadeCoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_MinFireDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_MinSlowEvadeDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Evade_Statics::NewProp_MinFastEvadeDist,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_Evade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_Evade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_Evade_Statics::ClassParams = {
		&USBZBTTask_Evade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_Evade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Evade_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Evade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Evade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_Evade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_Evade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_Evade, 3671870851);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_Evade>()
	{
		return USBZBTTask_Evade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_Evade(Z_Construct_UClass_USBZBTTask_Evade, &USBZBTTask_Evade::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_Evade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_Evade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
