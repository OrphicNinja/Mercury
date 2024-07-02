// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPhoneme.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPhoneme() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPhoneme();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPhonemeType();
// End Cross Module References
class UScriptStruct* FSBZPhoneme::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPhoneme_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPhoneme, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPhoneme"), sizeof(FSBZPhoneme), Get_Z_Construct_UScriptStruct_FSBZPhoneme_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPhoneme>()
{
	return FSBZPhoneme::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPhoneme(FSBZPhoneme::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPhoneme"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPhoneme
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPhoneme()
	{
		UScriptStruct::DeferCppStructOps<FSBZPhoneme>(FName(TEXT("SBZPhoneme")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPhoneme;
	struct Z_Construct_UScriptStruct_FSBZPhoneme_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_BlendInStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInStartValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendInStartValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_BlendInEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInEndValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendInEndValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_ControlStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlStartValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControlStartValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_BlendOutStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_BlendOutEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutStartValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendOutStartValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutEndValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendOutEndValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Phoneme_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Phoneme_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Phoneme;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPhoneme_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPhoneme.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPhoneme>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhoneme" },
		{ "ModuleRelativePath", "Public/SBZPhoneme.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInStartTime = { "BlendInStartTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPhoneme, BlendInStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInStartValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhoneme" },
		{ "ModuleRelativePath", "Public/SBZPhoneme.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInStartValue = { "BlendInStartValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPhoneme, BlendInStartValue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInStartValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInStartValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInEndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhoneme" },
		{ "ModuleRelativePath", "Public/SBZPhoneme.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInEndTime = { "BlendInEndTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPhoneme, BlendInEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInEndValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhoneme" },
		{ "ModuleRelativePath", "Public/SBZPhoneme.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInEndValue = { "BlendInEndValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPhoneme, BlendInEndValue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInEndValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInEndValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_ControlStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhoneme" },
		{ "ModuleRelativePath", "Public/SBZPhoneme.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_ControlStartTime = { "ControlStartTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPhoneme, ControlStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_ControlStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_ControlStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_ControlStartValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhoneme" },
		{ "ModuleRelativePath", "Public/SBZPhoneme.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_ControlStartValue = { "ControlStartValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPhoneme, ControlStartValue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_ControlStartValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_ControlStartValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhoneme" },
		{ "ModuleRelativePath", "Public/SBZPhoneme.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutStartTime = { "BlendOutStartTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPhoneme, BlendOutStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutEndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhoneme" },
		{ "ModuleRelativePath", "Public/SBZPhoneme.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutEndTime = { "BlendOutEndTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPhoneme, BlendOutEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutStartValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhoneme" },
		{ "ModuleRelativePath", "Public/SBZPhoneme.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutStartValue = { "BlendOutStartValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPhoneme, BlendOutStartValue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutStartValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutStartValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutEndValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhoneme" },
		{ "ModuleRelativePath", "Public/SBZPhoneme.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutEndValue = { "BlendOutEndValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPhoneme, BlendOutEndValue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutEndValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutEndValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_Phoneme_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_Phoneme_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhoneme" },
		{ "ModuleRelativePath", "Public/SBZPhoneme.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_Phoneme = { "Phoneme", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPhoneme, Phoneme), Z_Construct_UEnum_Starbreeze_ESBZPhonemeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_Phoneme_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_Phoneme_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPhoneme_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInStartValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendInEndValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_ControlStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_ControlStartValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutStartValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_BlendOutEndValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_Phoneme_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPhoneme_Statics::NewProp_Phoneme,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPhoneme_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPhoneme",
		sizeof(FSBZPhoneme),
		alignof(FSBZPhoneme),
		Z_Construct_UScriptStruct_FSBZPhoneme_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneme_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPhoneme()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPhoneme_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPhoneme"), sizeof(FSBZPhoneme), Get_Z_Construct_UScriptStruct_FSBZPhoneme_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPhoneme_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPhoneme_Hash() { return 202206112U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
