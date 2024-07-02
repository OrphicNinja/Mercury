// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZToolCuttingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZToolCuttingData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolCuttingData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolCuttingData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageDistance();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCuttingMaterialTier();
// End Cross Module References
	void USBZToolCuttingData::StaticRegisterNativesUSBZToolCuttingData()
	{
	}
	UClass* Z_Construct_UClass_USBZToolCuttingData_NoRegister()
	{
		return USBZToolCuttingData::StaticClass();
	}
	struct Z_Construct_UClass_USBZToolCuttingData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fuel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Fuel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumCutDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumCutDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseLookSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseLookSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadLookSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GamepadLookSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowSplineMinAngleDegree_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FollowSplineMinAngleDegree;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageDistanceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageDistanceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DamageDistanceArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorPenetration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyPlayerDamageScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FriendlyPlayerDamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorPlayerDamageScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstigatorPlayerDamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInstigatorPlayerDamageScale_MetaData[];
#endif
		static void NewProp_bUseInstigatorPlayerDamageScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInstigatorPlayerDamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSkillSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultSkillSpeedModifier;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinCuttableTier_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCuttableTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MinCuttableTier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZToolCuttingData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZToolData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolCuttingData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZToolCuttingData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZToolCuttingData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_Fuel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolCuttingData" },
		{ "ModuleRelativePath", "Public/SBZToolCuttingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_Fuel = { "Fuel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolCuttingData, Fuel), METADATA_PARAMS(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_Fuel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_Fuel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MaximumCutDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolCuttingData" },
		{ "ModuleRelativePath", "Public/SBZToolCuttingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MaximumCutDistance = { "MaximumCutDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolCuttingData, MaximumCutDistance), METADATA_PARAMS(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MaximumCutDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MaximumCutDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MouseLookSpeedModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolCuttingData" },
		{ "ModuleRelativePath", "Public/SBZToolCuttingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MouseLookSpeedModifier = { "MouseLookSpeedModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolCuttingData, MouseLookSpeedModifier), METADATA_PARAMS(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MouseLookSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MouseLookSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_GamepadLookSpeedModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolCuttingData" },
		{ "ModuleRelativePath", "Public/SBZToolCuttingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_GamepadLookSpeedModifier = { "GamepadLookSpeedModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolCuttingData, GamepadLookSpeedModifier), METADATA_PARAMS(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_GamepadLookSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_GamepadLookSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_FollowSplineMinAngleDegree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolCuttingData" },
		{ "ModuleRelativePath", "Public/SBZToolCuttingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_FollowSplineMinAngleDegree = { "FollowSplineMinAngleDegree", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolCuttingData, FollowSplineMinAngleDegree), METADATA_PARAMS(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_FollowSplineMinAngleDegree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_FollowSplineMinAngleDegree_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_DamageDistanceArray_Inner = { "DamageDistanceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDamageDistance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_DamageDistanceArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolCuttingData" },
		{ "ModuleRelativePath", "Public/SBZToolCuttingData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_DamageDistanceArray = { "DamageDistanceArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolCuttingData, DamageDistanceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_DamageDistanceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_DamageDistanceArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_ArmorPenetration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolCuttingData" },
		{ "ModuleRelativePath", "Public/SBZToolCuttingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_ArmorPenetration = { "ArmorPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolCuttingData, ArmorPenetration), METADATA_PARAMS(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_ArmorPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_ArmorPenetration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_FriendlyPlayerDamageScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolCuttingData" },
		{ "ModuleRelativePath", "Public/SBZToolCuttingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_FriendlyPlayerDamageScale = { "FriendlyPlayerDamageScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolCuttingData, FriendlyPlayerDamageScale), METADATA_PARAMS(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_FriendlyPlayerDamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_FriendlyPlayerDamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_InstigatorPlayerDamageScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolCuttingData" },
		{ "ModuleRelativePath", "Public/SBZToolCuttingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_InstigatorPlayerDamageScale = { "InstigatorPlayerDamageScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolCuttingData, InstigatorPlayerDamageScale), METADATA_PARAMS(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_InstigatorPlayerDamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_InstigatorPlayerDamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_bUseInstigatorPlayerDamageScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolCuttingData" },
		{ "ModuleRelativePath", "Public/SBZToolCuttingData.h" },
	};
#endif
	void Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_bUseInstigatorPlayerDamageScale_SetBit(void* Obj)
	{
		((USBZToolCuttingData*)Obj)->bUseInstigatorPlayerDamageScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_bUseInstigatorPlayerDamageScale = { "bUseInstigatorPlayerDamageScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZToolCuttingData), &Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_bUseInstigatorPlayerDamageScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_bUseInstigatorPlayerDamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_bUseInstigatorPlayerDamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_DefaultSkillSpeedModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolCuttingData" },
		{ "ModuleRelativePath", "Public/SBZToolCuttingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_DefaultSkillSpeedModifier = { "DefaultSkillSpeedModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolCuttingData, DefaultSkillSpeedModifier), METADATA_PARAMS(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_DefaultSkillSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_DefaultSkillSpeedModifier_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MinCuttableTier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MinCuttableTier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolCuttingData" },
		{ "ModuleRelativePath", "Public/SBZToolCuttingData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MinCuttableTier = { "MinCuttableTier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZToolCuttingData, MinCuttableTier), Z_Construct_UEnum_Starbreeze_ESBZCuttingMaterialTier, METADATA_PARAMS(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MinCuttableTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MinCuttableTier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZToolCuttingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_Fuel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MaximumCutDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MouseLookSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_GamepadLookSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_FollowSplineMinAngleDegree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_DamageDistanceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_DamageDistanceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_ArmorPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_FriendlyPlayerDamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_InstigatorPlayerDamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_bUseInstigatorPlayerDamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_DefaultSkillSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MinCuttableTier_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZToolCuttingData_Statics::NewProp_MinCuttableTier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZToolCuttingData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZToolCuttingData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZToolCuttingData_Statics::ClassParams = {
		&USBZToolCuttingData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZToolCuttingData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolCuttingData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZToolCuttingData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolCuttingData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZToolCuttingData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZToolCuttingData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZToolCuttingData, 858968538);
	template<> STARBREEZE_API UClass* StaticClass<USBZToolCuttingData>()
	{
		return USBZToolCuttingData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZToolCuttingData(Z_Construct_UClass_USBZToolCuttingData, &USBZToolCuttingData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZToolCuttingData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZToolCuttingData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
