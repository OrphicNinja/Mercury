// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZShowSpeedLoaderNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZShowSpeedLoaderNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShowSpeedLoaderNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZShowSpeedLoaderNotifyState::StaticRegisterNativesUSBZShowSpeedLoaderNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_NoRegister()
	{
		return USBZShowSpeedLoaderNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDropAllowed_MetaData[];
#endif
		static void NewProp_bIsDropAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDropAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPrespawned_MetaData[];
#endif
		static void NewProp_bIsPrespawned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPrespawned;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZShowSpeedLoaderNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZShowSpeedLoaderNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::NewProp_bIsDropAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShowSpeedLoaderNotifyState" },
		{ "ModuleRelativePath", "Public/SBZShowSpeedLoaderNotifyState.h" },
	};
#endif
	void Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::NewProp_bIsDropAllowed_SetBit(void* Obj)
	{
		((USBZShowSpeedLoaderNotifyState*)Obj)->bIsDropAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::NewProp_bIsDropAllowed = { "bIsDropAllowed", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZShowSpeedLoaderNotifyState), &Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::NewProp_bIsDropAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::NewProp_bIsDropAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::NewProp_bIsDropAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::NewProp_bIsPrespawned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShowSpeedLoaderNotifyState" },
		{ "ModuleRelativePath", "Public/SBZShowSpeedLoaderNotifyState.h" },
	};
#endif
	void Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::NewProp_bIsPrespawned_SetBit(void* Obj)
	{
		((USBZShowSpeedLoaderNotifyState*)Obj)->bIsPrespawned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::NewProp_bIsPrespawned = { "bIsPrespawned", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZShowSpeedLoaderNotifyState), &Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::NewProp_bIsPrespawned_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::NewProp_bIsPrespawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::NewProp_bIsPrespawned_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::NewProp_bIsDropAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::NewProp_bIsPrespawned,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZShowSpeedLoaderNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::ClassParams = {
		&USBZShowSpeedLoaderNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZShowSpeedLoaderNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZShowSpeedLoaderNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZShowSpeedLoaderNotifyState, 691441387);
	template<> STARBREEZE_API UClass* StaticClass<USBZShowSpeedLoaderNotifyState>()
	{
		return USBZShowSpeedLoaderNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZShowSpeedLoaderNotifyState(Z_Construct_UClass_USBZShowSpeedLoaderNotifyState, &USBZShowSpeedLoaderNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZShowSpeedLoaderNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZShowSpeedLoaderNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
