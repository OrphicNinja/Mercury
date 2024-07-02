// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZObservableActorContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZObservableActorContainer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObservableActorContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObservableActorContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorContainer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_ContainerChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_AddRemove__DelegateSignature();
// End Cross Module References
	void USBZObservableActorContainer::StaticRegisterNativesUSBZObservableActorContainer()
	{
	}
	UClass* Z_Construct_UClass_USBZObservableActorContainer_NoRegister()
	{
		return USBZObservableActorContainer::StaticClass();
	}
	struct Z_Construct_UClass_USBZObservableActorContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZObservableActorContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZActorContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObservableActorContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZObservableActorContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZObservableActorContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObservableActorContainer_Statics::NewProp_OnChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObservableActorContainer" },
		{ "ModuleRelativePath", "Public/SBZObservableActorContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZObservableActorContainer_Statics::NewProp_OnChanged = { "OnChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObservableActorContainer, OnChanged), Z_Construct_UDelegateFunction_Starbreeze_ContainerChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZObservableActorContainer_Statics::NewProp_OnChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObservableActorContainer_Statics::NewProp_OnChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObservableActorContainer_Statics::NewProp_OnAdded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObservableActorContainer" },
		{ "ModuleRelativePath", "Public/SBZObservableActorContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZObservableActorContainer_Statics::NewProp_OnAdded = { "OnAdded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObservableActorContainer, OnAdded), Z_Construct_UDelegateFunction_Starbreeze_AddRemove__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZObservableActorContainer_Statics::NewProp_OnAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObservableActorContainer_Statics::NewProp_OnAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObservableActorContainer_Statics::NewProp_OnRemoved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObservableActorContainer" },
		{ "ModuleRelativePath", "Public/SBZObservableActorContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZObservableActorContainer_Statics::NewProp_OnRemoved = { "OnRemoved", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZObservableActorContainer, OnRemoved), Z_Construct_UDelegateFunction_Starbreeze_AddRemove__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZObservableActorContainer_Statics::NewProp_OnRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObservableActorContainer_Statics::NewProp_OnRemoved_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZObservableActorContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObservableActorContainer_Statics::NewProp_OnChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObservableActorContainer_Statics::NewProp_OnAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZObservableActorContainer_Statics::NewProp_OnRemoved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZObservableActorContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZObservableActorContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZObservableActorContainer_Statics::ClassParams = {
		&USBZObservableActorContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZObservableActorContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZObservableActorContainer_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZObservableActorContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObservableActorContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZObservableActorContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZObservableActorContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZObservableActorContainer, 3605886880);
	template<> STARBREEZE_API UClass* StaticClass<USBZObservableActorContainer>()
	{
		return USBZObservableActorContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZObservableActorContainer(Z_Construct_UClass_USBZObservableActorContainer, &USBZObservableActorContainer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZObservableActorContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZObservableActorContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
