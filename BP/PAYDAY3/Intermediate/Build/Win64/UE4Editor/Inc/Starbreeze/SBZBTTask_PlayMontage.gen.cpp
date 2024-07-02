// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_PlayMontage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_PlayMontage() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_PlayMontage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_PlayMontage();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTTask_PlayMontage::StaticRegisterNativesUSBZBTTask_PlayMontage()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_PlayMontage_NoRegister()
	{
		return USBZBTTask_PlayMontage::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_PlayMontage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MontageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_PlayMontage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_PlayMontage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_PlayMontage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_PlayMontage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_PlayMontage_Statics::NewProp_MontageName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_PlayMontage" },
		{ "ModuleRelativePath", "Public/SBZBTTask_PlayMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZBTTask_PlayMontage_Statics::NewProp_MontageName = { "MontageName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_PlayMontage, MontageName), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_PlayMontage_Statics::NewProp_MontageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_PlayMontage_Statics::NewProp_MontageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_PlayMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_PlayMontage_Statics::NewProp_MontageName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_PlayMontage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_PlayMontage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_PlayMontage_Statics::ClassParams = {
		&USBZBTTask_PlayMontage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_PlayMontage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_PlayMontage_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_PlayMontage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_PlayMontage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_PlayMontage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_PlayMontage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_PlayMontage, 2689430942);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_PlayMontage>()
	{
		return USBZBTTask_PlayMontage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_PlayMontage(Z_Construct_UClass_USBZBTTask_PlayMontage, &USBZBTTask_PlayMontage::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_PlayMontage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_PlayMontage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
