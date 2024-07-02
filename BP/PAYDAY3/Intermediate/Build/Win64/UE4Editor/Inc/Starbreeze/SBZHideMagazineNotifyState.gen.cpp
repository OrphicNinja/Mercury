// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHideMagazineNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHideMagazineNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHideMagazineNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHideMagazineNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZHideMagazineNotifyState::StaticRegisterNativesUSBZHideMagazineNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZHideMagazineNotifyState_NoRegister()
	{
		return USBZHideMagazineNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZHideMagazineNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSpawnAllowed_MetaData[];
#endif
		static void NewProp_bIsSpawnAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSpawnAllowed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZHideMagazineNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHideMagazineNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::NewProp_bIsSpawnAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHideMagazineNotifyState" },
		{ "ModuleRelativePath", "Public/SBZHideMagazineNotifyState.h" },
	};
#endif
	void Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::NewProp_bIsSpawnAllowed_SetBit(void* Obj)
	{
		((USBZHideMagazineNotifyState*)Obj)->bIsSpawnAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::NewProp_bIsSpawnAllowed = { "bIsSpawnAllowed", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZHideMagazineNotifyState), &Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::NewProp_bIsSpawnAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::NewProp_bIsSpawnAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::NewProp_bIsSpawnAllowed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::NewProp_bIsSpawnAllowed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHideMagazineNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::ClassParams = {
		&USBZHideMagazineNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHideMagazineNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHideMagazineNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHideMagazineNotifyState, 2314908323);
	template<> STARBREEZE_API UClass* StaticClass<USBZHideMagazineNotifyState>()
	{
		return USBZHideMagazineNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHideMagazineNotifyState(Z_Construct_UClass_USBZHideMagazineNotifyState, &USBZHideMagazineNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHideMagazineNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHideMagazineNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
