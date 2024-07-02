// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLevelScriptMainMenuActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLevelScriptMainMenuActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLevelScriptMainMenuActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLevelScriptMainMenuActor();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLevelScriptActorBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineCode();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMainMenuPlayerCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCustomizationManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMainMenuCameraManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZLevelScriptMainMenuActor::execOnLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptMainMenuActor::execOnLoadoutChanged)
	{
		P_GET_TARRAY_REF(FSBZLobbyCharacterInfoUi,Z_Param_Out_LobbyInfoArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutChanged(Z_Param_Out_LobbyInfoArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptMainMenuActor::execOnLoadoutChangedSolo)
	{
		P_GET_TARRAY_REF(FSBZLobbyCharacterInfoUi,Z_Param_Out_LobbyInfoArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutChangedSolo(Z_Param_Out_LobbyInfoArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptMainMenuActor::execOnLobbyUpdate)
	{
		P_GET_ENUM(ESBZOnlineCode,Z_Param_ErrorCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLobbyUpdate(ESBZOnlineCode(Z_Param_ErrorCode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLevelScriptMainMenuActor::execPostInitializeComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostInitializeComponents();
		P_NATIVE_END;
	}
	void ASBZLevelScriptMainMenuActor::StaticRegisterNativesASBZLevelScriptMainMenuActor()
	{
		UClass* Class = ASBZLevelScriptMainMenuActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLeft", &ASBZLevelScriptMainMenuActor::execOnLeft },
			{ "OnLoadoutChanged", &ASBZLevelScriptMainMenuActor::execOnLoadoutChanged },
			{ "OnLoadoutChangedSolo", &ASBZLevelScriptMainMenuActor::execOnLoadoutChangedSolo },
			{ "OnLobbyUpdate", &ASBZLevelScriptMainMenuActor::execOnLobbyUpdate },
			{ "PostInitializeComponents", &ASBZLevelScriptMainMenuActor::execPostInitializeComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptMainMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptMainMenuActor, nullptr, "OnLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics
	{
		struct SBZLevelScriptMainMenuActor_eventOnLoadoutChanged_Parms
		{
			TArray<FSBZLobbyCharacterInfoUi> LobbyInfoArray;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LobbyInfoArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyInfoArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LobbyInfoArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics::NewProp_LobbyInfoArray_Inner = { "LobbyInfoArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics::NewProp_LobbyInfoArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics::NewProp_LobbyInfoArray = { "LobbyInfoArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptMainMenuActor_eventOnLoadoutChanged_Parms, LobbyInfoArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics::NewProp_LobbyInfoArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics::NewProp_LobbyInfoArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics::NewProp_LobbyInfoArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics::NewProp_LobbyInfoArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptMainMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptMainMenuActor, nullptr, "OnLoadoutChanged", nullptr, nullptr, sizeof(SBZLevelScriptMainMenuActor_eventOnLoadoutChanged_Parms), Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics
	{
		struct SBZLevelScriptMainMenuActor_eventOnLoadoutChangedSolo_Parms
		{
			TArray<FSBZLobbyCharacterInfoUi> LobbyInfoArray;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LobbyInfoArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyInfoArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LobbyInfoArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics::NewProp_LobbyInfoArray_Inner = { "LobbyInfoArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics::NewProp_LobbyInfoArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics::NewProp_LobbyInfoArray = { "LobbyInfoArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptMainMenuActor_eventOnLoadoutChangedSolo_Parms, LobbyInfoArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics::NewProp_LobbyInfoArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics::NewProp_LobbyInfoArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics::NewProp_LobbyInfoArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics::NewProp_LobbyInfoArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptMainMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptMainMenuActor, nullptr, "OnLoadoutChangedSolo", nullptr, nullptr, sizeof(SBZLevelScriptMainMenuActor_eventOnLoadoutChangedSolo_Parms), Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLobbyUpdate_Statics
	{
		struct SBZLevelScriptMainMenuActor_eventOnLobbyUpdate_Parms
		{
			ESBZOnlineCode ErrorCode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorCode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLobbyUpdate_Statics::NewProp_ErrorCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLobbyUpdate_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLevelScriptMainMenuActor_eventOnLobbyUpdate_Parms, ErrorCode), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLobbyUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLobbyUpdate_Statics::NewProp_ErrorCode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLobbyUpdate_Statics::NewProp_ErrorCode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLobbyUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptMainMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLobbyUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptMainMenuActor, nullptr, "OnLobbyUpdate", nullptr, nullptr, sizeof(SBZLevelScriptMainMenuActor_eventOnLobbyUpdate_Parms), Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLobbyUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLobbyUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLobbyUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLobbyUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLobbyUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLobbyUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_PostInitializeComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_PostInitializeComponents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLevelScriptMainMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_PostInitializeComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLevelScriptMainMenuActor, nullptr, "PostInitializeComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_PostInitializeComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_PostInitializeComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_PostInitializeComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_PostInitializeComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZLevelScriptMainMenuActor_NoRegister()
	{
		return ASBZLevelScriptMainMenuActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuMannequin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuMannequin;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MultiplayerMannequins_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplayerMannequins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MultiplayerMannequins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomizationManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuCameraManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuCameraManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZLevelScriptActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLeft, "OnLeft" }, // 4039467947
		{ &Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChanged, "OnLoadoutChanged" }, // 2286488888
		{ &Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLoadoutChangedSolo, "OnLoadoutChangedSolo" }, // 3121722190
		{ &Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_OnLobbyUpdate, "OnLobbyUpdate" }, // 3723201680
		{ &Z_Construct_UFunction_ASBZLevelScriptMainMenuActor_PostInitializeComponents, "PostInitializeComponents" }, // 822983480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZLevelScriptMainMenuActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLevelScriptMainMenuActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MainMenuMannequin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLevelScriptMainMenuActor" },
		{ "ModuleRelativePath", "Public/SBZLevelScriptMainMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MainMenuMannequin = { "MainMenuMannequin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLevelScriptMainMenuActor, MainMenuMannequin), Z_Construct_UClass_ASBZMainMenuPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MainMenuMannequin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MainMenuMannequin_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MultiplayerMannequins_Inner = { "MultiplayerMannequins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZMainMenuPlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MultiplayerMannequins_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLevelScriptMainMenuActor" },
		{ "ModuleRelativePath", "Public/SBZLevelScriptMainMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MultiplayerMannequins = { "MultiplayerMannequins", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLevelScriptMainMenuActor, MultiplayerMannequins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MultiplayerMannequins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MultiplayerMannequins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_CustomizationManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLevelScriptMainMenuActor" },
		{ "ModuleRelativePath", "Public/SBZLevelScriptMainMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_CustomizationManager = { "CustomizationManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLevelScriptMainMenuActor, CustomizationManager), Z_Construct_UClass_ASBZCustomizationManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_CustomizationManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_CustomizationManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MainMenuCameraManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLevelScriptMainMenuActor" },
		{ "ModuleRelativePath", "Public/SBZLevelScriptMainMenuActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MainMenuCameraManager = { "MainMenuCameraManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLevelScriptMainMenuActor, MainMenuCameraManager), Z_Construct_UClass_ASBZMainMenuCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MainMenuCameraManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MainMenuCameraManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MainMenuMannequin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MultiplayerMannequins_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MultiplayerMannequins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_CustomizationManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::NewProp_MainMenuCameraManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLevelScriptMainMenuActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::ClassParams = {
		&ASBZLevelScriptMainMenuActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLevelScriptMainMenuActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLevelScriptMainMenuActor, 3390691510);
	template<> STARBREEZE_API UClass* StaticClass<ASBZLevelScriptMainMenuActor>()
	{
		return ASBZLevelScriptMainMenuActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLevelScriptMainMenuActor(Z_Construct_UClass_ASBZLevelScriptMainMenuActor, &ASBZLevelScriptMainMenuActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZLevelScriptMainMenuActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLevelScriptMainMenuActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
