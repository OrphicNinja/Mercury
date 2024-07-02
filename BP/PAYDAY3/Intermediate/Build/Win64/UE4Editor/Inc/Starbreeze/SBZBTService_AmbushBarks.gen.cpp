// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_AmbushBarks.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_AmbushBarks() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_AmbushBarks_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_AmbushBarks();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVoicePriority();
// End Cross Module References
	void USBZBTService_AmbushBarks::StaticRegisterNativesUSBZBTService_AmbushBarks()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_AmbushBarks_NoRegister()
	{
		return USBZBTService_AmbushBarks::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_AmbushBarks_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbushComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmbushComment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VoicePriority_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoicePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VoicePriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_AmbushBarks.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_AmbushBarks.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::NewProp_AmbushComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_AmbushBarks" },
		{ "ModuleRelativePath", "Public/SBZBTService_AmbushBarks.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::NewProp_AmbushComment = { "AmbushComment", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_AmbushBarks, AmbushComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::NewProp_AmbushComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::NewProp_AmbushComment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::NewProp_VoicePriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::NewProp_VoicePriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_AmbushBarks" },
		{ "ModuleRelativePath", "Public/SBZBTService_AmbushBarks.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::NewProp_VoicePriority = { "VoicePriority", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_AmbushBarks, VoicePriority), Z_Construct_UEnum_Starbreeze_ESBZVoicePriority, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::NewProp_VoicePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::NewProp_VoicePriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::NewProp_AmbushComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::NewProp_VoicePriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::NewProp_VoicePriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_AmbushBarks>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::ClassParams = {
		&USBZBTService_AmbushBarks::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_AmbushBarks()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_AmbushBarks_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_AmbushBarks, 1596215833);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_AmbushBarks>()
	{
		return USBZBTService_AmbushBarks::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_AmbushBarks(Z_Construct_UClass_USBZBTService_AmbushBarks, &USBZBTService_AmbushBarks::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_AmbushBarks"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_AmbushBarks);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
