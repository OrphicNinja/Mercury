// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStopAndTurnMetaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStopAndTurnMetaData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStopAndTurnMetaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStopAndTurnMetaData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStopAndTurnSelectionData_NoRegister();
// End Cross Module References
	void USBZStopAndTurnMetaData::StaticRegisterNativesUSBZStopAndTurnMetaData()
	{
	}
	UClass* Z_Construct_UClass_USBZStopAndTurnMetaData_NoRegister()
	{
		return USBZStopAndTurnMetaData::StaticClass();
	}
	struct Z_Construct_UClass_USBZStopAndTurnMetaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionSpeedThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelectionSpeedThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionAngleThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelectionAngleThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimMetaData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZStopAndTurnMetaData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStopAndTurnMetaData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::NewProp_SelectionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStopAndTurnMetaData" },
		{ "ModuleRelativePath", "Public/SBZStopAndTurnMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::NewProp_SelectionData = { "SelectionData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStopAndTurnMetaData, SelectionData), Z_Construct_UClass_USBZStopAndTurnSelectionData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::NewProp_SelectionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::NewProp_SelectionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::NewProp_SelectionSpeedThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStopAndTurnMetaData" },
		{ "ModuleRelativePath", "Public/SBZStopAndTurnMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::NewProp_SelectionSpeedThreshold = { "SelectionSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStopAndTurnMetaData, SelectionSpeedThreshold), METADATA_PARAMS(Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::NewProp_SelectionSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::NewProp_SelectionSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::NewProp_SelectionAngleThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStopAndTurnMetaData" },
		{ "ModuleRelativePath", "Public/SBZStopAndTurnMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::NewProp_SelectionAngleThreshold = { "SelectionAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStopAndTurnMetaData, SelectionAngleThreshold), METADATA_PARAMS(Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::NewProp_SelectionAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::NewProp_SelectionAngleThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::NewProp_SelectionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::NewProp_SelectionSpeedThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::NewProp_SelectionAngleThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStopAndTurnMetaData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::ClassParams = {
		&USBZStopAndTurnMetaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStopAndTurnMetaData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStopAndTurnMetaData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStopAndTurnMetaData, 1255098431);
	template<> STARBREEZE_API UClass* StaticClass<USBZStopAndTurnMetaData>()
	{
		return USBZStopAndTurnMetaData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStopAndTurnMetaData(Z_Construct_UClass_USBZStopAndTurnMetaData, &USBZStopAndTurnMetaData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStopAndTurnMetaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStopAndTurnMetaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
