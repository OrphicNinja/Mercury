// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWorldEventBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWorldEventBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldEventBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldEventBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZWorldEventBase::StaticRegisterNativesUSBZWorldEventBase()
	{
	}
	UClass* Z_Construct_UClass_USBZWorldEventBase_NoRegister()
	{
		return USBZWorldEventBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZWorldEventBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWorldEventBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldEventBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWorldEventBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldEventBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWorldEventBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWorldEventBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWorldEventBase_Statics::ClassParams = {
		&USBZWorldEventBase::StaticClass,
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
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWorldEventBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldEventBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWorldEventBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWorldEventBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWorldEventBase, 4197173628);
	template<> STARBREEZE_API UClass* StaticClass<USBZWorldEventBase>()
	{
		return USBZWorldEventBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWorldEventBase(Z_Construct_UClass_USBZWorldEventBase, &USBZWorldEventBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWorldEventBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWorldEventBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
