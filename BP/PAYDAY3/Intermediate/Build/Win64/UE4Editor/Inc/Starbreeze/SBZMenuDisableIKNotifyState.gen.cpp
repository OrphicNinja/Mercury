// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMenuDisableIKNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMenuDisableIKNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuDisableIKNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuDisableIKNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMenuDisableHandIkType();
// End Cross Module References
	void USBZMenuDisableIKNotifyState::StaticRegisterNativesUSBZMenuDisableIKNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZMenuDisableIKNotifyState_NoRegister()
	{
		return USBZMenuDisableIKNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisableHandIkType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableHandIkType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DisableHandIkType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZMenuDisableIKNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuDisableIKNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::NewProp_DisableHandIkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::NewProp_DisableHandIkType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuDisableIKNotifyState" },
		{ "ModuleRelativePath", "Public/SBZMenuDisableIKNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::NewProp_DisableHandIkType = { "DisableHandIkType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuDisableIKNotifyState, DisableHandIkType), Z_Construct_UEnum_Starbreeze_ESBZMenuDisableHandIkType, METADATA_PARAMS(Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::NewProp_DisableHandIkType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::NewProp_DisableHandIkType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::NewProp_DisableHandIkType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::NewProp_DisableHandIkType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMenuDisableIKNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::ClassParams = {
		&USBZMenuDisableIKNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMenuDisableIKNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMenuDisableIKNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMenuDisableIKNotifyState, 4280929737);
	template<> STARBREEZE_API UClass* StaticClass<USBZMenuDisableIKNotifyState>()
	{
		return USBZMenuDisableIKNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMenuDisableIKNotifyState(Z_Construct_UClass_USBZMenuDisableIKNotifyState, &USBZMenuDisableIKNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMenuDisableIKNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMenuDisableIKNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
