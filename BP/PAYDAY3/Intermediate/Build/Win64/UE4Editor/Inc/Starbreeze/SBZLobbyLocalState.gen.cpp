// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLobbyLocalState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLobbyLocalState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLobbyLocalState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLobbyLocalState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnLobbyEventDelegate__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi();
// End Cross Module References
	DEFINE_FUNCTION(USBZLobbyLocalState::execGetPlayerAvatar)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetPlayerAvatar(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLobbyLocalState::execHandleGameStateEnter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleGameStateEnter(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLobbyLocalState::execHandleGameStateLeft)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleGameStateLeft(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLobbyLocalState::execSendInfoToServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendInfoToServer();
		P_NATIVE_END;
	}
	void USBZLobbyLocalState::StaticRegisterNativesUSBZLobbyLocalState()
	{
		UClass* Class = USBZLobbyLocalState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerAvatar", &USBZLobbyLocalState::execGetPlayerAvatar },
			{ "HandleGameStateEnter", &USBZLobbyLocalState::execHandleGameStateEnter },
			{ "HandleGameStateLeft", &USBZLobbyLocalState::execHandleGameStateLeft },
			{ "SendInfoToServer", &USBZLobbyLocalState::execSendInfoToServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZLobbyLocalState_GetPlayerAvatar_Statics
	{
		struct SBZLobbyLocalState_eventGetPlayerAvatar_Parms
		{
			int32 PlayerIndex;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLobbyLocalState_GetPlayerAvatar_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyLocalState_eventGetPlayerAvatar_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLobbyLocalState_GetPlayerAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyLocalState_eventGetPlayerAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLobbyLocalState_GetPlayerAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLobbyLocalState_GetPlayerAvatar_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLobbyLocalState_GetPlayerAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLobbyLocalState_GetPlayerAvatar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyLocalState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLobbyLocalState_GetPlayerAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLobbyLocalState, nullptr, "GetPlayerAvatar", nullptr, nullptr, sizeof(SBZLobbyLocalState_eventGetPlayerAvatar_Parms), Z_Construct_UFunction_USBZLobbyLocalState_GetPlayerAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobbyLocalState_GetPlayerAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLobbyLocalState_GetPlayerAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobbyLocalState_GetPlayerAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLobbyLocalState_GetPlayerAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLobbyLocalState_GetPlayerAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateEnter_Statics
	{
		struct SBZLobbyLocalState_eventHandleGameStateEnter_Parms
		{
			FName StateName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateEnter_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyLocalState_eventHandleGameStateEnter_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateEnter_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyLocalState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLobbyLocalState, nullptr, "HandleGameStateEnter", nullptr, nullptr, sizeof(SBZLobbyLocalState_eventHandleGameStateEnter_Parms), Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateLeft_Statics
	{
		struct SBZLobbyLocalState_eventHandleGameStateLeft_Parms
		{
			FName StateName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateLeft_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLobbyLocalState_eventHandleGameStateLeft_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateLeft_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyLocalState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLobbyLocalState, nullptr, "HandleGameStateLeft", nullptr, nullptr, sizeof(SBZLobbyLocalState_eventHandleGameStateLeft_Parms), Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLobbyLocalState_SendInfoToServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLobbyLocalState_SendInfoToServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLobbyLocalState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLobbyLocalState_SendInfoToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLobbyLocalState, nullptr, "SendInfoToServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLobbyLocalState_SendInfoToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLobbyLocalState_SendInfoToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLobbyLocalState_SendInfoToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLobbyLocalState_SendInfoToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLobbyLocalState_NoRegister()
	{
		return USBZLobbyLocalState::StaticClass();
	}
	struct Z_Construct_UClass_USBZLobbyLocalState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerCountChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerCountChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSomeoneAcceptedMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSomeoneAcceptedMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerLeftMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerLeftMatch;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLobbyLocalState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLobbyLocalState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLobbyLocalState_GetPlayerAvatar, "GetPlayerAvatar" }, // 782790126
		{ &Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateEnter, "HandleGameStateEnter" }, // 4124217275
		{ &Z_Construct_UFunction_USBZLobbyLocalState_HandleGameStateLeft, "HandleGameStateLeft" }, // 1270728637
		{ &Z_Construct_UFunction_USBZLobbyLocalState_SendInfoToServer, "SendInfoToServer" }, // 1214459933
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLobbyLocalState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLobbyLocalState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLobbyLocalState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_OnPlayerCountChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyLocalState" },
		{ "ModuleRelativePath", "Public/SBZLobbyLocalState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_OnPlayerCountChanged = { "OnPlayerCountChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLobbyLocalState, OnPlayerCountChanged), Z_Construct_UDelegateFunction_Starbreeze_OnLobbyEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_OnPlayerCountChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_OnPlayerCountChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_OnSomeoneAcceptedMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyLocalState" },
		{ "ModuleRelativePath", "Public/SBZLobbyLocalState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_OnSomeoneAcceptedMatch = { "OnSomeoneAcceptedMatch", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLobbyLocalState, OnSomeoneAcceptedMatch), Z_Construct_UDelegateFunction_Starbreeze_OnLobbyEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_OnSomeoneAcceptedMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_OnSomeoneAcceptedMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_OnPlayerLeftMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyLocalState" },
		{ "ModuleRelativePath", "Public/SBZLobbyLocalState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_OnPlayerLeftMatch = { "OnPlayerLeftMatch", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLobbyLocalState, OnPlayerLeftMatch), Z_Construct_UDelegateFunction_Starbreeze_OnLobbyEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_OnPlayerLeftMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_OnPlayerLeftMatch_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_PlayerInfos_Inner = { "PlayerInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_PlayerInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyLocalState" },
		{ "ModuleRelativePath", "Public/SBZLobbyLocalState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_PlayerInfos = { "PlayerInfos", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLobbyLocalState, PlayerInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_PlayerInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_PlayerInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLobbyLocalState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_OnPlayerCountChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_OnSomeoneAcceptedMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_OnPlayerLeftMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_PlayerInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLobbyLocalState_Statics::NewProp_PlayerInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLobbyLocalState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLobbyLocalState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLobbyLocalState_Statics::ClassParams = {
		&USBZLobbyLocalState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZLobbyLocalState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobbyLocalState_Statics::PropPointers),
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLobbyLocalState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLobbyLocalState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLobbyLocalState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLobbyLocalState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLobbyLocalState, 1505266910);
	template<> STARBREEZE_API UClass* StaticClass<USBZLobbyLocalState>()
	{
		return USBZLobbyLocalState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLobbyLocalState(Z_Construct_UClass_USBZLobbyLocalState, &USBZLobbyLocalState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLobbyLocalState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLobbyLocalState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
