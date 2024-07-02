// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDialogBodyGesturesNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDialogBodyGesturesNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogBodyGesturesNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogBodyGesturesData_NoRegister();
// End Cross Module References
	void USBZDialogBodyGesturesNotifyState::StaticRegisterNativesUSBZDialogBodyGesturesNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_NoRegister()
	{
		return USBZDialogBodyGesturesNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogBodyGesturesData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogBodyGesturesData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZDialogBodyGesturesNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDialogBodyGesturesNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics::NewProp_DialogBodyGesturesData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogBodyGesturesNotifyState" },
		{ "ModuleRelativePath", "Public/SBZDialogBodyGesturesNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics::NewProp_DialogBodyGesturesData = { "DialogBodyGesturesData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDialogBodyGesturesNotifyState, DialogBodyGesturesData), Z_Construct_UClass_USBZDialogBodyGesturesData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics::NewProp_DialogBodyGesturesData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics::NewProp_DialogBodyGesturesData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics::NewProp_DialogBodyGesturesData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDialogBodyGesturesNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics::ClassParams = {
		&USBZDialogBodyGesturesNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDialogBodyGesturesNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDialogBodyGesturesNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDialogBodyGesturesNotifyState, 2959218152);
	template<> STARBREEZE_API UClass* StaticClass<USBZDialogBodyGesturesNotifyState>()
	{
		return USBZDialogBodyGesturesNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDialogBodyGesturesNotifyState(Z_Construct_UClass_USBZDialogBodyGesturesNotifyState, &USBZDialogBodyGesturesNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDialogBodyGesturesNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDialogBodyGesturesNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
