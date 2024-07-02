// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_Arrest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_Arrest() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_Arrest_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_Arrest();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZArrestType();
// End Cross Module References
	void USBZBTTask_Arrest::StaticRegisterNativesUSBZBTTask_Arrest()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_Arrest_NoRegister()
	{
		return USBZBTTask_Arrest::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_Arrest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrestTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArrestTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllowedDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_AllowedStates;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BBTypeToArrest_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBTypeToArrest_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BBTypeToArrest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_Arrest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Arrest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_Arrest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Arrest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_ArrestTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Arrest" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Arrest.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_ArrestTime = { "ArrestTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Arrest, ArrestTime), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_ArrestTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_ArrestTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_AllowedDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Arrest" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Arrest.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_AllowedDistance = { "AllowedDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Arrest, AllowedDistance), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_AllowedDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_AllowedDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_AllowedStates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Arrest" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Arrest.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_AllowedStates = { "AllowedStates", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Arrest, AllowedStates), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_AllowedStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_AllowedStates_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_BBTypeToArrest_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_BBTypeToArrest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Arrest" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Arrest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_BBTypeToArrest = { "BBTypeToArrest", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Arrest, BBTypeToArrest), Z_Construct_UEnum_Starbreeze_ESBZArrestType, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_BBTypeToArrest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_BBTypeToArrest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_Arrest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_ArrestTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_AllowedDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_AllowedStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_BBTypeToArrest_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Arrest_Statics::NewProp_BBTypeToArrest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_Arrest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_Arrest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_Arrest_Statics::ClassParams = {
		&USBZBTTask_Arrest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_Arrest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Arrest_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Arrest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Arrest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_Arrest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_Arrest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_Arrest, 433165888);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_Arrest>()
	{
		return USBZBTTask_Arrest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_Arrest(Z_Construct_UClass_USBZBTTask_Arrest, &USBZBTTask_Arrest::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_Arrest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_Arrest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
