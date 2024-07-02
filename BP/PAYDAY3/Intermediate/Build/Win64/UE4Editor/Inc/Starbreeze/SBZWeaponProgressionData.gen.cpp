// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponProgressionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponProgressionData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponProgressionData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponProgressionData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray();
// End Cross Module References
	void USBZWeaponProgressionData::StaticRegisterNativesUSBZWeaponProgressionData()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponProgressionData_NoRegister()
	{
		return USBZWeaponProgressionData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponProgressionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartProgressionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponPartProgressionArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponProgressionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponProgressionData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponProgressionData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponProgressionData_Statics::NewProp_WeaponPartProgressionArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponProgressionData" },
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponProgressionData_Statics::NewProp_WeaponPartProgressionArray = { "WeaponPartProgressionArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponProgressionData, WeaponPartProgressionArray), Z_Construct_UScriptStruct_FSBZWeaponPartProgressionArray, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponProgressionData_Statics::NewProp_WeaponPartProgressionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponProgressionData_Statics::NewProp_WeaponPartProgressionArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponProgressionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponProgressionData_Statics::NewProp_WeaponPartProgressionArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponProgressionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponProgressionData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponProgressionData_Statics::ClassParams = {
		&USBZWeaponProgressionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponProgressionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponProgressionData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponProgressionData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponProgressionData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponProgressionData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponProgressionData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponProgressionData, 4150873148);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponProgressionData>()
	{
		return USBZWeaponProgressionData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponProgressionData(Z_Construct_UClass_USBZWeaponProgressionData, &USBZWeaponProgressionData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponProgressionData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponProgressionData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
