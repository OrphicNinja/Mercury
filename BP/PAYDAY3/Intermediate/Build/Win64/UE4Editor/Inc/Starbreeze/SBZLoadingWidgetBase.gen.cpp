// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLoadingWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLoadingWidgetBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadingWidgetBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadingWidgetBase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInternetStatusWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZLoadingWidgetBase::StaticRegisterNativesUSBZLoadingWidgetBase()
	{
	}
	UClass* Z_Construct_UClass_USBZLoadingWidgetBase_NoRegister()
	{
		return USBZLoadingWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZLoadingWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldRemoveOnLevelChange_MetaData[];
#endif
		static void NewProp_bShouldRemoveOnLevelChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldRemoveOnLevelChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLoadingWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInternetStatusWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadingWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLoadingWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLoadingWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadingWidgetBase_Statics::NewProp_bShouldRemoveOnLevelChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoadingWidgetBase" },
		{ "ModuleRelativePath", "Public/SBZLoadingWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_USBZLoadingWidgetBase_Statics::NewProp_bShouldRemoveOnLevelChange_SetBit(void* Obj)
	{
		((USBZLoadingWidgetBase*)Obj)->bShouldRemoveOnLevelChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLoadingWidgetBase_Statics::NewProp_bShouldRemoveOnLevelChange = { "bShouldRemoveOnLevelChange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLoadingWidgetBase), &Z_Construct_UClass_USBZLoadingWidgetBase_Statics::NewProp_bShouldRemoveOnLevelChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLoadingWidgetBase_Statics::NewProp_bShouldRemoveOnLevelChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadingWidgetBase_Statics::NewProp_bShouldRemoveOnLevelChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLoadingWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoadingWidgetBase_Statics::NewProp_bShouldRemoveOnLevelChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLoadingWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLoadingWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLoadingWidgetBase_Statics::ClassParams = {
		&USBZLoadingWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZLoadingWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadingWidgetBase_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLoadingWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadingWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLoadingWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLoadingWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLoadingWidgetBase, 2170474242);
	template<> STARBREEZE_API UClass* StaticClass<USBZLoadingWidgetBase>()
	{
		return USBZLoadingWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLoadingWidgetBase(Z_Construct_UClass_USBZLoadingWidgetBase, &USBZLoadingWidgetBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLoadingWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLoadingWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
