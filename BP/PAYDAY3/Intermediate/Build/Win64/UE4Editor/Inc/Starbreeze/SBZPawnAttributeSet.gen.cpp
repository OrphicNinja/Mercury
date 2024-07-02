// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPawnAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPawnAttributeSet() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnAttributeSet_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZPawnAttributeSet::execMulticast_SetArmor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewCurrentValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetArmor_Implementation(Z_Param_NewCurrentValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPawnAttributeSet::execMulticast_SetHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewCurrentValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetHealth_Implementation(Z_Param_NewCurrentValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPawnAttributeSet::execMulticast_SetOverHeal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewCurrentValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetOverHeal_Implementation(Z_Param_NewCurrentValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPawnAttributeSet::execOnRep_Armor)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldArmor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Armor(Z_Param_Out_OldArmor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPawnAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPawnAttributeSet::execOnRep_OverHeal)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldOverHeal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OverHeal(Z_Param_Out_OldOverHeal);
		P_NATIVE_END;
	}
	static FName NAME_USBZPawnAttributeSet_Multicast_SetArmor = FName(TEXT("Multicast_SetArmor"));
	void USBZPawnAttributeSet::Multicast_SetArmor(float NewCurrentValue)
	{
		SBZPawnAttributeSet_eventMulticast_SetArmor_Parms Parms;
		Parms.NewCurrentValue=NewCurrentValue;
		ProcessEvent(FindFunctionChecked(NAME_USBZPawnAttributeSet_Multicast_SetArmor),&Parms);
	}
	static FName NAME_USBZPawnAttributeSet_Multicast_SetHealth = FName(TEXT("Multicast_SetHealth"));
	void USBZPawnAttributeSet::Multicast_SetHealth(float NewCurrentValue)
	{
		SBZPawnAttributeSet_eventMulticast_SetHealth_Parms Parms;
		Parms.NewCurrentValue=NewCurrentValue;
		ProcessEvent(FindFunctionChecked(NAME_USBZPawnAttributeSet_Multicast_SetHealth),&Parms);
	}
	static FName NAME_USBZPawnAttributeSet_Multicast_SetOverHeal = FName(TEXT("Multicast_SetOverHeal"));
	void USBZPawnAttributeSet::Multicast_SetOverHeal(float NewCurrentValue)
	{
		SBZPawnAttributeSet_eventMulticast_SetOverHeal_Parms Parms;
		Parms.NewCurrentValue=NewCurrentValue;
		ProcessEvent(FindFunctionChecked(NAME_USBZPawnAttributeSet_Multicast_SetOverHeal),&Parms);
	}
	void USBZPawnAttributeSet::StaticRegisterNativesUSBZPawnAttributeSet()
	{
		UClass* Class = USBZPawnAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetArmor", &USBZPawnAttributeSet::execMulticast_SetArmor },
			{ "Multicast_SetHealth", &USBZPawnAttributeSet::execMulticast_SetHealth },
			{ "Multicast_SetOverHeal", &USBZPawnAttributeSet::execMulticast_SetOverHeal },
			{ "OnRep_Armor", &USBZPawnAttributeSet::execOnRep_Armor },
			{ "OnRep_Health", &USBZPawnAttributeSet::execOnRep_Health },
			{ "OnRep_OverHeal", &USBZPawnAttributeSet::execOnRep_OverHeal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetArmor_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewCurrentValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetArmor_Statics::NewProp_NewCurrentValue = { "NewCurrentValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPawnAttributeSet_eventMulticast_SetArmor_Parms, NewCurrentValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetArmor_Statics::NewProp_NewCurrentValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetArmor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPawnAttributeSet, nullptr, "Multicast_SetArmor", nullptr, nullptr, sizeof(SBZPawnAttributeSet_eventMulticast_SetArmor_Parms), Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetArmor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetArmor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetHealth_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewCurrentValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetHealth_Statics::NewProp_NewCurrentValue = { "NewCurrentValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPawnAttributeSet_eventMulticast_SetHealth_Parms, NewCurrentValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetHealth_Statics::NewProp_NewCurrentValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPawnAttributeSet, nullptr, "Multicast_SetHealth", nullptr, nullptr, sizeof(SBZPawnAttributeSet_eventMulticast_SetHealth_Parms), Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetOverHeal_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewCurrentValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetOverHeal_Statics::NewProp_NewCurrentValue = { "NewCurrentValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPawnAttributeSet_eventMulticast_SetOverHeal_Parms, NewCurrentValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetOverHeal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetOverHeal_Statics::NewProp_NewCurrentValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetOverHeal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetOverHeal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPawnAttributeSet, nullptr, "Multicast_SetOverHeal", nullptr, nullptr, sizeof(SBZPawnAttributeSet_eventMulticast_SetOverHeal_Parms), Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetOverHeal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetOverHeal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetOverHeal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetOverHeal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetOverHeal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetOverHeal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor_Statics
	{
		struct SBZPawnAttributeSet_eventOnRep_Armor_Parms
		{
			FGameplayAttributeData OldArmor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldArmor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor = { "OldArmor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPawnAttributeSet_eventOnRep_Armor_Parms, OldArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPawnAttributeSet, nullptr, "OnRep_Armor", nullptr, nullptr, sizeof(SBZPawnAttributeSet_eventOnRep_Armor_Parms), Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health_Statics
	{
		struct SBZPawnAttributeSet_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPawnAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPawnAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(SBZPawnAttributeSet_eventOnRep_Health_Parms), Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal_Statics
	{
		struct SBZPawnAttributeSet_eventOnRep_OverHeal_Parms
		{
			FGameplayAttributeData OldOverHeal;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldOverHeal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldOverHeal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal_Statics::NewProp_OldOverHeal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal_Statics::NewProp_OldOverHeal = { "OldOverHeal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPawnAttributeSet_eventOnRep_OverHeal_Parms, OldOverHeal), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal_Statics::NewProp_OldOverHeal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal_Statics::NewProp_OldOverHeal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal_Statics::NewProp_OldOverHeal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPawnAttributeSet, nullptr, "OnRep_OverHeal", nullptr, nullptr, sizeof(SBZPawnAttributeSet_eventOnRep_OverHeal_Parms), Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPawnAttributeSet_NoRegister()
	{
		return USBZPawnAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_USBZPawnAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverHealDamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverHealDamageMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArmorPenetration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HealthMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArmorMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorHardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArmorHardness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorHurtReactionWeightReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArmorHurtReactionWeightReduction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DealtDamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DealtDamageMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverHeal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverHeal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverHealMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverHealMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDamageTypeCDO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastDamageTypeCDO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastInstigatorPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastInstigatorPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlashedVoiceComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlashedVoiceComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlashedByAllyVoiceComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlashedByAllyVoiceComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitByFragVoiceComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitByFragVoiceComment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPawnAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPawnAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetArmor, "Multicast_SetArmor" }, // 1749699682
		{ &Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetHealth, "Multicast_SetHealth" }, // 3113996306
		{ &Z_Construct_UFunction_USBZPawnAttributeSet_Multicast_SetOverHeal, "Multicast_SetOverHeal" }, // 34926028
		{ &Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Armor, "OnRep_Armor" }, // 3534246041
		{ &Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_Health, "OnRep_Health" }, // 213624451
		{ &Z_Construct_UFunction_USBZPawnAttributeSet_OnRep_OverHeal, "OnRep_OverHeal" }, // 897945207
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPawnAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_OverHealDamageMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_OverHealDamageMultiplier = { "OverHealDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, OverHealDamageMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_OverHealDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_OverHealDamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorPenetration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorPenetration = { "ArmorPenetration", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, ArmorPenetration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorPenetration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_HealthMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_HealthMax = { "HealthMax", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, HealthMax), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_HealthMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_HealthMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_Armor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_Armor = { "Armor", "OnRep_Armor", (EPropertyFlags)0x0010000100002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorMax = { "ArmorMax", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, ArmorMax), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorHardness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorHardness = { "ArmorHardness", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, ArmorHardness), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorHardness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorHardness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorHurtReactionWeightReduction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorHurtReactionWeightReduction = { "ArmorHurtReactionWeightReduction", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, ArmorHurtReactionWeightReduction), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorHurtReactionWeightReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorHurtReactionWeightReduction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_DealtDamageMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_DealtDamageMultiplier = { "DealtDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, DealtDamageMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_DealtDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_DealtDamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_OverHeal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_OverHeal = { "OverHeal", "OnRep_OverHeal", (EPropertyFlags)0x0010000100002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, OverHeal), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_OverHeal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_OverHeal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_OverHealMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_OverHealMax = { "OverHealMax", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, OverHealMax), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_OverHealMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_OverHealMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_LastDamageTypeCDO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_LastDamageTypeCDO = { "LastDamageTypeCDO", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, LastDamageTypeCDO), Z_Construct_UClass_USBZDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_LastDamageTypeCDO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_LastDamageTypeCDO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_LastInstigatorPawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_LastInstigatorPawn = { "LastInstigatorPawn", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, LastInstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_LastInstigatorPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_LastInstigatorPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_FlashedVoiceComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_FlashedVoiceComment = { "FlashedVoiceComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, FlashedVoiceComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_FlashedVoiceComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_FlashedVoiceComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_FlashedByAllyVoiceComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_FlashedByAllyVoiceComment = { "FlashedByAllyVoiceComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, FlashedByAllyVoiceComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_FlashedByAllyVoiceComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_FlashedByAllyVoiceComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_HitByFragVoiceComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZPawnAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_HitByFragVoiceComment = { "HitByFragVoiceComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPawnAttributeSet, HitByFragVoiceComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_HitByFragVoiceComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_HitByFragVoiceComment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPawnAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_OverHealDamageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_HealthMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorHardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_ArmorHurtReactionWeightReduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_DealtDamageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_OverHeal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_OverHealMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_LastDamageTypeCDO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_LastInstigatorPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_FlashedVoiceComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_FlashedByAllyVoiceComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPawnAttributeSet_Statics::NewProp_HitByFragVoiceComment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPawnAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPawnAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPawnAttributeSet_Statics::ClassParams = {
		&USBZPawnAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPawnAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPawnAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPawnAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPawnAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPawnAttributeSet, 1757051164);
	template<> STARBREEZE_API UClass* StaticClass<USBZPawnAttributeSet>()
	{
		return USBZPawnAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPawnAttributeSet(Z_Construct_UClass_USBZPawnAttributeSet, &USBZPawnAttributeSet::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPawnAttributeSet"), false, nullptr, nullptr, nullptr);

	void USBZPawnAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_Armor(TEXT("Armor"));
		static const FName Name_OverHeal(TEXT("OverHeal"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_Armor == ClassReps[(int32)ENetFields_Private::Armor].Property->GetFName()
			&& Name_OverHeal == ClassReps[(int32)ENetFields_Private::OverHeal].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZPawnAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPawnAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
