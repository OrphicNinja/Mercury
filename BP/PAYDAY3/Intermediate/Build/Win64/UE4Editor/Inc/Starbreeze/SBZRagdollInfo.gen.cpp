// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRagdollInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRagdollInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRagdollInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSBZRagdollInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRagdollInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRagdollInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRagdollInfo"), sizeof(FSBZRagdollInfo), Get_Z_Construct_UScriptStruct_FSBZRagdollInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRagdollInfo>()
{
	return FSBZRagdollInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRagdollInfo(FSBZRagdollInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRagdollInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRagdollInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRagdollInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZRagdollInfo>(FName(TEXT("SBZRagdollInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRagdollInfo;
	struct Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerHipsLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerHipsLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientHipsLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientHipsLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevClientHipsLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevClientHipsLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionlessTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotionlessTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCharacterInitialized_MetaData[];
#endif
		static void NewProp_bIsCharacterInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCharacterInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsServerHipsLocationValid_MetaData[];
#endif
		static void NewProp_bIsServerHipsLocationValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsServerHipsLocationValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRagdollInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRagdollInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRagdollInfo" },
		{ "ModuleRelativePath", "Public/SBZRagdollInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRagdollInfo, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_ServerHipsLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRagdollInfo" },
		{ "ModuleRelativePath", "Public/SBZRagdollInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_ServerHipsLocation = { "ServerHipsLocation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRagdollInfo, ServerHipsLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_ServerHipsLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_ServerHipsLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_ClientHipsLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRagdollInfo" },
		{ "ModuleRelativePath", "Public/SBZRagdollInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_ClientHipsLocation = { "ClientHipsLocation", nullptr, (EPropertyFlags)0x0040000080000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRagdollInfo, ClientHipsLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_ClientHipsLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_ClientHipsLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_PrevClientHipsLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRagdollInfo" },
		{ "ModuleRelativePath", "Public/SBZRagdollInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_PrevClientHipsLocation = { "PrevClientHipsLocation", nullptr, (EPropertyFlags)0x0040000080000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRagdollInfo, PrevClientHipsLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_PrevClientHipsLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_PrevClientHipsLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_MotionlessTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRagdollInfo" },
		{ "ModuleRelativePath", "Public/SBZRagdollInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_MotionlessTimer = { "MotionlessTimer", nullptr, (EPropertyFlags)0x0040000080000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRagdollInfo, MotionlessTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_MotionlessTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_MotionlessTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_NetID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRagdollInfo" },
		{ "ModuleRelativePath", "Public/SBZRagdollInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_NetID = { "NetID", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRagdollInfo, NetID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_NetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_NetID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_bIsCharacterInitialized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRagdollInfo" },
		{ "ModuleRelativePath", "Public/SBZRagdollInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_bIsCharacterInitialized_SetBit(void* Obj)
	{
		((FSBZRagdollInfo*)Obj)->bIsCharacterInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_bIsCharacterInitialized = { "bIsCharacterInitialized", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZRagdollInfo), &Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_bIsCharacterInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_bIsCharacterInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_bIsCharacterInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_bIsServerHipsLocationValid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRagdollInfo" },
		{ "ModuleRelativePath", "Public/SBZRagdollInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_bIsServerHipsLocationValid_SetBit(void* Obj)
	{
		((FSBZRagdollInfo*)Obj)->bIsServerHipsLocationValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_bIsServerHipsLocationValid = { "bIsServerHipsLocationValid", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZRagdollInfo), &Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_bIsServerHipsLocationValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_bIsServerHipsLocationValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_bIsServerHipsLocationValid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_ServerHipsLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_ClientHipsLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_PrevClientHipsLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_MotionlessTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_NetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_bIsCharacterInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::NewProp_bIsServerHipsLocationValid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRagdollInfo",
		sizeof(FSBZRagdollInfo),
		alignof(FSBZRagdollInfo),
		Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRagdollInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRagdollInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRagdollInfo"), sizeof(FSBZRagdollInfo), Get_Z_Construct_UScriptStruct_FSBZRagdollInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRagdollInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRagdollInfo_Hash() { return 1811350152U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
