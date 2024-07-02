// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChatGameSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChatGameSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChatGameSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChatGameSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZChatGameSettings::StaticRegisterNativesUSBZChatGameSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZChatGameSettings_NoRegister()
	{
		return USBZChatGameSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZChatGameSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCharPerMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCharPerMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCharPerMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinCharPerMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageCooldownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MessageCooldownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMessagesBeforeBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMessagesBeforeBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageSpamCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MessageSpamCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTotalDisplayedMessages_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTotalDisplayedMessages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZChatGameSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChatGameSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZChatGameSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZChatGameSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_FadeOutTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatGameSettings" },
		{ "ModuleRelativePath", "Public/SBZChatGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_FadeOutTimer = { "FadeOutTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChatGameSettings, FadeOutTimer), METADATA_PARAMS(Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_FadeOutTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_FadeOutTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MaxCharPerMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatGameSettings" },
		{ "ModuleRelativePath", "Public/SBZChatGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MaxCharPerMessage = { "MaxCharPerMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChatGameSettings, MaxCharPerMessage), METADATA_PARAMS(Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MaxCharPerMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MaxCharPerMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MinCharPerMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatGameSettings" },
		{ "ModuleRelativePath", "Public/SBZChatGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MinCharPerMessage = { "MinCharPerMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChatGameSettings, MinCharPerMessage), METADATA_PARAMS(Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MinCharPerMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MinCharPerMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MessageCooldownTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatGameSettings" },
		{ "ModuleRelativePath", "Public/SBZChatGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MessageCooldownTimer = { "MessageCooldownTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChatGameSettings, MessageCooldownTimer), METADATA_PARAMS(Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MessageCooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MessageCooldownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MaxMessagesBeforeBlock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatGameSettings" },
		{ "ModuleRelativePath", "Public/SBZChatGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MaxMessagesBeforeBlock = { "MaxMessagesBeforeBlock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChatGameSettings, MaxMessagesBeforeBlock), METADATA_PARAMS(Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MaxMessagesBeforeBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MaxMessagesBeforeBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MessageSpamCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatGameSettings" },
		{ "ModuleRelativePath", "Public/SBZChatGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MessageSpamCooldown = { "MessageSpamCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChatGameSettings, MessageSpamCooldown), METADATA_PARAMS(Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MessageSpamCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MessageSpamCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MaxTotalDisplayedMessages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChatGameSettings" },
		{ "ModuleRelativePath", "Public/SBZChatGameSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MaxTotalDisplayedMessages = { "MaxTotalDisplayedMessages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChatGameSettings, MaxTotalDisplayedMessages), METADATA_PARAMS(Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MaxTotalDisplayedMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MaxTotalDisplayedMessages_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZChatGameSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_FadeOutTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MaxCharPerMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MinCharPerMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MessageCooldownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MaxMessagesBeforeBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MessageSpamCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChatGameSettings_Statics::NewProp_MaxTotalDisplayedMessages,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZChatGameSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZChatGameSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZChatGameSettings_Statics::ClassParams = {
		&USBZChatGameSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZChatGameSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZChatGameSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZChatGameSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChatGameSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZChatGameSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZChatGameSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZChatGameSettings, 3066320836);
	template<> STARBREEZE_API UClass* StaticClass<USBZChatGameSettings>()
	{
		return USBZChatGameSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZChatGameSettings(Z_Construct_UClass_USBZChatGameSettings, &USBZChatGameSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZChatGameSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZChatGameSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
