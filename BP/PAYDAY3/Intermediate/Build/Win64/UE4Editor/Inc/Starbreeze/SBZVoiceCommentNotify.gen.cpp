// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVoiceCommentNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVoiceCommentNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVoicePriority();
// End Cross Module References
	void USBZVoiceCommentNotify::StaticRegisterNativesUSBZVoiceCommentNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZVoiceCommentNotify_NoRegister()
	{
		return USBZVoiceCommentNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZVoiceCommentNotify_Statics
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
	UObject* (*const Z_Construct_UClass_USBZVoiceCommentNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoiceCommentNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZVoiceCommentNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVoiceCommentNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoiceCommentNotify_Statics::NewProp_VoiceComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVoiceCommentNotify" },
		{ "ModuleRelativePath", "Public/SBZVoiceCommentNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVoiceCommentNotify_Statics::NewProp_VoiceComment = { "VoiceComment", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVoiceCommentNotify, VoiceComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVoiceCommentNotify_Statics::NewProp_VoiceComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoiceCommentNotify_Statics::NewProp_VoiceComment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZVoiceCommentNotify_Statics::NewProp_VoicePriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoiceCommentNotify_Statics::NewProp_VoicePriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVoiceCommentNotify" },
		{ "ModuleRelativePath", "Public/SBZVoiceCommentNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZVoiceCommentNotify_Statics::NewProp_VoicePriority = { "VoicePriority", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVoiceCommentNotify, VoicePriority), Z_Construct_UEnum_Starbreeze_ESBZVoicePriority, METADATA_PARAMS(Z_Construct_UClass_USBZVoiceCommentNotify_Statics::NewProp_VoicePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoiceCommentNotify_Statics::NewProp_VoicePriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVoiceCommentNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVoiceCommentNotify_Statics::NewProp_VoiceComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVoiceCommentNotify_Statics::NewProp_VoicePriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVoiceCommentNotify_Statics::NewProp_VoicePriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVoiceCommentNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVoiceCommentNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVoiceCommentNotify_Statics::ClassParams = {
		&USBZVoiceCommentNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZVoiceCommentNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoiceCommentNotify_Statics::PropPointers),
		0,
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVoiceCommentNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoiceCommentNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVoiceCommentNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVoiceCommentNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVoiceCommentNotify, 3896098856);
	template<> STARBREEZE_API UClass* StaticClass<USBZVoiceCommentNotify>()
	{
		return USBZVoiceCommentNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVoiceCommentNotify(Z_Construct_UClass_USBZVoiceCommentNotify, &USBZVoiceCommentNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVoiceCommentNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVoiceCommentNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
