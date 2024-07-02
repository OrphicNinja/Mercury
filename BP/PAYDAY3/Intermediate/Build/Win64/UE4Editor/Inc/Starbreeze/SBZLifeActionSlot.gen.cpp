// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionSlot() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSlot();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionRequest();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZLifeActionState();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionDialogPlayer_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionInstance_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionTagEventDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZLifeActionSlot::execCanBeReservedBy)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_InCharacter);
		P_GET_STRUCT_REF(FSBZLifeActionRequest,Z_Param_Out_Request);
		P_GET_UBOOL(Z_Param_bLogErrors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeReservedBy(Z_Param_InCharacter,Z_Param_Out_Request,Z_Param_bLogErrors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execGetAcceptableAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAcceptableAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execGetAcceptableRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAcceptableRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execGetCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZCharacter**)Z_Param__Result=P_THIS->GetCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execGetCurrentActionMontage)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_InCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetCurrentActionMontage(Z_Param_InCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execGetCurrentEnterMontage)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_InCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetCurrentEnterMontage(Z_Param_InCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execGetCurrentExitMontage)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_InCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetCurrentExitMontage(Z_Param_InCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execGetCurrentReservationID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentReservationID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execGetMoveToLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMoveToLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execGetMoveToRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetMoveToRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execGetMoveToTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetMoveToTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execGetPlayingActionMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetPlayingActionMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZLifeActionState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execGetTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execIsFree)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFree();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execIsPlayingActionMontage)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_InCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingActionMontage(Z_Param_InCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execIsPlayingEnterMontage)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_InCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingEnterMontage(Z_Param_InCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execIsPlayingExitMontage)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_InCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingExitMontage(Z_Param_InCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execIsReadyToStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReadyToStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execIsReservedBy)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_InCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReservedBy(Z_Param_InCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execIsUsingAnEnterAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingAnEnterAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execIsUsingAnExitAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingAnExitAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execMulticast_OnSlotFreed)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_InCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnSlotFreed_Implementation(Z_Param_InCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execMulticast_OnSlotStart)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_InCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnSlotStart_Implementation(Z_Param_InCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execMustBeOccupied)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MustBeOccupied();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execOnCharacterAnimEvent)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_EventTag);
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterAnimEvent(Z_Param_Out_EventTag,Z_Param_bActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execOnDesiredDurationReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDesiredDurationReached();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execOnEnterAnimationShouldEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnterAnimationShouldEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execOnMontageBlendOut)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageBlendOut(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execStartDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execStopDialog)
	{
		P_GET_UBOOL(Z_Param_bReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDialog(Z_Param_bReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execSwitchMontageNextSection)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SectionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchMontageNextSection(Z_Param_Out_SectionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionSlot::execSwitchMontageSection)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SectionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchMontageSection(Z_Param_Out_SectionName);
		P_NATIVE_END;
	}
	static FName NAME_USBZLifeActionSlot_Multicast_OnSlotFreed = FName(TEXT("Multicast_OnSlotFreed"));
	void USBZLifeActionSlot::Multicast_OnSlotFreed(ASBZCharacter* InCharacter)
	{
		SBZLifeActionSlot_eventMulticast_OnSlotFreed_Parms Parms;
		Parms.InCharacter=InCharacter;
		ProcessEvent(FindFunctionChecked(NAME_USBZLifeActionSlot_Multicast_OnSlotFreed),&Parms);
	}
	static FName NAME_USBZLifeActionSlot_Multicast_OnSlotStart = FName(TEXT("Multicast_OnSlotStart"));
	void USBZLifeActionSlot::Multicast_OnSlotStart(ASBZCharacter* InCharacter)
	{
		SBZLifeActionSlot_eventMulticast_OnSlotStart_Parms Parms;
		Parms.InCharacter=InCharacter;
		ProcessEvent(FindFunctionChecked(NAME_USBZLifeActionSlot_Multicast_OnSlotStart),&Parms);
	}
	void USBZLifeActionSlot::StaticRegisterNativesUSBZLifeActionSlot()
	{
		UClass* Class = USBZLifeActionSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBeReservedBy", &USBZLifeActionSlot::execCanBeReservedBy },
			{ "GetAcceptableAngle", &USBZLifeActionSlot::execGetAcceptableAngle },
			{ "GetAcceptableRadius", &USBZLifeActionSlot::execGetAcceptableRadius },
			{ "GetCharacter", &USBZLifeActionSlot::execGetCharacter },
			{ "GetCurrentActionMontage", &USBZLifeActionSlot::execGetCurrentActionMontage },
			{ "GetCurrentEnterMontage", &USBZLifeActionSlot::execGetCurrentEnterMontage },
			{ "GetCurrentExitMontage", &USBZLifeActionSlot::execGetCurrentExitMontage },
			{ "GetCurrentReservationID", &USBZLifeActionSlot::execGetCurrentReservationID },
			{ "GetMoveToLocation", &USBZLifeActionSlot::execGetMoveToLocation },
			{ "GetMoveToRotation", &USBZLifeActionSlot::execGetMoveToRotation },
			{ "GetMoveToTransform", &USBZLifeActionSlot::execGetMoveToTransform },
			{ "GetPlayingActionMontage", &USBZLifeActionSlot::execGetPlayingActionMontage },
			{ "GetState", &USBZLifeActionSlot::execGetState },
			{ "GetTag", &USBZLifeActionSlot::execGetTag },
			{ "IsFree", &USBZLifeActionSlot::execIsFree },
			{ "IsPlayingActionMontage", &USBZLifeActionSlot::execIsPlayingActionMontage },
			{ "IsPlayingEnterMontage", &USBZLifeActionSlot::execIsPlayingEnterMontage },
			{ "IsPlayingExitMontage", &USBZLifeActionSlot::execIsPlayingExitMontage },
			{ "IsReadyToStart", &USBZLifeActionSlot::execIsReadyToStart },
			{ "IsReservedBy", &USBZLifeActionSlot::execIsReservedBy },
			{ "IsUsingAnEnterAnimation", &USBZLifeActionSlot::execIsUsingAnEnterAnimation },
			{ "IsUsingAnExitAnimation", &USBZLifeActionSlot::execIsUsingAnExitAnimation },
			{ "Multicast_OnSlotFreed", &USBZLifeActionSlot::execMulticast_OnSlotFreed },
			{ "Multicast_OnSlotStart", &USBZLifeActionSlot::execMulticast_OnSlotStart },
			{ "MustBeOccupied", &USBZLifeActionSlot::execMustBeOccupied },
			{ "OnCharacterAnimEvent", &USBZLifeActionSlot::execOnCharacterAnimEvent },
			{ "OnDesiredDurationReached", &USBZLifeActionSlot::execOnDesiredDurationReached },
			{ "OnEnterAnimationShouldEnd", &USBZLifeActionSlot::execOnEnterAnimationShouldEnd },
			{ "OnMontageBlendOut", &USBZLifeActionSlot::execOnMontageBlendOut },
			{ "OnMontageEnded", &USBZLifeActionSlot::execOnMontageEnded },
			{ "StartDialog", &USBZLifeActionSlot::execStartDialog },
			{ "StopDialog", &USBZLifeActionSlot::execStopDialog },
			{ "SwitchMontageNextSection", &USBZLifeActionSlot::execSwitchMontageNextSection },
			{ "SwitchMontageSection", &USBZLifeActionSlot::execSwitchMontageSection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics
	{
		struct SBZLifeActionSlot_eventCanBeReservedBy_Parms
		{
			const ASBZCharacter* InCharacter;
			FSBZLifeActionRequest Request;
			bool bLogErrors;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Request;
		static void NewProp_bLogErrors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLogErrors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_InCharacter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventCanBeReservedBy_Parms, InCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_InCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_InCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventCanBeReservedBy_Parms, Request), Z_Construct_UScriptStruct_FSBZLifeActionRequest, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_Request_MetaData)) };
	void Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_bLogErrors_SetBit(void* Obj)
	{
		((SBZLifeActionSlot_eventCanBeReservedBy_Parms*)Obj)->bLogErrors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_bLogErrors = { "bLogErrors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionSlot_eventCanBeReservedBy_Parms), &Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_bLogErrors_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionSlot_eventCanBeReservedBy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionSlot_eventCanBeReservedBy_Parms), &Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_InCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_bLogErrors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "CanBeReservedBy", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventCanBeReservedBy_Parms), Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableAngle_Statics
	{
		struct SBZLifeActionSlot_eventGetAcceptableAngle_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetAcceptableAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "GetAcceptableAngle", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventGetAcceptableAngle_Parms), Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableRadius_Statics
	{
		struct SBZLifeActionSlot_eventGetAcceptableRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetAcceptableRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "GetAcceptableRadius", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventGetAcceptableRadius_Parms), Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_GetCharacter_Statics
	{
		struct SBZLifeActionSlot_eventGetCharacter_Parms
		{
			ASBZCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetCharacter_Parms, ReturnValue), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_GetCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_GetCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "GetCharacter", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventGetCharacter_Parms), Z_Construct_UFunction_USBZLifeActionSlot_GetCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_GetCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_GetCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics
	{
		struct SBZLifeActionSlot_eventGetCurrentActionMontage_Parms
		{
			const ASBZCharacter* InCharacter;
			UAnimMontage* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics::NewProp_InCharacter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetCurrentActionMontage_Parms, InCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics::NewProp_InCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics::NewProp_InCharacter_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetCurrentActionMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics::NewProp_InCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "GetCurrentActionMontage", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventGetCurrentActionMontage_Parms), Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics
	{
		struct SBZLifeActionSlot_eventGetCurrentEnterMontage_Parms
		{
			const ASBZCharacter* InCharacter;
			UAnimMontage* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics::NewProp_InCharacter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetCurrentEnterMontage_Parms, InCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics::NewProp_InCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics::NewProp_InCharacter_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetCurrentEnterMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics::NewProp_InCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "GetCurrentEnterMontage", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventGetCurrentEnterMontage_Parms), Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics
	{
		struct SBZLifeActionSlot_eventGetCurrentExitMontage_Parms
		{
			const ASBZCharacter* InCharacter;
			UAnimMontage* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics::NewProp_InCharacter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetCurrentExitMontage_Parms, InCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics::NewProp_InCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics::NewProp_InCharacter_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetCurrentExitMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics::NewProp_InCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "GetCurrentExitMontage", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventGetCurrentExitMontage_Parms), Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentReservationID_Statics
	{
		struct SBZLifeActionSlot_eventGetCurrentReservationID_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentReservationID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetCurrentReservationID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentReservationID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentReservationID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentReservationID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentReservationID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "GetCurrentReservationID", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventGetCurrentReservationID_Parms), Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentReservationID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentReservationID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentReservationID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentReservationID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentReservationID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentReservationID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToLocation_Statics
	{
		struct SBZLifeActionSlot_eventGetMoveToLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetMoveToLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "GetMoveToLocation", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventGetMoveToLocation_Parms), Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToRotation_Statics
	{
		struct SBZLifeActionSlot_eventGetMoveToRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetMoveToRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "GetMoveToRotation", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventGetMoveToRotation_Parms), Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToTransform_Statics
	{
		struct SBZLifeActionSlot_eventGetMoveToTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetMoveToTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "GetMoveToTransform", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventGetMoveToTransform_Parms), Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_GetPlayingActionMontage_Statics
	{
		struct SBZLifeActionSlot_eventGetPlayingActionMontage_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetPlayingActionMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetPlayingActionMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_GetPlayingActionMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetPlayingActionMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetPlayingActionMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_GetPlayingActionMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "GetPlayingActionMontage", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventGetPlayingActionMontage_Parms), Z_Construct_UFunction_USBZLifeActionSlot_GetPlayingActionMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetPlayingActionMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetPlayingActionMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetPlayingActionMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_GetPlayingActionMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_GetPlayingActionMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_GetState_Statics
	{
		struct SBZLifeActionSlot_eventGetState_Parms
		{
			ESBZLifeActionState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZLifeActionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "GetState", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventGetState_Parms), Z_Construct_UFunction_USBZLifeActionSlot_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_GetTag_Statics
	{
		struct SBZLifeActionSlot_eventGetTag_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_GetTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventGetTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_GetTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_GetTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_GetTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_GetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "GetTag", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventGetTag_Parms), Z_Construct_UFunction_USBZLifeActionSlot_GetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_GetTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_GetTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_GetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_GetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_IsFree_Statics
	{
		struct SBZLifeActionSlot_eventIsFree_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZLifeActionSlot_IsFree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionSlot_eventIsFree_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_IsFree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionSlot_eventIsFree_Parms), &Z_Construct_UFunction_USBZLifeActionSlot_IsFree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_IsFree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_IsFree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_IsFree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_IsFree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "IsFree", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventIsFree_Parms), Z_Construct_UFunction_USBZLifeActionSlot_IsFree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsFree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_IsFree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsFree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_IsFree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_IsFree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics
	{
		struct SBZLifeActionSlot_eventIsPlayingActionMontage_Parms
		{
			const ASBZCharacter* InCharacter;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::NewProp_InCharacter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventIsPlayingActionMontage_Parms, InCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::NewProp_InCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::NewProp_InCharacter_MetaData)) };
	void Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionSlot_eventIsPlayingActionMontage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionSlot_eventIsPlayingActionMontage_Parms), &Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::NewProp_InCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "IsPlayingActionMontage", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventIsPlayingActionMontage_Parms), Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics
	{
		struct SBZLifeActionSlot_eventIsPlayingEnterMontage_Parms
		{
			const ASBZCharacter* InCharacter;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::NewProp_InCharacter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventIsPlayingEnterMontage_Parms, InCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::NewProp_InCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::NewProp_InCharacter_MetaData)) };
	void Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionSlot_eventIsPlayingEnterMontage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionSlot_eventIsPlayingEnterMontage_Parms), &Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::NewProp_InCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "IsPlayingEnterMontage", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventIsPlayingEnterMontage_Parms), Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics
	{
		struct SBZLifeActionSlot_eventIsPlayingExitMontage_Parms
		{
			const ASBZCharacter* InCharacter;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::NewProp_InCharacter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventIsPlayingExitMontage_Parms, InCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::NewProp_InCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::NewProp_InCharacter_MetaData)) };
	void Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionSlot_eventIsPlayingExitMontage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionSlot_eventIsPlayingExitMontage_Parms), &Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::NewProp_InCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "IsPlayingExitMontage", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventIsPlayingExitMontage_Parms), Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_IsReadyToStart_Statics
	{
		struct SBZLifeActionSlot_eventIsReadyToStart_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZLifeActionSlot_IsReadyToStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionSlot_eventIsReadyToStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_IsReadyToStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionSlot_eventIsReadyToStart_Parms), &Z_Construct_UFunction_USBZLifeActionSlot_IsReadyToStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_IsReadyToStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_IsReadyToStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_IsReadyToStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_IsReadyToStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "IsReadyToStart", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventIsReadyToStart_Parms), Z_Construct_UFunction_USBZLifeActionSlot_IsReadyToStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsReadyToStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_IsReadyToStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsReadyToStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_IsReadyToStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_IsReadyToStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics
	{
		struct SBZLifeActionSlot_eventIsReservedBy_Parms
		{
			const ASBZCharacter* InCharacter;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::NewProp_InCharacter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventIsReservedBy_Parms, InCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::NewProp_InCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::NewProp_InCharacter_MetaData)) };
	void Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionSlot_eventIsReservedBy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionSlot_eventIsReservedBy_Parms), &Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::NewProp_InCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "IsReservedBy", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventIsReservedBy_Parms), Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnEnterAnimation_Statics
	{
		struct SBZLifeActionSlot_eventIsUsingAnEnterAnimation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnEnterAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionSlot_eventIsUsingAnEnterAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnEnterAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionSlot_eventIsUsingAnEnterAnimation_Parms), &Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnEnterAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnEnterAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnEnterAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnEnterAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnEnterAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "IsUsingAnEnterAnimation", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventIsUsingAnEnterAnimation_Parms), Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnEnterAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnEnterAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnEnterAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnEnterAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnEnterAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnEnterAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnExitAnimation_Statics
	{
		struct SBZLifeActionSlot_eventIsUsingAnExitAnimation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnExitAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionSlot_eventIsUsingAnExitAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnExitAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionSlot_eventIsUsingAnExitAnimation_Parms), &Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnExitAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnExitAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnExitAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnExitAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnExitAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "IsUsingAnExitAnimation", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventIsUsingAnExitAnimation_Parms), Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnExitAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnExitAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnExitAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnExitAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnExitAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnExitAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotFreed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotFreed_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventMulticast_OnSlotFreed_Parms, InCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotFreed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotFreed_Statics::NewProp_InCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotFreed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotFreed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "Multicast_OnSlotFreed", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventMulticast_OnSlotFreed_Parms), Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotFreed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotFreed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotFreed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotFreed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotFreed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotFreed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotStart_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventMulticast_OnSlotStart_Parms, InCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotStart_Statics::NewProp_InCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "Multicast_OnSlotStart", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventMulticast_OnSlotStart_Parms), Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_MustBeOccupied_Statics
	{
		struct SBZLifeActionSlot_eventMustBeOccupied_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZLifeActionSlot_MustBeOccupied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionSlot_eventMustBeOccupied_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_MustBeOccupied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionSlot_eventMustBeOccupied_Parms), &Z_Construct_UFunction_USBZLifeActionSlot_MustBeOccupied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_MustBeOccupied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_MustBeOccupied_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_MustBeOccupied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_MustBeOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "MustBeOccupied", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventMustBeOccupied_Parms), Z_Construct_UFunction_USBZLifeActionSlot_MustBeOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_MustBeOccupied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_MustBeOccupied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_MustBeOccupied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_MustBeOccupied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_MustBeOccupied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics
	{
		struct SBZLifeActionSlot_eventOnCharacterAnimEvent_Parms
		{
			FGameplayTag EventTag;
			bool bActive;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::NewProp_EventTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventOnCharacterAnimEvent_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::NewProp_EventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::NewProp_EventTag_MetaData)) };
	void Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((SBZLifeActionSlot_eventOnCharacterAnimEvent_Parms*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionSlot_eventOnCharacterAnimEvent_Parms), &Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::NewProp_EventTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "OnCharacterAnimEvent", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventOnCharacterAnimEvent_Parms), Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_OnDesiredDurationReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_OnDesiredDurationReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_OnDesiredDurationReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "OnDesiredDurationReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_OnDesiredDurationReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_OnDesiredDurationReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_OnDesiredDurationReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_OnDesiredDurationReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_OnEnterAnimationShouldEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_OnEnterAnimationShouldEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_OnEnterAnimationShouldEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "OnEnterAnimationShouldEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_OnEnterAnimationShouldEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_OnEnterAnimationShouldEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_OnEnterAnimationShouldEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_OnEnterAnimationShouldEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut_Statics
	{
		struct SBZLifeActionSlot_eventOnMontageBlendOut_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventOnMontageBlendOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((SBZLifeActionSlot_eventOnMontageBlendOut_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionSlot_eventOnMontageBlendOut_Parms), &Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "OnMontageBlendOut", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventOnMontageBlendOut_Parms), Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded_Statics
	{
		struct SBZLifeActionSlot_eventOnMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((SBZLifeActionSlot_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionSlot_eventOnMontageEnded_Parms), &Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "OnMontageEnded", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventOnMontageEnded_Parms), Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_StartDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_StartDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_StartDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "StartDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_StartDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_StartDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_StartDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_StartDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_StopDialog_Statics
	{
		struct SBZLifeActionSlot_eventStopDialog_Parms
		{
			bool bReset;
		};
		static void NewProp_bReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZLifeActionSlot_StopDialog_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((SBZLifeActionSlot_eventStopDialog_Parms*)Obj)->bReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionSlot_StopDialog_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionSlot_eventStopDialog_Parms), &Z_Construct_UFunction_USBZLifeActionSlot_StopDialog_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_StopDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_StopDialog_Statics::NewProp_bReset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_StopDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_StopDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "StopDialog", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventStopDialog_Parms), Z_Construct_UFunction_USBZLifeActionSlot_StopDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_StopDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_StopDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_StopDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_StopDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_StopDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection_Statics
	{
		struct SBZLifeActionSlot_eventSwitchMontageNextSection_Parms
		{
			FName SectionName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection_Statics::NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventSwitchMontageNextSection_Parms, SectionName), METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection_Statics::NewProp_SectionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection_Statics::NewProp_SectionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "SwitchMontageNextSection", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventSwitchMontageNextSection_Parms), Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection_Statics
	{
		struct SBZLifeActionSlot_eventSwitchMontageSection_Parms
		{
			FName SectionName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection_Statics::NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionSlot_eventSwitchMontageSection_Parms, SectionName), METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection_Statics::NewProp_SectionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection_Statics::NewProp_SectionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionSlot, nullptr, "SwitchMontageSection", nullptr, nullptr, sizeof(SBZLifeActionSlot_eventSwitchMontageSection_Parms), Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLifeActionSlot_NoRegister()
	{
		return USBZLifeActionSlot::StaticClass();
	}
	struct Z_Construct_UClass_USBZLifeActionSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsumedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConsumedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeededTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeededTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedByTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExcludedByTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMustBeOccupied_MetaData[];
#endif
		static void NewProp_bMustBeOccupied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMustBeOccupied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedOtherSlotsReadyToBeReserved_MetaData[];
#endif
		static void NewProp_bNeedOtherSlotsReadyToBeReserved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedOtherSlotsReadyToBeReserved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOpenForRandomReservation_MetaData[];
#endif
		static void NewProp_bOpenForRandomReservation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOpenForRandomReservation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAcceptableRadius_MetaData[];
#endif
		static void NewProp_bUseAcceptableRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAcceptableRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAcceptableAngle_MetaData[];
#endif
		static void NewProp_bUseAcceptableAngle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAcceptableAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptableAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCoolDown_MetaData[];
#endif
		static void NewProp_bUseCoolDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomDuration_MetaData[];
#endif
		static void NewProp_bUseRandomDuration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomDesiredDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomDesiredDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomAnimationTagsPicker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomAnimationTagsPicker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEnterAnimation_MetaData[];
#endif
		static void NewProp_bUseEnterAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEnterAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnterLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapEnterPointToGround_MetaData[];
#endif
		static void NewProp_bSnapEnterPointToGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapEnterPointToGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterAnimationTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnterAnimationTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseExitAnimation_MetaData[];
#endif
		static void NewProp_bUseExitAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseExitAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapExitPointToGround_MetaData[];
#endif
		static void NewProp_bSnapExitPointToGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapExitPointToGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitAnimationTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExitAnimationTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExitOnlyIfActionAnimationIsPlaying_MetaData[];
#endif
		static void NewProp_bExitOnlyIfActionAnimationIsPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExitOnlyIfActionAnimationIsPlaying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingActionMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayingActionMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingEnterMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayingEnterMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingExitMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayingExitMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReady_MetaData[];
#endif
		static void NewProp_bIsReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReady;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentReservationID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentReservationID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMontageIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_CurrentMontageIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningLifeActionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningLifeActionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTagEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTagEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLifeActionSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLifeActionSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLifeActionSlot_CanBeReservedBy, "CanBeReservedBy" }, // 1527384785
		{ &Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableAngle, "GetAcceptableAngle" }, // 956293000
		{ &Z_Construct_UFunction_USBZLifeActionSlot_GetAcceptableRadius, "GetAcceptableRadius" }, // 3287678888
		{ &Z_Construct_UFunction_USBZLifeActionSlot_GetCharacter, "GetCharacter" }, // 2885960091
		{ &Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentActionMontage, "GetCurrentActionMontage" }, // 1633541619
		{ &Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentEnterMontage, "GetCurrentEnterMontage" }, // 798108357
		{ &Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentExitMontage, "GetCurrentExitMontage" }, // 1381004603
		{ &Z_Construct_UFunction_USBZLifeActionSlot_GetCurrentReservationID, "GetCurrentReservationID" }, // 4160622069
		{ &Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToLocation, "GetMoveToLocation" }, // 1031239362
		{ &Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToRotation, "GetMoveToRotation" }, // 813037624
		{ &Z_Construct_UFunction_USBZLifeActionSlot_GetMoveToTransform, "GetMoveToTransform" }, // 1578995133
		{ &Z_Construct_UFunction_USBZLifeActionSlot_GetPlayingActionMontage, "GetPlayingActionMontage" }, // 3694730058
		{ &Z_Construct_UFunction_USBZLifeActionSlot_GetState, "GetState" }, // 1552289594
		{ &Z_Construct_UFunction_USBZLifeActionSlot_GetTag, "GetTag" }, // 2744182950
		{ &Z_Construct_UFunction_USBZLifeActionSlot_IsFree, "IsFree" }, // 3883318368
		{ &Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingActionMontage, "IsPlayingActionMontage" }, // 1384349527
		{ &Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingEnterMontage, "IsPlayingEnterMontage" }, // 2058052688
		{ &Z_Construct_UFunction_USBZLifeActionSlot_IsPlayingExitMontage, "IsPlayingExitMontage" }, // 44649972
		{ &Z_Construct_UFunction_USBZLifeActionSlot_IsReadyToStart, "IsReadyToStart" }, // 2571819484
		{ &Z_Construct_UFunction_USBZLifeActionSlot_IsReservedBy, "IsReservedBy" }, // 3923159452
		{ &Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnEnterAnimation, "IsUsingAnEnterAnimation" }, // 3410666969
		{ &Z_Construct_UFunction_USBZLifeActionSlot_IsUsingAnExitAnimation, "IsUsingAnExitAnimation" }, // 1401340326
		{ &Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotFreed, "Multicast_OnSlotFreed" }, // 1829751329
		{ &Z_Construct_UFunction_USBZLifeActionSlot_Multicast_OnSlotStart, "Multicast_OnSlotStart" }, // 210901831
		{ &Z_Construct_UFunction_USBZLifeActionSlot_MustBeOccupied, "MustBeOccupied" }, // 1624482165
		{ &Z_Construct_UFunction_USBZLifeActionSlot_OnCharacterAnimEvent, "OnCharacterAnimEvent" }, // 484455659
		{ &Z_Construct_UFunction_USBZLifeActionSlot_OnDesiredDurationReached, "OnDesiredDurationReached" }, // 1362962071
		{ &Z_Construct_UFunction_USBZLifeActionSlot_OnEnterAnimationShouldEnd, "OnEnterAnimationShouldEnd" }, // 3425916372
		{ &Z_Construct_UFunction_USBZLifeActionSlot_OnMontageBlendOut, "OnMontageBlendOut" }, // 1131888052
		{ &Z_Construct_UFunction_USBZLifeActionSlot_OnMontageEnded, "OnMontageEnded" }, // 532704214
		{ &Z_Construct_UFunction_USBZLifeActionSlot_StartDialog, "StartDialog" }, // 3673654864
		{ &Z_Construct_UFunction_USBZLifeActionSlot_StopDialog, "StopDialog" }, // 2022205750
		{ &Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageNextSection, "SwitchMontageNextSection" }, // 841615942
		{ &Z_Construct_UFunction_USBZLifeActionSlot_SwitchMontageSection, "SwitchMontageSection" }, // 681380257
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SBZLifeActionSlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_GrantedTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_GrantedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_GrantedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ConsumedTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ConsumedTags = { "ConsumedTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, ConsumedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ConsumedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ConsumedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_NeededTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_NeededTags = { "NeededTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, NeededTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_NeededTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_NeededTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ExcludedByTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ExcludedByTags = { "ExcludedByTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, ExcludedByTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ExcludedByTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ExcludedByTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bMustBeOccupied_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	void Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bMustBeOccupied_SetBit(void* Obj)
	{
		((USBZLifeActionSlot*)Obj)->bMustBeOccupied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bMustBeOccupied = { "bMustBeOccupied", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLifeActionSlot), &Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bMustBeOccupied_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bMustBeOccupied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bMustBeOccupied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bNeedOtherSlotsReadyToBeReserved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	void Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bNeedOtherSlotsReadyToBeReserved_SetBit(void* Obj)
	{
		((USBZLifeActionSlot*)Obj)->bNeedOtherSlotsReadyToBeReserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bNeedOtherSlotsReadyToBeReserved = { "bNeedOtherSlotsReadyToBeReserved", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLifeActionSlot), &Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bNeedOtherSlotsReadyToBeReserved_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bNeedOtherSlotsReadyToBeReserved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bNeedOtherSlotsReadyToBeReserved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bOpenForRandomReservation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	void Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bOpenForRandomReservation_SetBit(void* Obj)
	{
		((USBZLifeActionSlot*)Obj)->bOpenForRandomReservation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bOpenForRandomReservation = { "bOpenForRandomReservation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLifeActionSlot), &Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bOpenForRandomReservation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bOpenForRandomReservation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bOpenForRandomReservation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseAcceptableRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	void Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseAcceptableRadius_SetBit(void* Obj)
	{
		((USBZLifeActionSlot*)Obj)->bUseAcceptableRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseAcceptableRadius = { "bUseAcceptableRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLifeActionSlot), &Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseAcceptableRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseAcceptableRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseAcceptableRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_AcceptableRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, AcceptableRadius), METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_AcceptableRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_AcceptableRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseAcceptableAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	void Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseAcceptableAngle_SetBit(void* Obj)
	{
		((USBZLifeActionSlot*)Obj)->bUseAcceptableAngle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseAcceptableAngle = { "bUseAcceptableAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLifeActionSlot), &Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseAcceptableAngle_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseAcceptableAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseAcceptableAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_AcceptableAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_AcceptableAngle = { "AcceptableAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, AcceptableAngle), METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_AcceptableAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_AcceptableAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_AngleOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_AngleOffset = { "AngleOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, AngleOffset), METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_AngleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_AngleOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseCoolDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	void Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseCoolDown_SetBit(void* Obj)
	{
		((USBZLifeActionSlot*)Obj)->bUseCoolDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseCoolDown = { "bUseCoolDown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLifeActionSlot), &Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseCoolDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseCoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseCoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_CoolDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_CoolDown = { "CoolDown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, CoolDown), METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_CoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_CoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseRandomDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	void Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseRandomDuration_SetBit(void* Obj)
	{
		((USBZLifeActionSlot*)Obj)->bUseRandomDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseRandomDuration = { "bUseRandomDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLifeActionSlot), &Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseRandomDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseRandomDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseRandomDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_RandomDesiredDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_RandomDesiredDuration = { "RandomDesiredDuration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, RandomDesiredDuration), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_RandomDesiredDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_RandomDesiredDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_DesiredDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_DesiredDuration = { "DesiredDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, DesiredDuration), METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_DesiredDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_DesiredDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_DialogPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_DialogPlayer = { "DialogPlayer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, DialogPlayer), Z_Construct_UClass_USBZLifeActionDialogPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_DialogPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_DialogPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_RandomAnimationTagsPicker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_RandomAnimationTagsPicker = { "RandomAnimationTagsPicker", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, RandomAnimationTagsPicker), Z_Construct_UScriptStruct_FSBZLifeActionRandomAnimationTagsPicker, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_RandomAnimationTagsPicker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_RandomAnimationTagsPicker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseEnterAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	void Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseEnterAnimation_SetBit(void* Obj)
	{
		((USBZLifeActionSlot*)Obj)->bUseEnterAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseEnterAnimation = { "bUseEnterAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLifeActionSlot), &Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseEnterAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseEnterAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseEnterAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_EnterLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_EnterLocation = { "EnterLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, EnterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_EnterLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_EnterLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bSnapEnterPointToGround_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	void Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bSnapEnterPointToGround_SetBit(void* Obj)
	{
		((USBZLifeActionSlot*)Obj)->bSnapEnterPointToGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bSnapEnterPointToGround = { "bSnapEnterPointToGround", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZLifeActionSlot), &Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bSnapEnterPointToGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bSnapEnterPointToGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bSnapEnterPointToGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_EnterAnimationTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_EnterAnimationTag = { "EnterAnimationTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, EnterAnimationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_EnterAnimationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_EnterAnimationTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseExitAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	void Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseExitAnimation_SetBit(void* Obj)
	{
		((USBZLifeActionSlot*)Obj)->bUseExitAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseExitAnimation = { "bUseExitAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLifeActionSlot), &Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseExitAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseExitAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseExitAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ExitLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ExitLocation = { "ExitLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, ExitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ExitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ExitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bSnapExitPointToGround_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	void Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bSnapExitPointToGround_SetBit(void* Obj)
	{
		((USBZLifeActionSlot*)Obj)->bSnapExitPointToGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bSnapExitPointToGround = { "bSnapExitPointToGround", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZLifeActionSlot), &Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bSnapExitPointToGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bSnapExitPointToGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bSnapExitPointToGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ExitAnimationTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ExitAnimationTag = { "ExitAnimationTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, ExitAnimationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ExitAnimationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ExitAnimationTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bExitOnlyIfActionAnimationIsPlaying_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	void Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bExitOnlyIfActionAnimationIsPlaying_SetBit(void* Obj)
	{
		((USBZLifeActionSlot*)Obj)->bExitOnlyIfActionAnimationIsPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bExitOnlyIfActionAnimationIsPlaying = { "bExitOnlyIfActionAnimationIsPlaying", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLifeActionSlot), &Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bExitOnlyIfActionAnimationIsPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bExitOnlyIfActionAnimationIsPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bExitOnlyIfActionAnimationIsPlaying_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ActorEvents_Inner = { "ActorEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLifeActionActorTagEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ActorEvents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ActorEvents = { "ActorEvents", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, ActorEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ActorEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ActorEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_PlayingActionMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_PlayingActionMontage = { "PlayingActionMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, PlayingActionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_PlayingActionMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_PlayingActionMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_PlayingEnterMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_PlayingEnterMontage = { "PlayingEnterMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, PlayingEnterMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_PlayingEnterMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_PlayingEnterMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_PlayingExitMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_PlayingExitMontage = { "PlayingExitMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, PlayingExitMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_PlayingExitMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_PlayingExitMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bIsReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	void Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bIsReady_SetBit(void* Obj)
	{
		((USBZLifeActionSlot*)Obj)->bIsReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bIsReady = { "bIsReady", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLifeActionSlot), &Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bIsReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bIsReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bIsReady_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, State), Z_Construct_UEnum_Starbreeze_ESBZLifeActionState, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_CurrentReservationID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_CurrentReservationID = { "CurrentReservationID", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, CurrentReservationID), METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_CurrentReservationID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_CurrentReservationID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_CurrentMontageIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_CurrentMontageIndex = { "CurrentMontageIndex", nullptr, (EPropertyFlags)0x0020080000002001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, CurrentMontageIndex), METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_CurrentMontageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_CurrentMontageIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_OwningLifeActionInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_OwningLifeActionInstance = { "OwningLifeActionInstance", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, OwningLifeActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_OwningLifeActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_OwningLifeActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_OnTagEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionSlot" },
		{ "ModuleRelativePath", "Public/SBZLifeActionSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_OnTagEvent = { "OnTagEvent", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionSlot, OnTagEvent), Z_Construct_UDelegateFunction_Starbreeze_SBZLifeActionTagEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_OnTagEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_OnTagEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLifeActionSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_GrantedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ConsumedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_NeededTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ExcludedByTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bMustBeOccupied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bNeedOtherSlotsReadyToBeReserved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bOpenForRandomReservation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseAcceptableRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_AcceptableRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseAcceptableAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_AcceptableAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_AngleOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseCoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_CoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseRandomDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_RandomDesiredDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_DesiredDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_DialogPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_RandomAnimationTagsPicker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseEnterAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_EnterLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bSnapEnterPointToGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_EnterAnimationTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bUseExitAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ExitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bSnapExitPointToGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ExitAnimationTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bExitOnlyIfActionAnimationIsPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ActorEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_ActorEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_PlayingActionMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_PlayingEnterMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_PlayingExitMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_bIsReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_CurrentReservationID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_CurrentMontageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_OwningLifeActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionSlot_Statics::NewProp_OnTagEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLifeActionSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLifeActionSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLifeActionSlot_Statics::ClassParams = {
		&USBZLifeActionSlot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZLifeActionSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLifeActionSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLifeActionSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLifeActionSlot, 93564232);
	template<> STARBREEZE_API UClass* StaticClass<USBZLifeActionSlot>()
	{
		return USBZLifeActionSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLifeActionSlot(Z_Construct_UClass_USBZLifeActionSlot, &USBZLifeActionSlot::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLifeActionSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLifeActionSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
