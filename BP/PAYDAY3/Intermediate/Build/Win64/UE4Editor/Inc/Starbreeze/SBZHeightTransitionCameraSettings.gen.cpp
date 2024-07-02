// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHeightTransitionCameraSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHeightTransitionCameraSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZHeightTransitionCameraSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHeightTransitionCameraSettings"), sizeof(FSBZHeightTransitionCameraSettings), Get_Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHeightTransitionCameraSettings>()
{
	return FSBZHeightTransitionCameraSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHeightTransitionCameraSettings(FSBZHeightTransitionCameraSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHeightTransitionCameraSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHeightTransitionCameraSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHeightTransitionCameraSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZHeightTransitionCameraSettings>(FName(TEXT("SBZHeightTransitionCameraSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHeightTransitionCameraSettings;
	struct Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendCustomCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendCustomCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHeightTransitionCameraSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHeightTransitionCameraSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_TransitionSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeightTransitionCameraSettings" },
		{ "ModuleRelativePath", "Public/SBZHeightTransitionCameraSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_TransitionSpeed = { "TransitionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHeightTransitionCameraSettings, TransitionSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_TransitionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_TransitionSpeed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_BlendOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_BlendOption_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeightTransitionCameraSettings" },
		{ "ModuleRelativePath", "Public/SBZHeightTransitionCameraSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_BlendOption = { "BlendOption", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHeightTransitionCameraSettings, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_BlendOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_BlendOption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_BlendCustomCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeightTransitionCameraSettings" },
		{ "ModuleRelativePath", "Public/SBZHeightTransitionCameraSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_BlendCustomCurve = { "BlendCustomCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHeightTransitionCameraSettings, BlendCustomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_BlendCustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_BlendCustomCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_TransitionSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_BlendOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_BlendOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::NewProp_BlendCustomCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHeightTransitionCameraSettings",
		sizeof(FSBZHeightTransitionCameraSettings),
		alignof(FSBZHeightTransitionCameraSettings),
		Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHeightTransitionCameraSettings"), sizeof(FSBZHeightTransitionCameraSettings), Get_Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings_Hash() { return 4174229360U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
