// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSharedMontageInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSharedMontageInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSharedMontageInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAnimation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSharedMontageInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSharedMontageInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSharedMontageInfo"), sizeof(FSBZSharedMontageInfo), Get_Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSharedMontageInfo>()
{
	return FSBZSharedMontageInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSharedMontageInfo(FSBZSharedMontageInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSharedMontageInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSharedMontageInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSharedMontageInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZSharedMontageInfo>(FName(TEXT("SBZSharedMontageInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSharedMontageInfo;
	struct Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterAnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableAnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEquippableAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftEquippableAnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterAnimInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableAnimInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableAnimInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEquippableAnimInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftEquippableAnimInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSharedMontageInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSharedMontageInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_CharacterAnimMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSharedMontageInfo" },
		{ "ModuleRelativePath", "Public/SBZSharedMontageInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_CharacterAnimMontage = { "CharacterAnimMontage", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSharedMontageInfo, CharacterAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_CharacterAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_CharacterAnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_EquippableAnimMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSharedMontageInfo" },
		{ "ModuleRelativePath", "Public/SBZSharedMontageInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_EquippableAnimMontage = { "EquippableAnimMontage", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSharedMontageInfo, EquippableAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_EquippableAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_EquippableAnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_LeftEquippableAnimMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSharedMontageInfo" },
		{ "ModuleRelativePath", "Public/SBZSharedMontageInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_LeftEquippableAnimMontage = { "LeftEquippableAnimMontage", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSharedMontageInfo, LeftEquippableAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_LeftEquippableAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_LeftEquippableAnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_CharacterAnimInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSharedMontageInfo" },
		{ "ModuleRelativePath", "Public/SBZSharedMontageInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_CharacterAnimInstance = { "CharacterAnimInstance", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSharedMontageInfo, CharacterAnimInstance), Z_Construct_UClass_USBZCharacterAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_CharacterAnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_CharacterAnimInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_EquippableAnimInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSharedMontageInfo" },
		{ "ModuleRelativePath", "Public/SBZSharedMontageInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_EquippableAnimInstance = { "EquippableAnimInstance", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSharedMontageInfo, EquippableAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_EquippableAnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_EquippableAnimInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_LeftEquippableAnimInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSharedMontageInfo" },
		{ "ModuleRelativePath", "Public/SBZSharedMontageInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_LeftEquippableAnimInstance = { "LeftEquippableAnimInstance", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSharedMontageInfo, LeftEquippableAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_LeftEquippableAnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_LeftEquippableAnimInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_CharacterAnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_EquippableAnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_LeftEquippableAnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_CharacterAnimInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_EquippableAnimInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::NewProp_LeftEquippableAnimInstance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSharedMontageInfo",
		sizeof(FSBZSharedMontageInfo),
		alignof(FSBZSharedMontageInfo),
		Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSharedMontageInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSharedMontageInfo"), sizeof(FSBZSharedMontageInfo), Get_Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSharedMontageInfo_Hash() { return 4027807608U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
