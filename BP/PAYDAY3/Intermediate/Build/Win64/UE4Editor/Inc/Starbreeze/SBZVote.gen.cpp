// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVote.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVote() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVote_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVote();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVotingManager_NoRegister();
// End Cross Module References
	void USBZVote::StaticRegisterNativesUSBZVote()
	{
	}
	UClass* Z_Construct_UClass_USBZVote_NoRegister()
	{
		return USBZVote::StaticClass();
	}
	struct Z_Construct_UClass_USBZVote_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VotingManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VotingManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVote_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVote_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVote.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVote.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVote_Statics::NewProp_VotingManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVote" },
		{ "ModuleRelativePath", "Public/SBZVote.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVote_Statics::NewProp_VotingManager = { "VotingManager", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVote, VotingManager), Z_Construct_UClass_USBZVotingManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVote_Statics::NewProp_VotingManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVote_Statics::NewProp_VotingManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVote_Statics::NewProp_VotingManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVote_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVote>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVote_Statics::ClassParams = {
		&USBZVote::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZVote_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVote_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVote_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVote_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVote()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVote_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVote, 2639325639);
	template<> STARBREEZE_API UClass* StaticClass<USBZVote>()
	{
		return USBZVote::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVote(Z_Construct_UClass_USBZVote, &USBZVote::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVote"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVote);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
