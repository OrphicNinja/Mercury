// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZArmedPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZArmedPawn() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZArmedPawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZArmedPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterAbilityData_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityNodeComputationFrequency();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRangedWeapon_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnLifetime_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProjectileInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTypeInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisibilityRelevant_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZArmedPawn::execGetOwnedGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOwnedGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZArmedPawn::execHasAllMatchingGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAllMatchingGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZArmedPawn::execHasAnyMatchingGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyMatchingGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZArmedPawn::execHasMatchingGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMatchingGameplayTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZArmedPawn::execMulticast_PredictedRagdollDenied)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_HurtReactionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PredictedRagdollDenied_Implementation(Z_Param_HurtReactionIndex);
		P_NATIVE_END;
	}
	static FName NAME_ASBZArmedPawn_Multicast_PredictedRagdollDenied = FName(TEXT("Multicast_PredictedRagdollDenied"));
	void ASBZArmedPawn::Multicast_PredictedRagdollDenied(int32 HurtReactionIndex)
	{
		SBZArmedPawn_eventMulticast_PredictedRagdollDenied_Parms Parms;
		Parms.HurtReactionIndex=HurtReactionIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZArmedPawn_Multicast_PredictedRagdollDenied),&Parms);
	}
	void ASBZArmedPawn::StaticRegisterNativesASBZArmedPawn()
	{
		UClass* Class = ASBZArmedPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwnedGameplayTags", &ASBZArmedPawn::execGetOwnedGameplayTags },
			{ "HasAllMatchingGameplayTags", &ASBZArmedPawn::execHasAllMatchingGameplayTags },
			{ "HasAnyMatchingGameplayTags", &ASBZArmedPawn::execHasAnyMatchingGameplayTags },
			{ "HasMatchingGameplayTag", &ASBZArmedPawn::execHasMatchingGameplayTag },
			{ "Multicast_PredictedRagdollDenied", &ASBZArmedPawn::execMulticast_PredictedRagdollDenied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZArmedPawn_GetOwnedGameplayTags_Statics
	{
		struct SBZArmedPawn_eventGetOwnedGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZArmedPawn_GetOwnedGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArmedPawn_eventGetOwnedGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZArmedPawn_GetOwnedGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZArmedPawn_GetOwnedGameplayTags_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZArmedPawn_GetOwnedGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZArmedPawn_GetOwnedGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZArmedPawn, nullptr, "GetOwnedGameplayTags", nullptr, nullptr, sizeof(SBZArmedPawn_eventGetOwnedGameplayTags_Parms), Z_Construct_UFunction_ASBZArmedPawn_GetOwnedGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZArmedPawn_GetOwnedGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZArmedPawn_GetOwnedGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZArmedPawn_GetOwnedGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZArmedPawn_GetOwnedGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZArmedPawn_GetOwnedGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics
	{
		struct SBZArmedPawn_eventHasAllMatchingGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArmedPawn_eventHasAllMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData)) };
	void Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZArmedPawn_eventHasAllMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZArmedPawn_eventHasAllMatchingGameplayTags_Parms), &Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZArmedPawn, nullptr, "HasAllMatchingGameplayTags", nullptr, nullptr, sizeof(SBZArmedPawn_eventHasAllMatchingGameplayTags_Parms), Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics
	{
		struct SBZArmedPawn_eventHasAnyMatchingGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArmedPawn_eventHasAnyMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData)) };
	void Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZArmedPawn_eventHasAnyMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZArmedPawn_eventHasAnyMatchingGameplayTags_Parms), &Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZArmedPawn, nullptr, "HasAnyMatchingGameplayTags", nullptr, nullptr, sizeof(SBZArmedPawn_eventHasAnyMatchingGameplayTags_Parms), Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag_Statics
	{
		struct SBZArmedPawn_eventHasMatchingGameplayTag_Parms
		{
			FGameplayTag TagToCheck;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArmedPawn_eventHasMatchingGameplayTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZArmedPawn_eventHasMatchingGameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZArmedPawn_eventHasMatchingGameplayTag_Parms), &Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag_Statics::NewProp_TagToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZArmedPawn, nullptr, "HasMatchingGameplayTag", nullptr, nullptr, sizeof(SBZArmedPawn_eventHasMatchingGameplayTag_Parms), Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZArmedPawn_Multicast_PredictedRagdollDenied_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HurtReactionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZArmedPawn_Multicast_PredictedRagdollDenied_Statics::NewProp_HurtReactionIndex = { "HurtReactionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZArmedPawn_eventMulticast_PredictedRagdollDenied_Parms, HurtReactionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZArmedPawn_Multicast_PredictedRagdollDenied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZArmedPawn_Multicast_PredictedRagdollDenied_Statics::NewProp_HurtReactionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZArmedPawn_Multicast_PredictedRagdollDenied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZArmedPawn_Multicast_PredictedRagdollDenied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZArmedPawn, nullptr, "Multicast_PredictedRagdollDenied", nullptr, nullptr, sizeof(SBZArmedPawn_eventMulticast_PredictedRagdollDenied_Parms), Z_Construct_UFunction_ASBZArmedPawn_Multicast_PredictedRagdollDenied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZArmedPawn_Multicast_PredictedRagdollDenied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZArmedPawn_Multicast_PredictedRagdollDenied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZArmedPawn_Multicast_PredictedRagdollDenied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZArmedPawn_Multicast_PredictedRagdollDenied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZArmedPawn_Multicast_PredictedRagdollDenied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZArmedPawn_NoRegister()
	{
		return ASBZArmedPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASBZArmedPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippableConfigArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableConfigArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquippableConfigArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquippableArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AIVisibilityNodeComputationFrequency_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIVisibilityNodeComputationFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AIVisibilityNodeComputationFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StimuliSourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StimuliSourceComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedWeaponAttachmentSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RangedWeaponAttachmentSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkedGameplayEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MarkedGameplayEffectClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomVolumes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZArmedPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZArmedPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZArmedPawn_GetOwnedGameplayTags, "GetOwnedGameplayTags" }, // 960649706
		{ &Z_Construct_UFunction_ASBZArmedPawn_HasAllMatchingGameplayTags, "HasAllMatchingGameplayTags" }, // 1161464953
		{ &Z_Construct_UFunction_ASBZArmedPawn_HasAnyMatchingGameplayTags, "HasAnyMatchingGameplayTags" }, // 1674880703
		{ &Z_Construct_UFunction_ASBZArmedPawn_HasMatchingGameplayTag, "HasMatchingGameplayTag" }, // 4059241940
		{ &Z_Construct_UFunction_ASBZArmedPawn_Multicast_PredictedRagdollDenied, "Multicast_PredictedRagdollDenied" }, // 3075895065
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmedPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZArmedPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_EquippableConfigArray_Inner = { "EquippableConfigArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_EquippableConfigArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmedPawn" },
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_EquippableConfigArray = { "EquippableConfigArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZArmedPawn, EquippableConfigArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_EquippableConfigArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_EquippableConfigArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_EquippableArray_Inner = { "EquippableArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_EquippableArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmedPawn" },
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_EquippableArray = { "EquippableArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZArmedPawn, EquippableArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_EquippableArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_EquippableArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmedPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZArmedPawn, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AbilityData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmedPawn" },
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AbilityData = { "AbilityData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZArmedPawn, AbilityData), Z_Construct_UClass_USBZAICharacterAbilityData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AbilityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AbilityData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmedPawn" },
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZArmedPawn, Type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AIVisibilityNodeComputationFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AIVisibilityNodeComputationFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmedPawn" },
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AIVisibilityNodeComputationFrequency = { "AIVisibilityNodeComputationFrequency", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZArmedPawn, AIVisibilityNodeComputationFrequency), Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityNodeComputationFrequency, METADATA_PARAMS(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AIVisibilityNodeComputationFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AIVisibilityNodeComputationFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_StimuliSourceComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmedPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_StimuliSourceComponent = { "StimuliSourceComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZArmedPawn, StimuliSourceComponent), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_StimuliSourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_StimuliSourceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_OutlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmedPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZArmedPawn, OutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_OutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_OutlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RangedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmedPawn" },
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RangedWeapon = { "RangedWeapon", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZArmedPawn, RangedWeapon), Z_Construct_UClass_ASBZRangedWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RangedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RangedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_TeamId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmedPawn" },
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZArmedPawn, TeamId), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_TeamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_TeamId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RangedWeaponAttachmentSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmedPawn" },
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RangedWeaponAttachmentSocket = { "RangedWeaponAttachmentSocket", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZArmedPawn, RangedWeaponAttachmentSocket), METADATA_PARAMS(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RangedWeaponAttachmentSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RangedWeaponAttachmentSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_MarkedGameplayEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmedPawn" },
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_MarkedGameplayEffectClass = { "MarkedGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZArmedPawn, MarkedGameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_MarkedGameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_MarkedGameplayEffectClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RoomVolumes_Inner = { "RoomVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RoomVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmedPawn" },
		{ "ModuleRelativePath", "Public/SBZArmedPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RoomVolumes = { "RoomVolumes", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZArmedPawn, RoomVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RoomVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RoomVolumes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZArmedPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_EquippableConfigArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_EquippableConfigArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_EquippableArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_EquippableArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AbilitySystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AbilityData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AIVisibilityNodeComputationFrequency_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_AIVisibilityNodeComputationFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_StimuliSourceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_OutlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RangedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_TeamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RangedWeaponAttachmentSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_MarkedGameplayEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RoomVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZArmedPawn_Statics::NewProp_RoomVolumes,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZArmedPawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZPawnInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZArmedPawn, ISBZPawnInterface), false },
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZArmedPawn, IAbilitySystemInterface), false },
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZArmedPawn, IGenericTeamAgentInterface), false },
			{ Z_Construct_UClass_USBZPawnLifetime_NoRegister, (int32)VTABLE_OFFSET(ASBZArmedPawn, ISBZPawnLifetime), false },
			{ Z_Construct_UClass_USBZProjectileInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZArmedPawn, ISBZProjectileInterface), false },
			{ Z_Construct_UClass_USBZTypeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZArmedPawn, ISBZTypeInterface), false },
			{ Z_Construct_UClass_USBZAIVisibilityRelevant_NoRegister, (int32)VTABLE_OFFSET(ASBZArmedPawn, ISBZAIVisibilityRelevant), false },
			{ Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZArmedPawn, ISBZRoomVolumeInterface), false },
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZArmedPawn, IGameplayTagAssetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZArmedPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZArmedPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZArmedPawn_Statics::ClassParams = {
		&ASBZArmedPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZArmedPawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmedPawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZArmedPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmedPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZArmedPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZArmedPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZArmedPawn, 4115076847);
	template<> STARBREEZE_API UClass* StaticClass<ASBZArmedPawn>()
	{
		return ASBZArmedPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZArmedPawn(Z_Construct_UClass_ASBZArmedPawn, &ASBZArmedPawn::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZArmedPawn"), false, nullptr, nullptr, nullptr);

	void ASBZArmedPawn::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TeamId(TEXT("TeamId"));

		const bool bIsValid = true
			&& Name_TeamId == ClassReps[(int32)ENetFields_Private::TeamId].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZArmedPawn"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZArmedPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
