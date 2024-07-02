// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponGlobalPaintSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponGlobalPaintSlot() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponGlobalPaintSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponGlobalPaintSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList();
// End Cross Module References
	void USBZWeaponGlobalPaintSlot::StaticRegisterNativesUSBZWeaponGlobalPaintSlot()
	{
	}
	UClass* Z_Construct_UClass_USBZWeaponGlobalPaintSlot_NoRegister()
	{
		return USBZWeaponGlobalPaintSlot::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalPaintAreas_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalPaintAreas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCosmeticsPartSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponGlobalPaintSlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponGlobalPaintSlot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics::NewProp_GlobalPaintAreas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGlobalPaintSlot" },
		{ "ModuleRelativePath", "Public/SBZWeaponGlobalPaintSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics::NewProp_GlobalPaintAreas = { "GlobalPaintAreas", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponGlobalPaintSlot, GlobalPaintAreas), Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics::NewProp_GlobalPaintAreas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics::NewProp_GlobalPaintAreas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics::NewProp_GlobalPaintAreas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponGlobalPaintSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics::ClassParams = {
		&USBZWeaponGlobalPaintSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics::PropPointers),
		0,
		0x000900A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponGlobalPaintSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponGlobalPaintSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponGlobalPaintSlot, 3002612121);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponGlobalPaintSlot>()
	{
		return USBZWeaponGlobalPaintSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponGlobalPaintSlot(Z_Construct_UClass_USBZWeaponGlobalPaintSlot, &USBZWeaponGlobalPaintSlot::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponGlobalPaintSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponGlobalPaintSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
