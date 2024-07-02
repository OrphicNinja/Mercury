// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIScorer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIScorer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIScorer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIScorer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIController_NoRegister();
// End Cross Module References
	void USBZAIScorer::StaticRegisterNativesUSBZAIScorer()
	{
	}
	UClass* Z_Construct_UClass_USBZAIScorer_NoRegister()
	{
		return USBZAIScorer::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIScorer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubScorers_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubScorers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubScorers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubScorers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInversed_MetaData[];
#endif
		static void NewProp_bIsInversed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInversed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIScorer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIScorer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIScorer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIScorer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIScorer_Statics::NewProp_Weight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIScorer" },
		{ "ModuleRelativePath", "Public/SBZAIScorer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIScorer_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIScorer, Weight), METADATA_PARAMS(Z_Construct_UClass_USBZAIScorer_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIScorer_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIScorer_Statics::NewProp_SubScorers_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIScorer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIScorer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIScorer_Statics::NewProp_SubScorers_Inner = { "SubScorers", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIScorer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIScorer_Statics::NewProp_SubScorers_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIScorer_Statics::NewProp_SubScorers_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIScorer_Statics::NewProp_SubScorers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIScorer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIScorer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIScorer_Statics::NewProp_SubScorers = { "SubScorers", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIScorer, SubScorers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIScorer_Statics::NewProp_SubScorers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIScorer_Statics::NewProp_SubScorers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIScorer_Statics::NewProp_OutputCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIScorer" },
		{ "ModuleRelativePath", "Public/SBZAIScorer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIScorer_Statics::NewProp_OutputCurve = { "OutputCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIScorer, OutputCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIScorer_Statics::NewProp_OutputCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIScorer_Statics::NewProp_OutputCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIScorer_Statics::NewProp_bIsInversed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIScorer" },
		{ "ModuleRelativePath", "Public/SBZAIScorer.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIScorer_Statics::NewProp_bIsInversed_SetBit(void* Obj)
	{
		((USBZAIScorer*)Obj)->bIsInversed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIScorer_Statics::NewProp_bIsInversed = { "bIsInversed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIScorer), &Z_Construct_UClass_USBZAIScorer_Statics::NewProp_bIsInversed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIScorer_Statics::NewProp_bIsInversed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIScorer_Statics::NewProp_bIsInversed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIScorer_Statics::NewProp_AIController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIScorer" },
		{ "ModuleRelativePath", "Public/SBZAIScorer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIScorer_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIScorer, AIController), Z_Construct_UClass_ASBZAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIScorer_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIScorer_Statics::NewProp_AIController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIScorer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIScorer_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIScorer_Statics::NewProp_SubScorers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIScorer_Statics::NewProp_SubScorers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIScorer_Statics::NewProp_OutputCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIScorer_Statics::NewProp_bIsInversed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIScorer_Statics::NewProp_AIController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIScorer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIScorer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIScorer_Statics::ClassParams = {
		&USBZAIScorer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIScorer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIScorer_Statics::PropPointers),
		0,
		0x008010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIScorer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIScorer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIScorer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIScorer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIScorer, 3699224294);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIScorer>()
	{
		return USBZAIScorer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIScorer(Z_Construct_UClass_USBZAIScorer, &USBZAIScorer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIScorer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIScorer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
