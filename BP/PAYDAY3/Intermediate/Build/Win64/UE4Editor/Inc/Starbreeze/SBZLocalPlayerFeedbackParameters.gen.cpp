// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLocalPlayerFeedbackParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLocalPlayerFeedbackParameters() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FSBZLocalPlayerFeedbackParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLocalPlayerFeedbackParameters"), sizeof(FSBZLocalPlayerFeedbackParameters), Get_Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLocalPlayerFeedbackParameters>()
{
	return FSBZLocalPlayerFeedbackParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLocalPlayerFeedbackParameters(FSBZLocalPlayerFeedbackParameters::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLocalPlayerFeedbackParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLocalPlayerFeedbackParameters
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLocalPlayerFeedbackParameters()
	{
		UScriptStruct::DeferCppStructOps<FSBZLocalPlayerFeedbackParameters>(FName(TEXT("SBZLocalPlayerFeedbackParameters")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLocalPlayerFeedbackParameters;
	struct Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeedbackClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FeedbackClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAutoRemoved_MetaData[];
#endif
		static void NewProp_bIsAutoRemoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAutoRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCameraAsOrigin_MetaData[];
#endif
		static void NewProp_bCameraAsOrigin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCameraAsOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SustainTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SustainTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedbackParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLocalPlayerFeedbackParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_FeedbackClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedbackParameters" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedbackParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_FeedbackClass = { "FeedbackClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLocalPlayerFeedbackParameters, FeedbackClass), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_FeedbackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_FeedbackClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_Intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedbackParameters" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedbackParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLocalPlayerFeedbackParameters, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_bIsAutoRemoved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedbackParameters" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedbackParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_bIsAutoRemoved_SetBit(void* Obj)
	{
		((FSBZLocalPlayerFeedbackParameters*)Obj)->bIsAutoRemoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_bIsAutoRemoved = { "bIsAutoRemoved", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZLocalPlayerFeedbackParameters), &Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_bIsAutoRemoved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_bIsAutoRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_bIsAutoRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_bCameraAsOrigin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedbackParameters" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedbackParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_bCameraAsOrigin_SetBit(void* Obj)
	{
		((FSBZLocalPlayerFeedbackParameters*)Obj)->bCameraAsOrigin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_bCameraAsOrigin = { "bCameraAsOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZLocalPlayerFeedbackParameters), &Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_bCameraAsOrigin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_bCameraAsOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_bCameraAsOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_Origin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedbackParameters" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedbackParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLocalPlayerFeedbackParameters, Origin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_SustainTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedbackParameters" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedbackParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_SustainTime = { "SustainTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLocalPlayerFeedbackParameters, SustainTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_SustainTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_SustainTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_FeedbackClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_bIsAutoRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_bCameraAsOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::NewProp_SustainTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLocalPlayerFeedbackParameters",
		sizeof(FSBZLocalPlayerFeedbackParameters),
		alignof(FSBZLocalPlayerFeedbackParameters),
		Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLocalPlayerFeedbackParameters"), sizeof(FSBZLocalPlayerFeedbackParameters), Get_Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackParameters_Hash() { return 3439406912U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
