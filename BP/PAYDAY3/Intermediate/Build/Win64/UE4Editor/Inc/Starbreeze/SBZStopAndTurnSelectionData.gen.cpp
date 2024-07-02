// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStopAndTurnSelectionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStopAndTurnSelectionData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStopAndTurnSelectionData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStopAndTurnSelectionData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZStopAndTurnSelectionData::StaticRegisterNativesUSBZStopAndTurnSelectionData()
	{
	}
	UClass* Z_Construct_UClass_USBZStopAndTurnSelectionData_NoRegister()
	{
		return USBZStopAndTurnSelectionData::StaticClass();
	}
	struct Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStopAndTurnSelectionData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStopAndTurnSelectionData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::NewProp_SelectionSpeedThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStopAndTurnSelectionData" },
		{ "ModuleRelativePath", "Public/SBZStopAndTurnSelectionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::NewProp_SelectionSpeedThreshold = { "SelectionSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStopAndTurnSelectionData, SelectionSpeedThreshold), METADATA_PARAMS(Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::NewProp_SelectionSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::NewProp_SelectionSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::NewProp_SelectionAngleThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStopAndTurnSelectionData" },
		{ "ModuleRelativePath", "Public/SBZStopAndTurnSelectionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::NewProp_SelectionAngleThreshold = { "SelectionAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStopAndTurnSelectionData, SelectionAngleThreshold), METADATA_PARAMS(Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::NewProp_SelectionAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::NewProp_SelectionAngleThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::NewProp_SelectionSpeedThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::NewProp_SelectionAngleThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStopAndTurnSelectionData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::ClassParams = {
		&USBZStopAndTurnSelectionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStopAndTurnSelectionData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStopAndTurnSelectionData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStopAndTurnSelectionData, 2478692582);
	template<> STARBREEZE_API UClass* StaticClass<USBZStopAndTurnSelectionData>()
	{
		return USBZStopAndTurnSelectionData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStopAndTurnSelectionData(Z_Construct_UClass_USBZStopAndTurnSelectionData, &USBZStopAndTurnSelectionData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStopAndTurnSelectionData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStopAndTurnSelectionData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
