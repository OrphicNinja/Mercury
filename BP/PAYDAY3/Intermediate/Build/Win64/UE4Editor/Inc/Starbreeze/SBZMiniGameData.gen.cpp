// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMiniGameData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMiniGameData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMiniGameData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMiniGameData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReference();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLockCameraData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnimatedInteractionData_NoRegister();
// End Cross Module References
	void USBZMiniGameData::StaticRegisterNativesUSBZMiniGameData()
	{
	}
	UClass* Z_Construct_UClass_USBZMiniGameData_NoRegister()
	{
		return USBZMiniGameData::StaticClass();
	}
	struct Z_Construct_UClass_USBZMiniGameData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockCameraData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockCameraData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLockpickMiniGame_MetaData[];
#endif
		static void NewProp_bIsLockpickMiniGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLockpickMiniGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimatedInteractionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimatedInteractionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMiniGameData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMiniGameData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMiniGameData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameData" },
		{ "ModuleRelativePath", "Public/SBZMiniGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameData, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_ControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameData" },
		{ "ModuleRelativePath", "Public/SBZMiniGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_ControlsReference = { "ControlsReference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameData, ControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_ControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_ControlsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_LockCameraData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameData" },
		{ "ModuleRelativePath", "Public/SBZMiniGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_LockCameraData = { "LockCameraData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameData, LockCameraData), Z_Construct_UScriptStruct_FSBZLockCameraData, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_LockCameraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_LockCameraData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_PlayerFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameData" },
		{ "ModuleRelativePath", "Public/SBZMiniGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_PlayerFeedback = { "PlayerFeedback", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameData, PlayerFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_PlayerFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_PlayerFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_bIsLockpickMiniGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameData" },
		{ "ModuleRelativePath", "Public/SBZMiniGameData.h" },
	};
#endif
	void Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_bIsLockpickMiniGame_SetBit(void* Obj)
	{
		((USBZMiniGameData*)Obj)->bIsLockpickMiniGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_bIsLockpickMiniGame = { "bIsLockpickMiniGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMiniGameData), &Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_bIsLockpickMiniGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_bIsLockpickMiniGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_bIsLockpickMiniGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_AnimatedInteractionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameData" },
		{ "ModuleRelativePath", "Public/SBZMiniGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_AnimatedInteractionData = { "AnimatedInteractionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameData, AnimatedInteractionData), Z_Construct_UClass_USBZAnimatedInteractionData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_AnimatedInteractionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_AnimatedInteractionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMiniGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_ControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_LockCameraData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_PlayerFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_bIsLockpickMiniGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameData_Statics::NewProp_AnimatedInteractionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMiniGameData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMiniGameData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMiniGameData_Statics::ClassParams = {
		&USBZMiniGameData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMiniGameData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMiniGameData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMiniGameData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMiniGameData, 2089088306);
	template<> STARBREEZE_API UClass* StaticClass<USBZMiniGameData>()
	{
		return USBZMiniGameData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMiniGameData(Z_Construct_UClass_USBZMiniGameData, &USBZMiniGameData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMiniGameData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMiniGameData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
