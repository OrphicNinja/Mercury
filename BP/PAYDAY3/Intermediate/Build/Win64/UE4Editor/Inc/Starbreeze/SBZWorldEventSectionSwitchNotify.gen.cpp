// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWorldEventSectionSwitchNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWorldEventSectionSwitchNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldEventSectionSwitchNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldEventData_NoRegister();
// End Cross Module References
	void USBZWorldEventSectionSwitchNotify::StaticRegisterNativesUSBZWorldEventSectionSwitchNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_NoRegister()
	{
		return USBZWorldEventSectionSwitchNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNegateEvent_MetaData[];
#endif
		static void NewProp_bNegateEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNegateEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZWorldEventSectionSwitchNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWorldEventSectionSwitchNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_SectionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldEventSectionSwitchNotify" },
		{ "ModuleRelativePath", "Public/SBZWorldEventSectionSwitchNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldEventSectionSwitchNotify, SectionName), METADATA_PARAMS(Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_SectionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_bNegateEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldEventSectionSwitchNotify" },
		{ "ModuleRelativePath", "Public/SBZWorldEventSectionSwitchNotify.h" },
	};
#endif
	void Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_bNegateEvent_SetBit(void* Obj)
	{
		((USBZWorldEventSectionSwitchNotify*)Obj)->bNegateEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_bNegateEvent = { "bNegateEvent", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWorldEventSectionSwitchNotify), &Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_bNegateEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_bNegateEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_bNegateEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_EventData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWorldEventSectionSwitchNotify" },
		{ "ModuleRelativePath", "Public/SBZWorldEventSectionSwitchNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWorldEventSectionSwitchNotify, EventData), Z_Construct_UClass_USBZWorldEventData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_EventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_SectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_bNegateEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::NewProp_EventData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWorldEventSectionSwitchNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::ClassParams = {
		&USBZWorldEventSectionSwitchNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWorldEventSectionSwitchNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWorldEventSectionSwitchNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWorldEventSectionSwitchNotify, 3859575705);
	template<> STARBREEZE_API UClass* StaticClass<USBZWorldEventSectionSwitchNotify>()
	{
		return USBZWorldEventSectionSwitchNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWorldEventSectionSwitchNotify(Z_Construct_UClass_USBZWorldEventSectionSwitchNotify, &USBZWorldEventSectionSwitchNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWorldEventSectionSwitchNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWorldEventSectionSwitchNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
