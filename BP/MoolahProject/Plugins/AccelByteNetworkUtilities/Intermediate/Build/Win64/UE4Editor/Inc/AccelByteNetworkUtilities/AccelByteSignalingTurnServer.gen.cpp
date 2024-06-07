// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteNetworkUtilities/Public/AccelByteSignalingTurnServer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteSignalingTurnServer() {}
// Cross Module References
	ACCELBYTENETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer();
	UPackage* Z_Construct_UPackage__Script_AccelByteNetworkUtilities();
// End Cross Module References
class UScriptStruct* FAccelByteSignalingTurnServer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTENETWORKUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer, Z_Construct_UPackage__Script_AccelByteNetworkUtilities(), TEXT("AccelByteSignalingTurnServer"), sizeof(FAccelByteSignalingTurnServer), Get_Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Hash());
	}
	return Singleton;
}
template<> ACCELBYTENETWORKUTILITIES_API UScriptStruct* StaticStruct<FAccelByteSignalingTurnServer>()
{
	return FAccelByteSignalingTurnServer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteSignalingTurnServer(FAccelByteSignalingTurnServer::StaticStruct, TEXT("/Script/AccelByteNetworkUtilities"), TEXT("AccelByteSignalingTurnServer"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteNetworkUtilities_StaticRegisterNativesFAccelByteSignalingTurnServer
{
	FScriptStruct_AccelByteNetworkUtilities_StaticRegisterNativesFAccelByteSignalingTurnServer()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteSignalingTurnServer>(FName(TEXT("AccelByteSignalingTurnServer")));
	}
} ScriptStruct_AccelByteNetworkUtilities_StaticRegisterNativesFAccelByteSignalingTurnServer;
	struct Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingTurnServer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteSignalingTurnServer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Host_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingTurnServer" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingTurnServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteSignalingTurnServer, Host), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Port_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingTurnServer" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingTurnServer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteSignalingTurnServer, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingTurnServer" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingTurnServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteSignalingTurnServer, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Password_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteSignalingTurnServer" },
		{ "ModuleRelativePath", "Public/AccelByteSignalingTurnServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteSignalingTurnServer, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Password_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Host,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::NewProp_Password,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteNetworkUtilities,
		nullptr,
		&NewStructOps,
		"AccelByteSignalingTurnServer",
		sizeof(FAccelByteSignalingTurnServer),
		alignof(FAccelByteSignalingTurnServer),
		Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteNetworkUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteSignalingTurnServer"), sizeof(FAccelByteSignalingTurnServer), Get_Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteSignalingTurnServer_Hash() { return 2776948211U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
