// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_WarnNeighbours.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_WarnNeighbours() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_WarnNeighbours_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_WarnNeighbours();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVoicePriority();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
// End Cross Module References
	void USBZBTService_WarnNeighbours::StaticRegisterNativesUSBZBTService_WarnNeighbours()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_WarnNeighbours_NoRegister()
	{
		return USBZBTService_WarnNeighbours::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceComment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VoicePriority_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoicePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VoicePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_WarnNeighbours.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_WarnNeighbours.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_WarnNeighbours" },
		{ "ModuleRelativePath", "Public/SBZBTService_WarnNeighbours.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_WarnNeighbours, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_Range_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_WarnNeighbours" },
		{ "ModuleRelativePath", "Public/SBZBTService_WarnNeighbours.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_WarnNeighbours, Range), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_VoiceComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_WarnNeighbours" },
		{ "ModuleRelativePath", "Public/SBZBTService_WarnNeighbours.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_VoiceComment = { "VoiceComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_WarnNeighbours, VoiceComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_VoiceComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_VoiceComment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_VoicePriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_VoicePriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_WarnNeighbours" },
		{ "ModuleRelativePath", "Public/SBZBTService_WarnNeighbours.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_VoicePriority = { "VoicePriority", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_WarnNeighbours, VoicePriority), Z_Construct_UEnum_Starbreeze_ESBZVoicePriority, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_VoicePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_VoicePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_NoiseDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_WarnNeighbours" },
		{ "ModuleRelativePath", "Public/SBZBTService_WarnNeighbours.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_NoiseDelay = { "NoiseDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_WarnNeighbours, NoiseDelay), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_NoiseDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_NoiseDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_VoiceComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_VoicePriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_VoicePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::NewProp_NoiseDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_WarnNeighbours>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::ClassParams = {
		&USBZBTService_WarnNeighbours::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_WarnNeighbours()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_WarnNeighbours_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_WarnNeighbours, 197516658);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_WarnNeighbours>()
	{
		return USBZBTService_WarnNeighbours::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_WarnNeighbours(Z_Construct_UClass_USBZBTService_WarnNeighbours, &USBZBTService_WarnNeighbours::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_WarnNeighbours"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_WarnNeighbours);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
