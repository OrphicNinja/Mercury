// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAction_OrderSetTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAction_OrderSetTarget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_OrderSetTarget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_OrderSetTarget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_Order();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIAction_OrderSetTarget::StaticRegisterNativesUSBZAIAction_OrderSetTarget()
	{
	}
	UClass* Z_Construct_UClass_USBZAIAction_OrderSetTarget_NoRegister()
	{
		return USBZAIAction_OrderSetTarget::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAction_OrderSetTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAction_OrderSetTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIAction_Order,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_OrderSetTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAction_OrderSetTarget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_OrderSetTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAction_OrderSetTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAction_OrderSetTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAction_OrderSetTarget_Statics::ClassParams = {
		&USBZAIAction_OrderSetTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_OrderSetTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_OrderSetTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAction_OrderSetTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAction_OrderSetTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAction_OrderSetTarget, 3629240575);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAction_OrderSetTarget>()
	{
		return USBZAIAction_OrderSetTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAction_OrderSetTarget(Z_Construct_UClass_USBZAIAction_OrderSetTarget, &USBZAIAction_OrderSetTarget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAction_OrderSetTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAction_OrderSetTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
