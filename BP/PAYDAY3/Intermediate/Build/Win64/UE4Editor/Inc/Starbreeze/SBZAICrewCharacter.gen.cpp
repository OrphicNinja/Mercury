// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICrewCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICrewCharacter() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICrewCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICrewCharacter();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSecurityCamera_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DefeatState();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICrewState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICrewEquipmentData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVoicePriority();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisualDetectionGeneratorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAICrewCharacter::execMulticast_MarkCamera)
	{
		P_GET_OBJECT(ASBZSecurityCamera,Z_Param_Camera);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_MarkCamera_Implementation(Z_Param_Camera);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewCharacter::execMulticast_MarkTarget)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_UBOOL(Z_Param_bShouldPlayPointGesture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_MarkTarget_Implementation(Z_Param_Character,Z_Param_bShouldPlayPointGesture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewCharacter::execMulticast_PauseDefeatTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PauseDefeatTime_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewCharacter::execMulticast_ResumeDefeatTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDefeatTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ResumeDefeatTime_Implementation(Z_Param_InDefeatTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewCharacter::execMulticast_SetDefeatState)
	{
		P_GET_ENUM(EPD3DefeatState,Z_Param_InState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetDefeatState_Implementation(EPD3DefeatState(Z_Param_InState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewCharacter::execMulticast_SetDefeatTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDefeatTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetDefeatTime_Implementation(Z_Param_InDefeatTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewCharacter::execOnRep_CrewState)
	{
		P_GET_OBJECT(ASBZAICrewState,Z_Param_OldCrewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CrewState(Z_Param_OldCrewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewCharacter::execOnRep_DefeatTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DefeatTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewCharacter::execOnServerCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerCompleteInteraction(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewCharacter::execOnServerEndInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerEndInteraction(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewCharacter::execOnServerStartInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerStartInteraction(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZAICrewCharacter_Multicast_MarkCamera = FName(TEXT("Multicast_MarkCamera"));
	void ASBZAICrewCharacter::Multicast_MarkCamera(ASBZSecurityCamera* Camera)
	{
		SBZAICrewCharacter_eventMulticast_MarkCamera_Parms Parms;
		Parms.Camera=Camera;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICrewCharacter_Multicast_MarkCamera),&Parms);
	}
	static FName NAME_ASBZAICrewCharacter_Multicast_MarkTarget = FName(TEXT("Multicast_MarkTarget"));
	void ASBZAICrewCharacter::Multicast_MarkTarget(ASBZCharacter* Character, bool bShouldPlayPointGesture)
	{
		SBZAICrewCharacter_eventMulticast_MarkTarget_Parms Parms;
		Parms.Character=Character;
		Parms.bShouldPlayPointGesture=bShouldPlayPointGesture ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICrewCharacter_Multicast_MarkTarget),&Parms);
	}
	static FName NAME_ASBZAICrewCharacter_Multicast_PauseDefeatTime = FName(TEXT("Multicast_PauseDefeatTime"));
	void ASBZAICrewCharacter::Multicast_PauseDefeatTime()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICrewCharacter_Multicast_PauseDefeatTime),NULL);
	}
	static FName NAME_ASBZAICrewCharacter_Multicast_ResumeDefeatTime = FName(TEXT("Multicast_ResumeDefeatTime"));
	void ASBZAICrewCharacter::Multicast_ResumeDefeatTime(float InDefeatTime)
	{
		SBZAICrewCharacter_eventMulticast_ResumeDefeatTime_Parms Parms;
		Parms.InDefeatTime=InDefeatTime;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICrewCharacter_Multicast_ResumeDefeatTime),&Parms);
	}
	static FName NAME_ASBZAICrewCharacter_Multicast_SetDefeatState = FName(TEXT("Multicast_SetDefeatState"));
	void ASBZAICrewCharacter::Multicast_SetDefeatState(EPD3DefeatState InState)
	{
		SBZAICrewCharacter_eventMulticast_SetDefeatState_Parms Parms;
		Parms.InState=InState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICrewCharacter_Multicast_SetDefeatState),&Parms);
	}
	static FName NAME_ASBZAICrewCharacter_Multicast_SetDefeatTime = FName(TEXT("Multicast_SetDefeatTime"));
	void ASBZAICrewCharacter::Multicast_SetDefeatTime(float InDefeatTime)
	{
		SBZAICrewCharacter_eventMulticast_SetDefeatTime_Parms Parms;
		Parms.InDefeatTime=InDefeatTime;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICrewCharacter_Multicast_SetDefeatTime),&Parms);
	}
	void ASBZAICrewCharacter::StaticRegisterNativesASBZAICrewCharacter()
	{
		UClass* Class = ASBZAICrewCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_MarkCamera", &ASBZAICrewCharacter::execMulticast_MarkCamera },
			{ "Multicast_MarkTarget", &ASBZAICrewCharacter::execMulticast_MarkTarget },
			{ "Multicast_PauseDefeatTime", &ASBZAICrewCharacter::execMulticast_PauseDefeatTime },
			{ "Multicast_ResumeDefeatTime", &ASBZAICrewCharacter::execMulticast_ResumeDefeatTime },
			{ "Multicast_SetDefeatState", &ASBZAICrewCharacter::execMulticast_SetDefeatState },
			{ "Multicast_SetDefeatTime", &ASBZAICrewCharacter::execMulticast_SetDefeatTime },
			{ "OnRep_CrewState", &ASBZAICrewCharacter::execOnRep_CrewState },
			{ "OnRep_DefeatTime", &ASBZAICrewCharacter::execOnRep_DefeatTime },
			{ "OnServerCompleteInteraction", &ASBZAICrewCharacter::execOnServerCompleteInteraction },
			{ "OnServerEndInteraction", &ASBZAICrewCharacter::execOnServerEndInteraction },
			{ "OnServerStartInteraction", &ASBZAICrewCharacter::execOnServerStartInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkCamera_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewCharacter_eventMulticast_MarkCamera_Parms, Camera), Z_Construct_UClass_ASBZSecurityCamera_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkCamera_Statics::NewProp_Camera,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewCharacter, nullptr, "Multicast_MarkCamera", nullptr, nullptr, sizeof(SBZAICrewCharacter_eventMulticast_MarkCamera_Parms), Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static void NewProp_bShouldPlayPointGesture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldPlayPointGesture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewCharacter_eventMulticast_MarkTarget_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget_Statics::NewProp_bShouldPlayPointGesture_SetBit(void* Obj)
	{
		((SBZAICrewCharacter_eventMulticast_MarkTarget_Parms*)Obj)->bShouldPlayPointGesture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget_Statics::NewProp_bShouldPlayPointGesture = { "bShouldPlayPointGesture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICrewCharacter_eventMulticast_MarkTarget_Parms), &Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget_Statics::NewProp_bShouldPlayPointGesture_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget_Statics::NewProp_bShouldPlayPointGesture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewCharacter, nullptr, "Multicast_MarkTarget", nullptr, nullptr, sizeof(SBZAICrewCharacter_eventMulticast_MarkTarget_Parms), Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_PauseDefeatTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_PauseDefeatTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_PauseDefeatTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewCharacter, nullptr, "Multicast_PauseDefeatTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_PauseDefeatTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_PauseDefeatTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_PauseDefeatTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_PauseDefeatTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_ResumeDefeatTime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDefeatTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_ResumeDefeatTime_Statics::NewProp_InDefeatTime = { "InDefeatTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewCharacter_eventMulticast_ResumeDefeatTime_Parms, InDefeatTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_ResumeDefeatTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_ResumeDefeatTime_Statics::NewProp_InDefeatTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_ResumeDefeatTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_ResumeDefeatTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewCharacter, nullptr, "Multicast_ResumeDefeatTime", nullptr, nullptr, sizeof(SBZAICrewCharacter_eventMulticast_ResumeDefeatTime_Parms), Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_ResumeDefeatTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_ResumeDefeatTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_ResumeDefeatTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_ResumeDefeatTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_ResumeDefeatTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_ResumeDefeatTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatState_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatState_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewCharacter_eventMulticast_SetDefeatState_Parms, InState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatState_Statics::NewProp_InState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatState_Statics::NewProp_InState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewCharacter, nullptr, "Multicast_SetDefeatState", nullptr, nullptr, sizeof(SBZAICrewCharacter_eventMulticast_SetDefeatState_Parms), Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatTime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDefeatTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatTime_Statics::NewProp_InDefeatTime = { "InDefeatTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewCharacter_eventMulticast_SetDefeatTime_Parms, InDefeatTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatTime_Statics::NewProp_InDefeatTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewCharacter, nullptr, "Multicast_SetDefeatTime", nullptr, nullptr, sizeof(SBZAICrewCharacter_eventMulticast_SetDefeatTime_Parms), Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_CrewState_Statics
	{
		struct SBZAICrewCharacter_eventOnRep_CrewState_Parms
		{
			ASBZAICrewState* OldCrewState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldCrewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_CrewState_Statics::NewProp_OldCrewState = { "OldCrewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewCharacter_eventOnRep_CrewState_Parms, OldCrewState), Z_Construct_UClass_ASBZAICrewState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_CrewState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_CrewState_Statics::NewProp_OldCrewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_CrewState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_CrewState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewCharacter, nullptr, "OnRep_CrewState", nullptr, nullptr, sizeof(SBZAICrewCharacter_eventOnRep_CrewState_Parms), Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_CrewState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_CrewState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_CrewState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_CrewState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_CrewState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_CrewState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_DefeatTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_DefeatTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_DefeatTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewCharacter, nullptr, "OnRep_DefeatTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_DefeatTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_DefeatTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_DefeatTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_DefeatTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics
	{
		struct SBZAICrewCharacter_eventOnServerCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewCharacter_eventOnServerCompleteInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewCharacter_eventOnServerCompleteInteraction_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZAICrewCharacter_eventOnServerCompleteInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICrewCharacter_eventOnServerCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewCharacter, nullptr, "OnServerCompleteInteraction", nullptr, nullptr, sizeof(SBZAICrewCharacter_eventOnServerCompleteInteraction_Parms), Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics
	{
		struct SBZAICrewCharacter_eventOnServerEndInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewCharacter_eventOnServerEndInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewCharacter_eventOnServerEndInteraction_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZAICrewCharacter_eventOnServerEndInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICrewCharacter_eventOnServerEndInteraction_Parms), &Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewCharacter, nullptr, "OnServerEndInteraction", nullptr, nullptr, sizeof(SBZAICrewCharacter_eventOnServerEndInteraction_Parms), Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics
	{
		struct SBZAICrewCharacter_eventOnServerStartInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewCharacter_eventOnServerStartInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewCharacter_eventOnServerStartInteraction_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZAICrewCharacter_eventOnServerStartInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICrewCharacter_eventOnServerStartInteraction_Parms), &Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewCharacter, nullptr, "OnServerStartInteraction", nullptr, nullptr, sizeof(SBZAICrewCharacter_eventOnServerStartInteraction_Parms), Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAICrewCharacter_NoRegister()
	{
		return ASBZAICrewCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAICrewCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthReplenishEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HealthReplenishEffectClass;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetPriority_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPriority_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HelpComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPD00_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CPD00;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPD01_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CPD01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrewState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrewState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefeatState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefeatState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefeatState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldDefeatState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldDefeatState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldDefeatState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefeatTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefeatTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReviveMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReviveMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TasedMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TasedMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuffedMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CuffedMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubduedMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubduedMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownedOutline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownedOutline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevivedComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RevivedComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncuffedComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UncuffedComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownedDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownedDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCustodyDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCustodyDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackFromCustodyDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackFromCustodyDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuffedDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CuffedDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TasedDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TasedDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubduedDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubduedDialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMaskOn_MetaData[];
#endif
		static void NewProp_bIsMaskOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMaskOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLoadoutLoaded_MetaData[];
#endif
		static void NewProp_bIsLoadoutLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoadoutLoaded;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MarkingVoicePriority_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkingVoicePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MarkingVoicePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkingDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarkingDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkGuardStealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MarkGuardStealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkCameraStealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MarkCameraStealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrewAIColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrewAIColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrewAIMarkerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrewAIMarkerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrewAIMarkerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrewAIMarkerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrewAIMarkerSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CrewAIMarkerSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAICrewCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZAIBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAICrewCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkCamera, "Multicast_MarkCamera" }, // 1642001591
		{ &Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_MarkTarget, "Multicast_MarkTarget" }, // 984710503
		{ &Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_PauseDefeatTime, "Multicast_PauseDefeatTime" }, // 3270981164
		{ &Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_ResumeDefeatTime, "Multicast_ResumeDefeatTime" }, // 2553856432
		{ &Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatState, "Multicast_SetDefeatState" }, // 4172494096
		{ &Z_Construct_UFunction_ASBZAICrewCharacter_Multicast_SetDefeatTime, "Multicast_SetDefeatTime" }, // 2291757033
		{ &Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_CrewState, "OnRep_CrewState" }, // 3728947061
		{ &Z_Construct_UFunction_ASBZAICrewCharacter_OnRep_DefeatTime, "OnRep_DefeatTime" }, // 1476519832
		{ &Z_Construct_UFunction_ASBZAICrewCharacter_OnServerCompleteInteraction, "OnServerCompleteInteraction" }, // 3645248392
		{ &Z_Construct_UFunction_ASBZAICrewCharacter_OnServerEndInteraction, "OnServerEndInteraction" }, // 2379622140
		{ &Z_Construct_UFunction_ASBZAICrewCharacter_OnServerStartInteraction, "OnServerStartInteraction" }, // 858558223
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZAICrewCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_EquipmentData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_EquipmentData = { "EquipmentData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, EquipmentData), Z_Construct_UClass_USBZAICrewEquipmentData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_EquipmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_EquipmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_HealthReplenishEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_HealthReplenishEffectClass = { "HealthReplenishEffectClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, HealthReplenishEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_HealthReplenishEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_HealthReplenishEffectClass_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TargetPriority_ValueProp = { "TargetPriority", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TargetPriority_Key_KeyProp = { "TargetPriority_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TargetPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TargetPriority = { "TargetPriority", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, TargetPriority), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TargetPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TargetPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CallComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CallComment = { "CallComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, CallComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CallComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CallComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_HelpComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_HelpComment = { "HelpComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, HelpComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_HelpComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_HelpComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CPD00_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CPD00 = { "CPD00", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, CPD00), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CPD00_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CPD00_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CPD01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CPD01 = { "CPD01", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, CPD01), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CPD01_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CPD01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewState = { "CrewState", "OnRep_CrewState", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, CrewState), Z_Construct_UClass_ASBZAICrewState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DefeatState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DefeatState = { "DefeatState", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, DefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DefeatState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DefeatState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_OldDefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_OldDefeatState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_OldDefeatState = { "OldDefeatState", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, OldDefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_OldDefeatState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_OldDefeatState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DefeatTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DefeatTime = { "DefeatTime", "OnRep_DefeatTime", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, DefeatTime), METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DefeatTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DefeatTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_ReviveMarker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_ReviveMarker = { "ReviveMarker", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, ReviveMarker), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_ReviveMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_ReviveMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TasedMarker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TasedMarker = { "TasedMarker", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, TasedMarker), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TasedMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TasedMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CuffedMarker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CuffedMarker = { "CuffedMarker", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, CuffedMarker), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CuffedMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CuffedMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_SubduedMarker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_SubduedMarker = { "SubduedMarker", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, SubduedMarker), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_SubduedMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_SubduedMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DownedOutline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DownedOutline = { "DownedOutline", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, DownedOutline), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DownedOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DownedOutline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_RevivedComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_RevivedComment = { "RevivedComment", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, RevivedComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_RevivedComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_RevivedComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_UncuffedComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_UncuffedComment = { "UncuffedComment", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, UncuffedComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_UncuffedComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_UncuffedComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DownedDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DownedDialog = { "DownedDialog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, DownedDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DownedDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DownedDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_InCustodyDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_InCustodyDialog = { "InCustodyDialog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, InCustodyDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_InCustodyDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_InCustodyDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_BackFromCustodyDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_BackFromCustodyDialog = { "BackFromCustodyDialog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, BackFromCustodyDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_BackFromCustodyDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_BackFromCustodyDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CuffedDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CuffedDialog = { "CuffedDialog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, CuffedDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CuffedDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CuffedDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TasedDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TasedDialog = { "TasedDialog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, TasedDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TasedDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TasedDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_SubduedDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_SubduedDialog = { "SubduedDialog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, SubduedDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_SubduedDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_SubduedDialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CurrentWard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CurrentWard = { "CurrentWard", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, CurrentWard), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CurrentWard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CurrentWard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_bIsMaskOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_bIsMaskOn_SetBit(void* Obj)
	{
		((ASBZAICrewCharacter*)Obj)->bIsMaskOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_bIsMaskOn = { "bIsMaskOn", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAICrewCharacter), &Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_bIsMaskOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_bIsMaskOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_bIsMaskOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_bIsLoadoutLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_bIsLoadoutLoaded_SetBit(void* Obj)
	{
		((ASBZAICrewCharacter*)Obj)->bIsLoadoutLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_bIsLoadoutLoaded = { "bIsLoadoutLoaded", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAICrewCharacter), &Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_bIsLoadoutLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_bIsLoadoutLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_bIsLoadoutLoaded_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkingVoicePriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkingVoicePriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkingVoicePriority = { "MarkingVoicePriority", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, MarkingVoicePriority), Z_Construct_UEnum_Starbreeze_ESBZVoicePriority, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkingVoicePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkingVoicePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkingDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkingDuration = { "MarkingDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, MarkingDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkingDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkingDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkGuardStealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkGuardStealth = { "MarkGuardStealth", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, MarkGuardStealth), METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkGuardStealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkGuardStealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkCameraStealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkCameraStealth = { "MarkCameraStealth", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, MarkCameraStealth), METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkCameraStealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkCameraStealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIColor = { "CrewAIColor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, CrewAIColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIMarkerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIMarkerAsset = { "CrewAIMarkerAsset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, CrewAIMarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIMarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIMarkerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIMarkerOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIMarkerOffset = { "CrewAIMarkerOffset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, CrewAIMarkerOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIMarkerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIMarkerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIMarkerSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewCharacter" },
		{ "ModuleRelativePath", "Public/SBZAICrewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIMarkerSocketName = { "CrewAIMarkerSocketName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewCharacter, CrewAIMarkerSocketName), METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIMarkerSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIMarkerSocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAICrewCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_EquipmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_HealthReplenishEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TargetPriority_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TargetPriority_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TargetPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CallComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_HelpComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CPD00,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CPD01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DefeatState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_OldDefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_OldDefeatState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DefeatTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_ReviveMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TasedMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CuffedMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_SubduedMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DownedOutline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_RevivedComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_UncuffedComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_DownedDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_InCustodyDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_BackFromCustodyDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CuffedDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_TasedDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_SubduedDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CurrentWard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_bIsMaskOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_bIsLoadoutLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkingVoicePriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkingVoicePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkingDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkGuardStealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_MarkCameraStealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIMarkerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIMarkerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewCharacter_Statics::NewProp_CrewAIMarkerSocketName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAIVisualDetectionGeneratorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAICrewCharacter, ISBZAIVisualDetectionGeneratorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAICrewCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAICrewCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAICrewCharacter_Statics::ClassParams = {
		&ASBZAICrewCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAICrewCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAICrewCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAICrewCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAICrewCharacter, 2408008829);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAICrewCharacter>()
	{
		return ASBZAICrewCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAICrewCharacter(Z_Construct_UClass_ASBZAICrewCharacter, &ASBZAICrewCharacter::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAICrewCharacter"), false, nullptr, nullptr, nullptr);

	void ASBZAICrewCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CrewState(TEXT("CrewState"));
		static const FName Name_DefeatTime(TEXT("DefeatTime"));

		const bool bIsValid = true
			&& Name_CrewState == ClassReps[(int32)ENetFields_Private::CrewState].Property->GetFName()
			&& Name_DefeatTime == ClassReps[(int32)ENetFields_Private::DefeatTime].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZAICrewCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAICrewCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
