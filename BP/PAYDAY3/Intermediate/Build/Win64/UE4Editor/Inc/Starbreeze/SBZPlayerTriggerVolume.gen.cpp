// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerTriggerVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerTriggerVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerTriggerVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerTriggerVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPawnDynamicDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZBooleanStateDynamicDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPlayerTriggerVolume::execAreAllPlayerPawnsInside)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AreAllPlayerPawnsInside();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerTriggerVolume::execGetCurrentNumOverlappingPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentNumOverlappingPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerTriggerVolume::execSetVolumeEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void ASBZPlayerTriggerVolume::StaticRegisterNativesASBZPlayerTriggerVolume()
	{
		UClass* Class = ASBZPlayerTriggerVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreAllPlayerPawnsInside", &ASBZPlayerTriggerVolume::execAreAllPlayerPawnsInside },
			{ "GetCurrentNumOverlappingPlayers", &ASBZPlayerTriggerVolume::execGetCurrentNumOverlappingPlayers },
			{ "SetVolumeEnabled", &ASBZPlayerTriggerVolume::execSetVolumeEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPlayerTriggerVolume_AreAllPlayerPawnsInside_Statics
	{
		struct SBZPlayerTriggerVolume_eventAreAllPlayerPawnsInside_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlayerTriggerVolume_AreAllPlayerPawnsInside_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerTriggerVolume_eventAreAllPlayerPawnsInside_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerTriggerVolume_AreAllPlayerPawnsInside_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerTriggerVolume_eventAreAllPlayerPawnsInside_Parms), &Z_Construct_UFunction_ASBZPlayerTriggerVolume_AreAllPlayerPawnsInside_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerTriggerVolume_AreAllPlayerPawnsInside_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerTriggerVolume_AreAllPlayerPawnsInside_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerTriggerVolume_AreAllPlayerPawnsInside_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerTriggerVolume_AreAllPlayerPawnsInside_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerTriggerVolume, nullptr, "AreAllPlayerPawnsInside", nullptr, nullptr, sizeof(SBZPlayerTriggerVolume_eventAreAllPlayerPawnsInside_Parms), Z_Construct_UFunction_ASBZPlayerTriggerVolume_AreAllPlayerPawnsInside_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerTriggerVolume_AreAllPlayerPawnsInside_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerTriggerVolume_AreAllPlayerPawnsInside_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerTriggerVolume_AreAllPlayerPawnsInside_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerTriggerVolume_AreAllPlayerPawnsInside()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerTriggerVolume_AreAllPlayerPawnsInside_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerTriggerVolume_GetCurrentNumOverlappingPlayers_Statics
	{
		struct SBZPlayerTriggerVolume_eventGetCurrentNumOverlappingPlayers_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerTriggerVolume_GetCurrentNumOverlappingPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerTriggerVolume_eventGetCurrentNumOverlappingPlayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerTriggerVolume_GetCurrentNumOverlappingPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerTriggerVolume_GetCurrentNumOverlappingPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerTriggerVolume_GetCurrentNumOverlappingPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerTriggerVolume_GetCurrentNumOverlappingPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerTriggerVolume, nullptr, "GetCurrentNumOverlappingPlayers", nullptr, nullptr, sizeof(SBZPlayerTriggerVolume_eventGetCurrentNumOverlappingPlayers_Parms), Z_Construct_UFunction_ASBZPlayerTriggerVolume_GetCurrentNumOverlappingPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerTriggerVolume_GetCurrentNumOverlappingPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerTriggerVolume_GetCurrentNumOverlappingPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerTriggerVolume_GetCurrentNumOverlappingPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerTriggerVolume_GetCurrentNumOverlappingPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerTriggerVolume_GetCurrentNumOverlappingPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerTriggerVolume_SetVolumeEnabled_Statics
	{
		struct SBZPlayerTriggerVolume_eventSetVolumeEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlayerTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZPlayerTriggerVolume_eventSetVolumeEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerTriggerVolume_eventSetVolumeEnabled_Parms), &Z_Construct_UFunction_ASBZPlayerTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerTriggerVolume_SetVolumeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerTriggerVolume_SetVolumeEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerTriggerVolume_SetVolumeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerTriggerVolume, nullptr, "SetVolumeEnabled", nullptr, nullptr, sizeof(SBZPlayerTriggerVolume_eventSetVolumeEnabled_Parms), Z_Construct_UFunction_ASBZPlayerTriggerVolume_SetVolumeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerTriggerVolume_SetVolumeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerTriggerVolume_SetVolumeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerTriggerVolume_SetVolumeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPlayerTriggerVolume_NoRegister()
	{
		return ASBZPlayerTriggerVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPawnParentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerPawnParentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldStartEnabled_MetaData[];
#endif
		static void NewProp_bShouldStartEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldStartEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableWhenPlayerBeginsOverlapping_MetaData[];
#endif
		static void NewProp_bDisableWhenPlayerBeginsOverlapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableWhenPlayerBeginsOverlapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableWhenAllPlayersAreInside_MetaData[];
#endif
		static void NewProp_bDisableWhenAllPlayersAreInside_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableWhenAllPlayersAreInside;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPawnBeginOverlapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlayerPawnBeginOverlapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPawnEndOverlapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlayerPawnEndOverlapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappingAllPlayerPawnsChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OverlappingAllPlayerPawnsChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPlayerTriggerVolume_AreAllPlayerPawnsInside, "AreAllPlayerPawnsInside" }, // 1151672491
		{ &Z_Construct_UFunction_ASBZPlayerTriggerVolume_GetCurrentNumOverlappingPlayers, "GetCurrentNumOverlappingPlayers" }, // 220799660
		{ &Z_Construct_UFunction_ASBZPlayerTriggerVolume_SetVolumeEnabled, "SetVolumeEnabled" }, // 1697596223
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZPlayerTriggerVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerTriggerVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_PlayerPawnParentClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_PlayerPawnParentClass = { "PlayerPawnParentClass", nullptr, (EPropertyFlags)0x00240c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerTriggerVolume, PlayerPawnParentClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_PlayerPawnParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_PlayerPawnParentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bShouldStartEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bShouldStartEnabled_SetBit(void* Obj)
	{
		((ASBZPlayerTriggerVolume*)Obj)->bShouldStartEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bShouldStartEnabled = { "bShouldStartEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZPlayerTriggerVolume), &Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bShouldStartEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bShouldStartEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bShouldStartEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bDisableWhenPlayerBeginsOverlapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bDisableWhenPlayerBeginsOverlapping_SetBit(void* Obj)
	{
		((ASBZPlayerTriggerVolume*)Obj)->bDisableWhenPlayerBeginsOverlapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bDisableWhenPlayerBeginsOverlapping = { "bDisableWhenPlayerBeginsOverlapping", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZPlayerTriggerVolume), &Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bDisableWhenPlayerBeginsOverlapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bDisableWhenPlayerBeginsOverlapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bDisableWhenPlayerBeginsOverlapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bDisableWhenAllPlayersAreInside_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bDisableWhenAllPlayersAreInside_SetBit(void* Obj)
	{
		((ASBZPlayerTriggerVolume*)Obj)->bDisableWhenAllPlayersAreInside = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bDisableWhenAllPlayersAreInside = { "bDisableWhenAllPlayersAreInside", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZPlayerTriggerVolume), &Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bDisableWhenAllPlayersAreInside_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bDisableWhenAllPlayersAreInside_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bDisableWhenAllPlayersAreInside_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_PlayerPawnBeginOverlapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_PlayerPawnBeginOverlapping = { "PlayerPawnBeginOverlapping", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerTriggerVolume, PlayerPawnBeginOverlapping), Z_Construct_UDelegateFunction_Starbreeze_SBZPawnDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_PlayerPawnBeginOverlapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_PlayerPawnBeginOverlapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_PlayerPawnEndOverlapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_PlayerPawnEndOverlapping = { "PlayerPawnEndOverlapping", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerTriggerVolume, PlayerPawnEndOverlapping), Z_Construct_UDelegateFunction_Starbreeze_SBZPawnDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_PlayerPawnEndOverlapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_PlayerPawnEndOverlapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_OverlappingAllPlayerPawnsChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_OverlappingAllPlayerPawnsChanged = { "OverlappingAllPlayerPawnsChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerTriggerVolume, OverlappingAllPlayerPawnsChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZBooleanStateDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_OverlappingAllPlayerPawnsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_OverlappingAllPlayerPawnsChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_PlayerPawnParentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bShouldStartEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bDisableWhenPlayerBeginsOverlapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_bDisableWhenAllPlayersAreInside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_PlayerPawnBeginOverlapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_PlayerPawnEndOverlapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::NewProp_OverlappingAllPlayerPawnsChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlayerTriggerVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::ClassParams = {
		&ASBZPlayerTriggerVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlayerTriggerVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlayerTriggerVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlayerTriggerVolume, 2734185270);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlayerTriggerVolume>()
	{
		return ASBZPlayerTriggerVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlayerTriggerVolume(Z_Construct_UClass_ASBZPlayerTriggerVolume, &ASBZPlayerTriggerVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlayerTriggerVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlayerTriggerVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
