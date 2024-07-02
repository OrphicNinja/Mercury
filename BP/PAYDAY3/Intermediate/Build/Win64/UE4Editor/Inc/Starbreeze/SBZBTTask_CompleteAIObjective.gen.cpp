// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_CompleteAIObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_CompleteAIObjective() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_CompleteAIObjective_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_CompleteAIObjective();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USBZBTTask_CompleteAIObjective::StaticRegisterNativesUSBZBTTask_CompleteAIObjective()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_CompleteAIObjective_NoRegister()
	{
		return USBZBTTask_CompleteAIObjective::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractOrders_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractOrders;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetObjectiveBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetObjectiveBBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_CompleteAIObjective.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_CompleteAIObjective.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::NewProp_InteractOrders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_CompleteAIObjective" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_CompleteAIObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::NewProp_InteractOrders = { "InteractOrders", nullptr, (EPropertyFlags)0x0022080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(InteractOrders, USBZBTTask_CompleteAIObjective), STRUCT_OFFSET(USBZBTTask_CompleteAIObjective, InteractOrders), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::NewProp_InteractOrders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::NewProp_InteractOrders_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::NewProp_TargetObjectiveBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_CompleteAIObjective" },
		{ "ModuleRelativePath", "Public/SBZBTTask_CompleteAIObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::NewProp_TargetObjectiveBBKey = { "TargetObjectiveBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_CompleteAIObjective, TargetObjectiveBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::NewProp_TargetObjectiveBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::NewProp_TargetObjectiveBBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::NewProp_InteractOrders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::NewProp_TargetObjectiveBBKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_CompleteAIObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::ClassParams = {
		&USBZBTTask_CompleteAIObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_CompleteAIObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_CompleteAIObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_CompleteAIObjective, 1996158105);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_CompleteAIObjective>()
	{
		return USBZBTTask_CompleteAIObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_CompleteAIObjective(Z_Construct_UClass_USBZBTTask_CompleteAIObjective, &USBZBTTask_CompleteAIObjective::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_CompleteAIObjective"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_CompleteAIObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
