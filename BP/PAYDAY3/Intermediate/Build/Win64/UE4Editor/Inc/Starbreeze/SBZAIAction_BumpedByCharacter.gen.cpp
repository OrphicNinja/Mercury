// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAction_BumpedByCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAction_BumpedByCharacter() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_BumpedByCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_BumpedByCharacter();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVoicePriority();
// End Cross Module References
	void USBZAIAction_BumpedByCharacter::StaticRegisterNativesUSBZAIAction_BumpedByCharacter()
	{
	}
	UClass* Z_Construct_UClass_USBZAIAction_BumpedByCharacter_NoRegister()
	{
		return USBZAIAction_BumpedByCharacter::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceComment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VoicePriority_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoicePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VoicePriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIAction,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAction_BumpedByCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_BumpedByCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::NewProp_VoiceComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_BumpedByCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIAction_BumpedByCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::NewProp_VoiceComment = { "VoiceComment", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_BumpedByCharacter, VoiceComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::NewProp_VoiceComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::NewProp_VoiceComment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::NewProp_VoicePriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::NewProp_VoicePriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_BumpedByCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIAction_BumpedByCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::NewProp_VoicePriority = { "VoicePriority", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_BumpedByCharacter, VoicePriority), Z_Construct_UEnum_Starbreeze_ESBZVoicePriority, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::NewProp_VoicePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::NewProp_VoicePriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::NewProp_VoiceComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::NewProp_VoicePriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::NewProp_VoicePriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAction_BumpedByCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::ClassParams = {
		&USBZAIAction_BumpedByCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAction_BumpedByCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAction_BumpedByCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAction_BumpedByCharacter, 3012932391);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAction_BumpedByCharacter>()
	{
		return USBZAIAction_BumpedByCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAction_BumpedByCharacter(Z_Construct_UClass_USBZAIAction_BumpedByCharacter, &USBZAIAction_BumpedByCharacter::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAction_BumpedByCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAction_BumpedByCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
