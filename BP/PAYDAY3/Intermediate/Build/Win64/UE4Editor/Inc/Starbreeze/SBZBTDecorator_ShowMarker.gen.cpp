// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_ShowMarker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_ShowMarker() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_ShowMarker_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_ShowMarker();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMarkerState();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
// End Cross Module References
	void USBZBTDecorator_ShowMarker::StaticRegisterNativesUSBZBTDecorator_ShowMarker()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_ShowMarker_NoRegister()
	{
		return USBZBTDecorator_ShowMarker::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Marker_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Marker_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Marker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldChangeDependantOnState_MetaData[];
#endif
		static void NewProp_bShouldChangeDependantOnState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldChangeDependantOnState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMarkerStateThreshold_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMarkerStateThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewMarkerStateThreshold;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StateDependantMarker_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateDependantMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StateDependantMarker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_ShowMarker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_ShowMarker.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_Marker_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_Marker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_ShowMarker" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_ShowMarker.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_Marker = { "Marker", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_ShowMarker, Marker), Z_Construct_UEnum_Starbreeze_ESBZMarkerState, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_Marker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_Marker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_bShouldChangeDependantOnState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_ShowMarker" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_ShowMarker.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_bShouldChangeDependantOnState_SetBit(void* Obj)
	{
		((USBZBTDecorator_ShowMarker*)Obj)->bShouldChangeDependantOnState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_bShouldChangeDependantOnState = { "bShouldChangeDependantOnState", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTDecorator_ShowMarker), &Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_bShouldChangeDependantOnState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_bShouldChangeDependantOnState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_bShouldChangeDependantOnState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_NewMarkerStateThreshold_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_NewMarkerStateThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_ShowMarker" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_ShowMarker.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_NewMarkerStateThreshold = { "NewMarkerStateThreshold", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_ShowMarker, NewMarkerStateThreshold), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_NewMarkerStateThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_NewMarkerStateThreshold_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_StateDependantMarker_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_StateDependantMarker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_ShowMarker" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_ShowMarker.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_StateDependantMarker = { "StateDependantMarker", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_ShowMarker, StateDependantMarker), Z_Construct_UEnum_Starbreeze_ESBZMarkerState, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_StateDependantMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_StateDependantMarker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_Marker_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_Marker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_bShouldChangeDependantOnState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_NewMarkerStateThreshold_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_NewMarkerStateThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_StateDependantMarker_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::NewProp_StateDependantMarker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_ShowMarker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::ClassParams = {
		&USBZBTDecorator_ShowMarker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_ShowMarker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_ShowMarker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_ShowMarker, 3987592497);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_ShowMarker>()
	{
		return USBZBTDecorator_ShowMarker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_ShowMarker(Z_Construct_UClass_USBZBTDecorator_ShowMarker, &USBZBTDecorator_ShowMarker::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_ShowMarker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_ShowMarker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
