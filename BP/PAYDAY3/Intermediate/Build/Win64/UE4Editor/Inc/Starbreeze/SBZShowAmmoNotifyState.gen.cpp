// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZShowAmmoNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZShowAmmoNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShowAmmoNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShowAmmoNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZShowAmmoNotifyState::StaticRegisterNativesUSBZShowAmmoNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZShowAmmoNotifyState_NoRegister()
	{
		return USBZShowAmmoNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZShowAmmoNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSpawnedOnInterrupt_MetaData[];
#endif
		static void NewProp_bIsSpawnedOnInterrupt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSpawnedOnInterrupt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSpawnedOnEnd_MetaData[];
#endif
		static void NewProp_bIsSpawnedOnEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSpawnedOnEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraAmmoCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtraAmmoCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZShowAmmoNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZShowAmmoNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_bIsSpawnedOnInterrupt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShowAmmoNotifyState" },
		{ "ModuleRelativePath", "Public/SBZShowAmmoNotifyState.h" },
	};
#endif
	void Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_bIsSpawnedOnInterrupt_SetBit(void* Obj)
	{
		((USBZShowAmmoNotifyState*)Obj)->bIsSpawnedOnInterrupt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_bIsSpawnedOnInterrupt = { "bIsSpawnedOnInterrupt", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZShowAmmoNotifyState), &Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_bIsSpawnedOnInterrupt_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_bIsSpawnedOnInterrupt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_bIsSpawnedOnInterrupt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_bIsSpawnedOnEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShowAmmoNotifyState" },
		{ "ModuleRelativePath", "Public/SBZShowAmmoNotifyState.h" },
	};
#endif
	void Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_bIsSpawnedOnEnd_SetBit(void* Obj)
	{
		((USBZShowAmmoNotifyState*)Obj)->bIsSpawnedOnEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_bIsSpawnedOnEnd = { "bIsSpawnedOnEnd", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZShowAmmoNotifyState), &Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_bIsSpawnedOnEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_bIsSpawnedOnEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_bIsSpawnedOnEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_ExtraAmmoCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShowAmmoNotifyState" },
		{ "ModuleRelativePath", "Public/SBZShowAmmoNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_ExtraAmmoCount = { "ExtraAmmoCount", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShowAmmoNotifyState, ExtraAmmoCount), METADATA_PARAMS(Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_ExtraAmmoCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_ExtraAmmoCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_bIsSpawnedOnInterrupt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_bIsSpawnedOnEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::NewProp_ExtraAmmoCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZShowAmmoNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::ClassParams = {
		&USBZShowAmmoNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZShowAmmoNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZShowAmmoNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZShowAmmoNotifyState, 2090831913);
	template<> STARBREEZE_API UClass* StaticClass<USBZShowAmmoNotifyState>()
	{
		return USBZShowAmmoNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZShowAmmoNotifyState(Z_Construct_UClass_USBZShowAmmoNotifyState, &USBZShowAmmoNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZShowAmmoNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZShowAmmoNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
