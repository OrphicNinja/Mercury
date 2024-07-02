// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleWheel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleWheel() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleWheel_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleWheel();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZVehicleWheel::StaticRegisterNativesUSBZVehicleWheel()
	{
	}
	UClass* Z_Construct_UClass_USBZVehicleWheel_NoRegister()
	{
		return USBZVehicleWheel::StaticClass();
	}
	struct Z_Construct_UClass_USBZVehicleWheel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDriven_MetaData[];
#endif
		static void NewProp_bDriven_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDriven;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVehicleWheel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleWheel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVehicleWheel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleWheel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleWheel_Statics::NewProp_bDriven_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleWheel" },
		{ "ModuleRelativePath", "Public/SBZVehicleWheel.h" },
	};
#endif
	void Z_Construct_UClass_USBZVehicleWheel_Statics::NewProp_bDriven_SetBit(void* Obj)
	{
		((USBZVehicleWheel*)Obj)->bDriven = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZVehicleWheel_Statics::NewProp_bDriven = { "bDriven", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZVehicleWheel), &Z_Construct_UClass_USBZVehicleWheel_Statics::NewProp_bDriven_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleWheel_Statics::NewProp_bDriven_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleWheel_Statics::NewProp_bDriven_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVehicleWheel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleWheel_Statics::NewProp_bDriven,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVehicleWheel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVehicleWheel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVehicleWheel_Statics::ClassParams = {
		&USBZVehicleWheel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZVehicleWheel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleWheel_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVehicleWheel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleWheel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVehicleWheel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVehicleWheel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVehicleWheel, 1723737159);
	template<> STARBREEZE_API UClass* StaticClass<USBZVehicleWheel>()
	{
		return USBZVehicleWheel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVehicleWheel(Z_Construct_UClass_USBZVehicleWheel, &USBZVehicleWheel::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVehicleWheel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVehicleWheel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
