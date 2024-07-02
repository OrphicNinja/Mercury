// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIDataProvider_NavQueryFilter_AICharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIDataProvider_NavQueryFilter_AICharacter() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
// End Cross Module References
	void USBZAIDataProvider_NavQueryFilter_AICharacter::StaticRegisterNativesUSBZAIDataProvider_NavQueryFilter_AICharacter()
	{
	}
	UClass* Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_NoRegister()
	{
		return USBZAIDataProvider_NavQueryFilter_AICharacter::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NQFClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NQFClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIDataProvider_NavQueryFilter_AICharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDataProvider_NavQueryFilter_AICharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics::NewProp_NQFClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDataProvider_NavQueryFilter_AICharacter" },
		{ "ModuleRelativePath", "Public/SBZAIDataProvider_NavQueryFilter_AICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics::NewProp_NQFClass = { "NQFClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIDataProvider_NavQueryFilter_AICharacter, NQFClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics::NewProp_NQFClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics::NewProp_NQFClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics::NewProp_NQFClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIDataProvider_NavQueryFilter_AICharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics::ClassParams = {
		&USBZAIDataProvider_NavQueryFilter_AICharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics::PropPointers),
		0,
		0x000030A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIDataProvider_NavQueryFilter_AICharacter, 381311096);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIDataProvider_NavQueryFilter_AICharacter>()
	{
		return USBZAIDataProvider_NavQueryFilter_AICharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter(Z_Construct_UClass_USBZAIDataProvider_NavQueryFilter_AICharacter, &USBZAIDataProvider_NavQueryFilter_AICharacter::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIDataProvider_NavQueryFilter_AICharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIDataProvider_NavQueryFilter_AICharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
