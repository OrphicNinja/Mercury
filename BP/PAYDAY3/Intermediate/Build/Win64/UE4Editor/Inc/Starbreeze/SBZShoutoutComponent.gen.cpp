// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZShoutoutComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZShoutoutComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShoutoutComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShoutoutComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZShoutActionType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShoutTargetComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZShoutoutComponent::execIsActorMarked)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActorMarked(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZShoutoutComponent::execMulticast_SendPing)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SendPing_Implementation(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZShoutoutComponent::execMulticast_Shoutout)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_ENUM(ESBZShoutActionType,Z_Param_Action);
		P_GET_OBJECT(USBZShoutTargetComponent,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_Shoutout_Implementation(Z_Param_Actor,ESBZShoutActionType(Z_Param_Action),Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZShoutoutComponent::execMulticast_ShoutoutWithoutTarget)
	{
		P_GET_ENUM(ESBZShoutActionType,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ShoutoutWithoutTarget_Implementation(ESBZShoutActionType(Z_Param_Action));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZShoutoutComponent::execOnPingComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPingComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZShoutoutComponent::execServer_SendPing)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SendPing_Implementation(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZShoutoutComponent::execServer_Shoutout)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_ENUM(ESBZShoutActionType,Z_Param_Action);
		P_GET_OBJECT(USBZShoutTargetComponent,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_Shoutout_Validate(Z_Param_Actor,ESBZShoutActionType(Z_Param_Action),Z_Param_Target))
		{
			RPC_ValidateFailed(TEXT("Server_Shoutout_Validate"));
			return;
		}
		P_THIS->Server_Shoutout_Implementation(Z_Param_Actor,ESBZShoutActionType(Z_Param_Action),Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZShoutoutComponent::execSetMarkLimit)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMarkLimit(Z_Param_NewLimit);
		P_NATIVE_END;
	}
	static FName NAME_USBZShoutoutComponent_Multicast_SendPing = FName(TEXT("Multicast_SendPing"));
	void USBZShoutoutComponent::Multicast_SendPing(FVector const& Location)
	{
		SBZShoutoutComponent_eventMulticast_SendPing_Parms Parms;
		Parms.Location=Location;
		ProcessEvent(FindFunctionChecked(NAME_USBZShoutoutComponent_Multicast_SendPing),&Parms);
	}
	static FName NAME_USBZShoutoutComponent_Multicast_Shoutout = FName(TEXT("Multicast_Shoutout"));
	void USBZShoutoutComponent::Multicast_Shoutout(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target)
	{
		SBZShoutoutComponent_eventMulticast_Shoutout_Parms Parms;
		Parms.Actor=Actor;
		Parms.Action=Action;
		Parms.Target=Target;
		ProcessEvent(FindFunctionChecked(NAME_USBZShoutoutComponent_Multicast_Shoutout),&Parms);
	}
	static FName NAME_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget = FName(TEXT("Multicast_ShoutoutWithoutTarget"));
	void USBZShoutoutComponent::Multicast_ShoutoutWithoutTarget(ESBZShoutActionType Action)
	{
		SBZShoutoutComponent_eventMulticast_ShoutoutWithoutTarget_Parms Parms;
		Parms.Action=Action;
		ProcessEvent(FindFunctionChecked(NAME_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget),&Parms);
	}
	static FName NAME_USBZShoutoutComponent_Server_SendPing = FName(TEXT("Server_SendPing"));
	void USBZShoutoutComponent::Server_SendPing(FVector const& Location)
	{
		SBZShoutoutComponent_eventServer_SendPing_Parms Parms;
		Parms.Location=Location;
		ProcessEvent(FindFunctionChecked(NAME_USBZShoutoutComponent_Server_SendPing),&Parms);
	}
	static FName NAME_USBZShoutoutComponent_Server_Shoutout = FName(TEXT("Server_Shoutout"));
	void USBZShoutoutComponent::Server_Shoutout(AActor* Actor, ESBZShoutActionType Action, USBZShoutTargetComponent* Target)
	{
		SBZShoutoutComponent_eventServer_Shoutout_Parms Parms;
		Parms.Actor=Actor;
		Parms.Action=Action;
		Parms.Target=Target;
		ProcessEvent(FindFunctionChecked(NAME_USBZShoutoutComponent_Server_Shoutout),&Parms);
	}
	void USBZShoutoutComponent::StaticRegisterNativesUSBZShoutoutComponent()
	{
		UClass* Class = USBZShoutoutComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActorMarked", &USBZShoutoutComponent::execIsActorMarked },
			{ "Multicast_SendPing", &USBZShoutoutComponent::execMulticast_SendPing },
			{ "Multicast_Shoutout", &USBZShoutoutComponent::execMulticast_Shoutout },
			{ "Multicast_ShoutoutWithoutTarget", &USBZShoutoutComponent::execMulticast_ShoutoutWithoutTarget },
			{ "OnPingComplete", &USBZShoutoutComponent::execOnPingComplete },
			{ "Server_SendPing", &USBZShoutoutComponent::execServer_SendPing },
			{ "Server_Shoutout", &USBZShoutoutComponent::execServer_Shoutout },
			{ "SetMarkLimit", &USBZShoutoutComponent::execSetMarkLimit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked_Statics
	{
		struct SBZShoutoutComponent_eventIsActorMarked_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZShoutoutComponent_eventIsActorMarked_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZShoutoutComponent_eventIsActorMarked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZShoutoutComponent_eventIsActorMarked_Parms), &Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZShoutoutComponent, nullptr, "IsActorMarked", nullptr, nullptr, sizeof(SBZShoutoutComponent_eventIsActorMarked_Parms), Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZShoutoutComponent_eventMulticast_SendPing_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZShoutoutComponent, nullptr, "Multicast_SendPing", nullptr, nullptr, sizeof(SBZShoutoutComponent_eventMulticast_SendPing_Parms), Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZShoutoutComponent_eventMulticast_Shoutout_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZShoutoutComponent_eventMulticast_Shoutout_Parms, Action), Z_Construct_UEnum_Starbreeze_ESBZShoutActionType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZShoutoutComponent_eventMulticast_Shoutout_Parms, Target), Z_Construct_UClass_USBZShoutTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::NewProp_Action_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZShoutoutComponent, nullptr, "Multicast_Shoutout", nullptr, nullptr, sizeof(SBZShoutoutComponent_eventMulticast_Shoutout_Parms), Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZShoutoutComponent_eventMulticast_ShoutoutWithoutTarget_Parms, Action), Z_Construct_UEnum_Starbreeze_ESBZShoutActionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget_Statics::NewProp_Action_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZShoutoutComponent, nullptr, "Multicast_ShoutoutWithoutTarget", nullptr, nullptr, sizeof(SBZShoutoutComponent_eventMulticast_ShoutoutWithoutTarget_Parms), Z_Construct_UFunction_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZShoutoutComponent_OnPingComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutoutComponent_OnPingComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZShoutoutComponent_OnPingComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZShoutoutComponent, nullptr, "OnPingComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutoutComponent_OnPingComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_OnPingComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZShoutoutComponent_OnPingComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZShoutoutComponent_OnPingComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZShoutoutComponent_eventServer_SendPing_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZShoutoutComponent, nullptr, "Server_SendPing", nullptr, nullptr, sizeof(SBZShoutoutComponent_eventServer_SendPing_Parms), Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A80CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZShoutoutComponent_eventServer_Shoutout_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZShoutoutComponent_eventServer_Shoutout_Parms, Action), Z_Construct_UEnum_Starbreeze_ESBZShoutActionType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZShoutoutComponent_eventServer_Shoutout_Parms, Target), Z_Construct_UClass_USBZShoutTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::NewProp_Action_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZShoutoutComponent, nullptr, "Server_Shoutout", nullptr, nullptr, sizeof(SBZShoutoutComponent_eventServer_Shoutout_Parms), Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZShoutoutComponent_SetMarkLimit_Statics
	{
		struct SBZShoutoutComponent_eventSetMarkLimit_Parms
		{
			int32 NewLimit;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZShoutoutComponent_SetMarkLimit_Statics::NewProp_NewLimit = { "NewLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZShoutoutComponent_eventSetMarkLimit_Parms, NewLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZShoutoutComponent_SetMarkLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZShoutoutComponent_SetMarkLimit_Statics::NewProp_NewLimit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutoutComponent_SetMarkLimit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZShoutoutComponent_SetMarkLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZShoutoutComponent, nullptr, "SetMarkLimit", nullptr, nullptr, sizeof(SBZShoutoutComponent_eventSetMarkLimit_Parms), Z_Construct_UFunction_USBZShoutoutComponent_SetMarkLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_SetMarkLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutoutComponent_SetMarkLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutComponent_SetMarkLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZShoutoutComponent_SetMarkLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZShoutoutComponent_SetMarkLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZShoutoutComponent_NoRegister()
	{
		return USBZShoutoutComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZShoutoutComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoutOutRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShoutOutRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRoomPathDistanceFromInitialTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRoomPathDistanceFromInitialTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightCutOffDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightCutOffDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RaytraceTargetFindDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RaytraceTargetFindDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AproximateTargetFindBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AproximateTargetFindBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkingOutlineAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkingOutlineAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MarkLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoutoutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShoutoutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMarkComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultMarkComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHelpComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultHelpComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGetDownComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultGetDownComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCopSurrenderComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultCopSurrenderComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetDownTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GetDownTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockGoDownTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockGoDownTagContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockSurrenderOwnedTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockSurrenderOwnedTagContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingMarkerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PingMarkerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PingTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopSurrenderAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CopSurrenderAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PingIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivationBlockedTags_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActivationBlockedTags_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActivationBlockedTags_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationBlockedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActivationBlockedTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZShoutoutComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZShoutoutComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZShoutoutComponent_IsActorMarked, "IsActorMarked" }, // 666846115
		{ &Z_Construct_UFunction_USBZShoutoutComponent_Multicast_SendPing, "Multicast_SendPing" }, // 2427072289
		{ &Z_Construct_UFunction_USBZShoutoutComponent_Multicast_Shoutout, "Multicast_Shoutout" }, // 3607736462
		{ &Z_Construct_UFunction_USBZShoutoutComponent_Multicast_ShoutoutWithoutTarget, "Multicast_ShoutoutWithoutTarget" }, // 95967842
		{ &Z_Construct_UFunction_USBZShoutoutComponent_OnPingComplete, "OnPingComplete" }, // 1504183218
		{ &Z_Construct_UFunction_USBZShoutoutComponent_Server_SendPing, "Server_SendPing" }, // 1966101761
		{ &Z_Construct_UFunction_USBZShoutoutComponent_Server_Shoutout, "Server_Shoutout" }, // 1116115981
		{ &Z_Construct_UFunction_USBZShoutoutComponent_SetMarkLimit, "SetMarkLimit" }, // 536699622
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZShoutoutComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ShoutOutRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ShoutOutRadius = { "ShoutOutRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, ShoutOutRadius), METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ShoutOutRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ShoutOutRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_MaxRoomPathDistanceFromInitialTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_MaxRoomPathDistanceFromInitialTarget = { "MaxRoomPathDistanceFromInitialTarget", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, MaxRoomPathDistanceFromInitialTarget), METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_MaxRoomPathDistanceFromInitialTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_MaxRoomPathDistanceFromInitialTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_HeightCutOffDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_HeightCutOffDistance = { "HeightCutOffDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, HeightCutOffDistance), METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_HeightCutOffDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_HeightCutOffDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_RaytraceTargetFindDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_RaytraceTargetFindDist = { "RaytraceTargetFindDist", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, RaytraceTargetFindDist), METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_RaytraceTargetFindDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_RaytraceTargetFindDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_AproximateTargetFindBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_AproximateTargetFindBox = { "AproximateTargetFindBox", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, AproximateTargetFindBox), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_AproximateTargetFindBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_AproximateTargetFindBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_MarkingOutlineAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_MarkingOutlineAsset = { "MarkingOutlineAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, MarkingOutlineAsset), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_MarkingOutlineAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_MarkingOutlineAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_MarkLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_MarkLimit = { "MarkLimit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, MarkLimit), METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_MarkLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_MarkLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ShoutoutDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ShoutoutDuration = { "ShoutoutDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, ShoutoutDuration), METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ShoutoutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ShoutoutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultMarkComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultMarkComment = { "DefaultMarkComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, DefaultMarkComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultMarkComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultMarkComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultHelpComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultHelpComment = { "DefaultHelpComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, DefaultHelpComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultHelpComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultHelpComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultGetDownComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultGetDownComment = { "DefaultGetDownComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, DefaultGetDownComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultGetDownComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultGetDownComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultCopSurrenderComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultCopSurrenderComment = { "DefaultCopSurrenderComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, DefaultCopSurrenderComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultCopSurrenderComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultCopSurrenderComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_GetDownTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_GetDownTags = { "GetDownTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, GetDownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_GetDownTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_GetDownTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_BlockGoDownTagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_BlockGoDownTagContainer = { "BlockGoDownTagContainer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, BlockGoDownTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_BlockGoDownTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_BlockGoDownTagContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_BlockSurrenderOwnedTagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_BlockSurrenderOwnedTagContainer = { "BlockSurrenderOwnedTagContainer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, BlockSurrenderOwnedTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_BlockSurrenderOwnedTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_BlockSurrenderOwnedTagContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_PingMarkerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_PingMarkerAsset = { "PingMarkerAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, PingMarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_PingMarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_PingMarkerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_PingTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_PingTimer = { "PingTimer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, PingTimer), METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_PingTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_PingTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_CopSurrenderAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_CopSurrenderAction = { "CopSurrenderAction", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, CopSurrenderAction), Z_Construct_UClass_USBZAIAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_CopSurrenderAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_CopSurrenderAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_PingIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_PingIndex = { "PingIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, PingIndex), METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_PingIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_PingIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_AbilitySystem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_AbilitySystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_AbilitySystem_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ActivationBlockedTags_ValueProp = { "ActivationBlockedTags", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ActivationBlockedTags_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ActivationBlockedTags_Key_KeyProp = { "ActivationBlockedTags_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZShoutActionType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ActivationBlockedTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutComponent" },
		{ "ModuleRelativePath", "Public/SBZShoutoutComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ActivationBlockedTags = { "ActivationBlockedTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutComponent, ActivationBlockedTags), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ActivationBlockedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ActivationBlockedTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZShoutoutComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ShoutOutRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_MaxRoomPathDistanceFromInitialTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_HeightCutOffDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_RaytraceTargetFindDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_AproximateTargetFindBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_MarkingOutlineAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_MarkLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ShoutoutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultMarkComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultHelpComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultGetDownComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_DefaultCopSurrenderComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_GetDownTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_BlockGoDownTagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_BlockSurrenderOwnedTagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_PingMarkerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_PingTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_CopSurrenderAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_PingIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_AbilitySystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ActivationBlockedTags_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ActivationBlockedTags_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ActivationBlockedTags_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutComponent_Statics::NewProp_ActivationBlockedTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZShoutoutComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZShoutoutComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZShoutoutComponent_Statics::ClassParams = {
		&USBZShoutoutComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZShoutoutComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZShoutoutComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZShoutoutComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZShoutoutComponent, 1630469843);
	template<> STARBREEZE_API UClass* StaticClass<USBZShoutoutComponent>()
	{
		return USBZShoutoutComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZShoutoutComponent(Z_Construct_UClass_USBZShoutoutComponent, &USBZShoutoutComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZShoutoutComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZShoutoutComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
