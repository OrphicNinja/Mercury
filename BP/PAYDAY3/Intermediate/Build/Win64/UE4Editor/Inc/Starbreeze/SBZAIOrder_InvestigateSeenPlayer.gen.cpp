// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_InvestigateSeenPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_InvestigateSeenPlayer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIOrder_InvestigateSeenPlayer::StaticRegisterNativesUSBZAIOrder_InvestigateSeenPlayer()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_NoRegister()
	{
		return USBZAIOrder_InvestigateSeenPlayer::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BlackboardKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTimeOnArrival_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitTimeOnArrival;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_InvestigateSeenPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_InvestigateSeenPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::NewProp_BlackboardKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_InvestigateSeenPlayer" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_InvestigateSeenPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::NewProp_BlackboardKey = { "BlackboardKey", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_InvestigateSeenPlayer, BlackboardKey), METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::NewProp_BlackboardKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::NewProp_BlackboardKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::NewProp_WaitTimeOnArrival_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_InvestigateSeenPlayer" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_InvestigateSeenPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::NewProp_WaitTimeOnArrival = { "WaitTimeOnArrival", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_InvestigateSeenPlayer, WaitTimeOnArrival), METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::NewProp_WaitTimeOnArrival_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::NewProp_WaitTimeOnArrival_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::NewProp_BlackboardKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::NewProp_WaitTimeOnArrival,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_InvestigateSeenPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::ClassParams = {
		&USBZAIOrder_InvestigateSeenPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_InvestigateSeenPlayer, 2059194277);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_InvestigateSeenPlayer>()
	{
		return USBZAIOrder_InvestigateSeenPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_InvestigateSeenPlayer(Z_Construct_UClass_USBZAIOrder_InvestigateSeenPlayer, &USBZAIOrder_InvestigateSeenPlayer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_InvestigateSeenPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_InvestigateSeenPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
