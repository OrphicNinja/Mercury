// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3HeistGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3HeistGameMode() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_APD3HeistGameMode_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_APD3HeistGameMode();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMissionGameMode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNegotiationManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3AssaultManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquadManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCivilianManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavLinkManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZChatInGame_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTrafficManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISearchManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGlobalModifiers_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APD3HeistGameMode::execGetNegotiationManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZNegotiationManager**)Z_Param__Result=P_THIS->GetNegotiationManager();
		P_NATIVE_END;
	}
	void APD3HeistGameMode::StaticRegisterNativesAPD3HeistGameMode()
	{
		UClass* Class = APD3HeistGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNegotiationManager", &APD3HeistGameMode::execGetNegotiationManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APD3HeistGameMode_GetNegotiationManager_Statics
	{
		struct PD3HeistGameMode_eventGetNegotiationManager_Parms
		{
			USBZNegotiationManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APD3HeistGameMode_GetNegotiationManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistGameMode_eventGetNegotiationManager_Parms, ReturnValue), Z_Construct_UClass_USBZNegotiationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3HeistGameMode_GetNegotiationManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3HeistGameMode_GetNegotiationManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3HeistGameMode_GetNegotiationManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3HeistGameMode_GetNegotiationManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3HeistGameMode, nullptr, "GetNegotiationManager", nullptr, nullptr, sizeof(PD3HeistGameMode_eventGetNegotiationManager_Parms), Z_Construct_UFunction_APD3HeistGameMode_GetNegotiationManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameMode_GetNegotiationManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3HeistGameMode_GetNegotiationManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3HeistGameMode_GetNegotiationManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3HeistGameMode_GetNegotiationManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3HeistGameMode_GetNegotiationManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APD3HeistGameMode_NoRegister()
	{
		return APD3HeistGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APD3HeistGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegotiationManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NegotiationManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssaultManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssaultManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISquadManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AISquadManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CivilianManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CivilianManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLinkManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavLinkManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatInGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChatInGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrafficManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalModifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalModifiers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransporterBrutalCarrySkillPlayerSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransporterBrutalCarrySkillPlayerSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TransporterBrutalCarrySkillPlayerSet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransporterBrutalCarrySkillAISet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransporterBrutalCarrySkillAISet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TransporterBrutalCarrySkillAISet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APD3HeistGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZMissionGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APD3HeistGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APD3HeistGameMode_GetNegotiationManager, "GetNegotiationManager" }, // 2100237426
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PD3HeistGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3HeistGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_NegotiationManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HeistGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_NegotiationManager = { "NegotiationManager", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameMode, NegotiationManager), Z_Construct_UClass_USBZNegotiationManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_NegotiationManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_NegotiationManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_AssaultManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HeistGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_AssaultManager = { "AssaultManager", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameMode, AssaultManager), Z_Construct_UClass_UPD3AssaultManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_AssaultManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_AssaultManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_AISquadManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HeistGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_AISquadManager = { "AISquadManager", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameMode, AISquadManager), Z_Construct_UClass_USBZAISquadManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_AISquadManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_AISquadManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_CivilianManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HeistGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_CivilianManager = { "CivilianManager", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameMode, CivilianManager), Z_Construct_UClass_USBZCivilianManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_CivilianManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_CivilianManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_NavLinkManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HeistGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_NavLinkManager = { "NavLinkManager", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameMode, NavLinkManager), Z_Construct_UClass_USBZNavLinkManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_NavLinkManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_NavLinkManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_ChatInGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameMode" },
		{ "ModuleRelativePath", "Public/PD3HeistGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_ChatInGame = { "ChatInGame", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameMode, ChatInGame), Z_Construct_UClass_ASBZChatInGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_ChatInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_ChatInGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TrafficManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HeistGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TrafficManager = { "TrafficManager", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameMode, TrafficManager), Z_Construct_UClass_USBZTrafficManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TrafficManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TrafficManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_SearchManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HeistGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_SearchManager = { "SearchManager", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameMode, SearchManager), Z_Construct_UClass_USBZAISearchManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_SearchManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_SearchManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_GlobalModifiers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HeistGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_GlobalModifiers = { "GlobalModifiers", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameMode, GlobalModifiers), Z_Construct_UClass_USBZGlobalModifiers_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_GlobalModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_GlobalModifiers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TransporterBrutalCarrySkillPlayerSet_ElementProp = { "TransporterBrutalCarrySkillPlayerSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TransporterBrutalCarrySkillPlayerSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameMode" },
		{ "ModuleRelativePath", "Public/PD3HeistGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TransporterBrutalCarrySkillPlayerSet = { "TransporterBrutalCarrySkillPlayerSet", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameMode, TransporterBrutalCarrySkillPlayerSet), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TransporterBrutalCarrySkillPlayerSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TransporterBrutalCarrySkillPlayerSet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TransporterBrutalCarrySkillAISet_ElementProp = { "TransporterBrutalCarrySkillAISet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZAICharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TransporterBrutalCarrySkillAISet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistGameMode" },
		{ "ModuleRelativePath", "Public/PD3HeistGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TransporterBrutalCarrySkillAISet = { "TransporterBrutalCarrySkillAISet", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3HeistGameMode, TransporterBrutalCarrySkillAISet), METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TransporterBrutalCarrySkillAISet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TransporterBrutalCarrySkillAISet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APD3HeistGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_NegotiationManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_AssaultManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_AISquadManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_CivilianManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_NavLinkManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_ChatInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TrafficManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_SearchManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_GlobalModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TransporterBrutalCarrySkillPlayerSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TransporterBrutalCarrySkillPlayerSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TransporterBrutalCarrySkillAISet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3HeistGameMode_Statics::NewProp_TransporterBrutalCarrySkillAISet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APD3HeistGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APD3HeistGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APD3HeistGameMode_Statics::ClassParams = {
		&APD3HeistGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APD3HeistGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APD3HeistGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APD3HeistGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APD3HeistGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APD3HeistGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APD3HeistGameMode, 3390574163);
	template<> STARBREEZE_API UClass* StaticClass<APD3HeistGameMode>()
	{
		return APD3HeistGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APD3HeistGameMode(Z_Construct_UClass_APD3HeistGameMode, &APD3HeistGameMode::StaticClass, TEXT("/Script/Starbreeze"), TEXT("APD3HeistGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APD3HeistGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
