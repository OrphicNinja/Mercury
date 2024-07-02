// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryTest_VisuallyDetected.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryTest_VisuallyDetected() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEnvQueryTest_VisuallyDetected::StaticRegisterNativesUSBZEnvQueryTest_VisuallyDetected()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_NoRegister()
	{
		return USBZEnvQueryTest_VisuallyDetected::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCriminalsOnly_MetaData[];
#endif
		static void NewProp_bCriminalsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCriminalsOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryTest_VisuallyDetected.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_VisuallyDetected.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::NewProp_bCriminalsOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryTest_VisuallyDetected" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_VisuallyDetected.h" },
	};
#endif
	void Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::NewProp_bCriminalsOnly_SetBit(void* Obj)
	{
		((USBZEnvQueryTest_VisuallyDetected*)Obj)->bCriminalsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::NewProp_bCriminalsOnly = { "bCriminalsOnly", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZEnvQueryTest_VisuallyDetected), &Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::NewProp_bCriminalsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::NewProp_bCriminalsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::NewProp_bCriminalsOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::NewProp_bCriminalsOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryTest_VisuallyDetected>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::ClassParams = {
		&USBZEnvQueryTest_VisuallyDetected::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryTest_VisuallyDetected, 687153068);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryTest_VisuallyDetected>()
	{
		return USBZEnvQueryTest_VisuallyDetected::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryTest_VisuallyDetected(Z_Construct_UClass_USBZEnvQueryTest_VisuallyDetected, &USBZEnvQueryTest_VisuallyDetected::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryTest_VisuallyDetected"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryTest_VisuallyDetected);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
