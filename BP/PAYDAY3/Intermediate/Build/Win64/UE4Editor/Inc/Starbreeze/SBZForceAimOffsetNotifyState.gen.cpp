// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZForceAimOffsetNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZForceAimOffsetNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZForceAimOffsetNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZForceAimOffsetNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAimOffsetType();
// End Cross Module References
	void USBZForceAimOffsetNotifyState::StaticRegisterNativesUSBZForceAimOffsetNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZForceAimOffsetNotifyState_NoRegister()
	{
		return USBZForceAimOffsetNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ForcedAimOffsetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedAimOffsetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ForcedAimOffsetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZForceAimOffsetNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZForceAimOffsetNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::NewProp_ForcedAimOffsetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::NewProp_ForcedAimOffsetType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZForceAimOffsetNotifyState" },
		{ "ModuleRelativePath", "Public/SBZForceAimOffsetNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::NewProp_ForcedAimOffsetType = { "ForcedAimOffsetType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZForceAimOffsetNotifyState, ForcedAimOffsetType), Z_Construct_UEnum_Starbreeze_ESBZAimOffsetType, METADATA_PARAMS(Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::NewProp_ForcedAimOffsetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::NewProp_ForcedAimOffsetType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::NewProp_ForcedAimOffsetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::NewProp_ForcedAimOffsetType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZForceAimOffsetNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::ClassParams = {
		&USBZForceAimOffsetNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZForceAimOffsetNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZForceAimOffsetNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZForceAimOffsetNotifyState, 2001107972);
	template<> STARBREEZE_API UClass* StaticClass<USBZForceAimOffsetNotifyState>()
	{
		return USBZForceAimOffsetNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZForceAimOffsetNotifyState(Z_Construct_UClass_USBZForceAimOffsetNotifyState, &USBZForceAimOffsetNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZForceAimOffsetNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZForceAimOffsetNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
