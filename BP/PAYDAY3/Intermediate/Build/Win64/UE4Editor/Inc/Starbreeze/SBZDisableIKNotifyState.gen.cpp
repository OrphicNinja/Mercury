// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDisableIKNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDisableIKNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDisableIKNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDisableIKNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDisableHandIkType();
// End Cross Module References
	void USBZDisableIKNotifyState::StaticRegisterNativesUSBZDisableIKNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZDisableIKNotifyState_NoRegister()
	{
		return USBZDisableIKNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZDisableIKNotifyState_Statics
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
	UObject* (*const Z_Construct_UClass_USBZDisableIKNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDisableIKNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZDisableIKNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDisableIKNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZDisableIKNotifyState_Statics::NewProp_DisableHandIkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDisableIKNotifyState_Statics::NewProp_DisableHandIkType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDisableIKNotifyState" },
		{ "ModuleRelativePath", "Public/SBZDisableIKNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZDisableIKNotifyState_Statics::NewProp_DisableHandIkType = { "DisableHandIkType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDisableIKNotifyState, DisableHandIkType), Z_Construct_UEnum_Starbreeze_ESBZDisableHandIkType, METADATA_PARAMS(Z_Construct_UClass_USBZDisableIKNotifyState_Statics::NewProp_DisableHandIkType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDisableIKNotifyState_Statics::NewProp_DisableHandIkType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDisableIKNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDisableIKNotifyState_Statics::NewProp_DisableHandIkType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDisableIKNotifyState_Statics::NewProp_DisableHandIkType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDisableIKNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDisableIKNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDisableIKNotifyState_Statics::ClassParams = {
		&USBZDisableIKNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZDisableIKNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDisableIKNotifyState_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDisableIKNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDisableIKNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDisableIKNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDisableIKNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDisableIKNotifyState, 199592652);
	template<> STARBREEZE_API UClass* StaticClass<USBZDisableIKNotifyState>()
	{
		return USBZDisableIKNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDisableIKNotifyState(Z_Construct_UClass_USBZDisableIKNotifyState, &USBZDisableIKNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDisableIKNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDisableIKNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
