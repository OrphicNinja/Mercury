// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_LookAround.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_LookAround() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_LookAround_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_LookAround();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTService_LookAround::StaticRegisterNativesUSBZBTService_LookAround()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_LookAround_NoRegister()
	{
		return USBZBTService_LookAround::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_LookAround_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAroundTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookAroundTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTimeBetweenRotations_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitTimeBetweenRotations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumRotationAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumRotationAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FocusPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_LookAround_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_LookAround_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_LookAround.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_LookAround.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_LookAroundTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_LookAround" },
		{ "ModuleRelativePath", "Public/SBZBTService_LookAround.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_LookAroundTime = { "LookAroundTime", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_LookAround, LookAroundTime), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_LookAroundTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_LookAroundTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_WaitTimeBetweenRotations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_LookAround" },
		{ "ModuleRelativePath", "Public/SBZBTService_LookAround.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_WaitTimeBetweenRotations = { "WaitTimeBetweenRotations", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_LookAround, WaitTimeBetweenRotations), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_WaitTimeBetweenRotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_WaitTimeBetweenRotations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_MaximumRotationAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_LookAround" },
		{ "ModuleRelativePath", "Public/SBZBTService_LookAround.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_MaximumRotationAngle = { "MaximumRotationAngle", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_LookAround, MaximumRotationAngle), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_MaximumRotationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_MaximumRotationAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_FocusPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_LookAround" },
		{ "ModuleRelativePath", "Public/SBZBTService_LookAround.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_FocusPriority = { "FocusPriority", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_LookAround, FocusPriority), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_FocusPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_FocusPriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_LookAround_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_LookAroundTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_WaitTimeBetweenRotations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_MaximumRotationAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_LookAround_Statics::NewProp_FocusPriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_LookAround_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_LookAround>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_LookAround_Statics::ClassParams = {
		&USBZBTService_LookAround::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTService_LookAround_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_LookAround_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_LookAround_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_LookAround_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_LookAround()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_LookAround_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_LookAround, 781958629);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_LookAround>()
	{
		return USBZBTService_LookAround::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_LookAround(Z_Construct_UClass_USBZBTService_LookAround, &USBZBTService_LookAround::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_LookAround"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_LookAround);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
