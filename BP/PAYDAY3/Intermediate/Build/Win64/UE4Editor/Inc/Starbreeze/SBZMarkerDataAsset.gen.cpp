// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMarkerDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMarkerDataAsset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerWidget_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
	void USBZMarkerDataAsset::StaticRegisterNativesUSBZMarkerDataAsset()
	{
	}
	UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister()
	{
		return USBZMarkerDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USBZMarkerDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerWidgetOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MarkerWidgetOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasOffScreenTracking_MetaData[];
#endif
		static void NewProp_bHasOffScreenTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasOffScreenTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDistance_MetaData[];
#endif
		static void NewProp_bShowDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisplayAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnDisplayAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisibleRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMarkerDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMarkerDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMarkerDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerDataAsset" },
		{ "ModuleRelativePath", "Public/SBZMarkerDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerDataAsset, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_MarkerWidgetOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerDataAsset" },
		{ "ModuleRelativePath", "Public/SBZMarkerDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_MarkerWidgetOverride = { "MarkerWidgetOverride", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerDataAsset, MarkerWidgetOverride), Z_Construct_UClass_USBZMarkerWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_MarkerWidgetOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_MarkerWidgetOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_Brush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerDataAsset" },
		{ "ModuleRelativePath", "Public/SBZMarkerDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerDataAsset, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_Brush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_DisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerDataAsset" },
		{ "ModuleRelativePath", "Public/SBZMarkerDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerDataAsset, DisplayText), METADATA_PARAMS(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_DisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_DisplayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_bHasOffScreenTracking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerDataAsset" },
		{ "ModuleRelativePath", "Public/SBZMarkerDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_bHasOffScreenTracking_SetBit(void* Obj)
	{
		((USBZMarkerDataAsset*)Obj)->bHasOffScreenTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_bHasOffScreenTracking = { "bHasOffScreenTracking", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMarkerDataAsset), &Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_bHasOffScreenTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_bHasOffScreenTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_bHasOffScreenTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_bShowDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerDataAsset" },
		{ "ModuleRelativePath", "Public/SBZMarkerDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_bShowDistance_SetBit(void* Obj)
	{
		((USBZMarkerDataAsset*)Obj)->bShowDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_bShowDistance = { "bShowDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMarkerDataAsset), &Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_bShowDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_bShowDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_bShowDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_OnDisplayAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerDataAsset" },
		{ "ModuleRelativePath", "Public/SBZMarkerDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_OnDisplayAudioEvent = { "OnDisplayAudioEvent", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerDataAsset, OnDisplayAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_OnDisplayAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_OnDisplayAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_VisibleRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerDataAsset" },
		{ "ModuleRelativePath", "Public/SBZMarkerDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_VisibleRange = { "VisibleRange", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerDataAsset, VisibleRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_VisibleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_VisibleRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMarkerDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_MarkerWidgetOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_Brush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_DisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_bHasOffScreenTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_bShowDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_OnDisplayAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerDataAsset_Statics::NewProp_VisibleRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMarkerDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMarkerDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMarkerDataAsset_Statics::ClassParams = {
		&USBZMarkerDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMarkerDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerDataAsset_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMarkerDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMarkerDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMarkerDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMarkerDataAsset, 2748918610);
	template<> STARBREEZE_API UClass* StaticClass<USBZMarkerDataAsset>()
	{
		return USBZMarkerDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMarkerDataAsset(Z_Construct_UClass_USBZMarkerDataAsset, &USBZMarkerDataAsset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMarkerDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMarkerDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
