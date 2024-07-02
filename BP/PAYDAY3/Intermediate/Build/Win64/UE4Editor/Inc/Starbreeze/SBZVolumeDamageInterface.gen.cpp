// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVolumeDamageInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVolumeDamageInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVolumeDamageInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVolumeDamageInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVolumeDamageEffect_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISBZVolumeDamageInterface::execGetTacticianDiscombobulateVolumeDamageEffectClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UGameplayEffect> *)Z_Param__Result=P_THIS->GetTacticianDiscombobulateVolumeDamageEffectClass_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZVolumeDamageInterface::execGetTacticianDiscombobulateVolumeDamageEffectValueMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,float>*)Z_Param__Result=P_THIS->GetTacticianDiscombobulateVolumeDamageEffectValueMap_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZVolumeDamageInterface::execGetVolumeDamageAddedTagContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetVolumeDamageAddedTagContainer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZVolumeDamageInterface::execGetVolumeDamageArmorPenetration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVolumeDamageArmorPenetration_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZVolumeDamageInterface::execGetVolumeDamageEffectClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<USBZVolumeDamageEffect> *)Z_Param__Result=P_THIS->GetVolumeDamageEffectClass_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZVolumeDamageInterface::execGetVolumeDamageOwner)
	{
		P_GET_OBJECT(UObject,Z_Param_ThisObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetVolumeDamageOwner_Implementation(Z_Param_ThisObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZVolumeDamageInterface::execGetVolumeDamagePerSecond)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVolumeDamagePerSecond_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZVolumeDamageInterface::execGetVolumeDamageTickSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVolumeDamageTickSeconds_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZVolumeDamageInterface::execGetVolumeDamageType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<USBZDamageType> *)Z_Param__Result=P_THIS->GetVolumeDamageType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZVolumeDamageInterface::execGetVolumeOverHealDamageMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVolumeOverHealDamageMultiplier_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZVolumeDamageInterface::execIsVolumeDamageReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVolumeDamageReady_Implementation();
		P_NATIVE_END;
	}
	TSubclassOf<UGameplayEffect>  ISBZVolumeDamageInterface::GetTacticianDiscombobulateVolumeDamageEffectClass() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTacticianDiscombobulateVolumeDamageEffectClass instead.");
		SBZVolumeDamageInterface_eventGetTacticianDiscombobulateVolumeDamageEffectClass_Parms Parms;
		return Parms.ReturnValue;
	}
	TMap<FName,float> ISBZVolumeDamageInterface::GetTacticianDiscombobulateVolumeDamageEffectValueMap() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTacticianDiscombobulateVolumeDamageEffectValueMap instead.");
		SBZVolumeDamageInterface_eventGetTacticianDiscombobulateVolumeDamageEffectValueMap_Parms Parms;
		return Parms.ReturnValue;
	}
	FGameplayTagContainer ISBZVolumeDamageInterface::GetVolumeDamageAddedTagContainer() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetVolumeDamageAddedTagContainer instead.");
		SBZVolumeDamageInterface_eventGetVolumeDamageAddedTagContainer_Parms Parms;
		return Parms.ReturnValue;
	}
	float ISBZVolumeDamageInterface::GetVolumeDamageArmorPenetration() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetVolumeDamageArmorPenetration instead.");
		SBZVolumeDamageInterface_eventGetVolumeDamageArmorPenetration_Parms Parms;
		return Parms.ReturnValue;
	}
	TSubclassOf<USBZVolumeDamageEffect>  ISBZVolumeDamageInterface::GetVolumeDamageEffectClass() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetVolumeDamageEffectClass instead.");
		SBZVolumeDamageInterface_eventGetVolumeDamageEffectClass_Parms Parms;
		return Parms.ReturnValue;
	}
	AActor* ISBZVolumeDamageInterface::GetVolumeDamageOwner(UObject* ThisObject) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetVolumeDamageOwner instead.");
		SBZVolumeDamageInterface_eventGetVolumeDamageOwner_Parms Parms;
		return Parms.ReturnValue;
	}
	float ISBZVolumeDamageInterface::GetVolumeDamagePerSecond() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetVolumeDamagePerSecond instead.");
		SBZVolumeDamageInterface_eventGetVolumeDamagePerSecond_Parms Parms;
		return Parms.ReturnValue;
	}
	float ISBZVolumeDamageInterface::GetVolumeDamageTickSeconds() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetVolumeDamageTickSeconds instead.");
		SBZVolumeDamageInterface_eventGetVolumeDamageTickSeconds_Parms Parms;
		return Parms.ReturnValue;
	}
	TSubclassOf<USBZDamageType>  ISBZVolumeDamageInterface::GetVolumeDamageType() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetVolumeDamageType instead.");
		SBZVolumeDamageInterface_eventGetVolumeDamageType_Parms Parms;
		return Parms.ReturnValue;
	}
	float ISBZVolumeDamageInterface::GetVolumeOverHealDamageMultiplier() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetVolumeOverHealDamageMultiplier instead.");
		SBZVolumeDamageInterface_eventGetVolumeOverHealDamageMultiplier_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ISBZVolumeDamageInterface::IsVolumeDamageReady() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsVolumeDamageReady instead.");
		SBZVolumeDamageInterface_eventIsVolumeDamageReady_Parms Parms;
		return Parms.ReturnValue;
	}
	void USBZVolumeDamageInterface::StaticRegisterNativesUSBZVolumeDamageInterface()
	{
		UClass* Class = USBZVolumeDamageInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTacticianDiscombobulateVolumeDamageEffectClass", &ISBZVolumeDamageInterface::execGetTacticianDiscombobulateVolumeDamageEffectClass },
			{ "GetTacticianDiscombobulateVolumeDamageEffectValueMap", &ISBZVolumeDamageInterface::execGetTacticianDiscombobulateVolumeDamageEffectValueMap },
			{ "GetVolumeDamageAddedTagContainer", &ISBZVolumeDamageInterface::execGetVolumeDamageAddedTagContainer },
			{ "GetVolumeDamageArmorPenetration", &ISBZVolumeDamageInterface::execGetVolumeDamageArmorPenetration },
			{ "GetVolumeDamageEffectClass", &ISBZVolumeDamageInterface::execGetVolumeDamageEffectClass },
			{ "GetVolumeDamageOwner", &ISBZVolumeDamageInterface::execGetVolumeDamageOwner },
			{ "GetVolumeDamagePerSecond", &ISBZVolumeDamageInterface::execGetVolumeDamagePerSecond },
			{ "GetVolumeDamageTickSeconds", &ISBZVolumeDamageInterface::execGetVolumeDamageTickSeconds },
			{ "GetVolumeDamageType", &ISBZVolumeDamageInterface::execGetVolumeDamageType },
			{ "GetVolumeOverHealDamageMultiplier", &ISBZVolumeDamageInterface::execGetVolumeOverHealDamageMultiplier },
			{ "IsVolumeDamageReady", &ISBZVolumeDamageInterface::execIsVolumeDamageReady },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectClass_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageInterface_eventGetTacticianDiscombobulateVolumeDamageEffectClass_Parms, ReturnValue), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVolumeDamageInterface, nullptr, "GetTacticianDiscombobulateVolumeDamageEffectClass", nullptr, nullptr, sizeof(SBZVolumeDamageInterface_eventGetTacticianDiscombobulateVolumeDamageEffectClass_Parms), Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageInterface_eventGetTacticianDiscombobulateVolumeDamageEffectValueMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVolumeDamageInterface, nullptr, "GetTacticianDiscombobulateVolumeDamageEffectValueMap", nullptr, nullptr, sizeof(SBZVolumeDamageInterface_eventGetTacticianDiscombobulateVolumeDamageEffectValueMap_Parms), Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageAddedTagContainer_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageAddedTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageInterface_eventGetVolumeDamageAddedTagContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageAddedTagContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageAddedTagContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageAddedTagContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageAddedTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVolumeDamageInterface, nullptr, "GetVolumeDamageAddedTagContainer", nullptr, nullptr, sizeof(SBZVolumeDamageInterface_eventGetVolumeDamageAddedTagContainer_Parms), Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageAddedTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageAddedTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageAddedTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageAddedTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageAddedTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageAddedTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageArmorPenetration_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageArmorPenetration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageInterface_eventGetVolumeDamageArmorPenetration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageArmorPenetration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageArmorPenetration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageArmorPenetration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageArmorPenetration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVolumeDamageInterface, nullptr, "GetVolumeDamageArmorPenetration", nullptr, nullptr, sizeof(SBZVolumeDamageInterface_eventGetVolumeDamageArmorPenetration_Parms), Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageArmorPenetration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageArmorPenetration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageArmorPenetration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageArmorPenetration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageArmorPenetration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageArmorPenetration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageEffectClass_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageEffectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageInterface_eventGetVolumeDamageEffectClass_Parms, ReturnValue), Z_Construct_UClass_USBZVolumeDamageEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageEffectClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageEffectClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageEffectClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageEffectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVolumeDamageInterface, nullptr, "GetVolumeDamageEffectClass", nullptr, nullptr, sizeof(SBZVolumeDamageInterface_eventGetVolumeDamageEffectClass_Parms), Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageEffectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageEffectClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageEffectClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageEffectClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageEffectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageEffectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageOwner_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThisObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageOwner_Statics::NewProp_ThisObject = { "ThisObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageInterface_eventGetVolumeDamageOwner_Parms, ThisObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageInterface_eventGetVolumeDamageOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageOwner_Statics::NewProp_ThisObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVolumeDamageInterface, nullptr, "GetVolumeDamageOwner", nullptr, nullptr, sizeof(SBZVolumeDamageInterface_eventGetVolumeDamageOwner_Parms), Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamagePerSecond_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamagePerSecond_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageInterface_eventGetVolumeDamagePerSecond_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamagePerSecond_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamagePerSecond_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamagePerSecond_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamagePerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVolumeDamageInterface, nullptr, "GetVolumeDamagePerSecond", nullptr, nullptr, sizeof(SBZVolumeDamageInterface_eventGetVolumeDamagePerSecond_Parms), Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamagePerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamagePerSecond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamagePerSecond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamagePerSecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamagePerSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamagePerSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageTickSeconds_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageTickSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageInterface_eventGetVolumeDamageTickSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageTickSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageTickSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageTickSeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageTickSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVolumeDamageInterface, nullptr, "GetVolumeDamageTickSeconds", nullptr, nullptr, sizeof(SBZVolumeDamageInterface_eventGetVolumeDamageTickSeconds_Parms), Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageTickSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageTickSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageTickSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageTickSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageTickSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageTickSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageType_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageInterface_eventGetVolumeDamageType_Parms, ReturnValue), Z_Construct_UClass_USBZDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVolumeDamageInterface, nullptr, "GetVolumeDamageType", nullptr, nullptr, sizeof(SBZVolumeDamageInterface_eventGetVolumeDamageType_Parms), Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeOverHealDamageMultiplier_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeOverHealDamageMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVolumeDamageInterface_eventGetVolumeOverHealDamageMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeOverHealDamageMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeOverHealDamageMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeOverHealDamageMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeOverHealDamageMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVolumeDamageInterface, nullptr, "GetVolumeOverHealDamageMultiplier", nullptr, nullptr, sizeof(SBZVolumeDamageInterface_eventGetVolumeOverHealDamageMultiplier_Parms), Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeOverHealDamageMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeOverHealDamageMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeOverHealDamageMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeOverHealDamageMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeOverHealDamageMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeOverHealDamageMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVolumeDamageInterface_IsVolumeDamageReady_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZVolumeDamageInterface_IsVolumeDamageReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZVolumeDamageInterface_eventIsVolumeDamageReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVolumeDamageInterface_IsVolumeDamageReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVolumeDamageInterface_eventIsVolumeDamageReady_Parms), &Z_Construct_UFunction_USBZVolumeDamageInterface_IsVolumeDamageReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVolumeDamageInterface_IsVolumeDamageReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVolumeDamageInterface_IsVolumeDamageReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVolumeDamageInterface_IsVolumeDamageReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVolumeDamageInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVolumeDamageInterface_IsVolumeDamageReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVolumeDamageInterface, nullptr, "IsVolumeDamageReady", nullptr, nullptr, sizeof(SBZVolumeDamageInterface_eventIsVolumeDamageReady_Parms), Z_Construct_UFunction_USBZVolumeDamageInterface_IsVolumeDamageReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_IsVolumeDamageReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVolumeDamageInterface_IsVolumeDamageReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVolumeDamageInterface_IsVolumeDamageReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVolumeDamageInterface_IsVolumeDamageReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVolumeDamageInterface_IsVolumeDamageReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZVolumeDamageInterface_NoRegister()
	{
		return USBZVolumeDamageInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZVolumeDamageInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVolumeDamageInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZVolumeDamageInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectClass, "GetTacticianDiscombobulateVolumeDamageEffectClass" }, // 3378249032
		{ &Z_Construct_UFunction_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap, "GetTacticianDiscombobulateVolumeDamageEffectValueMap" }, // 3948348628
		{ &Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageAddedTagContainer, "GetVolumeDamageAddedTagContainer" }, // 3193363368
		{ &Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageArmorPenetration, "GetVolumeDamageArmorPenetration" }, // 4278834341
		{ &Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageEffectClass, "GetVolumeDamageEffectClass" }, // 2805591338
		{ &Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageOwner, "GetVolumeDamageOwner" }, // 3005749037
		{ &Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamagePerSecond, "GetVolumeDamagePerSecond" }, // 2612647361
		{ &Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageTickSeconds, "GetVolumeDamageTickSeconds" }, // 730399176
		{ &Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeDamageType, "GetVolumeDamageType" }, // 679056695
		{ &Z_Construct_UFunction_USBZVolumeDamageInterface_GetVolumeOverHealDamageMultiplier, "GetVolumeOverHealDamageMultiplier" }, // 1087770042
		{ &Z_Construct_UFunction_USBZVolumeDamageInterface_IsVolumeDamageReady, "IsVolumeDamageReady" }, // 1041676478
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVolumeDamageInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVolumeDamageInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZVolumeDamageInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVolumeDamageInterface_Statics::ClassParams = {
		&USBZVolumeDamageInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVolumeDamageInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVolumeDamageInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVolumeDamageInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVolumeDamageInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVolumeDamageInterface, 2307973081);
	template<> STARBREEZE_API UClass* StaticClass<USBZVolumeDamageInterface>()
	{
		return USBZVolumeDamageInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVolumeDamageInterface(Z_Construct_UClass_USBZVolumeDamageInterface, &USBZVolumeDamageInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVolumeDamageInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVolumeDamageInterface);
	static FName NAME_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectClass = FName(TEXT("GetTacticianDiscombobulateVolumeDamageEffectClass"));
	TSubclassOf<UGameplayEffect>  ISBZVolumeDamageInterface::Execute_GetTacticianDiscombobulateVolumeDamageEffectClass(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZVolumeDamageInterface::StaticClass()));
		SBZVolumeDamageInterface_eventGetTacticianDiscombobulateVolumeDamageEffectClass_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectClass);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZVolumeDamageInterface*)(O->GetNativeInterfaceAddress(USBZVolumeDamageInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTacticianDiscombobulateVolumeDamageEffectClass_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap = FName(TEXT("GetTacticianDiscombobulateVolumeDamageEffectValueMap"));
	TMap<FName,float> ISBZVolumeDamageInterface::Execute_GetTacticianDiscombobulateVolumeDamageEffectValueMap(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZVolumeDamageInterface::StaticClass()));
		SBZVolumeDamageInterface_eventGetTacticianDiscombobulateVolumeDamageEffectValueMap_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZVolumeDamageInterface_GetTacticianDiscombobulateVolumeDamageEffectValueMap);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZVolumeDamageInterface*)(O->GetNativeInterfaceAddress(USBZVolumeDamageInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTacticianDiscombobulateVolumeDamageEffectValueMap_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZVolumeDamageInterface_GetVolumeDamageAddedTagContainer = FName(TEXT("GetVolumeDamageAddedTagContainer"));
	FGameplayTagContainer ISBZVolumeDamageInterface::Execute_GetVolumeDamageAddedTagContainer(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZVolumeDamageInterface::StaticClass()));
		SBZVolumeDamageInterface_eventGetVolumeDamageAddedTagContainer_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZVolumeDamageInterface_GetVolumeDamageAddedTagContainer);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZVolumeDamageInterface*)(O->GetNativeInterfaceAddress(USBZVolumeDamageInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetVolumeDamageAddedTagContainer_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZVolumeDamageInterface_GetVolumeDamageArmorPenetration = FName(TEXT("GetVolumeDamageArmorPenetration"));
	float ISBZVolumeDamageInterface::Execute_GetVolumeDamageArmorPenetration(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZVolumeDamageInterface::StaticClass()));
		SBZVolumeDamageInterface_eventGetVolumeDamageArmorPenetration_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZVolumeDamageInterface_GetVolumeDamageArmorPenetration);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZVolumeDamageInterface*)(O->GetNativeInterfaceAddress(USBZVolumeDamageInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetVolumeDamageArmorPenetration_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZVolumeDamageInterface_GetVolumeDamageEffectClass = FName(TEXT("GetVolumeDamageEffectClass"));
	TSubclassOf<USBZVolumeDamageEffect>  ISBZVolumeDamageInterface::Execute_GetVolumeDamageEffectClass(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZVolumeDamageInterface::StaticClass()));
		SBZVolumeDamageInterface_eventGetVolumeDamageEffectClass_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZVolumeDamageInterface_GetVolumeDamageEffectClass);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZVolumeDamageInterface*)(O->GetNativeInterfaceAddress(USBZVolumeDamageInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetVolumeDamageEffectClass_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZVolumeDamageInterface_GetVolumeDamageOwner = FName(TEXT("GetVolumeDamageOwner"));
	AActor* ISBZVolumeDamageInterface::Execute_GetVolumeDamageOwner(const UObject* O, UObject* ThisObject)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZVolumeDamageInterface::StaticClass()));
		SBZVolumeDamageInterface_eventGetVolumeDamageOwner_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZVolumeDamageInterface_GetVolumeDamageOwner);
		if (Func)
		{
			Parms.ThisObject=ThisObject;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZVolumeDamageInterface*)(O->GetNativeInterfaceAddress(USBZVolumeDamageInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetVolumeDamageOwner_Implementation(ThisObject);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZVolumeDamageInterface_GetVolumeDamagePerSecond = FName(TEXT("GetVolumeDamagePerSecond"));
	float ISBZVolumeDamageInterface::Execute_GetVolumeDamagePerSecond(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZVolumeDamageInterface::StaticClass()));
		SBZVolumeDamageInterface_eventGetVolumeDamagePerSecond_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZVolumeDamageInterface_GetVolumeDamagePerSecond);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZVolumeDamageInterface*)(O->GetNativeInterfaceAddress(USBZVolumeDamageInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetVolumeDamagePerSecond_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZVolumeDamageInterface_GetVolumeDamageTickSeconds = FName(TEXT("GetVolumeDamageTickSeconds"));
	float ISBZVolumeDamageInterface::Execute_GetVolumeDamageTickSeconds(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZVolumeDamageInterface::StaticClass()));
		SBZVolumeDamageInterface_eventGetVolumeDamageTickSeconds_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZVolumeDamageInterface_GetVolumeDamageTickSeconds);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZVolumeDamageInterface*)(O->GetNativeInterfaceAddress(USBZVolumeDamageInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetVolumeDamageTickSeconds_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZVolumeDamageInterface_GetVolumeDamageType = FName(TEXT("GetVolumeDamageType"));
	TSubclassOf<USBZDamageType>  ISBZVolumeDamageInterface::Execute_GetVolumeDamageType(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZVolumeDamageInterface::StaticClass()));
		SBZVolumeDamageInterface_eventGetVolumeDamageType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZVolumeDamageInterface_GetVolumeDamageType);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZVolumeDamageInterface*)(O->GetNativeInterfaceAddress(USBZVolumeDamageInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetVolumeDamageType_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZVolumeDamageInterface_GetVolumeOverHealDamageMultiplier = FName(TEXT("GetVolumeOverHealDamageMultiplier"));
	float ISBZVolumeDamageInterface::Execute_GetVolumeOverHealDamageMultiplier(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZVolumeDamageInterface::StaticClass()));
		SBZVolumeDamageInterface_eventGetVolumeOverHealDamageMultiplier_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZVolumeDamageInterface_GetVolumeOverHealDamageMultiplier);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZVolumeDamageInterface*)(O->GetNativeInterfaceAddress(USBZVolumeDamageInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetVolumeOverHealDamageMultiplier_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZVolumeDamageInterface_IsVolumeDamageReady = FName(TEXT("IsVolumeDamageReady"));
	bool ISBZVolumeDamageInterface::Execute_IsVolumeDamageReady(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZVolumeDamageInterface::StaticClass()));
		SBZVolumeDamageInterface_eventIsVolumeDamageReady_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZVolumeDamageInterface_IsVolumeDamageReady);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZVolumeDamageInterface*)(O->GetNativeInterfaceAddress(USBZVolumeDamageInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsVolumeDamageReady_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
