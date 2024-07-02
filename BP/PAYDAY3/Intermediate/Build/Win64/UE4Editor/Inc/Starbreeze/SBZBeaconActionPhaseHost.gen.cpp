// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBeaconActionPhaseHost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBeaconActionPhaseHost() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBeaconActionPhaseHost_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBeaconActionPhaseHost();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZOnlineBeaconHostObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerStartTravelEvent__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerDisconnectedEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(ASBZBeaconActionPhaseHost::execHandlePlayerCountChanged)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerCountChanged(Z_Param_PlayerState);
		P_NATIVE_END;
	}
	void ASBZBeaconActionPhaseHost::StaticRegisterNativesASBZBeaconActionPhaseHost()
	{
		UClass* Class = ASBZBeaconActionPhaseHost::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandlePlayerCountChanged", &ASBZBeaconActionPhaseHost::execHandlePlayerCountChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZBeaconActionPhaseHost_HandlePlayerCountChanged_Statics
	{
		struct SBZBeaconActionPhaseHost_eventHandlePlayerCountChanged_Parms
		{
			APlayerState* PlayerState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZBeaconActionPhaseHost_HandlePlayerCountChanged_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBeaconActionPhaseHost_eventHandlePlayerCountChanged_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBeaconActionPhaseHost_HandlePlayerCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBeaconActionPhaseHost_HandlePlayerCountChanged_Statics::NewProp_PlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBeaconActionPhaseHost_HandlePlayerCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseHost.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBeaconActionPhaseHost_HandlePlayerCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBeaconActionPhaseHost, nullptr, "HandlePlayerCountChanged", nullptr, nullptr, sizeof(SBZBeaconActionPhaseHost_eventHandlePlayerCountChanged_Parms), Z_Construct_UFunction_ASBZBeaconActionPhaseHost_HandlePlayerCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseHost_HandlePlayerCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBeaconActionPhaseHost_HandlePlayerCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBeaconActionPhaseHost_HandlePlayerCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBeaconActionPhaseHost_HandlePlayerCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBeaconActionPhaseHost_HandlePlayerCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZBeaconActionPhaseHost_NoRegister()
	{
		return ASBZBeaconActionPhaseHost::StaticClass();
	}
	struct Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerToReadyEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerToReadyEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerStartTravelEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerStartTravelEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDisconnectedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDisconnectedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZOnlineBeaconHostObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZBeaconActionPhaseHost_HandlePlayerCountChanged, "HandlePlayerCountChanged" }, // 2172727735
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBeaconActionPhaseHost.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseHost.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::NewProp_OnPlayerToReadyEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBeaconActionPhaseHost" },
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseHost.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::NewProp_OnPlayerToReadyEvent = { "OnPlayerToReadyEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBeaconActionPhaseHost, OnPlayerToReadyEvent), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerToReadyEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::NewProp_OnPlayerToReadyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::NewProp_OnPlayerToReadyEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::NewProp_OnPlayerStartTravelEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBeaconActionPhaseHost" },
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseHost.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::NewProp_OnPlayerStartTravelEvent = { "OnPlayerStartTravelEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBeaconActionPhaseHost, OnPlayerStartTravelEvent), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerStartTravelEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::NewProp_OnPlayerStartTravelEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::NewProp_OnPlayerStartTravelEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::NewProp_OnPlayerDisconnectedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBeaconActionPhaseHost" },
		{ "ModuleRelativePath", "Public/SBZBeaconActionPhaseHost.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::NewProp_OnPlayerDisconnectedEvent = { "OnPlayerDisconnectedEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBeaconActionPhaseHost, OnPlayerDisconnectedEvent), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerDisconnectedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::NewProp_OnPlayerDisconnectedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::NewProp_OnPlayerDisconnectedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::NewProp_OnPlayerToReadyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::NewProp_OnPlayerStartTravelEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::NewProp_OnPlayerDisconnectedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZBeaconActionPhaseHost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::ClassParams = {
		&ASBZBeaconActionPhaseHost::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZBeaconActionPhaseHost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZBeaconActionPhaseHost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZBeaconActionPhaseHost, 606855073);
	template<> STARBREEZE_API UClass* StaticClass<ASBZBeaconActionPhaseHost>()
	{
		return ASBZBeaconActionPhaseHost::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZBeaconActionPhaseHost(Z_Construct_UClass_ASBZBeaconActionPhaseHost, &ASBZBeaconActionPhaseHost::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZBeaconActionPhaseHost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZBeaconActionPhaseHost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
