// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineDataMatchmaking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineDataMatchmaking() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataMatchmaking_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataMatchmaking();
	SBZSTATEMACHINEBASE_API UClass* Z_Construct_UClass_USBZStateMachineData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType();
// End Cross Module References
	void USBZStateMachineDataMatchmaking::StaticRegisterNativesUSBZStateMachineDataMatchmaking()
	{
	}
	UClass* Z_Construct_UClass_USBZStateMachineDataMatchmaking_NoRegister()
	{
		return USBZStateMachineDataMatchmaking::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAsyncLoadingComplete_MetaData[];
#endif
		static void NewProp_bAsyncLoadingComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAsyncLoadingComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCrossPlayEnabled_MetaData[];
#endif
		static void NewProp_bCrossPlayEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrossPlayEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInCrossPlayLobby_MetaData[];
#endif
		static void NewProp_bInCrossPlayLobby_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInCrossPlayLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCrossPlayAllowed_MetaData[];
#endif
		static void NewProp_bCrossPlayAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrossPlayAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildVersion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JoinType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_JoinType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStateMachineData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineDataMatchmaking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataMatchmaking.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_Params_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineDataMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineDataMatchmaking, Params), Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_Params_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_PartyCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineDataMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_PartyCode = { "PartyCode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineDataMatchmaking, PartyCode), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_PartyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_PartyCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bAsyncLoadingComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineDataMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataMatchmaking.h" },
	};
#endif
	void Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bAsyncLoadingComplete_SetBit(void* Obj)
	{
		((USBZStateMachineDataMatchmaking*)Obj)->bAsyncLoadingComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bAsyncLoadingComplete = { "bAsyncLoadingComplete", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZStateMachineDataMatchmaking), &Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bAsyncLoadingComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bAsyncLoadingComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bAsyncLoadingComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bCrossPlayEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineDataMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataMatchmaking.h" },
	};
#endif
	void Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bCrossPlayEnabled_SetBit(void* Obj)
	{
		((USBZStateMachineDataMatchmaking*)Obj)->bCrossPlayEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bCrossPlayEnabled = { "bCrossPlayEnabled", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZStateMachineDataMatchmaking), &Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bCrossPlayEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bCrossPlayEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bCrossPlayEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bInCrossPlayLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineDataMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataMatchmaking.h" },
	};
#endif
	void Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bInCrossPlayLobby_SetBit(void* Obj)
	{
		((USBZStateMachineDataMatchmaking*)Obj)->bInCrossPlayLobby = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bInCrossPlayLobby = { "bInCrossPlayLobby", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZStateMachineDataMatchmaking), &Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bInCrossPlayLobby_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bInCrossPlayLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bInCrossPlayLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bCrossPlayAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineDataMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataMatchmaking.h" },
	};
#endif
	void Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bCrossPlayAllowed_SetBit(void* Obj)
	{
		((USBZStateMachineDataMatchmaking*)Obj)->bCrossPlayAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bCrossPlayAllowed = { "bCrossPlayAllowed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZStateMachineDataMatchmaking), &Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bCrossPlayAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bCrossPlayAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bCrossPlayAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_BuildVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineDataMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_BuildVersion = { "BuildVersion", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineDataMatchmaking, BuildVersion), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_BuildVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_BuildVersion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_JoinType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_JoinType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineDataMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_JoinType = { "JoinType", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineDataMatchmaking, JoinType), Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_JoinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_JoinType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_PartyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bAsyncLoadingComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bCrossPlayEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bInCrossPlayLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_bCrossPlayAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_BuildVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_JoinType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::NewProp_JoinType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineDataMatchmaking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::ClassParams = {
		&USBZStateMachineDataMatchmaking::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineDataMatchmaking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineDataMatchmaking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineDataMatchmaking, 4010214697);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineDataMatchmaking>()
	{
		return USBZStateMachineDataMatchmaking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineDataMatchmaking(Z_Construct_UClass_USBZStateMachineDataMatchmaking, &USBZStateMachineDataMatchmaking::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineDataMatchmaking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineDataMatchmaking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
