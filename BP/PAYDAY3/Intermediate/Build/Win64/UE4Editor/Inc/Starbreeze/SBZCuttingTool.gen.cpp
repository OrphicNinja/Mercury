// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCuttingTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCuttingTool() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCuttingTool_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCuttingTool();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTool();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
// End Cross Module References
	void ASBZCuttingTool::StaticRegisterNativesASBZCuttingTool()
	{
	}
	UClass* Z_Construct_UClass_ASBZCuttingTool_NoRegister()
	{
		return ASBZCuttingTool::StaticClass();
	}
	struct Z_Construct_UClass_ASBZCuttingTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TorchEffectComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TorchEffectComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TorchMaxEffectVisibilityTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TorchMaxEffectVisibilityTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatedMaxRTPCValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActivatedMaxRTPCValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatedIdleMaxRTPCValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActivatedIdleMaxRTPCValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatedUsingMaxRTPCValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActivatedUsingMaxRTPCValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuttingSoundMultiplicationValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CuttingSoundMultiplicationValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuttingToolAutoCuttingTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CuttingToolAutoCuttingTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCuttingToolStrengthRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnCuttingToolStrengthRtpc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZCuttingTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZTool,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttingTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCuttingTool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttingTool.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_TorchEffectComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttingTool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttingTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_TorchEffectComponent = { "TorchEffectComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttingTool, TorchEffectComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_TorchEffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_TorchEffectComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_TorchMaxEffectVisibilityTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttingTool" },
		{ "ModuleRelativePath", "Public/SBZCuttingTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_TorchMaxEffectVisibilityTime = { "TorchMaxEffectVisibilityTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttingTool, TorchMaxEffectVisibilityTime), METADATA_PARAMS(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_TorchMaxEffectVisibilityTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_TorchMaxEffectVisibilityTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_ActivatedMaxRTPCValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttingTool" },
		{ "ModuleRelativePath", "Public/SBZCuttingTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_ActivatedMaxRTPCValue = { "ActivatedMaxRTPCValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttingTool, ActivatedMaxRTPCValue), METADATA_PARAMS(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_ActivatedMaxRTPCValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_ActivatedMaxRTPCValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_ActivatedIdleMaxRTPCValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttingTool" },
		{ "ModuleRelativePath", "Public/SBZCuttingTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_ActivatedIdleMaxRTPCValue = { "ActivatedIdleMaxRTPCValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttingTool, ActivatedIdleMaxRTPCValue), METADATA_PARAMS(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_ActivatedIdleMaxRTPCValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_ActivatedIdleMaxRTPCValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_ActivatedUsingMaxRTPCValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttingTool" },
		{ "ModuleRelativePath", "Public/SBZCuttingTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_ActivatedUsingMaxRTPCValue = { "ActivatedUsingMaxRTPCValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttingTool, ActivatedUsingMaxRTPCValue), METADATA_PARAMS(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_ActivatedUsingMaxRTPCValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_ActivatedUsingMaxRTPCValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_CuttingSoundMultiplicationValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttingTool" },
		{ "ModuleRelativePath", "Public/SBZCuttingTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_CuttingSoundMultiplicationValue = { "CuttingSoundMultiplicationValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttingTool, CuttingSoundMultiplicationValue), METADATA_PARAMS(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_CuttingSoundMultiplicationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_CuttingSoundMultiplicationValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_CuttingToolAutoCuttingTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttingTool" },
		{ "ModuleRelativePath", "Public/SBZCuttingTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_CuttingToolAutoCuttingTimer = { "CuttingToolAutoCuttingTimer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttingTool, CuttingToolAutoCuttingTimer), METADATA_PARAMS(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_CuttingToolAutoCuttingTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_CuttingToolAutoCuttingTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_OnCuttingToolStrengthRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttingTool" },
		{ "ModuleRelativePath", "Public/SBZCuttingTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_OnCuttingToolStrengthRtpc = { "OnCuttingToolStrengthRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCuttingTool, OnCuttingToolStrengthRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_OnCuttingToolStrengthRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_OnCuttingToolStrengthRtpc_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZCuttingTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_TorchEffectComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_TorchMaxEffectVisibilityTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_ActivatedMaxRTPCValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_ActivatedIdleMaxRTPCValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_ActivatedUsingMaxRTPCValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_CuttingSoundMultiplicationValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_CuttingToolAutoCuttingTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCuttingTool_Statics::NewProp_OnCuttingToolStrengthRtpc,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZCuttingTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZCuttingTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZCuttingTool_Statics::ClassParams = {
		&ASBZCuttingTool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZCuttingTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttingTool_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZCuttingTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCuttingTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZCuttingTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZCuttingTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZCuttingTool, 1947045139);
	template<> STARBREEZE_API UClass* StaticClass<ASBZCuttingTool>()
	{
		return ASBZCuttingTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZCuttingTool(Z_Construct_UClass_ASBZCuttingTool, &ASBZCuttingTool::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZCuttingTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZCuttingTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
