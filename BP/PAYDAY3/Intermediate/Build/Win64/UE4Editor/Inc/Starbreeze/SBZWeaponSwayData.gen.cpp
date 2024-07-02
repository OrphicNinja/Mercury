// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponSwayData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponSwayData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponSwayData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponSwayData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct();
// End Cross Module References
	void USBZWeaponSwayData::StaticRegisterNativesUSBZWeaponSwayData()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponSwayData_NoRegister()
	{
		return USBZWeaponSwayData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponSwayData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponSwayData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSwayData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponSwayData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSwayData_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWeaponSwayData_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSwayData, Alpha), METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSwayData_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSwayData_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSwayData_Statics::NewProp_Hip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponSwayData_Statics::NewProp_Hip = { "Hip", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSwayData, Hip), Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSwayData_Statics::NewProp_Hip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSwayData_Statics::NewProp_Hip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponSwayData_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayData" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponSwayData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponSwayData, Target), Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSwayData_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSwayData_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponSwayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSwayData_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSwayData_Statics::NewProp_Hip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponSwayData_Statics::NewProp_Target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponSwayData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponSwayData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponSwayData_Statics::ClassParams = {
		&USBZWeaponSwayData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponSwayData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSwayData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponSwayData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponSwayData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponSwayData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponSwayData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponSwayData, 1853006746);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponSwayData>()
	{
		return USBZWeaponSwayData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponSwayData(Z_Construct_UClass_USBZWeaponSwayData, &USBZWeaponSwayData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponSwayData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponSwayData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
