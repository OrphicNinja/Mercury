// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineSlotsClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineSlotsClient() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSlotsClient_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSlotsClient();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSlotData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi();
// End Cross Module References
	void USBZOnlineSlotsClient::StaticRegisterNativesUSBZOnlineSlotsClient()
	{
	}
	UClass* Z_Construct_UClass_USBZOnlineSlotsClient_NoRegister()
	{
		return USBZOnlineSlotsClient::StaticClass();
	}
	struct Z_Construct_UClass_USBZOnlineSlotsClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlotsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreMatchReadyTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreMatchReadyTimer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterInfoArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterInfoArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterInfoArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalPlayerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreTravelTimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreTravelTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoloPreplanningItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SoloPreplanningItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZOnlineSlotsClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSlotsClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZOnlineSlotsClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_SlotsData_Inner = { "SlotsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_SlotsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSlotsClient" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_SlotsData = { "SlotsData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSlotsClient, SlotsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_SlotsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_SlotsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_PreMatchReadyTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSlotsClient" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_PreMatchReadyTimer = { "PreMatchReadyTimer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSlotsClient, PreMatchReadyTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_PreMatchReadyTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_PreMatchReadyTimer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_CharacterInfoArray_Inner = { "CharacterInfoArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_CharacterInfoArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSlotsClient" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_CharacterInfoArray = { "CharacterInfoArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSlotsClient, CharacterInfoArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_CharacterInfoArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_CharacterInfoArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_LocalPlayerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSlotsClient" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_LocalPlayerData = { "LocalPlayerData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSlotsClient, LocalPlayerData), Z_Construct_UScriptStruct_FSBZSlotData, METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_LocalPlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_LocalPlayerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_PreTravelTimeLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSlotsClient" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_PreTravelTimeLimit = { "PreTravelTimeLimit", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSlotsClient, PreTravelTimeLimit), METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_PreTravelTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_PreTravelTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_SoloPreplanningItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSlotsClient" },
		{ "ModuleRelativePath", "Public/SBZOnlineSlotsClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_SoloPreplanningItem = { "SoloPreplanningItem", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnlineSlotsClient, SoloPreplanningItem), METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_SoloPreplanningItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_SoloPreplanningItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZOnlineSlotsClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_SlotsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_SlotsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_PreMatchReadyTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_CharacterInfoArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_CharacterInfoArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_LocalPlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_PreTravelTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnlineSlotsClient_Statics::NewProp_SoloPreplanningItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZOnlineSlotsClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZOnlineSlotsClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZOnlineSlotsClient_Statics::ClassParams = {
		&USBZOnlineSlotsClient::StaticClass,
		"Starbeeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZOnlineSlotsClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsClient_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZOnlineSlotsClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineSlotsClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZOnlineSlotsClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZOnlineSlotsClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZOnlineSlotsClient, 207406214);
	template<> STARBREEZE_API UClass* StaticClass<USBZOnlineSlotsClient>()
	{
		return USBZOnlineSlotsClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZOnlineSlotsClient(Z_Construct_UClass_USBZOnlineSlotsClient, &USBZOnlineSlotsClient::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZOnlineSlotsClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZOnlineSlotsClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
