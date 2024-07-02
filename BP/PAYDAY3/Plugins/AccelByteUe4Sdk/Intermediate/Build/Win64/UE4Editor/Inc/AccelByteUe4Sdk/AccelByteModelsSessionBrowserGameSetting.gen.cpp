// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSessionBrowserGameSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsSessionBrowserGameSetting() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FAccelByteModelsSessionBrowserGameSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsSessionBrowserGameSetting"), sizeof(FAccelByteModelsSessionBrowserGameSetting), Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsSessionBrowserGameSetting>()
{
	return FAccelByteModelsSessionBrowserGameSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting(FAccelByteModelsSessionBrowserGameSetting::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsSessionBrowserGameSetting"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSessionBrowserGameSetting
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSessionBrowserGameSetting()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsSessionBrowserGameSetting>(FName(TEXT("AccelByteModelsSessionBrowserGameSetting")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSessionBrowserGameSetting;
	struct Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Map_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Num_bot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Num_bot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Current_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_internal_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max_internal_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_internal_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Current_internal_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Allow_join_in_progress_MetaData[];
#endif
		static void NewProp_Allow_join_in_progress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Allow_join_in_progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserGameSetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsSessionBrowserGameSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Mode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionBrowserGameSetting" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserGameSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionBrowserGameSetting, Mode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Mode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Map_name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionBrowserGameSetting" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserGameSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Map_name = { "Map_name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionBrowserGameSetting, Map_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Map_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Map_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Num_bot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionBrowserGameSetting" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserGameSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Num_bot = { "Num_bot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionBrowserGameSetting, Num_bot), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Num_bot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Num_bot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Max_player_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionBrowserGameSetting" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserGameSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Max_player = { "Max_player", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionBrowserGameSetting, Max_player), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Max_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Max_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Current_player_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionBrowserGameSetting" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserGameSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Current_player = { "Current_player", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionBrowserGameSetting, Current_player), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Current_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Current_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Max_internal_player_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionBrowserGameSetting" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserGameSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Max_internal_player = { "Max_internal_player", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionBrowserGameSetting, Max_internal_player), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Max_internal_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Max_internal_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Current_internal_player_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionBrowserGameSetting" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserGameSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Current_internal_player = { "Current_internal_player", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionBrowserGameSetting, Current_internal_player), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Current_internal_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Current_internal_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Allow_join_in_progress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionBrowserGameSetting" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserGameSetting.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Allow_join_in_progress_SetBit(void* Obj)
	{
		((FAccelByteModelsSessionBrowserGameSetting*)Obj)->Allow_join_in_progress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Allow_join_in_progress = { "Allow_join_in_progress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsSessionBrowserGameSetting), &Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Allow_join_in_progress_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Allow_join_in_progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Allow_join_in_progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Password_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionBrowserGameSetting" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserGameSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionBrowserGameSetting, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSessionBrowserGameSetting" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSessionBrowserGameSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSessionBrowserGameSetting, Settings), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Map_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Num_bot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Max_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Current_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Max_internal_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Current_internal_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Allow_join_in_progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::NewProp_Settings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsSessionBrowserGameSetting",
		sizeof(FAccelByteModelsSessionBrowserGameSetting),
		alignof(FAccelByteModelsSessionBrowserGameSetting),
		Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsSessionBrowserGameSetting"), sizeof(FAccelByteModelsSessionBrowserGameSetting), Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSessionBrowserGameSetting_Hash() { return 1675734000U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
