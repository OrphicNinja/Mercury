// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIBaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIBaseCharacter() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIBaseCharacter();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEvadeType();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityData_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAbilitySystemComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterAttributeSet_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityQueryParams_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavLinkAgilityComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIStimuliReactionComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIInteractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRappellingRope_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStanceTransitionDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgentManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPathFocusSettings_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentSettings();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterMovementComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityControlled_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGateNavAgentInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSensorInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRappellingRopeInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAIBaseCharacter::execGetTimeSinceLastAgility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeSinceLastAgility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIBaseCharacter::execMulticast_Evade)
	{
		P_GET_ENUM(ESBZEvadeType,Z_Param_EvadeType);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_Evade_Implementation(ESBZEvadeType(Z_Param_EvadeType),Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIBaseCharacter::execMulticast_PlaceObjectCosmetics)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PlaceObjectCosmetics_Implementation(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIBaseCharacter::execMulticast_PlayAgilityMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_TARRAY(FTransform,Z_Param_WarpingTransforms);
		P_GET_ENUM(ESBZAgilityType,Z_Param_AgilityType);
		P_GET_TARRAY(FSBZAgilityTrajectoryPoint,Z_Param_TrajectoryPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PlayAgilityMontage_Implementation(Z_Param_Montage,Z_Param_WarpingTransforms,ESBZAgilityType(Z_Param_AgilityType),Z_Param_TrajectoryPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIBaseCharacter::execMulticast_PlayWarpedRootMotionMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_TARRAY(FTransform,Z_Param_WarpingTransforms);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PlayWarpedRootMotionMontage_Implementation(Z_Param_Montage,Z_Param_WarpingTransforms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIBaseCharacter::execMulticast_SetCurrentTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_NewTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetCurrentTarget_Implementation(Z_Param_NewTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIBaseCharacter::execMulticast_StopAgilityMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StopAgilityMontage_Implementation(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIBaseCharacter::execMulticast_StopEvade)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StopEvade_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIBaseCharacter::execMulticast_StopWarpedRootMotionMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bCanPlayExit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StopWarpedRootMotionMontage_Implementation(Z_Param_Montage,Z_Param_bCanPlayExit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIBaseCharacter::execMulticast_Unmark)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMarkedDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_Unmark_Implementation(Z_Param_InMarkedDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIBaseCharacter::execOnMontageStarted)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageStarted(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIBaseCharacter::execOnRep_AgentId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AgentId();
		P_NATIVE_END;
	}
	static FName NAME_ASBZAIBaseCharacter_Multicast_Evade = FName(TEXT("Multicast_Evade"));
	void ASBZAIBaseCharacter::Multicast_Evade(ESBZEvadeType EvadeType, UAnimMontage* Montage)
	{
		SBZAIBaseCharacter_eventMulticast_Evade_Parms Parms;
		Parms.EvadeType=EvadeType;
		Parms.Montage=Montage;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIBaseCharacter_Multicast_Evade),&Parms);
	}
	static FName NAME_ASBZAIBaseCharacter_Multicast_PlaceObjectCosmetics = FName(TEXT("Multicast_PlaceObjectCosmetics"));
	void ASBZAIBaseCharacter::Multicast_PlaceObjectCosmetics(UAnimMontage* Montage)
	{
		SBZAIBaseCharacter_eventMulticast_PlaceObjectCosmetics_Parms Parms;
		Parms.Montage=Montage;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIBaseCharacter_Multicast_PlaceObjectCosmetics),&Parms);
	}
	static FName NAME_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage = FName(TEXT("Multicast_PlayAgilityMontage"));
	void ASBZAIBaseCharacter::Multicast_PlayAgilityMontage(UAnimMontage* Montage, TArray<FTransform> const& WarpingTransforms, ESBZAgilityType AgilityType, TArray<FSBZAgilityTrajectoryPoint> const& TrajectoryPoints)
	{
		SBZAIBaseCharacter_eventMulticast_PlayAgilityMontage_Parms Parms;
		Parms.Montage=Montage;
		Parms.WarpingTransforms=WarpingTransforms;
		Parms.AgilityType=AgilityType;
		Parms.TrajectoryPoints=TrajectoryPoints;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage),&Parms);
	}
	static FName NAME_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage = FName(TEXT("Multicast_PlayWarpedRootMotionMontage"));
	void ASBZAIBaseCharacter::Multicast_PlayWarpedRootMotionMontage(UAnimMontage* Montage, TArray<FTransform> const& WarpingTransforms)
	{
		SBZAIBaseCharacter_eventMulticast_PlayWarpedRootMotionMontage_Parms Parms;
		Parms.Montage=Montage;
		Parms.WarpingTransforms=WarpingTransforms;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage),&Parms);
	}
	static FName NAME_ASBZAIBaseCharacter_Multicast_SetCurrentTarget = FName(TEXT("Multicast_SetCurrentTarget"));
	void ASBZAIBaseCharacter::Multicast_SetCurrentTarget(AActor* NewTarget)
	{
		SBZAIBaseCharacter_eventMulticast_SetCurrentTarget_Parms Parms;
		Parms.NewTarget=NewTarget;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIBaseCharacter_Multicast_SetCurrentTarget),&Parms);
	}
	static FName NAME_ASBZAIBaseCharacter_Multicast_StopAgilityMontage = FName(TEXT("Multicast_StopAgilityMontage"));
	void ASBZAIBaseCharacter::Multicast_StopAgilityMontage(UAnimMontage* Montage)
	{
		SBZAIBaseCharacter_eventMulticast_StopAgilityMontage_Parms Parms;
		Parms.Montage=Montage;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIBaseCharacter_Multicast_StopAgilityMontage),&Parms);
	}
	static FName NAME_ASBZAIBaseCharacter_Multicast_StopEvade = FName(TEXT("Multicast_StopEvade"));
	void ASBZAIBaseCharacter::Multicast_StopEvade()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIBaseCharacter_Multicast_StopEvade),NULL);
	}
	static FName NAME_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage = FName(TEXT("Multicast_StopWarpedRootMotionMontage"));
	void ASBZAIBaseCharacter::Multicast_StopWarpedRootMotionMontage(UAnimMontage* Montage, bool bCanPlayExit)
	{
		SBZAIBaseCharacter_eventMulticast_StopWarpedRootMotionMontage_Parms Parms;
		Parms.Montage=Montage;
		Parms.bCanPlayExit=bCanPlayExit ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage),&Parms);
	}
	static FName NAME_ASBZAIBaseCharacter_Multicast_Unmark = FName(TEXT("Multicast_Unmark"));
	void ASBZAIBaseCharacter::Multicast_Unmark(float InMarkedDuration)
	{
		SBZAIBaseCharacter_eventMulticast_Unmark_Parms Parms;
		Parms.InMarkedDuration=InMarkedDuration;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIBaseCharacter_Multicast_Unmark),&Parms);
	}
	void ASBZAIBaseCharacter::StaticRegisterNativesASBZAIBaseCharacter()
	{
		UClass* Class = ASBZAIBaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTimeSinceLastAgility", &ASBZAIBaseCharacter::execGetTimeSinceLastAgility },
			{ "Multicast_Evade", &ASBZAIBaseCharacter::execMulticast_Evade },
			{ "Multicast_PlaceObjectCosmetics", &ASBZAIBaseCharacter::execMulticast_PlaceObjectCosmetics },
			{ "Multicast_PlayAgilityMontage", &ASBZAIBaseCharacter::execMulticast_PlayAgilityMontage },
			{ "Multicast_PlayWarpedRootMotionMontage", &ASBZAIBaseCharacter::execMulticast_PlayWarpedRootMotionMontage },
			{ "Multicast_SetCurrentTarget", &ASBZAIBaseCharacter::execMulticast_SetCurrentTarget },
			{ "Multicast_StopAgilityMontage", &ASBZAIBaseCharacter::execMulticast_StopAgilityMontage },
			{ "Multicast_StopEvade", &ASBZAIBaseCharacter::execMulticast_StopEvade },
			{ "Multicast_StopWarpedRootMotionMontage", &ASBZAIBaseCharacter::execMulticast_StopWarpedRootMotionMontage },
			{ "Multicast_Unmark", &ASBZAIBaseCharacter::execMulticast_Unmark },
			{ "OnMontageStarted", &ASBZAIBaseCharacter::execOnMontageStarted },
			{ "OnRep_AgentId", &ASBZAIBaseCharacter::execOnRep_AgentId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAIBaseCharacter_GetTimeSinceLastAgility_Statics
	{
		struct SBZAIBaseCharacter_eventGetTimeSinceLastAgility_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_GetTimeSinceLastAgility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIBaseCharacter_eventGetTimeSinceLastAgility_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIBaseCharacter_GetTimeSinceLastAgility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_GetTimeSinceLastAgility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIBaseCharacter_GetTimeSinceLastAgility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIBaseCharacter_GetTimeSinceLastAgility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIBaseCharacter, nullptr, "GetTimeSinceLastAgility", nullptr, nullptr, sizeof(SBZAIBaseCharacter_eventGetTimeSinceLastAgility_Parms), Z_Construct_UFunction_ASBZAIBaseCharacter_GetTimeSinceLastAgility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_GetTimeSinceLastAgility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIBaseCharacter_GetTimeSinceLastAgility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_GetTimeSinceLastAgility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIBaseCharacter_GetTimeSinceLastAgility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIBaseCharacter_GetTimeSinceLastAgility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EvadeType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EvadeType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade_Statics::NewProp_EvadeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade_Statics::NewProp_EvadeType = { "EvadeType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIBaseCharacter_eventMulticast_Evade_Parms, EvadeType), Z_Construct_UEnum_Starbreeze_ESBZEvadeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIBaseCharacter_eventMulticast_Evade_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade_Statics::NewProp_EvadeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade_Statics::NewProp_EvadeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIBaseCharacter, nullptr, "Multicast_Evade", nullptr, nullptr, sizeof(SBZAIBaseCharacter_eventMulticast_Evade_Parms), Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlaceObjectCosmetics_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlaceObjectCosmetics_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIBaseCharacter_eventMulticast_PlaceObjectCosmetics_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlaceObjectCosmetics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlaceObjectCosmetics_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlaceObjectCosmetics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlaceObjectCosmetics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIBaseCharacter, nullptr, "Multicast_PlaceObjectCosmetics", nullptr, nullptr, sizeof(SBZAIBaseCharacter_eventMulticast_PlaceObjectCosmetics_Parms), Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlaceObjectCosmetics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlaceObjectCosmetics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlaceObjectCosmetics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlaceObjectCosmetics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlaceObjectCosmetics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlaceObjectCosmetics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WarpingTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarpingTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WarpingTransforms;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AgilityType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AgilityType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrajectoryPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrajectoryPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrajectoryPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIBaseCharacter_eventMulticast_PlayAgilityMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_WarpingTransforms_Inner = { "WarpingTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_WarpingTransforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_WarpingTransforms = { "WarpingTransforms", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIBaseCharacter_eventMulticast_PlayAgilityMontage_Parms, WarpingTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_WarpingTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_WarpingTransforms_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_AgilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_AgilityType = { "AgilityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIBaseCharacter_eventMulticast_PlayAgilityMontage_Parms, AgilityType), Z_Construct_UEnum_Starbreeze_ESBZAgilityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_TrajectoryPoints_Inner = { "TrajectoryPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_TrajectoryPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_TrajectoryPoints = { "TrajectoryPoints", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIBaseCharacter_eventMulticast_PlayAgilityMontage_Parms, TrajectoryPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_TrajectoryPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_TrajectoryPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_WarpingTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_WarpingTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_AgilityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_AgilityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_TrajectoryPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::NewProp_TrajectoryPoints,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIBaseCharacter, nullptr, "Multicast_PlayAgilityMontage", nullptr, nullptr, sizeof(SBZAIBaseCharacter_eventMulticast_PlayAgilityMontage_Parms), Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WarpingTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarpingTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WarpingTransforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIBaseCharacter_eventMulticast_PlayWarpedRootMotionMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::NewProp_WarpingTransforms_Inner = { "WarpingTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::NewProp_WarpingTransforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::NewProp_WarpingTransforms = { "WarpingTransforms", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIBaseCharacter_eventMulticast_PlayWarpedRootMotionMontage_Parms, WarpingTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::NewProp_WarpingTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::NewProp_WarpingTransforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::NewProp_WarpingTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::NewProp_WarpingTransforms,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIBaseCharacter, nullptr, "Multicast_PlayWarpedRootMotionMontage", nullptr, nullptr, sizeof(SBZAIBaseCharacter_eventMulticast_PlayWarpedRootMotionMontage_Parms), Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_SetCurrentTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_SetCurrentTarget_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIBaseCharacter_eventMulticast_SetCurrentTarget_Parms, NewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_SetCurrentTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_SetCurrentTarget_Statics::NewProp_NewTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_SetCurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_SetCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIBaseCharacter, nullptr, "Multicast_SetCurrentTarget", nullptr, nullptr, sizeof(SBZAIBaseCharacter_eventMulticast_SetCurrentTarget_Parms), Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_SetCurrentTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_SetCurrentTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_SetCurrentTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_SetCurrentTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_SetCurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_SetCurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopAgilityMontage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopAgilityMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIBaseCharacter_eventMulticast_StopAgilityMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopAgilityMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopAgilityMontage_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopAgilityMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopAgilityMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIBaseCharacter, nullptr, "Multicast_StopAgilityMontage", nullptr, nullptr, sizeof(SBZAIBaseCharacter_eventMulticast_StopAgilityMontage_Parms), Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopAgilityMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopAgilityMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopAgilityMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopAgilityMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopAgilityMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopAgilityMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopEvade_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopEvade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopEvade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIBaseCharacter, nullptr, "Multicast_StopEvade", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopEvade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopEvade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopEvade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopEvade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bCanPlayExit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanPlayExit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIBaseCharacter_eventMulticast_StopWarpedRootMotionMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage_Statics::NewProp_bCanPlayExit_SetBit(void* Obj)
	{
		((SBZAIBaseCharacter_eventMulticast_StopWarpedRootMotionMontage_Parms*)Obj)->bCanPlayExit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage_Statics::NewProp_bCanPlayExit = { "bCanPlayExit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIBaseCharacter_eventMulticast_StopWarpedRootMotionMontage_Parms), &Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage_Statics::NewProp_bCanPlayExit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage_Statics::NewProp_bCanPlayExit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIBaseCharacter, nullptr, "Multicast_StopWarpedRootMotionMontage", nullptr, nullptr, sizeof(SBZAIBaseCharacter_eventMulticast_StopWarpedRootMotionMontage_Parms), Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Unmark_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMarkedDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Unmark_Statics::NewProp_InMarkedDuration = { "InMarkedDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIBaseCharacter_eventMulticast_Unmark_Parms, InMarkedDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Unmark_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Unmark_Statics::NewProp_InMarkedDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Unmark_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Unmark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIBaseCharacter, nullptr, "Multicast_Unmark", nullptr, nullptr, sizeof(SBZAIBaseCharacter_eventMulticast_Unmark_Parms), Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Unmark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Unmark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Unmark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Unmark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Unmark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Unmark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIBaseCharacter_OnMontageStarted_Statics
	{
		struct SBZAIBaseCharacter_eventOnMontageStarted_Parms
		{
			UAnimMontage* Montage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIBaseCharacter_OnMontageStarted_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIBaseCharacter_eventOnMontageStarted_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIBaseCharacter_OnMontageStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIBaseCharacter_OnMontageStarted_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIBaseCharacter_OnMontageStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIBaseCharacter_OnMontageStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIBaseCharacter, nullptr, "OnMontageStarted", nullptr, nullptr, sizeof(SBZAIBaseCharacter_eventOnMontageStarted_Parms), Z_Construct_UFunction_ASBZAIBaseCharacter_OnMontageStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_OnMontageStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIBaseCharacter_OnMontageStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_OnMontageStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIBaseCharacter_OnMontageStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIBaseCharacter_OnMontageStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIBaseCharacter_OnRep_AgentId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIBaseCharacter_OnRep_AgentId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIBaseCharacter_OnRep_AgentId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIBaseCharacter, nullptr, "OnRep_AgentId", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIBaseCharacter_OnRep_AgentId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIBaseCharacter_OnRep_AgentId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIBaseCharacter_OnRep_AgentId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIBaseCharacter_OnRep_AgentId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister()
	{
		return ASBZAIBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAIBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatUtilityData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatUtilityData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidTargetTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InvalidTargetTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavFilters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttributeSetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteDesiredViewYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RemoteDesiredViewYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteDesiredHeadYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RemoteDesiredHeadYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UtilityData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UtilityData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TypeTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilityQueryParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgilityQueryParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentNavLinkAgilityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentNavLinkAgilityComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StimuliReactionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StimuliReactionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComesticPropRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComesticPropRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEverDoIdleBreaker_MetaData[];
#endif
		static void NewProp_bCanEverDoIdleBreaker_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEverDoIdleBreaker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIInteractorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIInteractorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacementComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlacementComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRappellingRope_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentRappellingRope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastWarpedRootMotionMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastWarpedRootMotionMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurVehicleObstacle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurVehicleObstacle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurVehicleHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurVehicleHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedStanceTransitionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllowedStanceTransitionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgentManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadlyFallHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeadlyFallHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFocusSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathFocusSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AgentId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AgentSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentCharacterMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgentCharacterMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighbourDetectionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeighbourDetectionRange;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Neighbours_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Neighbours_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Neighbours;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceRandomWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AvoidanceRandomWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAvoidanceEnabled_MetaData[];
#endif
		static void NewProp_bIsAvoidanceEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAvoidanceEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingAgilityMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayingAgilityMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDoEvadeDuringPathing_MetaData[];
#endif
		static void NewProp_bCanDoEvadeDuringPathing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDoEvadeDuringPathing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDoEvades_MetaData[];
#endif
		static void NewProp_bCanDoEvades_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDoEvades;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveBaseEyeHeightTickRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveBaseEyeHeightTickRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CivilianNearRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CivilianNearRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAIBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAIBaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAIBaseCharacter_GetTimeSinceLastAgility, "GetTimeSinceLastAgility" }, // 2400419642
		{ &Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Evade, "Multicast_Evade" }, // 122443474
		{ &Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlaceObjectCosmetics, "Multicast_PlaceObjectCosmetics" }, // 3134697104
		{ &Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayAgilityMontage, "Multicast_PlayAgilityMontage" }, // 2399309361
		{ &Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_PlayWarpedRootMotionMontage, "Multicast_PlayWarpedRootMotionMontage" }, // 3647899805
		{ &Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_SetCurrentTarget, "Multicast_SetCurrentTarget" }, // 482768736
		{ &Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopAgilityMontage, "Multicast_StopAgilityMontage" }, // 4294267043
		{ &Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopEvade, "Multicast_StopEvade" }, // 605768844
		{ &Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_StopWarpedRootMotionMontage, "Multicast_StopWarpedRootMotionMontage" }, // 1007498608
		{ &Z_Construct_UFunction_ASBZAIBaseCharacter_Multicast_Unmark, "Multicast_Unmark" }, // 191877998
		{ &Z_Construct_UFunction_ASBZAIBaseCharacter_OnMontageStarted, "OnMontageStarted" }, // 3558098577
		{ &Z_Construct_UFunction_ASBZAIBaseCharacter_OnRep_AgentId, "OnRep_AgentId" }, // 2401356568
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZAIBaseCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CombatUtilityData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CombatUtilityData = { "CombatUtilityData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, CombatUtilityData), Z_Construct_UClass_USBZAIUtilityData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CombatUtilityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CombatUtilityData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_InvalidTargetTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_InvalidTargetTags = { "InvalidTargetTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, InvalidTargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_InvalidTargetTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_InvalidTargetTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_NavFilters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_NavFilters = { "NavFilters", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(NavFilters, ASBZAIBaseCharacter), STRUCT_OFFSET(ASBZAIBaseCharacter, NavFilters), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_NavFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_NavFilters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, AbilitySystemComponent), Z_Construct_UClass_USBZAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AttributeSetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AttributeSetClass = { "AttributeSetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, AttributeSetClass), Z_Construct_UClass_USBZAICharacterAttributeSet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AttributeSetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AttributeSetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, AttributeSet), Z_Construct_UClass_USBZAICharacterAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_RemoteDesiredViewYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_RemoteDesiredViewYaw = { "RemoteDesiredViewYaw", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, RemoteDesiredViewYaw), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_RemoteDesiredViewYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_RemoteDesiredViewYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_RemoteDesiredHeadYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_RemoteDesiredHeadYaw = { "RemoteDesiredHeadYaw", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, RemoteDesiredHeadYaw), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_RemoteDesiredHeadYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_RemoteDesiredHeadYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_UtilityData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_UtilityData = { "UtilityData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, UtilityData), Z_Construct_UClass_USBZAIUtilityData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_UtilityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_UtilityData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_TypeTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_TypeTag = { "TypeTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, TypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_TypeTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_TypeTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurrentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgilityQueryParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgilityQueryParam = { "AgilityQueryParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, AgilityQueryParam), Z_Construct_UClass_USBZAgilityQueryParams_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgilityQueryParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgilityQueryParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurrentNavLinkAgilityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurrentNavLinkAgilityComponent = { "CurrentNavLinkAgilityComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, CurrentNavLinkAgilityComponent), Z_Construct_UClass_USBZNavLinkAgilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurrentNavLinkAgilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurrentNavLinkAgilityComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_StimuliReactionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_StimuliReactionComponent = { "StimuliReactionComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, StimuliReactionComponent), Z_Construct_UClass_USBZAIStimuliReactionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_StimuliReactionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_StimuliReactionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_ComesticPropRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_ComesticPropRef = { "ComesticPropRef", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, ComesticPropRef), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_ComesticPropRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_ComesticPropRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanEverDoIdleBreaker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanEverDoIdleBreaker_SetBit(void* Obj)
	{
		((ASBZAIBaseCharacter*)Obj)->bCanEverDoIdleBreaker = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanEverDoIdleBreaker = { "bCanEverDoIdleBreaker", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAIBaseCharacter), &Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanEverDoIdleBreaker_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanEverDoIdleBreaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanEverDoIdleBreaker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AIInteractorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AIInteractorComponent = { "AIInteractorComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, AIInteractorComponent), Z_Construct_UClass_USBZAIInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AIInteractorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AIInteractorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_PlacementComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_PlacementComment = { "PlacementComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, PlacementComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_PlacementComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_PlacementComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurrentRappellingRope_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurrentRappellingRope = { "CurrentRappellingRope", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, CurrentRappellingRope), Z_Construct_UClass_ASBZRappellingRope_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurrentRappellingRope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurrentRappellingRope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_LastWarpedRootMotionMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_LastWarpedRootMotionMontage = { "LastWarpedRootMotionMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, LastWarpedRootMotionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_LastWarpedRootMotionMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_LastWarpedRootMotionMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurVehicleObstacle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurVehicleObstacle = { "CurVehicleObstacle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, CurVehicleObstacle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurVehicleObstacle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurVehicleObstacle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurVehicleHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurVehicleHit = { "CurVehicleHit", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, CurVehicleHit), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurVehicleHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurVehicleHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AllowedStanceTransitionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AllowedStanceTransitionData = { "AllowedStanceTransitionData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, AllowedStanceTransitionData), Z_Construct_UClass_USBZStanceTransitionDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AllowedStanceTransitionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AllowedStanceTransitionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentManager = { "AgentManager", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, AgentManager), Z_Construct_UClass_USBZAgentManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_DeadlyFallHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_DeadlyFallHeight = { "DeadlyFallHeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, DeadlyFallHeight), METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_DeadlyFallHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_DeadlyFallHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_PathFocusSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_PathFocusSettings = { "PathFocusSettings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, PathFocusSettings), Z_Construct_UClass_USBZPathFocusSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_PathFocusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_PathFocusSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentId = { "AgentId", "OnRep_AgentId", (EPropertyFlags)0x0040000100002021, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, AgentId), METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentSettings = { "AgentSettings", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, AgentSettings), Z_Construct_UScriptStruct_FSBZAgentSettings, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentCharacterMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentCharacterMovement = { "AgentCharacterMovement", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, AgentCharacterMovement), Z_Construct_UClass_USBZAICharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentCharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentCharacterMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_NeighbourDetectionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_NeighbourDetectionRange = { "NeighbourDetectionRange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, NeighbourDetectionRange), METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_NeighbourDetectionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_NeighbourDetectionRange_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_Neighbours_Inner = { "Neighbours", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_Neighbours_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_Neighbours = { "Neighbours", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, Neighbours), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_Neighbours_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_Neighbours_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AvoidanceRandomWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AvoidanceRandomWeight = { "AvoidanceRandomWeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, AvoidanceRandomWeight), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AvoidanceRandomWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AvoidanceRandomWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bIsAvoidanceEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bIsAvoidanceEnabled_SetBit(void* Obj)
	{
		((ASBZAIBaseCharacter*)Obj)->bIsAvoidanceEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bIsAvoidanceEnabled = { "bIsAvoidanceEnabled", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAIBaseCharacter), &Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bIsAvoidanceEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bIsAvoidanceEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bIsAvoidanceEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_PlayingAgilityMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_PlayingAgilityMontage = { "PlayingAgilityMontage", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, PlayingAgilityMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_PlayingAgilityMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_PlayingAgilityMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanDoEvadeDuringPathing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanDoEvadeDuringPathing_SetBit(void* Obj)
	{
		((ASBZAIBaseCharacter*)Obj)->bCanDoEvadeDuringPathing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanDoEvadeDuringPathing = { "bCanDoEvadeDuringPathing", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAIBaseCharacter), &Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanDoEvadeDuringPathing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanDoEvadeDuringPathing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanDoEvadeDuringPathing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanDoEvades_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanDoEvades_SetBit(void* Obj)
	{
		((ASBZAIBaseCharacter*)Obj)->bCanDoEvades = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanDoEvades = { "bCanDoEvades", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAIBaseCharacter), &Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanDoEvades_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanDoEvades_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanDoEvades_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AdditiveBaseEyeHeightTickRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AdditiveBaseEyeHeightTickRate = { "AdditiveBaseEyeHeightTickRate", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, AdditiveBaseEyeHeightTickRate), METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AdditiveBaseEyeHeightTickRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AdditiveBaseEyeHeightTickRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CivilianNearRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIBaseCharacter" },
		{ "ModuleRelativePath", "Public/SBZAIBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CivilianNearRange = { "CivilianNearRange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIBaseCharacter, CivilianNearRange), METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CivilianNearRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CivilianNearRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAIBaseCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CombatUtilityData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_InvalidTargetTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_NavFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AbilitySystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AttributeSetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AttributeSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_RemoteDesiredViewYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_RemoteDesiredHeadYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_UtilityData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_TypeTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgilityQueryParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurrentNavLinkAgilityComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_StimuliReactionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_ComesticPropRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanEverDoIdleBreaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AIInteractorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_PlacementComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurrentRappellingRope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_LastWarpedRootMotionMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurVehicleObstacle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CurVehicleHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AllowedStanceTransitionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_DeadlyFallHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_PathFocusSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AgentCharacterMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_NeighbourDetectionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_Neighbours_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_Neighbours,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AvoidanceRandomWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bIsAvoidanceEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_PlayingAgilityMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanDoEvadeDuringPathing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_bCanDoEvades,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_AdditiveBaseEyeHeightTickRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIBaseCharacter_Statics::NewProp_CivilianNearRange,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAIUtilityControlled_NoRegister, (int32)VTABLE_OFFSET(ASBZAIBaseCharacter, ISBZAIUtilityControlled), false },
			{ Z_Construct_UClass_USBZGateNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIBaseCharacter, ISBZGateNavAgentInterface), false },
			{ Z_Construct_UClass_USBZSensorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIBaseCharacter, ISBZSensorInterface), false },
			{ Z_Construct_UClass_USBZRappellingRopeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIBaseCharacter, ISBZRappellingRopeInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAIBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAIBaseCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAIBaseCharacter_Statics::ClassParams = {
		&ASBZAIBaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAIBaseCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIBaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAIBaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAIBaseCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAIBaseCharacter, 754749348);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAIBaseCharacter>()
	{
		return ASBZAIBaseCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAIBaseCharacter(Z_Construct_UClass_ASBZAIBaseCharacter, &ASBZAIBaseCharacter::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAIBaseCharacter"), false, nullptr, nullptr, nullptr);

	void ASBZAIBaseCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RemoteDesiredHeadYaw(TEXT("RemoteDesiredHeadYaw"));
		static const FName Name_CurrentTarget(TEXT("CurrentTarget"));
		static const FName Name_AgentId(TEXT("AgentId"));

		const bool bIsValid = true
			&& Name_RemoteDesiredHeadYaw == ClassReps[(int32)ENetFields_Private::RemoteDesiredHeadYaw].Property->GetFName()
			&& Name_CurrentTarget == ClassReps[(int32)ENetFields_Private::CurrentTarget].Property->GetFName()
			&& Name_AgentId == ClassReps[(int32)ENetFields_Private::AgentId].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZAIBaseCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAIBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
