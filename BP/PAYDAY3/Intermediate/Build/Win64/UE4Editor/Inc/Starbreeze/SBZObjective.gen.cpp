// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZObjective() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZObjective_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZObjective();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZObjectiveGroup();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZObjectiveState();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZProgressTextDisplayOption();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnObjective__DelegateSignature();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSubobjectiveComplete();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTimedObjectiveInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZObjective::execActivate)
	{
		P_GET_UBOOL(Z_Param_bEndActiveInGroup);
		P_GET_UBOOL(Z_Param_bCompleteEndedInGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activate(Z_Param_bEndActiveInGroup,Z_Param_bCompleteEndedInGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZObjective::execAddProgress)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddProgress(Z_Param_NewProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZObjective::execComplete)
	{
		P_GET_UBOOL(Z_Param_bEvenWhenInactive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Complete(Z_Param_bEvenWhenInactive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZObjective::execDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZObjective::execFail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fail();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZObjective::execGetActiveInGroup)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_ENUM(ESBZObjectiveGroup,Z_Param_Group);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ASBZObjective*>*)Z_Param__Result=ASBZObjective::GetActiveInGroup(Z_Param_WorldContext,ESBZObjectiveGroup(Z_Param_Group));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZObjective::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZObjective::execMulticast_OnProgressChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnProgressChanged_Implementation(Z_Param_NewProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZObjective::execMulticast_OnStateChanged)
	{
		P_GET_ENUM(ESBZObjectiveState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnStateChanged_Implementation(ESBZObjectiveState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZObjective::execMulticast_SetMaxProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetMaxProgress_Implementation(Z_Param_InMaxProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZObjective::execOnRep_Progress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Progress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZObjective::execOnRep_State)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_State();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZObjective::execSetProgress)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProgress(Z_Param_NewProgress);
		P_NATIVE_END;
	}
	static FName NAME_ASBZObjective_Multicast_OnProgressChanged = FName(TEXT("Multicast_OnProgressChanged"));
	void ASBZObjective::Multicast_OnProgressChanged(int32 NewProgress)
	{
		SBZObjective_eventMulticast_OnProgressChanged_Parms Parms;
		Parms.NewProgress=NewProgress;
		ProcessEvent(FindFunctionChecked(NAME_ASBZObjective_Multicast_OnProgressChanged),&Parms);
	}
	static FName NAME_ASBZObjective_Multicast_OnStateChanged = FName(TEXT("Multicast_OnStateChanged"));
	void ASBZObjective::Multicast_OnStateChanged(ESBZObjectiveState NewState)
	{
		SBZObjective_eventMulticast_OnStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZObjective_Multicast_OnStateChanged),&Parms);
	}
	static FName NAME_ASBZObjective_Multicast_SetMaxProgress = FName(TEXT("Multicast_SetMaxProgress"));
	void ASBZObjective::Multicast_SetMaxProgress(float InMaxProgress)
	{
		SBZObjective_eventMulticast_SetMaxProgress_Parms Parms;
		Parms.InMaxProgress=InMaxProgress;
		ProcessEvent(FindFunctionChecked(NAME_ASBZObjective_Multicast_SetMaxProgress),&Parms);
	}
	void ASBZObjective::StaticRegisterNativesASBZObjective()
	{
		UClass* Class = ASBZObjective::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &ASBZObjective::execActivate },
			{ "AddProgress", &ASBZObjective::execAddProgress },
			{ "Complete", &ASBZObjective::execComplete },
			{ "Disable", &ASBZObjective::execDisable },
			{ "Fail", &ASBZObjective::execFail },
			{ "GetActiveInGroup", &ASBZObjective::execGetActiveInGroup },
			{ "IsActive", &ASBZObjective::execIsActive },
			{ "Multicast_OnProgressChanged", &ASBZObjective::execMulticast_OnProgressChanged },
			{ "Multicast_OnStateChanged", &ASBZObjective::execMulticast_OnStateChanged },
			{ "Multicast_SetMaxProgress", &ASBZObjective::execMulticast_SetMaxProgress },
			{ "OnRep_Progress", &ASBZObjective::execOnRep_Progress },
			{ "OnRep_State", &ASBZObjective::execOnRep_State },
			{ "SetProgress", &ASBZObjective::execSetProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZObjective_Activate_Statics
	{
		struct SBZObjective_eventActivate_Parms
		{
			bool bEndActiveInGroup;
			bool bCompleteEndedInGroup;
		};
		static void NewProp_bEndActiveInGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEndActiveInGroup;
		static void NewProp_bCompleteEndedInGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompleteEndedInGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZObjective_Activate_Statics::NewProp_bEndActiveInGroup_SetBit(void* Obj)
	{
		((SBZObjective_eventActivate_Parms*)Obj)->bEndActiveInGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZObjective_Activate_Statics::NewProp_bEndActiveInGroup = { "bEndActiveInGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZObjective_eventActivate_Parms), &Z_Construct_UFunction_ASBZObjective_Activate_Statics::NewProp_bEndActiveInGroup_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZObjective_Activate_Statics::NewProp_bCompleteEndedInGroup_SetBit(void* Obj)
	{
		((SBZObjective_eventActivate_Parms*)Obj)->bCompleteEndedInGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZObjective_Activate_Statics::NewProp_bCompleteEndedInGroup = { "bCompleteEndedInGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZObjective_eventActivate_Parms), &Z_Construct_UFunction_ASBZObjective_Activate_Statics::NewProp_bCompleteEndedInGroup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZObjective_Activate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZObjective_Activate_Statics::NewProp_bEndActiveInGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZObjective_Activate_Statics::NewProp_bCompleteEndedInGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZObjective_Activate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZObjective_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZObjective, nullptr, "Activate", nullptr, nullptr, sizeof(SBZObjective_eventActivate_Parms), Z_Construct_UFunction_ASBZObjective_Activate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_Activate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZObjective_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZObjective_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZObjective_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZObjective_AddProgress_Statics
	{
		struct SBZObjective_eventAddProgress_Parms
		{
			int32 NewProgress;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZObjective_AddProgress_Statics::NewProp_NewProgress = { "NewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjective_eventAddProgress_Parms, NewProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZObjective_AddProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZObjective_AddProgress_Statics::NewProp_NewProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZObjective_AddProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZObjective_AddProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZObjective, nullptr, "AddProgress", nullptr, nullptr, sizeof(SBZObjective_eventAddProgress_Parms), Z_Construct_UFunction_ASBZObjective_AddProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_AddProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZObjective_AddProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_AddProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZObjective_AddProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZObjective_AddProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZObjective_Complete_Statics
	{
		struct SBZObjective_eventComplete_Parms
		{
			bool bEvenWhenInactive;
		};
		static void NewProp_bEvenWhenInactive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvenWhenInactive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZObjective_Complete_Statics::NewProp_bEvenWhenInactive_SetBit(void* Obj)
	{
		((SBZObjective_eventComplete_Parms*)Obj)->bEvenWhenInactive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZObjective_Complete_Statics::NewProp_bEvenWhenInactive = { "bEvenWhenInactive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZObjective_eventComplete_Parms), &Z_Construct_UFunction_ASBZObjective_Complete_Statics::NewProp_bEvenWhenInactive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZObjective_Complete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZObjective_Complete_Statics::NewProp_bEvenWhenInactive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZObjective_Complete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZObjective_Complete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZObjective, nullptr, "Complete", nullptr, nullptr, sizeof(SBZObjective_eventComplete_Parms), Z_Construct_UFunction_ASBZObjective_Complete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_Complete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZObjective_Complete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_Complete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZObjective_Complete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZObjective_Complete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZObjective_Disable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZObjective_Disable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZObjective_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZObjective, nullptr, "Disable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZObjective_Disable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_Disable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZObjective_Disable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZObjective_Disable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZObjective_Fail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZObjective_Fail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZObjective_Fail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZObjective, nullptr, "Fail", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZObjective_Fail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_Fail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZObjective_Fail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZObjective_Fail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics
	{
		struct SBZObjective_eventGetActiveInGroup_Parms
		{
			UObject* WorldContext;
			ESBZObjectiveGroup Group;
			TArray<ASBZObjective*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Group_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjective_eventGetActiveInGroup_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::NewProp_Group_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjective_eventGetActiveInGroup_Parms, Group), Z_Construct_UEnum_Starbreeze_ESBZObjectiveGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjective_eventGetActiveInGroup_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::NewProp_WorldContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::NewProp_Group_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZObjective, nullptr, "GetActiveInGroup", nullptr, nullptr, sizeof(SBZObjective_eventGetActiveInGroup_Parms), Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZObjective_GetActiveInGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZObjective_GetActiveInGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZObjective_IsActive_Statics
	{
		struct SBZObjective_eventIsActive_Parms
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
	void Z_Construct_UFunction_ASBZObjective_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZObjective_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZObjective_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZObjective_eventIsActive_Parms), &Z_Construct_UFunction_ASBZObjective_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZObjective_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZObjective_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZObjective_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZObjective_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZObjective, nullptr, "IsActive", nullptr, nullptr, sizeof(SBZObjective_eventIsActive_Parms), Z_Construct_UFunction_ASBZObjective_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZObjective_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZObjective_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZObjective_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZObjective_Multicast_OnProgressChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZObjective_Multicast_OnProgressChanged_Statics::NewProp_NewProgress = { "NewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjective_eventMulticast_OnProgressChanged_Parms, NewProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZObjective_Multicast_OnProgressChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZObjective_Multicast_OnProgressChanged_Statics::NewProp_NewProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZObjective_Multicast_OnProgressChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZObjective_Multicast_OnProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZObjective, nullptr, "Multicast_OnProgressChanged", nullptr, nullptr, sizeof(SBZObjective_eventMulticast_OnProgressChanged_Parms), Z_Construct_UFunction_ASBZObjective_Multicast_OnProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_Multicast_OnProgressChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZObjective_Multicast_OnProgressChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_Multicast_OnProgressChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZObjective_Multicast_OnProgressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZObjective_Multicast_OnProgressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZObjective_Multicast_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZObjective_Multicast_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZObjective_Multicast_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjective_eventMulticast_OnStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZObjectiveState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZObjective_Multicast_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZObjective_Multicast_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZObjective_Multicast_OnStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZObjective_Multicast_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZObjective_Multicast_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZObjective, nullptr, "Multicast_OnStateChanged", nullptr, nullptr, sizeof(SBZObjective_eventMulticast_OnStateChanged_Parms), Z_Construct_UFunction_ASBZObjective_Multicast_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_Multicast_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZObjective_Multicast_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_Multicast_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZObjective_Multicast_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZObjective_Multicast_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZObjective_Multicast_SetMaxProgress_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMaxProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZObjective_Multicast_SetMaxProgress_Statics::NewProp_InMaxProgress = { "InMaxProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjective_eventMulticast_SetMaxProgress_Parms, InMaxProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZObjective_Multicast_SetMaxProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZObjective_Multicast_SetMaxProgress_Statics::NewProp_InMaxProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZObjective_Multicast_SetMaxProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZObjective_Multicast_SetMaxProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZObjective, nullptr, "Multicast_SetMaxProgress", nullptr, nullptr, sizeof(SBZObjective_eventMulticast_SetMaxProgress_Parms), Z_Construct_UFunction_ASBZObjective_Multicast_SetMaxProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_Multicast_SetMaxProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZObjective_Multicast_SetMaxProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_Multicast_SetMaxProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZObjective_Multicast_SetMaxProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZObjective_Multicast_SetMaxProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZObjective_OnRep_Progress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZObjective_OnRep_Progress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZObjective_OnRep_Progress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZObjective, nullptr, "OnRep_Progress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZObjective_OnRep_Progress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_OnRep_Progress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZObjective_OnRep_Progress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZObjective_OnRep_Progress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZObjective_OnRep_State_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZObjective_OnRep_State_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZObjective_OnRep_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZObjective, nullptr, "OnRep_State", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZObjective_OnRep_State_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_OnRep_State_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZObjective_OnRep_State()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZObjective_OnRep_State_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZObjective_SetProgress_Statics
	{
		struct SBZObjective_eventSetProgress_Parms
		{
			int32 NewProgress;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZObjective_SetProgress_Statics::NewProp_NewProgress = { "NewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZObjective_eventSetProgress_Parms, NewProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZObjective_SetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZObjective_SetProgress_Statics::NewProp_NewProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZObjective_SetProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZObjective_SetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZObjective, nullptr, "SetProgress", nullptr, nullptr, sizeof(SBZObjective_eventSetProgress_Parms), Z_Construct_UFunction_ASBZObjective_SetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_SetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZObjective_SetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZObjective_SetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZObjective_SetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZObjective_SetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZObjective_NoRegister()
	{
		return ASBZObjective::StaticClass();
	}
	struct Z_Construct_UClass_ASBZObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisplayOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOptional_MetaData[];
#endif
		static void NewProp_bIsOptional_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOptional;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUIUseProgressBar_MetaData[];
#endif
		static void NewProp_bUIUseProgressBar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUIUseProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverseProgressBar_MetaData[];
#endif
		static void NewProp_bReverseProgressBar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverseProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUIReverseTimer_MetaData[];
#endif
		static void NewProp_bUIReverseTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUIReverseTimer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressTextOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressTextOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressTextOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ObjectiveDescription;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectiveGroup_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectiveGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentObjective;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubObjectives_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubObjectives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubObjectives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProgressWhileInactive_MetaData[];
#endif
		static void NewProp_bProgressWhileInactive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProgressWhileInactive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompleteWhenInactiveFromProgress_MetaData[];
#endif
		static void NewProp_bCompleteWhenInactiveFromProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompleteWhenInactiveFromProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoActiveOnParent_MetaData[];
#endif
		static void NewProp_bAutoActiveOnParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoActiveOnParent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SubobjectiveSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubobjectiveSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SubobjectiveSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxProgressPerDifficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxProgressPerDifficulty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEverReplicateMaxProgress_MetaData[];
#endif
		static void NewProp_bCanEverReplicateMaxProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEverReplicateMaxProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimedObjectiveActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TimedObjectiveActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimedObjectiveActorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimedObjectiveActorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TimedObjectiveActorArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoActorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoActorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InfoActorArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZObjective_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZObjective_Activate, "Activate" }, // 63028248
		{ &Z_Construct_UFunction_ASBZObjective_AddProgress, "AddProgress" }, // 4178188968
		{ &Z_Construct_UFunction_ASBZObjective_Complete, "Complete" }, // 606360557
		{ &Z_Construct_UFunction_ASBZObjective_Disable, "Disable" }, // 2266117205
		{ &Z_Construct_UFunction_ASBZObjective_Fail, "Fail" }, // 1137072458
		{ &Z_Construct_UFunction_ASBZObjective_GetActiveInGroup, "GetActiveInGroup" }, // 1555386518
		{ &Z_Construct_UFunction_ASBZObjective_IsActive, "IsActive" }, // 1341312401
		{ &Z_Construct_UFunction_ASBZObjective_Multicast_OnProgressChanged, "Multicast_OnProgressChanged" }, // 2175628648
		{ &Z_Construct_UFunction_ASBZObjective_Multicast_OnStateChanged, "Multicast_OnStateChanged" }, // 4233903946
		{ &Z_Construct_UFunction_ASBZObjective_Multicast_SetMaxProgress, "Multicast_SetMaxProgress" }, // 2724304414
		{ &Z_Construct_UFunction_ASBZObjective_OnRep_Progress, "OnRep_Progress" }, // 1181247943
		{ &Z_Construct_UFunction_ASBZObjective_OnRep_State, "OnRep_State" }, // 2270957010
		{ &Z_Construct_UFunction_ASBZObjective_SetProgress, "SetProgress" }, // 1851346793
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZObjective.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, Text), METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_DisplayOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_DisplayOrder = { "DisplayOrder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, DisplayOrder), METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_DisplayOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_DisplayOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_bIsOptional_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	void Z_Construct_UClass_ASBZObjective_Statics::NewProp_bIsOptional_SetBit(void* Obj)
	{
		((ASBZObjective*)Obj)->bIsOptional = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_bIsOptional = { "bIsOptional", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZObjective), &Z_Construct_UClass_ASBZObjective_Statics::NewProp_bIsOptional_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bIsOptional_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bIsOptional_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_bUIUseProgressBar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	void Z_Construct_UClass_ASBZObjective_Statics::NewProp_bUIUseProgressBar_SetBit(void* Obj)
	{
		((ASBZObjective*)Obj)->bUIUseProgressBar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_bUIUseProgressBar = { "bUIUseProgressBar", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZObjective), &Z_Construct_UClass_ASBZObjective_Statics::NewProp_bUIUseProgressBar_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bUIUseProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bUIUseProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_bReverseProgressBar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	void Z_Construct_UClass_ASBZObjective_Statics::NewProp_bReverseProgressBar_SetBit(void* Obj)
	{
		((ASBZObjective*)Obj)->bReverseProgressBar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_bReverseProgressBar = { "bReverseProgressBar", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZObjective), &Z_Construct_UClass_ASBZObjective_Statics::NewProp_bReverseProgressBar_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bReverseProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bReverseProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_bUIReverseTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	void Z_Construct_UClass_ASBZObjective_Statics::NewProp_bUIReverseTimer_SetBit(void* Obj)
	{
		((ASBZObjective*)Obj)->bUIReverseTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_bUIReverseTimer = { "bUIReverseTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZObjective), &Z_Construct_UClass_ASBZObjective_Statics::NewProp_bUIReverseTimer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bUIReverseTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bUIReverseTimer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_ProgressTextOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_ProgressTextOption_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_ProgressTextOption = { "ProgressTextOption", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, ProgressTextOption), Z_Construct_UEnum_Starbreeze_ESBZProgressTextDisplayOption, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_ProgressTextOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_ProgressTextOption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_ObjectiveDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_ObjectiveDescription = { "ObjectiveDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, ObjectiveDescription), METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_ObjectiveDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_ObjectiveDescription_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_ObjectiveGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_ObjectiveGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_ObjectiveGroup = { "ObjectiveGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, ObjectiveGroup), Z_Construct_UEnum_Starbreeze_ESBZObjectiveGroup, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_ObjectiveGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_ObjectiveGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_ParentObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_ParentObjective = { "ParentObjective", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, ParentObjective), Z_Construct_UClass_ASBZObjective_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_ParentObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_ParentObjective_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_SubObjectives_Inner = { "SubObjectives", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_SubObjectives_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_SubObjectives = { "SubObjectives", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, SubObjectives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_SubObjectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_SubObjectives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnActivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnActivated = { "OnActivated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, OnActivated), Z_Construct_UDelegateFunction_Starbreeze_SBZOnObjective__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, OnCompleted), Z_Construct_UDelegateFunction_Starbreeze_SBZOnObjective__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, OnFailed), Z_Construct_UDelegateFunction_Starbreeze_SBZOnObjective__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnDisabled = { "OnDisabled", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, OnDisabled), Z_Construct_UDelegateFunction_Starbreeze_SBZOnObjective__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnUpdated = { "OnUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, OnUpdated), Z_Construct_UDelegateFunction_Starbreeze_SBZOnObjective__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_bProgressWhileInactive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	void Z_Construct_UClass_ASBZObjective_Statics::NewProp_bProgressWhileInactive_SetBit(void* Obj)
	{
		((ASBZObjective*)Obj)->bProgressWhileInactive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_bProgressWhileInactive = { "bProgressWhileInactive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZObjective), &Z_Construct_UClass_ASBZObjective_Statics::NewProp_bProgressWhileInactive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bProgressWhileInactive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bProgressWhileInactive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_bCompleteWhenInactiveFromProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	void Z_Construct_UClass_ASBZObjective_Statics::NewProp_bCompleteWhenInactiveFromProgress_SetBit(void* Obj)
	{
		((ASBZObjective*)Obj)->bCompleteWhenInactiveFromProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_bCompleteWhenInactiveFromProgress = { "bCompleteWhenInactiveFromProgress", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZObjective), &Z_Construct_UClass_ASBZObjective_Statics::NewProp_bCompleteWhenInactiveFromProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bCompleteWhenInactiveFromProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bCompleteWhenInactiveFromProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_bAutoActiveOnParent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	void Z_Construct_UClass_ASBZObjective_Statics::NewProp_bAutoActiveOnParent_SetBit(void* Obj)
	{
		((ASBZObjective*)Obj)->bAutoActiveOnParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_bAutoActiveOnParent = { "bAutoActiveOnParent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZObjective), &Z_Construct_UClass_ASBZObjective_Statics::NewProp_bAutoActiveOnParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bAutoActiveOnParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bAutoActiveOnParent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_SubobjectiveSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_SubobjectiveSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_SubobjectiveSetting = { "SubobjectiveSetting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, SubobjectiveSetting), Z_Construct_UEnum_Starbreeze_ESBZSubobjectiveComplete, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_SubobjectiveSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_SubobjectiveSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_TagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_TagContainer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_State = { "State", "OnRep_State", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, State), Z_Construct_UEnum_Starbreeze_ESBZObjectiveState, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_Progress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_Progress = { "Progress", "OnRep_Progress", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, Progress), METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_MaxProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, MaxProgress), METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_MaxProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_MaxProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_MaxProgressPerDifficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_MaxProgressPerDifficulty = { "MaxProgressPerDifficulty", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(MaxProgressPerDifficulty, ASBZObjective), STRUCT_OFFSET(ASBZObjective, MaxProgressPerDifficulty), METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_MaxProgressPerDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_MaxProgressPerDifficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_bCanEverReplicateMaxProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	void Z_Construct_UClass_ASBZObjective_Statics::NewProp_bCanEverReplicateMaxProgress_SetBit(void* Obj)
	{
		((ASBZObjective*)Obj)->bCanEverReplicateMaxProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_bCanEverReplicateMaxProgress = { "bCanEverReplicateMaxProgress", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZObjective), &Z_Construct_UClass_ASBZObjective_Statics::NewProp_bCanEverReplicateMaxProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bCanEverReplicateMaxProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_bCanEverReplicateMaxProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_StartTimeSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_StartTimeSeconds = { "StartTimeSeconds", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, StartTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_StartTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_StartTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_TimedObjectiveActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_TimedObjectiveActor = { "TimedObjectiveActor", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, TimedObjectiveActor), Z_Construct_UClass_USBZTimedObjectiveInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_TimedObjectiveActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_TimedObjectiveActor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_TimedObjectiveActorArray_Inner = { "TimedObjectiveActorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_TimedObjectiveActorArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_TimedObjectiveActorArray = { "TimedObjectiveActorArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, TimedObjectiveActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_TimedObjectiveActorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_TimedObjectiveActorArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_InfoActorArray_Inner = { "InfoActorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_InfoActorArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_InfoActorArray = { "InfoActorArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, InfoActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_InfoActorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_InfoActorArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZObjective_Statics::NewProp_MarkerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZObjective" },
		{ "ModuleRelativePath", "Public/SBZObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZObjective_Statics::NewProp_MarkerAsset = { "MarkerAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZObjective, MarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::NewProp_MarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::NewProp_MarkerAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_DisplayOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_bIsOptional,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_bUIUseProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_bReverseProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_bUIReverseTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_ProgressTextOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_ProgressTextOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_ObjectiveDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_ObjectiveGroup_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_ObjectiveGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_ParentObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_SubObjectives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_SubObjectives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_OnUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_bProgressWhileInactive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_bCompleteWhenInactiveFromProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_bAutoActiveOnParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_SubobjectiveSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_SubobjectiveSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_TagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_MaxProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_MaxProgressPerDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_bCanEverReplicateMaxProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_StartTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_TimedObjectiveActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_TimedObjectiveActorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_TimedObjectiveActorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_InfoActorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_InfoActorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZObjective_Statics::NewProp_MarkerAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZObjective_Statics::ClassParams = {
		&ASBZObjective::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZObjective, 344734733);
	template<> STARBREEZE_API UClass* StaticClass<ASBZObjective>()
	{
		return ASBZObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZObjective(Z_Construct_UClass_ASBZObjective, &ASBZObjective::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZObjective"), false, nullptr, nullptr, nullptr);

	void ASBZObjective::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_State(TEXT("State"));
		static const FName Name_Progress(TEXT("Progress"));
		static const FName Name_MaxProgress(TEXT("MaxProgress"));

		const bool bIsValid = true
			&& Name_State == ClassReps[(int32)ENetFields_Private::State].Property->GetFName()
			&& Name_Progress == ClassReps[(int32)ENetFields_Private::Progress].Property->GetFName()
			&& Name_MaxProgress == ClassReps[(int32)ENetFields_Private::MaxProgress].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZObjective"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
