// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHideWeaponNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHideWeaponNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHideWeaponNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHideWeaponNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZHideWeaponNotifyState::StaticRegisterNativesUSBZHideWeaponNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZHideWeaponNotifyState_NoRegister()
	{
		return USBZHideWeaponNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZHideWeaponNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCosmetic_MetaData[];
#endif
		static void NewProp_bIsCosmetic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCosmetic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZHideWeaponNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHideWeaponNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::NewProp_bIsCosmetic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHideWeaponNotifyState" },
		{ "ModuleRelativePath", "Public/SBZHideWeaponNotifyState.h" },
	};
#endif
	void Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::NewProp_bIsCosmetic_SetBit(void* Obj)
	{
		((USBZHideWeaponNotifyState*)Obj)->bIsCosmetic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::NewProp_bIsCosmetic = { "bIsCosmetic", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZHideWeaponNotifyState), &Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::NewProp_bIsCosmetic_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::NewProp_bIsCosmetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::NewProp_bIsCosmetic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::NewProp_bIsCosmetic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHideWeaponNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::ClassParams = {
		&USBZHideWeaponNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHideWeaponNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHideWeaponNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHideWeaponNotifyState, 3794902750);
	template<> STARBREEZE_API UClass* StaticClass<USBZHideWeaponNotifyState>()
	{
		return USBZHideWeaponNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHideWeaponNotifyState(Z_Construct_UClass_USBZHideWeaponNotifyState, &USBZHideWeaponNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHideWeaponNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHideWeaponNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
