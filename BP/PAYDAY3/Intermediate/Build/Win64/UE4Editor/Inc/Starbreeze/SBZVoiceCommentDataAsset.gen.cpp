// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVoiceCommentDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVoiceCommentDataAsset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVoiceEvent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZVoiceCommentDataAsset::StaticRegisterNativesUSBZVoiceCommentDataAsset()
	{
	}
	UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister()
	{
		return USBZVoiceCommentDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommentState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VoiceEvent_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VoiceEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Chance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DelayRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalPermission_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalPermission;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockingTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockingTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVoiceCommentDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVoiceCommentDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_CommentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVoiceCommentDataAsset" },
		{ "ModuleRelativePath", "Public/SBZVoiceCommentDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_CommentState = { "CommentState", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVoiceCommentDataAsset, CommentState), METADATA_PARAMS(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_CommentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_CommentState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_VoiceEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_VoiceEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVoiceCommentDataAsset" },
		{ "ModuleRelativePath", "Public/SBZVoiceCommentDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_VoiceEvent = { "VoiceEvent", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVoiceCommentDataAsset, VoiceEvent), Z_Construct_UEnum_Starbreeze_ESBZVoiceEvent, METADATA_PARAMS(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_VoiceEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_VoiceEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_CoolDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVoiceCommentDataAsset" },
		{ "ModuleRelativePath", "Public/SBZVoiceCommentDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_CoolDown = { "CoolDown", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVoiceCommentDataAsset, CoolDown), METADATA_PARAMS(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_CoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_CoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_Chance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVoiceCommentDataAsset" },
		{ "ModuleRelativePath", "Public/SBZVoiceCommentDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_Chance = { "Chance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVoiceCommentDataAsset, Chance), METADATA_PARAMS(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_Chance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_Chance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_DelayRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVoiceCommentDataAsset" },
		{ "ModuleRelativePath", "Public/SBZVoiceCommentDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_DelayRange = { "DelayRange", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVoiceCommentDataAsset, DelayRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_DelayRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_DelayRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_GlobalPermission_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVoiceCommentDataAsset" },
		{ "ModuleRelativePath", "Public/SBZVoiceCommentDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_GlobalPermission = { "GlobalPermission", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVoiceCommentDataAsset, GlobalPermission), Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission, METADATA_PARAMS(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_GlobalPermission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_GlobalPermission_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_BlockingTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVoiceCommentDataAsset" },
		{ "ModuleRelativePath", "Public/SBZVoiceCommentDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_BlockingTags = { "BlockingTags", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVoiceCommentDataAsset, BlockingTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_BlockingTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_BlockingTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_CommentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_VoiceEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_VoiceEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_CoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_Chance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_DelayRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_GlobalPermission,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::NewProp_BlockingTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVoiceCommentDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::ClassParams = {
		&USBZVoiceCommentDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVoiceCommentDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVoiceCommentDataAsset, 865909047);
	template<> STARBREEZE_API UClass* StaticClass<USBZVoiceCommentDataAsset>()
	{
		return USBZVoiceCommentDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVoiceCommentDataAsset(Z_Construct_UClass_USBZVoiceCommentDataAsset, &USBZVoiceCommentDataAsset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVoiceCommentDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVoiceCommentDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
