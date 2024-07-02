// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ServerApiClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerApiClient() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UServerApiClient_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UServerApiClient();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerCredentials_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerOauth2_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerDSM_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerLobby_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerMatchmaking_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerSessionBrowser_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerAchievement_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABServerStatistic_NoRegister();
// End Cross Module References
	void UServerApiClient::StaticRegisterNativesUServerApiClient()
	{
	}
	UClass* Z_Construct_UClass_UServerApiClient_NoRegister()
	{
		return UServerApiClient::StaticClass();
	}
	struct Z_Construct_UClass_UServerApiClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Credentials_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Credentials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerOauth2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerOauth2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerDSM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerDSM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerMatchmaking_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerMatchmaking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerSessionBrowser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerSessionBrowser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerAchievement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerAchievement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerStatistic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerStatistic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UServerApiClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerApiClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ServerApiClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ServerApiClient.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerApiClient_Statics::NewProp_Credentials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerApiClient" },
		{ "ModuleRelativePath", "Public/ServerApiClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerApiClient_Statics::NewProp_Credentials = { "Credentials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerApiClient, Credentials), Z_Construct_UClass_UABServerCredentials_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerApiClient_Statics::NewProp_Credentials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerApiClient_Statics::NewProp_Credentials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerOauth2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerApiClient" },
		{ "ModuleRelativePath", "Public/ServerApiClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerOauth2 = { "ServerOauth2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerApiClient, ServerOauth2), Z_Construct_UClass_UABServerOauth2_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerOauth2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerOauth2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerDSM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerApiClient" },
		{ "ModuleRelativePath", "Public/ServerApiClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerDSM = { "ServerDSM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerApiClient, ServerDSM), Z_Construct_UClass_UABServerDSM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerDSM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerDSM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerApiClient" },
		{ "ModuleRelativePath", "Public/ServerApiClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerLobby = { "ServerLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerApiClient, ServerLobby), Z_Construct_UClass_UABServerLobby_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerMatchmaking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerApiClient" },
		{ "ModuleRelativePath", "Public/ServerApiClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerMatchmaking = { "ServerMatchmaking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerApiClient, ServerMatchmaking), Z_Construct_UClass_UABServerMatchmaking_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerMatchmaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerMatchmaking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerSessionBrowser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerApiClient" },
		{ "ModuleRelativePath", "Public/ServerApiClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerSessionBrowser = { "ServerSessionBrowser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerApiClient, ServerSessionBrowser), Z_Construct_UClass_UABServerSessionBrowser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerSessionBrowser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerSessionBrowser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerAchievement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerApiClient" },
		{ "ModuleRelativePath", "Public/ServerApiClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerAchievement = { "ServerAchievement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerApiClient, ServerAchievement), Z_Construct_UClass_UABServerAchievement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerAchievement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerAchievement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerStatistic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerApiClient" },
		{ "ModuleRelativePath", "Public/ServerApiClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerStatistic = { "ServerStatistic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerApiClient, ServerStatistic), Z_Construct_UClass_UABServerStatistic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerStatistic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerStatistic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UServerApiClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerApiClient_Statics::NewProp_Credentials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerOauth2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerDSM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerMatchmaking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerSessionBrowser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerAchievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerApiClient_Statics::NewProp_ServerStatistic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UServerApiClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerApiClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UServerApiClient_Statics::ClassParams = {
		&UServerApiClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UServerApiClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UServerApiClient_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UServerApiClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UServerApiClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UServerApiClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UServerApiClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UServerApiClient, 1145213426);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UServerApiClient>()
	{
		return UServerApiClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UServerApiClient(Z_Construct_UClass_UServerApiClient, &UServerApiClient::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UServerApiClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerApiClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
