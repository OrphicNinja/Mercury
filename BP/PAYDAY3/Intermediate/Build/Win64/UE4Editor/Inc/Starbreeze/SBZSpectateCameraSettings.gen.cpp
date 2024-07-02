// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpectateCameraSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpectateCameraSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpectateCameraSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCameraViewRestriction();
// End Cross Module References
class UScriptStruct* FSBZSpectateCameraSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSpectateCameraSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSpectateCameraSettings"), sizeof(FSBZSpectateCameraSettings), Get_Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSpectateCameraSettings>()
{
	return FSBZSpectateCameraSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSpectateCameraSettings(FSBZSpectateCameraSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSpectateCameraSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpectateCameraSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpectateCameraSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZSpectateCameraSettings>(FName(TEXT("SBZSpectateCameraSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpectateCameraSettings;
	struct Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraViewRestriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraViewRestriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSpringArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetSpringArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSpringArmLengthInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetSpringArmLengthInterpSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSpectateCameraSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSpectateCameraSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewProp_CameraViewRestriction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpectateCameraSettings" },
		{ "ModuleRelativePath", "Public/SBZSpectateCameraSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewProp_CameraViewRestriction = { "CameraViewRestriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpectateCameraSettings, CameraViewRestriction), Z_Construct_UScriptStruct_FSBZCameraViewRestriction, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewProp_CameraViewRestriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewProp_CameraViewRestriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewProp_TargetSpringArmLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpectateCameraSettings" },
		{ "ModuleRelativePath", "Public/SBZSpectateCameraSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewProp_TargetSpringArmLength = { "TargetSpringArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpectateCameraSettings, TargetSpringArmLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewProp_TargetSpringArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewProp_TargetSpringArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewProp_TargetSpringArmLengthInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpectateCameraSettings" },
		{ "ModuleRelativePath", "Public/SBZSpectateCameraSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewProp_TargetSpringArmLengthInterpSpeed = { "TargetSpringArmLengthInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpectateCameraSettings, TargetSpringArmLengthInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewProp_TargetSpringArmLengthInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewProp_TargetSpringArmLengthInterpSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewProp_CameraViewRestriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewProp_TargetSpringArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::NewProp_TargetSpringArmLengthInterpSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSpectateCameraSettings",
		sizeof(FSBZSpectateCameraSettings),
		alignof(FSBZSpectateCameraSettings),
		Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSpectateCameraSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSpectateCameraSettings"), sizeof(FSBZSpectateCameraSettings), Get_Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSpectateCameraSettings_Hash() { return 1032762367U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
