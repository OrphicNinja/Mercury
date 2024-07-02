// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquipNextAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquipNextAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquipNextAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquipNextAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHandleEquipmentAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEquipNextAbility::StaticRegisterNativesUSBZEquipNextAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZEquipNextAbility_NoRegister()
	{
		return USBZEquipNextAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZEquipNextAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNextForward_MetaData[];
#endif
		static void NewProp_bIsNextForward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNextForward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEquipNextAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZHandleEquipmentAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquipNextAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEquipNextAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEquipNextAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquipNextAbility_Statics::NewProp_bIsNextForward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquipNextAbility" },
		{ "ModuleRelativePath", "Public/SBZEquipNextAbility.h" },
	};
#endif
	void Z_Construct_UClass_USBZEquipNextAbility_Statics::NewProp_bIsNextForward_SetBit(void* Obj)
	{
		((USBZEquipNextAbility*)Obj)->bIsNextForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZEquipNextAbility_Statics::NewProp_bIsNextForward = { "bIsNextForward", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZEquipNextAbility), &Z_Construct_UClass_USBZEquipNextAbility_Statics::NewProp_bIsNextForward_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZEquipNextAbility_Statics::NewProp_bIsNextForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquipNextAbility_Statics::NewProp_bIsNextForward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEquipNextAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquipNextAbility_Statics::NewProp_bIsNextForward,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEquipNextAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEquipNextAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEquipNextAbility_Statics::ClassParams = {
		&USBZEquipNextAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEquipNextAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquipNextAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEquipNextAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquipNextAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEquipNextAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEquipNextAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEquipNextAbility, 775742332);
	template<> STARBREEZE_API UClass* StaticClass<USBZEquipNextAbility>()
	{
		return USBZEquipNextAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEquipNextAbility(Z_Construct_UClass_USBZEquipNextAbility, &USBZEquipNextAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEquipNextAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEquipNextAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
