// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamlineRHI/Public/StreamlineSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamlineSettings() {}
// Cross Module References
	STREAMLINERHI_API UClass* Z_Construct_UClass_UStreamlineSettings_NoRegister();
	STREAMLINERHI_API UClass* Z_Construct_UClass_UStreamlineSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_StreamlineRHI();
// End Cross Module References
	void UStreamlineSettings::StaticRegisterNativesUStreamlineSettings()
	{
	}
	UClass* Z_Construct_UClass_UStreamlineSettings_NoRegister()
	{
		return UStreamlineSettings::StaticClass();
	}
	struct Z_Construct_UClass_UStreamlineSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStreamlineD3D12_MetaData[];
#endif
		static void NewProp_bEnableStreamlineD3D12_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStreamlineD3D12;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStreamlineD3D11_MetaData[];
#endif
		static void NewProp_bEnableStreamlineD3D11_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStreamlineD3D11;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDLSSFGInPlayInEditorViewports_MetaData[];
#endif
		static void NewProp_bEnableDLSSFGInPlayInEditorViewports_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDLSSFGInPlayInEditorViewports;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadDebugOverlay_MetaData[];
#endif
		static void NewProp_bLoadDebugOverlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadDebugOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowOTAUpdate_MetaData[];
#endif
		static void NewProp_bAllowOTAUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowOTAUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NVIDIANGXApplicationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NVIDIANGXApplicationId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamlineSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StreamlineRHI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamlineSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StreamlineSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D12_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StreamlineSettings" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
	};
#endif
	void Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D12_SetBit(void* Obj)
	{
		((UStreamlineSettings*)Obj)->bEnableStreamlineD3D12 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D12 = { "bEnableStreamlineD3D12", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStreamlineSettings), &Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D12_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D12_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D12_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D11_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StreamlineSettings" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
	};
#endif
	void Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D11_SetBit(void* Obj)
	{
		((UStreamlineSettings*)Obj)->bEnableStreamlineD3D11 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D11 = { "bEnableStreamlineD3D11", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStreamlineSettings), &Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D11_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D11_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D11_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableDLSSFGInPlayInEditorViewports_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StreamlineSettings" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
	};
#endif
	void Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableDLSSFGInPlayInEditorViewports_SetBit(void* Obj)
	{
		((UStreamlineSettings*)Obj)->bEnableDLSSFGInPlayInEditorViewports = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableDLSSFGInPlayInEditorViewports = { "bEnableDLSSFGInPlayInEditorViewports", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStreamlineSettings), &Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableDLSSFGInPlayInEditorViewports_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableDLSSFGInPlayInEditorViewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableDLSSFGInPlayInEditorViewports_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bLoadDebugOverlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StreamlineSettings" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
	};
#endif
	void Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bLoadDebugOverlay_SetBit(void* Obj)
	{
		((UStreamlineSettings*)Obj)->bLoadDebugOverlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bLoadDebugOverlay = { "bLoadDebugOverlay", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStreamlineSettings), &Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bLoadDebugOverlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bLoadDebugOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bLoadDebugOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bAllowOTAUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StreamlineSettings" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
	};
#endif
	void Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bAllowOTAUpdate_SetBit(void* Obj)
	{
		((UStreamlineSettings*)Obj)->bAllowOTAUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bAllowOTAUpdate = { "bAllowOTAUpdate", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStreamlineSettings), &Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bAllowOTAUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bAllowOTAUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bAllowOTAUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_NVIDIANGXApplicationId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StreamlineSettings" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_NVIDIANGXApplicationId = { "NVIDIANGXApplicationId", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamlineSettings, NVIDIANGXApplicationId), METADATA_PARAMS(Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_NVIDIANGXApplicationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_NVIDIANGXApplicationId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamlineSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D12,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D11,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableDLSSFGInPlayInEditorViewports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bLoadDebugOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bAllowOTAUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_NVIDIANGXApplicationId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamlineSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamlineSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreamlineSettings_Statics::ClassParams = {
		&UStreamlineSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStreamlineSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamlineSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamlineSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreamlineSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreamlineSettings, 3223778358);
	template<> STREAMLINERHI_API UClass* StaticClass<UStreamlineSettings>()
	{
		return UStreamlineSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreamlineSettings(Z_Construct_UClass_UStreamlineSettings, &UStreamlineSettings::StaticClass, TEXT("/Script/StreamlineRHI"), TEXT("UStreamlineSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamlineSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
