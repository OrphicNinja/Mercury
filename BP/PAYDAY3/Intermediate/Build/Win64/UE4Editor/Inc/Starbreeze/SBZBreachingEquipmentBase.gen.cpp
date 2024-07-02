// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBreachingEquipmentBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBreachingEquipmentBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBreachingEquipmentBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBreachingEquipmentBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZBreachingEquipmentDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSlot_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionInteractableInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreakableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZBreachingEquipmentBase::execSetAttractorInstigator)
	{
		P_GET_OBJECT(APawn,Z_Param_NewInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttractorInstigator(Z_Param_NewInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBreachingEquipmentBase::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBreachingEquipmentBase::execGetOwnedGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOwnedGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBreachingEquipmentBase::execHasAllMatchingGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAllMatchingGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBreachingEquipmentBase::execHasAnyMatchingGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyMatchingGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBreachingEquipmentBase::execHasMatchingGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMatchingGameplayTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBreachingEquipmentBase::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZBreachingEquipmentState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBreachingEquipmentBase::execGetProgressMade)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProgressMade();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBreachingEquipmentBase::execMulticast_SetEstimatedDurationLeft)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDurationLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetEstimatedDurationLeft_Implementation(Z_Param_InDurationLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBreachingEquipmentBase::execMulticast_SetState)
	{
		P_GET_ENUM(ESBZBreachingEquipmentState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetState_Implementation(ESBZBreachingEquipmentState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBreachingEquipmentBase::execOnRep_CurrentState)
	{
		P_GET_ENUM(ESBZBreachingEquipmentState,Z_Param_OldState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentState(ESBZBreachingEquipmentState(Z_Param_OldState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBreachingEquipmentBase::execSetState)
	{
		P_GET_ENUM(ESBZBreachingEquipmentState,Z_Param_NewState);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(ESBZBreachingEquipmentState(Z_Param_NewState),Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBreachingEquipmentBase::execUpdateMarker)
	{
		P_GET_OBJECT(USBZMarkerDataAsset,Z_Param_MarkerAsset);
		P_GET_STRUCT(FVector,Z_Param_MarkerLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMarker(Z_Param_MarkerAsset,Z_Param_MarkerLocation);
		P_NATIVE_END;
	}
	static FName NAME_ASBZBreachingEquipmentBase_BP_OnStateChanged = FName(TEXT("BP_OnStateChanged"));
	void ASBZBreachingEquipmentBase::BP_OnStateChanged(ESBZBreachingEquipmentState OldState, ESBZBreachingEquipmentState NewState, bool bDoCosmetics)
	{
		SBZBreachingEquipmentBase_eventBP_OnStateChanged_Parms Parms;
		Parms.OldState=OldState;
		Parms.NewState=NewState;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBreachingEquipmentBase_BP_OnStateChanged),&Parms);
	}
	static FName NAME_ASBZBreachingEquipmentBase_Multicast_SetEstimatedDurationLeft = FName(TEXT("Multicast_SetEstimatedDurationLeft"));
	void ASBZBreachingEquipmentBase::Multicast_SetEstimatedDurationLeft(float InDurationLeft)
	{
		SBZBreachingEquipmentBase_eventMulticast_SetEstimatedDurationLeft_Parms Parms;
		Parms.InDurationLeft=InDurationLeft;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBreachingEquipmentBase_Multicast_SetEstimatedDurationLeft),&Parms);
	}
	static FName NAME_ASBZBreachingEquipmentBase_Multicast_SetState = FName(TEXT("Multicast_SetState"));
	void ASBZBreachingEquipmentBase::Multicast_SetState(ESBZBreachingEquipmentState NewState)
	{
		SBZBreachingEquipmentBase_eventMulticast_SetState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZBreachingEquipmentBase_Multicast_SetState),&Parms);
	}
	void ASBZBreachingEquipmentBase::StaticRegisterNativesASBZBreachingEquipmentBase()
	{
		UClass* Class = ASBZBreachingEquipmentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &ASBZBreachingEquipmentBase::execGetCurrentState },
			{ "GetOwnedGameplayTags", &ASBZBreachingEquipmentBase::execGetOwnedGameplayTags },
			{ "GetProgressMade", &ASBZBreachingEquipmentBase::execGetProgressMade },
			{ "HasAllMatchingGameplayTags", &ASBZBreachingEquipmentBase::execHasAllMatchingGameplayTags },
			{ "HasAnyMatchingGameplayTags", &ASBZBreachingEquipmentBase::execHasAnyMatchingGameplayTags },
			{ "HasMatchingGameplayTag", &ASBZBreachingEquipmentBase::execHasMatchingGameplayTag },
			{ "Multicast_SetEstimatedDurationLeft", &ASBZBreachingEquipmentBase::execMulticast_SetEstimatedDurationLeft },
			{ "Multicast_SetState", &ASBZBreachingEquipmentBase::execMulticast_SetState },
			{ "OnRep_CurrentState", &ASBZBreachingEquipmentBase::execOnRep_CurrentState },
			{ "SetAttractorInstigator", &ASBZBreachingEquipmentBase::execSetAttractorInstigator },
			{ "SetEnabled", &ASBZBreachingEquipmentBase::execSetEnabled },
			{ "SetState", &ASBZBreachingEquipmentBase::execSetState },
			{ "UpdateMarker", &ASBZBreachingEquipmentBase::execUpdateMarker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreachingEquipmentBase_eventBP_OnStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreachingEquipmentBase_eventBP_OnStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZBreachingEquipmentBase_eventBP_OnStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBreachingEquipmentBase_eventBP_OnStateChanged_Parms), &Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBreachingEquipmentBase, nullptr, "BP_OnStateChanged", nullptr, nullptr, sizeof(SBZBreachingEquipmentBase_eventBP_OnStateChanged_Parms), Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetCurrentState_Statics
	{
		struct SBZBreachingEquipmentBase_eventGetCurrentState_Parms
		{
			ESBZBreachingEquipmentState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreachingEquipmentBase_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBreachingEquipmentBase, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(SBZBreachingEquipmentBase_eventGetCurrentState_Parms), Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetOwnedGameplayTags_Statics
	{
		struct SBZBreachingEquipmentBase_eventGetOwnedGameplayTags_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetOwnedGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreachingEquipmentBase_eventGetOwnedGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetOwnedGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetOwnedGameplayTags_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetOwnedGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetOwnedGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBreachingEquipmentBase, nullptr, "GetOwnedGameplayTags", nullptr, nullptr, sizeof(SBZBreachingEquipmentBase_eventGetOwnedGameplayTags_Parms), Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetOwnedGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetOwnedGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetOwnedGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetOwnedGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetOwnedGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetOwnedGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetProgressMade_Statics
	{
		struct SBZBreachingEquipmentBase_eventGetProgressMade_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetProgressMade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreachingEquipmentBase_eventGetProgressMade_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetProgressMade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetProgressMade_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetProgressMade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetProgressMade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBreachingEquipmentBase, nullptr, "GetProgressMade", nullptr, nullptr, sizeof(SBZBreachingEquipmentBase_eventGetProgressMade_Parms), Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetProgressMade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetProgressMade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetProgressMade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetProgressMade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetProgressMade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetProgressMade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics
	{
		struct SBZBreachingEquipmentBase_eventHasAllMatchingGameplayTags_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreachingEquipmentBase_eventHasAllMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData)) };
	void Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBreachingEquipmentBase_eventHasAllMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBreachingEquipmentBase_eventHasAllMatchingGameplayTags_Parms), &Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBreachingEquipmentBase, nullptr, "HasAllMatchingGameplayTags", nullptr, nullptr, sizeof(SBZBreachingEquipmentBase_eventHasAllMatchingGameplayTags_Parms), Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics
	{
		struct SBZBreachingEquipmentBase_eventHasAnyMatchingGameplayTags_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreachingEquipmentBase_eventHasAnyMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData)) };
	void Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBreachingEquipmentBase_eventHasAnyMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBreachingEquipmentBase_eventHasAnyMatchingGameplayTags_Parms), &Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBreachingEquipmentBase, nullptr, "HasAnyMatchingGameplayTags", nullptr, nullptr, sizeof(SBZBreachingEquipmentBase_eventHasAnyMatchingGameplayTags_Parms), Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag_Statics
	{
		struct SBZBreachingEquipmentBase_eventHasMatchingGameplayTag_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreachingEquipmentBase_eventHasMatchingGameplayTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBreachingEquipmentBase_eventHasMatchingGameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBreachingEquipmentBase_eventHasMatchingGameplayTag_Parms), &Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag_Statics::NewProp_TagToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Fix for true pure virtual functions not being implemented\n" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
		{ "ToolTip", "Fix for true pure virtual functions not being implemented" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBreachingEquipmentBase, nullptr, "HasMatchingGameplayTag", nullptr, nullptr, sizeof(SBZBreachingEquipmentBase_eventHasMatchingGameplayTag_Parms), Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetEstimatedDurationLeft_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDurationLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetEstimatedDurationLeft_Statics::NewProp_InDurationLeft = { "InDurationLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreachingEquipmentBase_eventMulticast_SetEstimatedDurationLeft_Parms, InDurationLeft), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetEstimatedDurationLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetEstimatedDurationLeft_Statics::NewProp_InDurationLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetEstimatedDurationLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetEstimatedDurationLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBreachingEquipmentBase, nullptr, "Multicast_SetEstimatedDurationLeft", nullptr, nullptr, sizeof(SBZBreachingEquipmentBase_eventMulticast_SetEstimatedDurationLeft_Parms), Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetEstimatedDurationLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetEstimatedDurationLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetEstimatedDurationLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetEstimatedDurationLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetEstimatedDurationLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetEstimatedDurationLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreachingEquipmentBase_eventMulticast_SetState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBreachingEquipmentBase, nullptr, "Multicast_SetState", nullptr, nullptr, sizeof(SBZBreachingEquipmentBase_eventMulticast_SetState_Parms), Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBreachingEquipmentBase_OnRep_CurrentState_Statics
	{
		struct SBZBreachingEquipmentBase_eventOnRep_CurrentState_Parms
		{
			ESBZBreachingEquipmentState OldState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_OnRep_CurrentState_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_OnRep_CurrentState_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreachingEquipmentBase_eventOnRep_CurrentState_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBreachingEquipmentBase_OnRep_CurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_OnRep_CurrentState_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_OnRep_CurrentState_Statics::NewProp_OldState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_OnRep_CurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_OnRep_CurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBreachingEquipmentBase, nullptr, "OnRep_CurrentState", nullptr, nullptr, sizeof(SBZBreachingEquipmentBase_eventOnRep_CurrentState_Parms), Z_Construct_UFunction_ASBZBreachingEquipmentBase_OnRep_CurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_OnRep_CurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_OnRep_CurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_OnRep_CurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBreachingEquipmentBase_OnRep_CurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBreachingEquipmentBase_OnRep_CurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetAttractorInstigator_Statics
	{
		struct SBZBreachingEquipmentBase_eventSetAttractorInstigator_Parms
		{
			APawn* NewInstigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetAttractorInstigator_Statics::NewProp_NewInstigator = { "NewInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreachingEquipmentBase_eventSetAttractorInstigator_Parms, NewInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetAttractorInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetAttractorInstigator_Statics::NewProp_NewInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetAttractorInstigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetAttractorInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBreachingEquipmentBase, nullptr, "SetAttractorInstigator", nullptr, nullptr, sizeof(SBZBreachingEquipmentBase_eventSetAttractorInstigator_Parms), Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetAttractorInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetAttractorInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetAttractorInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetAttractorInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetAttractorInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetAttractorInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics
	{
		struct SBZBreachingEquipmentBase_eventSetEnabled_Parms
		{
			bool bEnabled;
			bool ReturnValue;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZBreachingEquipmentBase_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBreachingEquipmentBase_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBreachingEquipmentBase_eventSetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBreachingEquipmentBase_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBreachingEquipmentBase, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZBreachingEquipmentBase_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics
	{
		struct SBZBreachingEquipmentBase_eventSetState_Parms
		{
			ESBZBreachingEquipmentState NewState;
			bool bDoCosmetics;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreachingEquipmentBase_eventSetState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZBreachingEquipmentBase_eventSetState_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBreachingEquipmentBase_eventSetState_Parms), &Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBreachingEquipmentBase, nullptr, "SetState", nullptr, nullptr, sizeof(SBZBreachingEquipmentBase_eventSetState_Parms), Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics
	{
		struct SBZBreachingEquipmentBase_eventUpdateMarker_Parms
		{
			const USBZMarkerDataAsset* MarkerAsset;
			FVector MarkerLocation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkerLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics::NewProp_MarkerAsset = { "MarkerAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreachingEquipmentBase_eventUpdateMarker_Parms, MarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics::NewProp_MarkerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics::NewProp_MarkerLocation = { "MarkerLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreachingEquipmentBase_eventUpdateMarker_Parms, MarkerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics::NewProp_MarkerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics::NewProp_MarkerLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics::NewProp_MarkerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics::NewProp_MarkerLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBreachingEquipmentBase, nullptr, "UpdateMarker", nullptr, nullptr, sizeof(SBZBreachingEquipmentBase_eventUpdateMarker_Parms), Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZBreachingEquipmentBase_NoRegister()
	{
		return ASBZBreachingEquipmentBase::StaticClass();
	}
	struct Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBreachingEquipmentStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBreachingEquipmentStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBreachingEquipmentJammed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBreachingEquipmentJammed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBreachingEquipmentRestarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBreachingEquipmentRestarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBreachingEquipmentCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBreachingEquipmentCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEverBeSabotaged_MetaData[];
#endif
		static void NewProp_bCanEverBeSabotaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEverBeSabotaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentEquipmentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEquipmentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentEquipmentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EstimatedDurationLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EstimatedDurationLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateEstimatedTimeInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateEstimatedTimeInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionMarkerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionMarkerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixMarkerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FixMarkerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrillingEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrillingEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JammedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JammedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatingUpEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeatingUpEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoneEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoneEvent;
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
	UObject* (*const Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZBreachingEquipmentBase_BP_OnStateChanged, "BP_OnStateChanged" }, // 3704142847
		{ &Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetCurrentState, "GetCurrentState" }, // 3978307446
		{ &Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetOwnedGameplayTags, "GetOwnedGameplayTags" }, // 1504366130
		{ &Z_Construct_UFunction_ASBZBreachingEquipmentBase_GetProgressMade, "GetProgressMade" }, // 2644580120
		{ &Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAllMatchingGameplayTags, "HasAllMatchingGameplayTags" }, // 86804493
		{ &Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasAnyMatchingGameplayTags, "HasAnyMatchingGameplayTags" }, // 2562081582
		{ &Z_Construct_UFunction_ASBZBreachingEquipmentBase_HasMatchingGameplayTag, "HasMatchingGameplayTag" }, // 631486613
		{ &Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetEstimatedDurationLeft, "Multicast_SetEstimatedDurationLeft" }, // 2493650623
		{ &Z_Construct_UFunction_ASBZBreachingEquipmentBase_Multicast_SetState, "Multicast_SetState" }, // 3452593439
		{ &Z_Construct_UFunction_ASBZBreachingEquipmentBase_OnRep_CurrentState, "OnRep_CurrentState" }, // 299545942
		{ &Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetAttractorInstigator, "SetAttractorInstigator" }, // 1752829100
		{ &Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetEnabled, "SetEnabled" }, // 62385098
		{ &Z_Construct_UFunction_ASBZBreachingEquipmentBase_SetState, "SetState" }, // 2927195180
		{ &Z_Construct_UFunction_ASBZBreachingEquipmentBase_UpdateMarker, "UpdateMarker" }, // 3444713153
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBreachingEquipmentBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentStarted = { "OnBreachingEquipmentStarted", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, OnBreachingEquipmentStarted), Z_Construct_UDelegateFunction_Starbreeze_SBZBreachingEquipmentDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentJammed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentJammed = { "OnBreachingEquipmentJammed", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, OnBreachingEquipmentJammed), Z_Construct_UDelegateFunction_Starbreeze_SBZBreachingEquipmentDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentJammed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentJammed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentRestarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentRestarted = { "OnBreachingEquipmentRestarted", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, OnBreachingEquipmentRestarted), Z_Construct_UDelegateFunction_Starbreeze_SBZBreachingEquipmentDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentRestarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentRestarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentCompleted = { "OnBreachingEquipmentCompleted", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, OnBreachingEquipmentCompleted), Z_Construct_UDelegateFunction_Starbreeze_SBZBreachingEquipmentDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_DurationTimeSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_DurationTimeSeconds = { "DurationTimeSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, DurationTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_DurationTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_DurationTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_bCanEverBeSabotaged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_bCanEverBeSabotaged_SetBit(void* Obj)
	{
		((ASBZBreachingEquipmentBase*)Obj)->bCanEverBeSabotaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_bCanEverBeSabotaged = { "bCanEverBeSabotaged", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZBreachingEquipmentBase), &Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_bCanEverBeSabotaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_bCanEverBeSabotaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_bCanEverBeSabotaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OutlineAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OutlineAsset = { "OutlineAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, OutlineAsset), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OutlineAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OutlineAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OutlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, OutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OutlineComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_CurrentEquipmentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_CurrentEquipmentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_CurrentEquipmentState = { "CurrentEquipmentState", "OnRep_CurrentState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, CurrentEquipmentState), Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_CurrentEquipmentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_CurrentEquipmentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_EstimatedDurationLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_EstimatedDurationLeft = { "EstimatedDurationLeft", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, EstimatedDurationLeft), METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_EstimatedDurationLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_EstimatedDurationLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_UpdateEstimatedTimeInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_UpdateEstimatedTimeInterval = { "UpdateEstimatedTimeInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, UpdateEstimatedTimeInterval), METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_UpdateEstimatedTimeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_UpdateEstimatedTimeInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_AttractorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_AttractorComponent = { "AttractorComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, AttractorComponent), Z_Construct_UClass_USBZAIAttractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_AttractorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_AttractorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_LifeActionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_LifeActionComponent = { "LifeActionComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, LifeActionComponent), Z_Construct_UClass_USBZLifeActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_LifeActionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_LifeActionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_LifeActionInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_LifeActionInstance = { "LifeActionInstance", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, LifeActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_LifeActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_LifeActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_LifeActionSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_LifeActionSlot = { "LifeActionSlot", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, LifeActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_LifeActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_LifeActionSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_InteractionMarkerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_InteractionMarkerAsset = { "InteractionMarkerAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, InteractionMarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_InteractionMarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_InteractionMarkerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_FixMarkerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_FixMarkerAsset = { "FixMarkerAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, FixMarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_FixMarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_FixMarkerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_AkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_AkComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_DrillingEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_DrillingEvent = { "DrillingEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, DrillingEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_DrillingEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_DrillingEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_JammedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_JammedEvent = { "JammedEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, JammedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_JammedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_JammedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_HeatingUpEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_HeatingUpEvent = { "HeatingUpEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, HeatingUpEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_HeatingUpEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_HeatingUpEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_DoneEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_DoneEvent = { "DoneEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, DoneEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_DoneEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_DoneEvent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_RoomVolumes_Inner = { "RoomVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_RoomVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreachingEquipmentBase" },
		{ "ModuleRelativePath", "Public/SBZBreachingEquipmentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_RoomVolumes = { "RoomVolumes", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBreachingEquipmentBase, RoomVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_RoomVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_RoomVolumes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentJammed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentRestarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OnBreachingEquipmentCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_DurationTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_bCanEverBeSabotaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OutlineAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_OutlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_CurrentEquipmentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_CurrentEquipmentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_EstimatedDurationLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_UpdateEstimatedTimeInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_AttractorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_LifeActionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_LifeActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_LifeActionSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_InteractionMarkerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_FixMarkerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_AkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_DrillingEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_JammedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_HeatingUpEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_DoneEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_RoomVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::NewProp_RoomVolumes,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAIActionInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZBreachingEquipmentBase, ISBZAIActionInteractableInterface), false },
			{ Z_Construct_UClass_UAISightTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZBreachingEquipmentBase, IAISightTargetInterface), false },
			{ Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZBreachingEquipmentBase, ISBZRoomVolumeInterface), false },
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZBreachingEquipmentBase, IGameplayTagAssetInterface), false },
			{ Z_Construct_UClass_USBZAIAttractorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZBreachingEquipmentBase, ISBZAIAttractorInterface), false },
			{ Z_Construct_UClass_USBZBreakableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZBreachingEquipmentBase, ISBZBreakableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZBreachingEquipmentBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::ClassParams = {
		&ASBZBreachingEquipmentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZBreachingEquipmentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZBreachingEquipmentBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZBreachingEquipmentBase, 976872532);
	template<> STARBREEZE_API UClass* StaticClass<ASBZBreachingEquipmentBase>()
	{
		return ASBZBreachingEquipmentBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZBreachingEquipmentBase(Z_Construct_UClass_ASBZBreachingEquipmentBase, &ASBZBreachingEquipmentBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZBreachingEquipmentBase"), false, nullptr, nullptr, nullptr);

	void ASBZBreachingEquipmentBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentEquipmentState(TEXT("CurrentEquipmentState"));
		static const FName Name_EstimatedDurationLeft(TEXT("EstimatedDurationLeft"));

		const bool bIsValid = true
			&& Name_CurrentEquipmentState == ClassReps[(int32)ENetFields_Private::CurrentEquipmentState].Property->GetFName()
			&& Name_EstimatedDurationLeft == ClassReps[(int32)ENetFields_Private::EstimatedDurationLeft].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZBreachingEquipmentBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZBreachingEquipmentBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
