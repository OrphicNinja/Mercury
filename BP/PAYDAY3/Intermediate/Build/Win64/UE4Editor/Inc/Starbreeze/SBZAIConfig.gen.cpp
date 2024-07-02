// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCoverShootingPoints();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3ThreatLevel();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIConfigEvade();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAirPathConfig();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIConfigDPSData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIConfig::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZAIConfig**)Z_Param__Result=USBZAIConfig::Get();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIConfig::execGetShootingPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZCoverShootingPoints>*)Z_Param__Result=P_THIS->GetShootingPoints();
		P_NATIVE_END;
	}
	void USBZAIConfig::StaticRegisterNativesUSBZAIConfig()
	{
		UClass* Class = USBZAIConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZAIConfig::execGet },
			{ "GetShootingPoints", &USBZAIConfig::execGetShootingPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIConfig_Get_Statics
	{
		struct SBZAIConfig_eventGet_Parms
		{
			USBZAIConfig* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIConfig_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIConfig_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZAIConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIConfig_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIConfig_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIConfig_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIConfig_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIConfig, nullptr, "Get", nullptr, nullptr, sizeof(SBZAIConfig_eventGet_Parms), Z_Construct_UFunction_USBZAIConfig_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIConfig_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIConfig_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIConfig_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIConfig_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIConfig_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIConfig_GetShootingPoints_Statics
	{
		struct SBZAIConfig_eventGetShootingPoints_Parms
		{
			TArray<FSBZCoverShootingPoints> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAIConfig_GetShootingPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCoverShootingPoints, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZAIConfig_GetShootingPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIConfig_eventGetShootingPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIConfig_GetShootingPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIConfig_GetShootingPoints_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIConfig_GetShootingPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIConfig_GetShootingPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIConfig_GetShootingPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIConfig, nullptr, "GetShootingPoints", nullptr, nullptr, sizeof(SBZAIConfig_eventGetShootingPoints_Parms), Z_Construct_UFunction_USBZAIConfig_GetShootingPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIConfig_GetShootingPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIConfig_GetShootingPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIConfig_GetShootingPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIConfig_GetShootingPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIConfig_GetShootingPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIConfig_NoRegister()
	{
		return USBZAIConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTimeSliceDecidersLoop_MetaData[];
#endif
		static void NewProp_bTimeSliceDecidersLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTimeSliceDecidersLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecidersLoopTimeSlicingBudget_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_DecidersLoopTimeSlicingBudget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeployableCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeployableCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeployableIgnoreTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeployableIgnoreTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeployableConsumedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeployableConsumedTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Threats_ValueProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Threats_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Threats_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threats_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Threats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Evade_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Evade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootingPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootingPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyFireRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FriendlyFireRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrewAIStealthMarkingCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrewAIStealthMarkingCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthMarkingRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StealthMarkingRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowHealthConsideration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowHealthConsideration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowArmorConsideration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowArmorConsideration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowAmmoConsideration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowAmmoConsideration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeployablesAllowed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDeployablesAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TauntTimeFiredThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TauntTimeFiredThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeFireTimeAddition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeleeFireTimeAddition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredHidingRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreferredHidingRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlitchEffectRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlitchEffectRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurrenderGracePeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SurrenderGracePeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoDownDistanceDelayRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GoDownDistanceDelayRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoDownRandomDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoDownRandomDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscortCircleSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EscortCircleSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirPathConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AirPathConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DPS;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActionClasses_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionClasses_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActionClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OrderClasses_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OrderClasses_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OrderClasses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIConfig_Get, "Get" }, // 110285667
		{ &Z_Construct_UFunction_USBZAIConfig_GetShootingPoints, "GetShootingPoints" }, // 504763020
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_bTimeSliceDecidersLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIConfig_Statics::NewProp_bTimeSliceDecidersLoop_SetBit(void* Obj)
	{
		((USBZAIConfig*)Obj)->bTimeSliceDecidersLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_bTimeSliceDecidersLoop = { "bTimeSliceDecidersLoop", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIConfig), &Z_Construct_UClass_USBZAIConfig_Statics::NewProp_bTimeSliceDecidersLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_bTimeSliceDecidersLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_bTimeSliceDecidersLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DecidersLoopTimeSlicingBudget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DecidersLoopTimeSlicingBudget = { "DecidersLoopTimeSlicingBudget", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, DecidersLoopTimeSlicingBudget), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DecidersLoopTimeSlicingBudget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DecidersLoopTimeSlicingBudget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DeployableCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DeployableCooldown = { "DeployableCooldown", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, DeployableCooldown), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DeployableCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DeployableCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DeployableIgnoreTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DeployableIgnoreTime = { "DeployableIgnoreTime", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, DeployableIgnoreTime), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DeployableIgnoreTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DeployableIgnoreTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DeployableConsumedTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DeployableConsumedTime = { "DeployableConsumedTime", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, DeployableConsumedTime), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DeployableConsumedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DeployableConsumedTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Threats_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Threats_ValueProp = { "Threats", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_Starbreeze_EPD3ThreatLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Threats_Key_KeyProp = { "Threats_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Threats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Threats = { "Threats", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, Threats), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Threats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Threats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Evade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Evade = { "Evade", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, Evade), Z_Construct_UScriptStruct_FSBZAIConfigEvade, METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Evade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Evade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_ShootingPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_ShootingPoints = { "ShootingPoints", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ShootingPoints, USBZAIConfig), STRUCT_OFFSET(USBZAIConfig, ShootingPoints), Z_Construct_UScriptStruct_FSBZCoverShootingPoints, METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_ShootingPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_ShootingPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_FriendlyFireRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_FriendlyFireRadius = { "FriendlyFireRadius", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, FriendlyFireRadius), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_FriendlyFireRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_FriendlyFireRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_CrewAIStealthMarkingCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_CrewAIStealthMarkingCooldown = { "CrewAIStealthMarkingCooldown", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, CrewAIStealthMarkingCooldown), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_CrewAIStealthMarkingCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_CrewAIStealthMarkingCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_StealthMarkingRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_StealthMarkingRange = { "StealthMarkingRange", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, StealthMarkingRange), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_StealthMarkingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_StealthMarkingRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_LowHealthConsideration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_LowHealthConsideration = { "LowHealthConsideration", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, LowHealthConsideration), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_LowHealthConsideration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_LowHealthConsideration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_LowArmorConsideration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_LowArmorConsideration = { "LowArmorConsideration", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, LowArmorConsideration), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_LowArmorConsideration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_LowArmorConsideration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_LowAmmoConsideration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_LowAmmoConsideration = { "LowAmmoConsideration", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, LowAmmoConsideration), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_LowAmmoConsideration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_LowAmmoConsideration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_MaxDeployablesAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_MaxDeployablesAllowed = { "MaxDeployablesAllowed", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(MaxDeployablesAllowed, USBZAIConfig), STRUCT_OFFSET(USBZAIConfig, MaxDeployablesAllowed), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_MaxDeployablesAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_MaxDeployablesAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_TauntTimeFiredThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_TauntTimeFiredThreshold = { "TauntTimeFiredThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(TauntTimeFiredThreshold, USBZAIConfig), STRUCT_OFFSET(USBZAIConfig, TauntTimeFiredThreshold), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_TauntTimeFiredThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_TauntTimeFiredThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_MeleeFireTimeAddition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_MeleeFireTimeAddition = { "MeleeFireTimeAddition", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, MeleeFireTimeAddition), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_MeleeFireTimeAddition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_MeleeFireTimeAddition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_PreferredHidingRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_PreferredHidingRange = { "PreferredHidingRange", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, PreferredHidingRange), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_PreferredHidingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_PreferredHidingRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_GlitchEffectRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_GlitchEffectRange = { "GlitchEffectRange", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, GlitchEffectRange), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_GlitchEffectRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_GlitchEffectRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_SurrenderGracePeriod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_SurrenderGracePeriod = { "SurrenderGracePeriod", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, SurrenderGracePeriod), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_SurrenderGracePeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_SurrenderGracePeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_GoDownDistanceDelayRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_GoDownDistanceDelayRange = { "GoDownDistanceDelayRange", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, GoDownDistanceDelayRange), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_GoDownDistanceDelayRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_GoDownDistanceDelayRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_GoDownRandomDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_GoDownRandomDelay = { "GoDownRandomDelay", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, GoDownRandomDelay), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_GoDownRandomDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_GoDownRandomDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_EscortCircleSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_EscortCircleSize = { "EscortCircleSize", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, EscortCircleSize), METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_EscortCircleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_EscortCircleSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_AirPathConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_AirPathConfig = { "AirPathConfig", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, AirPathConfig), Z_Construct_UScriptStruct_FSBZAirPathConfig, METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_AirPathConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_AirPathConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DPS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DPS = { "DPS", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(DPS, USBZAIConfig), STRUCT_OFFSET(USBZAIConfig, DPS), Z_Construct_UScriptStruct_FSBZAIConfigDPSData, METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DPS_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_ActionClasses_ValueProp = { "ActionClasses", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZAIAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_ActionClasses_Key_KeyProp = { "ActionClasses_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_ActionClasses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_ActionClasses = { "ActionClasses", nullptr, (EPropertyFlags)0x0044000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, ActionClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_ActionClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_ActionClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_OrderClasses_ValueProp = { "OrderClasses", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZAIOrder_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_OrderClasses_Key_KeyProp = { "OrderClasses_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIConfig_Statics::NewProp_OrderClasses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfig" },
		{ "ModuleRelativePath", "Public/SBZAIConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZAIConfig_Statics::NewProp_OrderClasses = { "OrderClasses", nullptr, (EPropertyFlags)0x0044000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIConfig, OrderClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_OrderClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::NewProp_OrderClasses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_bTimeSliceDecidersLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DecidersLoopTimeSlicingBudget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DeployableCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DeployableIgnoreTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DeployableConsumedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Threats_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Threats_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Threats_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Threats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_Evade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_ShootingPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_FriendlyFireRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_CrewAIStealthMarkingCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_StealthMarkingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_LowHealthConsideration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_LowArmorConsideration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_LowAmmoConsideration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_MaxDeployablesAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_TauntTimeFiredThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_MeleeFireTimeAddition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_PreferredHidingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_GlitchEffectRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_SurrenderGracePeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_GoDownDistanceDelayRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_GoDownRandomDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_EscortCircleSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_AirPathConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_DPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_ActionClasses_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_ActionClasses_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_ActionClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_OrderClasses_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_OrderClasses_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIConfig_Statics::NewProp_OrderClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIConfig_Statics::ClassParams = {
		&USBZAIConfig::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIConfig, 3995060204);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIConfig>()
	{
		return USBZAIConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIConfig(Z_Construct_UClass_USBZAIConfig, &USBZAIConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
