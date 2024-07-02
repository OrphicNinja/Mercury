// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_TargetIsNear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_TargetIsNear() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_TargetIsNear_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_TargetIsNear();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMarkerState();
// End Cross Module References
	void USBZBTDecorator_TargetIsNear::StaticRegisterNativesUSBZBTDecorator_TargetIsNear()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_TargetIsNear_NoRegister()
	{
		return USBZBTDecorator_TargetIsNear::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckFrom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAllowedDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetAllowedDistance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NearMarker_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NearMarker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_TargetIsNear.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_TargetIsNear.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_CheckFrom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_TargetIsNear" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_TargetIsNear.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_CheckFrom = { "CheckFrom", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_TargetIsNear, CheckFrom), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_CheckFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_CheckFrom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_TargetAllowedDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_TargetIsNear" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_TargetIsNear.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_TargetAllowedDistance = { "TargetAllowedDistance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_TargetIsNear, TargetAllowedDistance), METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_TargetAllowedDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_TargetAllowedDistance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_NearMarker_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_NearMarker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_TargetIsNear" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_TargetIsNear.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_NearMarker = { "NearMarker", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_TargetIsNear, NearMarker), Z_Construct_UEnum_Starbreeze_ESBZMarkerState, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_NearMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_NearMarker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_CheckFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_TargetAllowedDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_NearMarker_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::NewProp_NearMarker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_TargetIsNear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::ClassParams = {
		&USBZBTDecorator_TargetIsNear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_TargetIsNear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_TargetIsNear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_TargetIsNear, 1233596751);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_TargetIsNear>()
	{
		return USBZBTDecorator_TargetIsNear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_TargetIsNear(Z_Construct_UClass_USBZBTDecorator_TargetIsNear, &USBZBTDecorator_TargetIsNear::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_TargetIsNear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_TargetIsNear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
