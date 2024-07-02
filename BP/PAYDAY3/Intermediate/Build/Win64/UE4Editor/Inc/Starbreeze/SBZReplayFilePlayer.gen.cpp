// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplayFilePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplayFilePlayer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplayFilePlayer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplayFilePlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplayPlayerController_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReplayEventInfo();
// End Cross Module References
	void USBZReplayFilePlayer::StaticRegisterNativesUSBZReplayFilePlayer()
	{
	}
	UClass* Z_Construct_UClass_USBZReplayFilePlayer_NoRegister()
	{
		return USBZReplayFilePlayer::StaticClass();
	}
	struct Z_Construct_UClass_USBZReplayFilePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayNetDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplayNetDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplayPlayerController;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplayEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplayEvents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReplayFilePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayFilePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReplayFilePlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReplayFilePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_GameInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayFilePlayer" },
		{ "ModuleRelativePath", "Public/SBZReplayFilePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplayFilePlayer, GameInstance), Z_Construct_UClass_USBZGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_GameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayNetDriver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayFilePlayer" },
		{ "ModuleRelativePath", "Public/SBZReplayFilePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayNetDriver = { "ReplayNetDriver", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplayFilePlayer, ReplayNetDriver), Z_Construct_UClass_UDemoNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayNetDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayNetDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayPlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayFilePlayer" },
		{ "ModuleRelativePath", "Public/SBZReplayFilePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayPlayerController = { "ReplayPlayerController", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplayFilePlayer, ReplayPlayerController), Z_Construct_UClass_ASBZReplayPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayPlayerController_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayEvents_Inner = { "ReplayEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZReplayEventInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayEvents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayFilePlayer" },
		{ "ModuleRelativePath", "Public/SBZReplayFilePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayEvents = { "ReplayEvents", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplayFilePlayer, ReplayEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayEvents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZReplayFilePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_GameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayNetDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayFilePlayer_Statics::NewProp_ReplayEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReplayFilePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReplayFilePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReplayFilePlayer_Statics::ClassParams = {
		&USBZReplayFilePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZReplayFilePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayFilePlayer_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReplayFilePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayFilePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReplayFilePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReplayFilePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReplayFilePlayer, 1384170589);
	template<> STARBREEZE_API UClass* StaticClass<USBZReplayFilePlayer>()
	{
		return USBZReplayFilePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReplayFilePlayer(Z_Construct_UClass_USBZReplayFilePlayer, &USBZReplayFilePlayer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReplayFilePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReplayFilePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
