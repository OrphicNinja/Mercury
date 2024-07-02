// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAccelByteDSV1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAccelByteDSV1() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteDSV1_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteDSV1();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteDS();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAccelByteDSV1::StaticRegisterNativesUSBZAccelByteDSV1()
	{
	}
	UClass* Z_Construct_UClass_USBZAccelByteDSV1_NoRegister()
	{
		return USBZAccelByteDSV1::StaticClass();
	}
	struct Z_Construct_UClass_USBZAccelByteDSV1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckPlayerArraySessionInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CheckPlayerArraySessionInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCountingInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerCountingInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxServerLoginAttempts_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxServerLoginAttempts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PollMatchmakingSessionInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PollMatchmakingSessionInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAccelByteDSV1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAccelByteDS,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteDSV1_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAccelByteDSV1.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAccelByteDSV1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_CheckPlayerArraySessionInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteDSV1" },
		{ "ModuleRelativePath", "Public/SBZAccelByteDSV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_CheckPlayerArraySessionInterval = { "CheckPlayerArraySessionInterval", nullptr, (EPropertyFlags)0x0040000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteDSV1, CheckPlayerArraySessionInterval), METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_CheckPlayerArraySessionInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_CheckPlayerArraySessionInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_PlayerCountingInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteDSV1" },
		{ "ModuleRelativePath", "Public/SBZAccelByteDSV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_PlayerCountingInterval = { "PlayerCountingInterval", nullptr, (EPropertyFlags)0x0040000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteDSV1, PlayerCountingInterval), METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_PlayerCountingInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_PlayerCountingInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_MaxServerLoginAttempts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteDSV1" },
		{ "ModuleRelativePath", "Public/SBZAccelByteDSV1.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_MaxServerLoginAttempts = { "MaxServerLoginAttempts", nullptr, (EPropertyFlags)0x0040000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteDSV1, MaxServerLoginAttempts), METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_MaxServerLoginAttempts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_MaxServerLoginAttempts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_PollMatchmakingSessionInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteDSV1" },
		{ "ModuleRelativePath", "Public/SBZAccelByteDSV1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_PollMatchmakingSessionInterval = { "PollMatchmakingSessionInterval", nullptr, (EPropertyFlags)0x0040000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteDSV1, PollMatchmakingSessionInterval), METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_PollMatchmakingSessionInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_PollMatchmakingSessionInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAccelByteDSV1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_CheckPlayerArraySessionInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_PlayerCountingInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_MaxServerLoginAttempts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteDSV1_Statics::NewProp_PollMatchmakingSessionInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAccelByteDSV1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAccelByteDSV1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAccelByteDSV1_Statics::ClassParams = {
		&USBZAccelByteDSV1::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAccelByteDSV1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteDSV1_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteDSV1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteDSV1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAccelByteDSV1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAccelByteDSV1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAccelByteDSV1, 1823893044);
	template<> STARBREEZE_API UClass* StaticClass<USBZAccelByteDSV1>()
	{
		return USBZAccelByteDSV1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAccelByteDSV1(Z_Construct_UClass_USBZAccelByteDSV1, &USBZAccelByteDSV1::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAccelByteDSV1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAccelByteDSV1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
