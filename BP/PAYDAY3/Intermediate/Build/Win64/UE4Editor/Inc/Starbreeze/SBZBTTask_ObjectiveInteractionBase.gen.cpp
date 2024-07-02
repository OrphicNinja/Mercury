// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_ObjectiveInteractionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_ObjectiveInteractionBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USBZBTTask_ObjectiveInteractionBase::StaticRegisterNativesUSBZBTTask_ObjectiveInteractionBase()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_NoRegister()
	{
		return USBZBTTask_ObjectiveInteractionBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetObjectiveBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetObjectiveBBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_ObjectiveInteractionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_ObjectiveInteractionBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics::NewProp_TargetObjectiveBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_ObjectiveInteractionBase" },
		{ "ModuleRelativePath", "Public/SBZBTTask_ObjectiveInteractionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics::NewProp_TargetObjectiveBBKey = { "TargetObjectiveBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_ObjectiveInteractionBase, TargetObjectiveBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics::NewProp_TargetObjectiveBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics::NewProp_TargetObjectiveBBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics::NewProp_TargetObjectiveBBKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_ObjectiveInteractionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics::ClassParams = {
		&USBZBTTask_ObjectiveInteractionBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_ObjectiveInteractionBase, 1389029846);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_ObjectiveInteractionBase>()
	{
		return USBZBTTask_ObjectiveInteractionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_ObjectiveInteractionBase(Z_Construct_UClass_USBZBTTask_ObjectiveInteractionBase, &USBZBTTask_ObjectiveInteractionBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_ObjectiveInteractionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_ObjectiveInteractionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
