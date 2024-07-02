// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkEventCallbackInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkEventCallbackInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkEventCallbackInfo::StaticRegisterNativesUAkEventCallbackInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkEventCallbackInfo_NoRegister()
	{
		return UAkEventCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkEventCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EventID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkEventCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkCallbackInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkEventCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkEventCallbackInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkEventCallbackInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_PlayingID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkEventCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkEventCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkEventCallbackInfo, PlayingID), METADATA_PARAMS(Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_PlayingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_PlayingID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_EventID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkEventCallbackInfo" },
		{ "ModuleRelativePath", "Public/AkEventCallbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_EventID = { "EventID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkEventCallbackInfo, EventID), METADATA_PARAMS(Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_EventID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_EventID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkEventCallbackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_PlayingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkEventCallbackInfo_Statics::NewProp_EventID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkEventCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkEventCallbackInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkEventCallbackInfo_Statics::ClassParams = {
		&UAkEventCallbackInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkEventCallbackInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventCallbackInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkEventCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkEventCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkEventCallbackInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkEventCallbackInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkEventCallbackInfo, 3521179141);
	template<> AKAUDIO_API UClass* StaticClass<UAkEventCallbackInfo>()
	{
		return UAkEventCallbackInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkEventCallbackInfo(Z_Construct_UClass_UAkEventCallbackInfo, &UAkEventCallbackInfo::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkEventCallbackInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkEventCallbackInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
