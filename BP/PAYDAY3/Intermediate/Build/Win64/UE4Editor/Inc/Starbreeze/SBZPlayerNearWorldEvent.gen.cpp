// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerNearWorldEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerNearWorldEvent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerNearWorldEvent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerNearWorldEvent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldEventBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
	void USBZPlayerNearWorldEvent::StaticRegisterNativesUSBZPlayerNearWorldEvent()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerNearWorldEvent_NoRegister()
	{
		return USBZPlayerNearWorldEvent::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngleRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWorldEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerNearWorldEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerNearWorldEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerNearWorldEvent" },
		{ "ModuleRelativePath", "Public/SBZPlayerNearWorldEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerNearWorldEvent, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::NewProp_AngleRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerNearWorldEvent" },
		{ "ModuleRelativePath", "Public/SBZPlayerNearWorldEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::NewProp_AngleRange = { "AngleRange", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerNearWorldEvent, AngleRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::NewProp_AngleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::NewProp_AngleRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::NewProp_AngleRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerNearWorldEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::ClassParams = {
		&USBZPlayerNearWorldEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerNearWorldEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerNearWorldEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerNearWorldEvent, 411083272);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerNearWorldEvent>()
	{
		return USBZPlayerNearWorldEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerNearWorldEvent(Z_Construct_UClass_USBZPlayerNearWorldEvent, &USBZPlayerNearWorldEvent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerNearWorldEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerNearWorldEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
