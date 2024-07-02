// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPingCallAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPingCallAsset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPingCallAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPingCallAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
	void USBZPingCallAsset::StaticRegisterNativesUSBZPingCallAsset()
	{
	}
	UClass* Z_Construct_UClass_USBZPingCallAsset_NoRegister()
	{
		return USBZPingCallAsset::StaticClass();
	}
	struct Z_Construct_UClass_USBZPingCallAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ChatMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallComment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPingCallAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPingCallAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPingCallAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPingCallAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPingCallAsset_Statics::NewProp_ChatMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPingCallAsset" },
		{ "ModuleRelativePath", "Public/SBZPingCallAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZPingCallAsset_Statics::NewProp_ChatMessage = { "ChatMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPingCallAsset, ChatMessage), METADATA_PARAMS(Z_Construct_UClass_USBZPingCallAsset_Statics::NewProp_ChatMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPingCallAsset_Statics::NewProp_ChatMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPingCallAsset_Statics::NewProp_CallIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPingCallAsset" },
		{ "ModuleRelativePath", "Public/SBZPingCallAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPingCallAsset_Statics::NewProp_CallIcon = { "CallIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPingCallAsset, CallIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPingCallAsset_Statics::NewProp_CallIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPingCallAsset_Statics::NewProp_CallIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPingCallAsset_Statics::NewProp_CallComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPingCallAsset" },
		{ "ModuleRelativePath", "Public/SBZPingCallAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPingCallAsset_Statics::NewProp_CallComment = { "CallComment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPingCallAsset, CallComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPingCallAsset_Statics::NewProp_CallComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPingCallAsset_Statics::NewProp_CallComment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPingCallAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPingCallAsset_Statics::NewProp_ChatMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPingCallAsset_Statics::NewProp_CallIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPingCallAsset_Statics::NewProp_CallComment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPingCallAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPingCallAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPingCallAsset_Statics::ClassParams = {
		&USBZPingCallAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPingCallAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPingCallAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPingCallAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPingCallAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPingCallAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPingCallAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPingCallAsset, 722064854);
	template<> STARBREEZE_API UClass* StaticClass<USBZPingCallAsset>()
	{
		return USBZPingCallAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPingCallAsset(Z_Construct_UClass_USBZPingCallAsset, &USBZPingCallAsset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPingCallAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPingCallAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
