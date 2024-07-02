// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReloadStateChangeNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReloadStateChangeNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReloadStateChangeNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReloadStateChangeNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReloadState();
// End Cross Module References
	void USBZReloadStateChangeNotify::StaticRegisterNativesUSBZReloadStateChangeNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZReloadStateChangeNotify_NoRegister()
	{
		return USBZReloadStateChangeNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZReloadStateChangeNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZReloadStateChangeNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReloadStateChangeNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::NewProp_TargetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::NewProp_TargetState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReloadStateChangeNotify" },
		{ "ModuleRelativePath", "Public/SBZReloadStateChangeNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReloadStateChangeNotify, TargetState), Z_Construct_UEnum_Starbreeze_ESBZReloadState, METADATA_PARAMS(Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::NewProp_TargetState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::NewProp_TargetState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::NewProp_TargetState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::NewProp_TargetState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReloadStateChangeNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::ClassParams = {
		&USBZReloadStateChangeNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::PropPointers),
		0,
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReloadStateChangeNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReloadStateChangeNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReloadStateChangeNotify, 1711116264);
	template<> STARBREEZE_API UClass* StaticClass<USBZReloadStateChangeNotify>()
	{
		return USBZReloadStateChangeNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReloadStateChangeNotify(Z_Construct_UClass_USBZReloadStateChangeNotify, &USBZReloadStateChangeNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReloadStateChangeNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReloadStateChangeNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
