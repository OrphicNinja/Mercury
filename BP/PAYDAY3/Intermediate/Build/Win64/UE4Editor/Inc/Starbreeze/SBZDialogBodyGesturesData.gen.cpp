// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDialogBodyGesturesData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDialogBodyGesturesData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogBodyGesturesData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogBodyGesturesData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void USBZDialogBodyGesturesData::StaticRegisterNativesUSBZDialogBodyGesturesData()
	{
	}
	UClass* Z_Construct_UClass_USBZDialogBodyGesturesData_NoRegister()
	{
		return USBZDialogBodyGesturesData::StaticClass();
	}
	struct Z_Construct_UClass_USBZDialogBodyGesturesData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdate_MetaData[];
#endif
		static void NewProp_bUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogBodyGestures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogBodyGestures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogBodyGestures;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogBodyGestureDurations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogBodyGestureDurations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogBodyGestureDurations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDialogBodyGesturesData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDialogBodyGesturesData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_bUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogBodyGesturesData" },
		{ "ModuleRelativePath", "Public/SBZDialogBodyGesturesData.h" },
	};
#endif
	void Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_bUpdate_SetBit(void* Obj)
	{
		((USBZDialogBodyGesturesData*)Obj)->bUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_bUpdate = { "bUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDialogBodyGesturesData), &Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_bUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_bUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_bUpdate_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_DialogBodyGestures_Inner = { "DialogBodyGestures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_DialogBodyGestures_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogBodyGesturesData" },
		{ "ModuleRelativePath", "Public/SBZDialogBodyGesturesData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_DialogBodyGestures = { "DialogBodyGestures", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDialogBodyGesturesData, DialogBodyGestures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_DialogBodyGestures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_DialogBodyGestures_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_DialogBodyGestureDurations_Inner = { "DialogBodyGestureDurations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_DialogBodyGestureDurations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogBodyGesturesData" },
		{ "ModuleRelativePath", "Public/SBZDialogBodyGesturesData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_DialogBodyGestureDurations = { "DialogBodyGestureDurations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDialogBodyGesturesData, DialogBodyGestureDurations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_DialogBodyGestureDurations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_DialogBodyGestureDurations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_bUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_DialogBodyGestures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_DialogBodyGestures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_DialogBodyGestureDurations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::NewProp_DialogBodyGestureDurations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDialogBodyGesturesData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::ClassParams = {
		&USBZDialogBodyGesturesData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDialogBodyGesturesData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDialogBodyGesturesData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDialogBodyGesturesData, 3545757595);
	template<> STARBREEZE_API UClass* StaticClass<USBZDialogBodyGesturesData>()
	{
		return USBZDialogBodyGesturesData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDialogBodyGesturesData(Z_Construct_UClass_USBZDialogBodyGesturesData, &USBZDialogBodyGesturesData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDialogBodyGesturesData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDialogBodyGesturesData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
