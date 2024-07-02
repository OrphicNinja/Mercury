// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrackWeaponVelocityNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrackWeaponVelocityNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTrackWeaponVelocityNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTrackWeaponVelocityNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZTrackWeaponVelocityNotifyState::StaticRegisterNativesUSBZTrackWeaponVelocityNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZTrackWeaponVelocityNotifyState_NoRegister()
	{
		return USBZTrackWeaponVelocityNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZTrackWeaponVelocityNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTrackWeaponVelocityNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTrackWeaponVelocityNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZTrackWeaponVelocityNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTrackWeaponVelocityNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTrackWeaponVelocityNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTrackWeaponVelocityNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTrackWeaponVelocityNotifyState_Statics::ClassParams = {
		&USBZTrackWeaponVelocityNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTrackWeaponVelocityNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTrackWeaponVelocityNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTrackWeaponVelocityNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTrackWeaponVelocityNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTrackWeaponVelocityNotifyState, 2377060123);
	template<> STARBREEZE_API UClass* StaticClass<USBZTrackWeaponVelocityNotifyState>()
	{
		return USBZTrackWeaponVelocityNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTrackWeaponVelocityNotifyState(Z_Construct_UClass_USBZTrackWeaponVelocityNotifyState, &USBZTrackWeaponVelocityNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTrackWeaponVelocityNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTrackWeaponVelocityNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
