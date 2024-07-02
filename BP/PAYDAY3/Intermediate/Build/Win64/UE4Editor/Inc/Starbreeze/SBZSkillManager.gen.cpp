// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillManager();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatisticsManager();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkill_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillLineData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillLine_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnSkillLineRequestResultDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZSkillManager::execEquipSkill)
	{
		P_GET_OBJECT(USBZSkill,Z_Param_Skill);
		P_GET_STRUCT_REF(FSBZPlayerLoadoutConfig,Z_Param_Out_PlayerLoadoutConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EquipSkill(Z_Param_Skill,Z_Param_Out_PlayerLoadoutConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSkillManager::execEquipSkills)
	{
		P_GET_TARRAY_REF(USBZSkill*,Z_Param_Out_Skills);
		P_GET_STRUCT_REF(FSBZPlayerLoadoutConfig,Z_Param_Out_PlayerLoadoutConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EquipSkills(Z_Param_Out_Skills,Z_Param_Out_PlayerLoadoutConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSkillManager::execGetEarnedSkillPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetEarnedSkillPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSkillManager::execGetMaxProgressLevel)
	{
		P_GET_OBJECT(USBZSkillLineData,Z_Param_SkillLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxProgressLevel(Z_Param_SkillLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSkillManager::execGetPlayerSkillLine)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AccelByteSkuNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSkillLine**)Z_Param__Result=P_THIS->GetPlayerSkillLine(Z_Param_Out_AccelByteSkuNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSkillManager::execGetPlayerSkills)
	{
		P_GET_TARRAY_REF(USBZSkillLine*,Z_Param_Out_PlayerSkills);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerSkills(Z_Param_Out_PlayerSkills);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSkillManager::execGetPlayerStatsForSkill)
	{
		P_GET_OBJECT(ASBZPlayerState,Z_Param_PlayerState);
		P_GET_OBJECT(USBZSkillLineData,Z_Param_SkillLineData);
		P_GET_OBJECT(USBZSkillData,Z_Param_SkillData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSkill**)Z_Param__Result=P_THIS->GetPlayerStatsForSkill(Z_Param_PlayerState,Z_Param_SkillLineData,Z_Param_SkillData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSkillManager::execGetPlayerStatsForSkillLine)
	{
		P_GET_OBJECT(ASBZPlayerState,Z_Param_PlayerState);
		P_GET_OBJECT(USBZSkillLineData,Z_Param_SkillLineData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSkillLine**)Z_Param__Result=P_THIS->GetPlayerStatsForSkillLine(Z_Param_PlayerState,Z_Param_SkillLineData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSkillManager::execGetProgressingSkill)
	{
		P_GET_OBJECT(USBZSkillLine,Z_Param_SkillLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSkill**)Z_Param__Result=P_THIS->GetProgressingSkill(Z_Param_SkillLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSkillManager::execGetSkillManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSkillManager**)Z_Param__Result=USBZSkillManager::GetSkillManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSkillManager::execGetSkillPointsFromInfamyExperience)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InfamyExperience);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkillPointsFromInfamyExperience(Z_Param_InfamyExperience);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSkillManager::execGetSkillPointsFromInfamyLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InfamyLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkillPointsFromInfamyLevel(Z_Param_InfamyLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSkillManager::execIsSkillEquippable)
	{
		P_GET_OBJECT(USBZSkill,Z_Param_Skill);
		P_GET_STRUCT_REF(FSBZPlayerLoadoutConfig,Z_Param_Out_PlayerLoadoutConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSkillEquippable(Z_Param_Skill,Z_Param_Out_PlayerLoadoutConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSkillManager::execSetResearchMarkerOnSkillLine)
	{
		P_GET_OBJECT(USBZSkillLine,Z_Param_SkillLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResearchMarkerOnSkillLine(Z_Param_SkillLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSkillManager::execUnequipSkill)
	{
		P_GET_OBJECT(USBZSkill,Z_Param_Skill);
		P_GET_STRUCT_REF(FSBZPlayerLoadoutConfig,Z_Param_Out_PlayerLoadoutConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnequipSkill(Z_Param_Skill,Z_Param_Out_PlayerLoadoutConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSkillManager::execUnequipSkills)
	{
		P_GET_TARRAY_REF(USBZSkill*,Z_Param_Out_Skills);
		P_GET_STRUCT_REF(FSBZPlayerLoadoutConfig,Z_Param_Out_PlayerLoadoutConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnequipSkills(Z_Param_Out_Skills,Z_Param_Out_PlayerLoadoutConfig);
		P_NATIVE_END;
	}
	void USBZSkillManager::StaticRegisterNativesUSBZSkillManager()
	{
		UClass* Class = USBZSkillManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EquipSkill", &USBZSkillManager::execEquipSkill },
			{ "EquipSkills", &USBZSkillManager::execEquipSkills },
			{ "GetEarnedSkillPoints", &USBZSkillManager::execGetEarnedSkillPoints },
			{ "GetMaxProgressLevel", &USBZSkillManager::execGetMaxProgressLevel },
			{ "GetPlayerSkillLine", &USBZSkillManager::execGetPlayerSkillLine },
			{ "GetPlayerSkills", &USBZSkillManager::execGetPlayerSkills },
			{ "GetPlayerStatsForSkill", &USBZSkillManager::execGetPlayerStatsForSkill },
			{ "GetPlayerStatsForSkillLine", &USBZSkillManager::execGetPlayerStatsForSkillLine },
			{ "GetProgressingSkill", &USBZSkillManager::execGetProgressingSkill },
			{ "GetSkillManager", &USBZSkillManager::execGetSkillManager },
			{ "GetSkillPointsFromInfamyExperience", &USBZSkillManager::execGetSkillPointsFromInfamyExperience },
			{ "GetSkillPointsFromInfamyLevel", &USBZSkillManager::execGetSkillPointsFromInfamyLevel },
			{ "IsSkillEquippable", &USBZSkillManager::execIsSkillEquippable },
			{ "SetResearchMarkerOnSkillLine", &USBZSkillManager::execSetResearchMarkerOnSkillLine },
			{ "UnequipSkill", &USBZSkillManager::execUnequipSkill },
			{ "UnequipSkills", &USBZSkillManager::execUnequipSkills },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics
	{
		struct SBZSkillManager_eventEquipSkill_Parms
		{
			const USBZSkill* Skill;
			FSBZPlayerLoadoutConfig PlayerLoadoutConfig;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skill;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLoadoutConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::NewProp_Skill_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::NewProp_Skill = { "Skill", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventEquipSkill_Parms, Skill), Z_Construct_UClass_USBZSkill_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::NewProp_Skill_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::NewProp_Skill_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::NewProp_PlayerLoadoutConfig = { "PlayerLoadoutConfig", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventEquipSkill_Parms, PlayerLoadoutConfig), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSkillManager_eventEquipSkill_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSkillManager_eventEquipSkill_Parms), &Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::NewProp_Skill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::NewProp_PlayerLoadoutConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "EquipSkill", nullptr, nullptr, sizeof(SBZSkillManager_eventEquipSkill_Parms), Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_EquipSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_EquipSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics
	{
		struct SBZSkillManager_eventEquipSkills_Parms
		{
			TArray<USBZSkill*> Skills;
			FSBZPlayerLoadoutConfig PlayerLoadoutConfig;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skills_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Skills;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLoadoutConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::NewProp_Skills_Inner = { "Skills", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSkill_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::NewProp_Skills = { "Skills", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventEquipSkills_Parms, Skills), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::NewProp_PlayerLoadoutConfig = { "PlayerLoadoutConfig", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventEquipSkills_Parms, PlayerLoadoutConfig), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSkillManager_eventEquipSkills_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSkillManager_eventEquipSkills_Parms), &Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::NewProp_Skills_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::NewProp_Skills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::NewProp_PlayerLoadoutConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "EquipSkills", nullptr, nullptr, sizeof(SBZSkillManager_eventEquipSkills_Parms), Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_EquipSkills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_EquipSkills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSkillManager_GetEarnedSkillPoints_Statics
	{
		struct SBZSkillManager_eventGetEarnedSkillPoints_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSkillManager_GetEarnedSkillPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetEarnedSkillPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_GetEarnedSkillPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetEarnedSkillPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetEarnedSkillPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_GetEarnedSkillPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "GetEarnedSkillPoints", nullptr, nullptr, sizeof(SBZSkillManager_eventGetEarnedSkillPoints_Parms), Z_Construct_UFunction_USBZSkillManager_GetEarnedSkillPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetEarnedSkillPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetEarnedSkillPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetEarnedSkillPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_GetEarnedSkillPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_GetEarnedSkillPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics
	{
		struct SBZSkillManager_eventGetMaxProgressLevel_Parms
		{
			const USBZSkillLineData* SkillLine;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillLine;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics::NewProp_SkillLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics::NewProp_SkillLine = { "SkillLine", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetMaxProgressLevel_Parms, SkillLine), Z_Construct_UClass_USBZSkillLineData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics::NewProp_SkillLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics::NewProp_SkillLine_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetMaxProgressLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics::NewProp_SkillLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "GetMaxProgressLevel", nullptr, nullptr, sizeof(SBZSkillManager_eventGetMaxProgressLevel_Parms), Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics
	{
		struct SBZSkillManager_eventGetPlayerSkillLine_Parms
		{
			FName AccelByteSkuNo;
			USBZSkillLine* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteSkuNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AccelByteSkuNo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics::NewProp_AccelByteSkuNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics::NewProp_AccelByteSkuNo = { "AccelByteSkuNo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetPlayerSkillLine_Parms, AccelByteSkuNo), METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics::NewProp_AccelByteSkuNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics::NewProp_AccelByteSkuNo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetPlayerSkillLine_Parms, ReturnValue), Z_Construct_UClass_USBZSkillLine_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics::NewProp_AccelByteSkuNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "GetPlayerSkillLine", nullptr, nullptr, sizeof(SBZSkillManager_eventGetPlayerSkillLine_Parms), Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSkillManager_GetPlayerSkills_Statics
	{
		struct SBZSkillManager_eventGetPlayerSkills_Parms
		{
			TArray<USBZSkillLine*> PlayerSkills;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerSkills_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerSkills;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_GetPlayerSkills_Statics::NewProp_PlayerSkills_Inner = { "PlayerSkills", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSkillLine_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZSkillManager_GetPlayerSkills_Statics::NewProp_PlayerSkills = { "PlayerSkills", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetPlayerSkills_Parms, PlayerSkills), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_GetPlayerSkills_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetPlayerSkills_Statics::NewProp_PlayerSkills_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetPlayerSkills_Statics::NewProp_PlayerSkills,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetPlayerSkills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_GetPlayerSkills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "GetPlayerSkills", nullptr, nullptr, sizeof(SBZSkillManager_eventGetPlayerSkills_Parms), Z_Construct_UFunction_USBZSkillManager_GetPlayerSkills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetPlayerSkills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetPlayerSkills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetPlayerSkills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_GetPlayerSkills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_GetPlayerSkills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics
	{
		struct SBZSkillManager_eventGetPlayerStatsForSkill_Parms
		{
			const ASBZPlayerState* PlayerState;
			const USBZSkillLineData* SkillLineData;
			const USBZSkillData* SkillData;
			USBZSkill* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLineData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillLineData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_PlayerState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetPlayerStatsForSkill_Parms, PlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_SkillLineData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_SkillLineData = { "SkillLineData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetPlayerStatsForSkill_Parms, SkillLineData), Z_Construct_UClass_USBZSkillLineData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_SkillLineData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_SkillLineData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_SkillData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_SkillData = { "SkillData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetPlayerStatsForSkill_Parms, SkillData), Z_Construct_UClass_USBZSkillData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_SkillData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_SkillData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetPlayerStatsForSkill_Parms, ReturnValue), Z_Construct_UClass_USBZSkill_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_SkillLineData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_SkillData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "GetPlayerStatsForSkill", nullptr, nullptr, sizeof(SBZSkillManager_eventGetPlayerStatsForSkill_Parms), Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics
	{
		struct SBZSkillManager_eventGetPlayerStatsForSkillLine_Parms
		{
			const ASBZPlayerState* PlayerState;
			const USBZSkillLineData* SkillLineData;
			USBZSkillLine* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLineData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillLineData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::NewProp_PlayerState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetPlayerStatsForSkillLine_Parms, PlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::NewProp_SkillLineData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::NewProp_SkillLineData = { "SkillLineData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetPlayerStatsForSkillLine_Parms, SkillLineData), Z_Construct_UClass_USBZSkillLineData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::NewProp_SkillLineData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::NewProp_SkillLineData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetPlayerStatsForSkillLine_Parms, ReturnValue), Z_Construct_UClass_USBZSkillLine_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::NewProp_SkillLineData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "GetPlayerStatsForSkillLine", nullptr, nullptr, sizeof(SBZSkillManager_eventGetPlayerStatsForSkillLine_Parms), Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics
	{
		struct SBZSkillManager_eventGetProgressingSkill_Parms
		{
			const USBZSkillLine* SkillLine;
			USBZSkill* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillLine;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics::NewProp_SkillLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics::NewProp_SkillLine = { "SkillLine", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetProgressingSkill_Parms, SkillLine), Z_Construct_UClass_USBZSkillLine_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics::NewProp_SkillLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics::NewProp_SkillLine_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetProgressingSkill_Parms, ReturnValue), Z_Construct_UClass_USBZSkill_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics::NewProp_SkillLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "GetProgressingSkill", nullptr, nullptr, sizeof(SBZSkillManager_eventGetProgressingSkill_Parms), Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics
	{
		struct SBZSkillManager_eventGetSkillManager_Parms
		{
			const UObject* WorldContextObject;
			USBZSkillManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetSkillManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetSkillManager_Parms, ReturnValue), Z_Construct_UClass_USBZSkillManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "GetSkillManager", nullptr, nullptr, sizeof(SBZSkillManager_eventGetSkillManager_Parms), Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_GetSkillManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_GetSkillManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyExperience_Statics
	{
		struct SBZSkillManager_eventGetSkillPointsFromInfamyExperience_Parms
		{
			int32 InfamyExperience;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyExperience;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyExperience_Statics::NewProp_InfamyExperience = { "InfamyExperience", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetSkillPointsFromInfamyExperience_Parms, InfamyExperience), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyExperience_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetSkillPointsFromInfamyExperience_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyExperience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyExperience_Statics::NewProp_InfamyExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyExperience_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyExperience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "GetSkillPointsFromInfamyExperience", nullptr, nullptr, sizeof(SBZSkillManager_eventGetSkillPointsFromInfamyExperience_Parms), Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyLevel_Statics
	{
		struct SBZSkillManager_eventGetSkillPointsFromInfamyLevel_Parms
		{
			int32 InfamyLevel;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyLevel_Statics::NewProp_InfamyLevel = { "InfamyLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetSkillPointsFromInfamyLevel_Parms, InfamyLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventGetSkillPointsFromInfamyLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyLevel_Statics::NewProp_InfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "GetSkillPointsFromInfamyLevel", nullptr, nullptr, sizeof(SBZSkillManager_eventGetSkillPointsFromInfamyLevel_Parms), Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics
	{
		struct SBZSkillManager_eventIsSkillEquippable_Parms
		{
			const USBZSkill* Skill;
			FSBZPlayerLoadoutConfig PlayerLoadoutConfig;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLoadoutConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLoadoutConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::NewProp_Skill_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::NewProp_Skill = { "Skill", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventIsSkillEquippable_Parms, Skill), Z_Construct_UClass_USBZSkill_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::NewProp_Skill_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::NewProp_Skill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::NewProp_PlayerLoadoutConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::NewProp_PlayerLoadoutConfig = { "PlayerLoadoutConfig", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventIsSkillEquippable_Parms, PlayerLoadoutConfig), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::NewProp_PlayerLoadoutConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::NewProp_PlayerLoadoutConfig_MetaData)) };
	void Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSkillManager_eventIsSkillEquippable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSkillManager_eventIsSkillEquippable_Parms), &Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::NewProp_Skill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::NewProp_PlayerLoadoutConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "IsSkillEquippable", nullptr, nullptr, sizeof(SBZSkillManager_eventIsSkillEquippable_Parms), Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine_Statics
	{
		struct SBZSkillManager_eventSetResearchMarkerOnSkillLine_Parms
		{
			const USBZSkillLine* SkillLine;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine_Statics::NewProp_SkillLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine_Statics::NewProp_SkillLine = { "SkillLine", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventSetResearchMarkerOnSkillLine_Parms, SkillLine), Z_Construct_UClass_USBZSkillLine_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine_Statics::NewProp_SkillLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine_Statics::NewProp_SkillLine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine_Statics::NewProp_SkillLine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "SetResearchMarkerOnSkillLine", nullptr, nullptr, sizeof(SBZSkillManager_eventSetResearchMarkerOnSkillLine_Parms), Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics
	{
		struct SBZSkillManager_eventUnequipSkill_Parms
		{
			const USBZSkill* Skill;
			FSBZPlayerLoadoutConfig PlayerLoadoutConfig;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skill;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLoadoutConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::NewProp_Skill_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::NewProp_Skill = { "Skill", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventUnequipSkill_Parms, Skill), Z_Construct_UClass_USBZSkill_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::NewProp_Skill_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::NewProp_Skill_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::NewProp_PlayerLoadoutConfig = { "PlayerLoadoutConfig", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventUnequipSkill_Parms, PlayerLoadoutConfig), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSkillManager_eventUnequipSkill_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSkillManager_eventUnequipSkill_Parms), &Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::NewProp_Skill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::NewProp_PlayerLoadoutConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "UnequipSkill", nullptr, nullptr, sizeof(SBZSkillManager_eventUnequipSkill_Parms), Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_UnequipSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_UnequipSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics
	{
		struct SBZSkillManager_eventUnequipSkills_Parms
		{
			TArray<USBZSkill*> Skills;
			FSBZPlayerLoadoutConfig PlayerLoadoutConfig;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skills_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Skills;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLoadoutConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::NewProp_Skills_Inner = { "Skills", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSkill_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::NewProp_Skills = { "Skills", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventUnequipSkills_Parms, Skills), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::NewProp_PlayerLoadoutConfig = { "PlayerLoadoutConfig", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSkillManager_eventUnequipSkills_Parms, PlayerLoadoutConfig), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSkillManager_eventUnequipSkills_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSkillManager_eventUnequipSkills_Parms), &Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::NewProp_Skills_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::NewProp_Skills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::NewProp_PlayerLoadoutConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSkillManager, nullptr, "UnequipSkills", nullptr, nullptr, sizeof(SBZSkillManager_eventUnequipSkills_Parms), Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSkillManager_UnequipSkills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSkillManager_UnequipSkills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSkillManager_NoRegister()
	{
		return USBZSkillManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchMarkerResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResearchMarkerResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifyingSkillLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModifyingSkillLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStatisticsManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSkillManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSkillManager_EquipSkill, "EquipSkill" }, // 3538585256
		{ &Z_Construct_UFunction_USBZSkillManager_EquipSkills, "EquipSkills" }, // 3928309819
		{ &Z_Construct_UFunction_USBZSkillManager_GetEarnedSkillPoints, "GetEarnedSkillPoints" }, // 3254233858
		{ &Z_Construct_UFunction_USBZSkillManager_GetMaxProgressLevel, "GetMaxProgressLevel" }, // 2164026638
		{ &Z_Construct_UFunction_USBZSkillManager_GetPlayerSkillLine, "GetPlayerSkillLine" }, // 1651908551
		{ &Z_Construct_UFunction_USBZSkillManager_GetPlayerSkills, "GetPlayerSkills" }, // 2044181508
		{ &Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkill, "GetPlayerStatsForSkill" }, // 3793403866
		{ &Z_Construct_UFunction_USBZSkillManager_GetPlayerStatsForSkillLine, "GetPlayerStatsForSkillLine" }, // 1020530969
		{ &Z_Construct_UFunction_USBZSkillManager_GetProgressingSkill, "GetProgressingSkill" }, // 1561560364
		{ &Z_Construct_UFunction_USBZSkillManager_GetSkillManager, "GetSkillManager" }, // 2496724868
		{ &Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyExperience, "GetSkillPointsFromInfamyExperience" }, // 2469254068
		{ &Z_Construct_UFunction_USBZSkillManager_GetSkillPointsFromInfamyLevel, "GetSkillPointsFromInfamyLevel" }, // 551833864
		{ &Z_Construct_UFunction_USBZSkillManager_IsSkillEquippable, "IsSkillEquippable" }, // 4261032245
		{ &Z_Construct_UFunction_USBZSkillManager_SetResearchMarkerOnSkillLine, "SetResearchMarkerOnSkillLine" }, // 1032934599
		{ &Z_Construct_UFunction_USBZSkillManager_UnequipSkill, "UnequipSkill" }, // 441509800
		{ &Z_Construct_UFunction_USBZSkillManager_UnequipSkills, "UnequipSkills" }, // 1613370789
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillManager_Statics::NewProp_ResearchMarkerResultDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillManager" },
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZSkillManager_Statics::NewProp_ResearchMarkerResultDelegate = { "ResearchMarkerResultDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillManager, ResearchMarkerResultDelegate), Z_Construct_UDelegateFunction_Starbreeze_OnSkillLineRequestResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZSkillManager_Statics::NewProp_ResearchMarkerResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillManager_Statics::NewProp_ResearchMarkerResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillManager_Statics::NewProp_ModifyingSkillLine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillManager" },
		{ "ModuleRelativePath", "Public/SBZSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSkillManager_Statics::NewProp_ModifyingSkillLine = { "ModifyingSkillLine", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillManager, ModifyingSkillLine), Z_Construct_UClass_USBZSkillLine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSkillManager_Statics::NewProp_ModifyingSkillLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillManager_Statics::NewProp_ModifyingSkillLine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkillManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillManager_Statics::NewProp_ResearchMarkerResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillManager_Statics::NewProp_ModifyingSkillLine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillManager_Statics::ClassParams = {
		&USBZSkillManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSkillManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillManager, 1806297606);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillManager>()
	{
		return USBZSkillManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillManager(Z_Construct_UClass_USBZSkillManager, &USBZSkillManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
