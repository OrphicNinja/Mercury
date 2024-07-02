// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippablePartDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippablePartDataAsset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartDataAsset();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseWeaponData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippablePartUIData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartCustomData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponSightData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableGadgetData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponMagazineData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponAmmoData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModGripAnimData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponMuzzleData_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWeaponAttribute();
// End Cross Module References
	DEFINE_FUNCTION(USBZEquippablePartDataAsset::execGetModificationsUIData)
	{
		P_GET_OBJECT(USBZBaseWeaponData,Z_Param_WeaponData);
		P_GET_STRUCT_REF(FSBZEquippablePartUIData,Z_Param_Out_PartUIData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetModificationsUIData(Z_Param_WeaponData,Z_Param_Out_PartUIData);
		P_NATIVE_END;
	}
	void USBZEquippablePartDataAsset::StaticRegisterNativesUSBZEquippablePartDataAsset()
	{
		UClass* Class = USBZEquippablePartDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetModificationsUIData", &USBZEquippablePartDataAsset::execGetModificationsUIData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics
	{
		struct SBZEquippablePartDataAsset_eventGetModificationsUIData_Parms
		{
			const USBZBaseWeaponData* WeaponData;
			FSBZEquippablePartUIData PartUIData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartUIData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics::NewProp_WeaponData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippablePartDataAsset_eventGetModificationsUIData_Parms, WeaponData), Z_Construct_UClass_USBZBaseWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics::NewProp_WeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics::NewProp_WeaponData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics::NewProp_PartUIData = { "PartUIData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEquippablePartDataAsset_eventGetModificationsUIData_Parms, PartUIData), Z_Construct_UScriptStruct_FSBZEquippablePartUIData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics::NewProp_WeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics::NewProp_PartUIData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippablePartDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZEquippablePartDataAsset, nullptr, "GetModificationsUIData", nullptr, nullptr, sizeof(SBZEquippablePartDataAsset_eventGetModificationsUIData_Parms), Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister()
	{
		return USBZEquippablePartDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USBZEquippablePartDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomDataArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SightDataArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GadgetDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GadgetDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GadgetDataArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagazineData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModGripAnimData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModGripAnimData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttributeModifierMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttributeModifierMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttributeModifierMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeModifierMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AttributeModifierMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZModularPartDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZEquippablePartDataAsset_GetModificationsUIData, "GetModificationsUIData" }, // 296701534
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEquippablePartDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_CustomDataArray_Inner = { "CustomDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZEquippablePartCustomData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_CustomDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippablePartDataAsset" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_CustomDataArray = { "CustomDataArray", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippablePartDataAsset, CustomDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_CustomDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_CustomDataArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_SightDataArray_Inner = { "SightDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZWeaponSightData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_SightDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippablePartDataAsset" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_SightDataArray = { "SightDataArray", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippablePartDataAsset, SightDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_SightDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_SightDataArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_GadgetDataArray_Inner = { "GadgetDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZEquippableGadgetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_GadgetDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippablePartDataAsset" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_GadgetDataArray = { "GadgetDataArray", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippablePartDataAsset, GadgetDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_GadgetDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_GadgetDataArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_MagazineData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippablePartDataAsset" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_MagazineData = { "MagazineData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippablePartDataAsset, MagazineData), Z_Construct_UClass_USBZWeaponMagazineData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_MagazineData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_MagazineData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AmmoData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippablePartDataAsset" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AmmoData = { "AmmoData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippablePartDataAsset, AmmoData), Z_Construct_UClass_USBZWeaponAmmoData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AmmoData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AmmoData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_ModGripAnimData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippablePartDataAsset" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_ModGripAnimData = { "ModGripAnimData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippablePartDataAsset, ModGripAnimData), Z_Construct_UClass_USBZModGripAnimData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_ModGripAnimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_ModGripAnimData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_MuzzleData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippablePartDataAsset" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_MuzzleData = { "MuzzleData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippablePartDataAsset, MuzzleData), Z_Construct_UClass_USBZWeaponMuzzleData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_MuzzleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_MuzzleData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AttributeModifierMap_ValueProp = { "AttributeModifierMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AttributeModifierMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AttributeModifierMap_Key_KeyProp = { "AttributeModifierMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZWeaponAttribute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AttributeModifierMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippablePartDataAsset" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AttributeModifierMap = { "AttributeModifierMap", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippablePartDataAsset, AttributeModifierMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AttributeModifierMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AttributeModifierMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_CustomDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_CustomDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_SightDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_SightDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_GadgetDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_GadgetDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_MagazineData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AmmoData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_ModGripAnimData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_MuzzleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AttributeModifierMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AttributeModifierMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AttributeModifierMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::NewProp_AttributeModifierMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEquippablePartDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::ClassParams = {
		&USBZEquippablePartDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::PropPointers),
		0,
		0x000900A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEquippablePartDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEquippablePartDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEquippablePartDataAsset, 3902996762);
	template<> STARBREEZE_API UClass* StaticClass<USBZEquippablePartDataAsset>()
	{
		return USBZEquippablePartDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEquippablePartDataAsset(Z_Construct_UClass_USBZEquippablePartDataAsset, &USBZEquippablePartDataAsset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEquippablePartDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEquippablePartDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
