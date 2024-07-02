// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionDialogPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionDialogPlayer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionDialogPlayer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionDialogPlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister();
// End Cross Module References
	void USBZLifeActionDialogPlayer::StaticRegisterNativesUSBZLifeActionDialogPlayer()
	{
	}
	UClass* Z_Construct_UClass_USBZLifeActionDialogPlayer_NoRegister()
	{
		return USBZLifeActionDialogPlayer::StaticClass();
	}
	struct Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogsDataAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogsDataAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogsDataAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyOnce_MetaData[];
#endif
		static void NewProp_bOnlyOnce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyOnce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomSelection_MetaData[];
#endif
		static void NewProp_bRandomSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomSelection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLifeActionDialogPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionDialogPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_DialogsDataAssets_Inner = { "DialogsDataAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_DialogsDataAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionDialogPlayer" },
		{ "ModuleRelativePath", "Public/SBZLifeActionDialogPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_DialogsDataAssets = { "DialogsDataAssets", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionDialogPlayer, DialogsDataAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_DialogsDataAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_DialogsDataAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_CurrentDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionDialogPlayer" },
		{ "ModuleRelativePath", "Public/SBZLifeActionDialogPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_CurrentDialog = { "CurrentDialog", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionDialogPlayer, CurrentDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_CurrentDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_CurrentDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_bOnlyOnce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionDialogPlayer" },
		{ "ModuleRelativePath", "Public/SBZLifeActionDialogPlayer.h" },
	};
#endif
	void Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_bOnlyOnce_SetBit(void* Obj)
	{
		((USBZLifeActionDialogPlayer*)Obj)->bOnlyOnce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_bOnlyOnce = { "bOnlyOnce", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLifeActionDialogPlayer), &Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_bOnlyOnce_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_bOnlyOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_bOnlyOnce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_bRandomSelection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionDialogPlayer" },
		{ "ModuleRelativePath", "Public/SBZLifeActionDialogPlayer.h" },
	};
#endif
	void Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_bRandomSelection_SetBit(void* Obj)
	{
		((USBZLifeActionDialogPlayer*)Obj)->bRandomSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_bRandomSelection = { "bRandomSelection", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLifeActionDialogPlayer), &Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_bRandomSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_bRandomSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_bRandomSelection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_DialogsDataAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_DialogsDataAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_CurrentDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_bOnlyOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::NewProp_bRandomSelection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLifeActionDialogPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::ClassParams = {
		&USBZLifeActionDialogPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLifeActionDialogPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLifeActionDialogPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLifeActionDialogPlayer, 1104912809);
	template<> STARBREEZE_API UClass* StaticClass<USBZLifeActionDialogPlayer>()
	{
		return USBZLifeActionDialogPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLifeActionDialogPlayer(Z_Construct_UClass_USBZLifeActionDialogPlayer, &USBZLifeActionDialogPlayer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLifeActionDialogPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLifeActionDialogPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
