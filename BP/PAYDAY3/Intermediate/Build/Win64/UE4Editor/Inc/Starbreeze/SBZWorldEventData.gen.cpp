// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWorldEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWorldEventData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldEventData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldEventData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldEventBase_NoRegister();
// End Cross Module References
	void USBZWorldEventData::StaticRegisterNativesUSBZWorldEventData()
	{
	}
	UClass* Z_Construct_UClass_USBZWorldEventData_NoRegister()
	{
		return USBZWorldEventData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWorldEventData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWorldEventData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldEventData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWorldEventData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldEventData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldEventData_Statics::NewProp_Event_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldEventData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldEventData_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldEventData, Event), Z_Construct_UClass_USBZWorldEventBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldEventData_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldEventData_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWorldEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldEventData_Statics::NewProp_Event,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWorldEventData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWorldEventData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWorldEventData_Statics::ClassParams = {
		&USBZWorldEventData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWorldEventData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldEventData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWorldEventData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldEventData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWorldEventData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWorldEventData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWorldEventData, 3712537906);
	template<> STARBREEZE_API UClass* StaticClass<USBZWorldEventData>()
	{
		return USBZWorldEventData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWorldEventData(Z_Construct_UClass_USBZWorldEventData, &USBZWorldEventData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWorldEventData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWorldEventData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
