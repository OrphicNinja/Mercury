// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZObjectContainerTickable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZObjectContainerTickable() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectContainerTickable_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectContainerTickable();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectContainer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_ContainerTickDelegate__DelegateSignature();
// End Cross Module References
	void USBZObjectContainerTickable::StaticRegisterNativesUSBZObjectContainerTickable()
	{
	}
	UClass* Z_Construct_UClass_USBZObjectContainerTickable_NoRegister()
	{
		return USBZObjectContainerTickable::StaticClass();
	}
	struct Z_Construct_UClass_USBZObjectContainerTickable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TickDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZObjectContainerTickable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZObjectContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectContainerTickable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZObjectContainerTickable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZObjectContainerTickable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectContainerTickable_Statics::NewProp_TickDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjectContainerTickable" },
		{ "ModuleRelativePath", "Public/SBZObjectContainerTickable.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_USBZObjectContainerTickable_Statics::NewProp_TickDelegate = { "TickDelegate", nullptr, (EPropertyFlags)0x0010000000280005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObjectContainerTickable, TickDelegate), Z_Construct_UDelegateFunction_Starbreeze_ContainerTickDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZObjectContainerTickable_Statics::NewProp_TickDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectContainerTickable_Statics::NewProp_TickDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZObjectContainerTickable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObjectContainerTickable_Statics::NewProp_TickDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZObjectContainerTickable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZObjectContainerTickable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZObjectContainerTickable_Statics::ClassParams = {
		&USBZObjectContainerTickable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZObjectContainerTickable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectContainerTickable_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZObjectContainerTickable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectContainerTickable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZObjectContainerTickable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZObjectContainerTickable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZObjectContainerTickable, 1169453771);
	template<> STARBREEZE_API UClass* StaticClass<USBZObjectContainerTickable>()
	{
		return USBZObjectContainerTickable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZObjectContainerTickable(Z_Construct_UClass_USBZObjectContainerTickable, &USBZObjectContainerTickable::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZObjectContainerTickable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZObjectContainerTickable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
