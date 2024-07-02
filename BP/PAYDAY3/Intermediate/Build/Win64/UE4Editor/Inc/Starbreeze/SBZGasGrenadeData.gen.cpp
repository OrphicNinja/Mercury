// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGasGrenadeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGasGrenadeData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGasGrenadeData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGasGrenadeData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFragGrenadeData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void USBZGasGrenadeData::StaticRegisterNativesUSBZGasGrenadeData()
	{
	}
	UClass* Z_Construct_UClass_USBZGasGrenadeData_NoRegister()
	{
		return USBZGasGrenadeData::StaticClass();
	}
	struct Z_Construct_UClass_USBZGasGrenadeData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddedTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddedTagContainer;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DropDamageMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DropDamageMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DropDamageMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropDamageMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DropDamageMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropDamageModifierCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DropDamageModifierCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDroppedConvertedToFragGrenade_MetaData[];
#endif
		static void NewProp_bIsDroppedConvertedToFragGrenade_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDroppedConvertedToFragGrenade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGasGrenadeData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZFragGrenadeData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasGrenadeData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGasGrenadeData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGasGrenadeData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_AddedTagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZGasGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_AddedTagContainer = { "AddedTagContainer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasGrenadeData, AddedTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_AddedTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_AddedTagContainer_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageMap_ValueProp = { "DropDamageMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageMap_Key_KeyProp = { "DropDamageMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZGasGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageMap = { "DropDamageMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasGrenadeData, DropDamageMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageModifierCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZGasGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageModifierCurve = { "DropDamageModifierCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasGrenadeData, DropDamageModifierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageModifierCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageModifierCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_bIsDroppedConvertedToFragGrenade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZGasGrenadeData.h" },
	};
#endif
	void Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_bIsDroppedConvertedToFragGrenade_SetBit(void* Obj)
	{
		((USBZGasGrenadeData*)Obj)->bIsDroppedConvertedToFragGrenade = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_bIsDroppedConvertedToFragGrenade = { "bIsDroppedConvertedToFragGrenade", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGasGrenadeData), &Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_bIsDroppedConvertedToFragGrenade_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_bIsDroppedConvertedToFragGrenade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_bIsDroppedConvertedToFragGrenade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGasGrenadeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_AddedTagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_DropDamageModifierCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasGrenadeData_Statics::NewProp_bIsDroppedConvertedToFragGrenade,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGasGrenadeData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGasGrenadeData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGasGrenadeData_Statics::ClassParams = {
		&USBZGasGrenadeData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGasGrenadeData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasGrenadeData_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGasGrenadeData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasGrenadeData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGasGrenadeData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGasGrenadeData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGasGrenadeData, 2359860237);
	template<> STARBREEZE_API UClass* StaticClass<USBZGasGrenadeData>()
	{
		return USBZGasGrenadeData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGasGrenadeData(Z_Construct_UClass_USBZGasGrenadeData, &USBZGasGrenadeData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGasGrenadeData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGasGrenadeData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
