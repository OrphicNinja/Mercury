// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLobbyBeaconHost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLobbyBeaconHost() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLobbyBeaconHost_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLobbyBeaconHost();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZOnlineBeaconHostObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLobbyRemoteState_NoRegister();
// End Cross Module References
	void ASBZLobbyBeaconHost::StaticRegisterNativesASBZLobbyBeaconHost()
	{
	}
	UClass* Z_Construct_UClass_ASBZLobbyBeaconHost_NoRegister()
	{
		return ASBZLobbyBeaconHost::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLobbyBeaconHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LobbyState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLobbyBeaconHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZOnlineBeaconHostObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLobbyBeaconHost_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLobbyBeaconHost.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconHost.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLobbyBeaconHost_Statics::NewProp_LobbyState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyBeaconHost" },
		{ "ModuleRelativePath", "Public/SBZLobbyBeaconHost.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLobbyBeaconHost_Statics::NewProp_LobbyState = { "LobbyState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLobbyBeaconHost, LobbyState), Z_Construct_UClass_ASBZLobbyRemoteState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLobbyBeaconHost_Statics::NewProp_LobbyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLobbyBeaconHost_Statics::NewProp_LobbyState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZLobbyBeaconHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLobbyBeaconHost_Statics::NewProp_LobbyState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLobbyBeaconHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLobbyBeaconHost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLobbyBeaconHost_Statics::ClassParams = {
		&ASBZLobbyBeaconHost::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZLobbyBeaconHost_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLobbyBeaconHost_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLobbyBeaconHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLobbyBeaconHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLobbyBeaconHost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLobbyBeaconHost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLobbyBeaconHost, 2981428018);
	template<> STARBREEZE_API UClass* StaticClass<ASBZLobbyBeaconHost>()
	{
		return ASBZLobbyBeaconHost::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLobbyBeaconHost(Z_Construct_UClass_ASBZLobbyBeaconHost, &ASBZLobbyBeaconHost::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZLobbyBeaconHost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLobbyBeaconHost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
