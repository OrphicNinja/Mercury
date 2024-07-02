// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_Retreat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_Retreat() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Retreat_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Retreat();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquadOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
	void USBZAIOrder_Retreat::StaticRegisterNativesUSBZAIOrder_Retreat()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_Retreat_NoRegister()
	{
		return USBZAIOrder_Retreat::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_Retreat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetreatComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RetreatComment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_Retreat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAISquadOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Retreat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_Retreat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Retreat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Retreat_Statics::NewProp_RetreatComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_Retreat" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Retreat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_Retreat_Statics::NewProp_RetreatComment = { "RetreatComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_Retreat, RetreatComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Retreat_Statics::NewProp_RetreatComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Retreat_Statics::NewProp_RetreatComment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_Retreat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Retreat_Statics::NewProp_RetreatComment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_Retreat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_Retreat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_Retreat_Statics::ClassParams = {
		&USBZAIOrder_Retreat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIOrder_Retreat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Retreat_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Retreat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Retreat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_Retreat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_Retreat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_Retreat, 540007962);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_Retreat>()
	{
		return USBZAIOrder_Retreat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_Retreat(Z_Construct_UClass_USBZAIOrder_Retreat, &USBZAIOrder_Retreat::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_Retreat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_Retreat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
