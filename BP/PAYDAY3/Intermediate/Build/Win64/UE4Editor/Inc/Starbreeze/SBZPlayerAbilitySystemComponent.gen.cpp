// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerAbilitySystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerAbilitySystemComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerAbilitySystemComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerAbilitySystemComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAbilitySystemComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlayerAbilityBuffType();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterEffectDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execClient_RejectBuffTime)
	{
		P_GET_ENUM(ESBZPlayerAbilityBuffType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_RejectBuffTime_Implementation(ESBZPlayerAbilityBuffType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execMulticast_BlockSkillTankLastManStanding)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ImmuneTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_BlockSkillTankLastManStanding_Implementation(Z_Param_ImmuneTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execMulticast_MarkedForDeath)
	{
		P_GET_TARRAY(ASBZAIBaseCharacter*,Z_Param_AICharacters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_MarkedForDeath_Implementation(Z_Param_AICharacters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execMulticast_MarkTarget)
	{
		P_GET_OBJECT(APawn,Z_Param_MarkedPawn);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_MarkTarget_Implementation(Z_Param_MarkedPawn,Z_Param_InDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execMulticast_ResetDamageBuffTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ResetDamageBuffTime_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execMulticast_ResetMitigationBuffTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ResetMitigationBuffTime_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execMulticast_ResetSpeedBuffTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ResetSpeedBuffTime_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execMulticast_SetDamageBuffTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetDamageBuffTime_Implementation(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execMulticast_SetMitigationBuffTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetMitigationBuffTime_Implementation(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execMulticast_SetSpeedBuffTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetSpeedBuffTime_Implementation(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execMulticast_SetTacticalDroneBuffBlockCooldown)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Cooldown);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetTacticalDroneBuffBlockCooldown_Implementation(Z_Param_Cooldown);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execMulticast_UnblockSkillTankLastManStanding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_UnblockSkillTankLastManStanding_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execOnBuffBlockCooldownTimeArrayChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuffBlockCooldownTimeArrayChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execOnBuffBlockCountArrayChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuffBlockCountArrayChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execOnBuffTimeArrayChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBuffTimeArrayChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execOnSkillTankLastManStandingBlockingChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSkillTankLastManStandingBlockingChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execOnSkillTankLastManStandingImmuneTimeChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSkillTankLastManStandingImmuneTimeChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execServer_ResetDamageBuffTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_ResetDamageBuffTime_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execServer_ResetMitigationBuffTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_ResetMitigationBuffTime_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execServer_ResetSpeedBuffTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_ResetSpeedBuffTime_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execServer_SetDamageBuffTime)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_SkillTag);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetDamageBuffTime_Implementation(Z_Param_SkillTag,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execServer_SetMitigationBuffTime)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_SkillTag);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetMitigationBuffTime_Implementation(Z_Param_SkillTag,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerAbilitySystemComponent::execServer_SetSpeedBuffTime)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_SkillTag);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetSpeedBuffTime_Implementation(Z_Param_SkillTag,Z_Param_Time);
		P_NATIVE_END;
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime = FName(TEXT("Client_RejectBuffTime"));
	void USBZPlayerAbilitySystemComponent::Client_RejectBuffTime(ESBZPlayerAbilityBuffType Type)
	{
		SBZPlayerAbilitySystemComponent_eventClient_RejectBuffTime_Parms Parms;
		Parms.Type=Type;
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime),&Parms);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Multicast_BlockSkillTankLastManStanding = FName(TEXT("Multicast_BlockSkillTankLastManStanding"));
	void USBZPlayerAbilitySystemComponent::Multicast_BlockSkillTankLastManStanding(float ImmuneTime)
	{
		SBZPlayerAbilitySystemComponent_eventMulticast_BlockSkillTankLastManStanding_Parms Parms;
		Parms.ImmuneTime=ImmuneTime;
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Multicast_BlockSkillTankLastManStanding),&Parms);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath = FName(TEXT("Multicast_MarkedForDeath"));
	void USBZPlayerAbilitySystemComponent::Multicast_MarkedForDeath(TArray<ASBZAIBaseCharacter*> const& AICharacters)
	{
		SBZPlayerAbilitySystemComponent_eventMulticast_MarkedForDeath_Parms Parms;
		Parms.AICharacters=AICharacters;
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath),&Parms);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget = FName(TEXT("Multicast_MarkTarget"));
	void USBZPlayerAbilitySystemComponent::Multicast_MarkTarget(APawn* MarkedPawn, float InDuration)
	{
		SBZPlayerAbilitySystemComponent_eventMulticast_MarkTarget_Parms Parms;
		Parms.MarkedPawn=MarkedPawn;
		Parms.InDuration=InDuration;
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget),&Parms);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Multicast_ResetDamageBuffTime = FName(TEXT("Multicast_ResetDamageBuffTime"));
	void USBZPlayerAbilitySystemComponent::Multicast_ResetDamageBuffTime()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Multicast_ResetDamageBuffTime),NULL);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Multicast_ResetMitigationBuffTime = FName(TEXT("Multicast_ResetMitigationBuffTime"));
	void USBZPlayerAbilitySystemComponent::Multicast_ResetMitigationBuffTime()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Multicast_ResetMitigationBuffTime),NULL);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Multicast_ResetSpeedBuffTime = FName(TEXT("Multicast_ResetSpeedBuffTime"));
	void USBZPlayerAbilitySystemComponent::Multicast_ResetSpeedBuffTime()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Multicast_ResetSpeedBuffTime),NULL);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Multicast_SetDamageBuffTime = FName(TEXT("Multicast_SetDamageBuffTime"));
	void USBZPlayerAbilitySystemComponent::Multicast_SetDamageBuffTime(float Time)
	{
		SBZPlayerAbilitySystemComponent_eventMulticast_SetDamageBuffTime_Parms Parms;
		Parms.Time=Time;
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Multicast_SetDamageBuffTime),&Parms);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Multicast_SetMitigationBuffTime = FName(TEXT("Multicast_SetMitigationBuffTime"));
	void USBZPlayerAbilitySystemComponent::Multicast_SetMitigationBuffTime(float Time)
	{
		SBZPlayerAbilitySystemComponent_eventMulticast_SetMitigationBuffTime_Parms Parms;
		Parms.Time=Time;
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Multicast_SetMitigationBuffTime),&Parms);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Multicast_SetSpeedBuffTime = FName(TEXT("Multicast_SetSpeedBuffTime"));
	void USBZPlayerAbilitySystemComponent::Multicast_SetSpeedBuffTime(float Time)
	{
		SBZPlayerAbilitySystemComponent_eventMulticast_SetSpeedBuffTime_Parms Parms;
		Parms.Time=Time;
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Multicast_SetSpeedBuffTime),&Parms);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Multicast_SetTacticalDroneBuffBlockCooldown = FName(TEXT("Multicast_SetTacticalDroneBuffBlockCooldown"));
	void USBZPlayerAbilitySystemComponent::Multicast_SetTacticalDroneBuffBlockCooldown(float Cooldown)
	{
		SBZPlayerAbilitySystemComponent_eventMulticast_SetTacticalDroneBuffBlockCooldown_Parms Parms;
		Parms.Cooldown=Cooldown;
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Multicast_SetTacticalDroneBuffBlockCooldown),&Parms);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Multicast_UnblockSkillTankLastManStanding = FName(TEXT("Multicast_UnblockSkillTankLastManStanding"));
	void USBZPlayerAbilitySystemComponent::Multicast_UnblockSkillTankLastManStanding()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Multicast_UnblockSkillTankLastManStanding),NULL);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Server_ResetDamageBuffTime = FName(TEXT("Server_ResetDamageBuffTime"));
	void USBZPlayerAbilitySystemComponent::Server_ResetDamageBuffTime()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Server_ResetDamageBuffTime),NULL);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Server_ResetMitigationBuffTime = FName(TEXT("Server_ResetMitigationBuffTime"));
	void USBZPlayerAbilitySystemComponent::Server_ResetMitigationBuffTime()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Server_ResetMitigationBuffTime),NULL);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Server_ResetSpeedBuffTime = FName(TEXT("Server_ResetSpeedBuffTime"));
	void USBZPlayerAbilitySystemComponent::Server_ResetSpeedBuffTime()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Server_ResetSpeedBuffTime),NULL);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime = FName(TEXT("Server_SetDamageBuffTime"));
	void USBZPlayerAbilitySystemComponent::Server_SetDamageBuffTime(FGameplayTag const& SkillTag, float Time)
	{
		SBZPlayerAbilitySystemComponent_eventServer_SetDamageBuffTime_Parms Parms;
		Parms.SkillTag=SkillTag;
		Parms.Time=Time;
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime),&Parms);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime = FName(TEXT("Server_SetMitigationBuffTime"));
	void USBZPlayerAbilitySystemComponent::Server_SetMitigationBuffTime(FGameplayTag const& SkillTag, float Time)
	{
		SBZPlayerAbilitySystemComponent_eventServer_SetMitigationBuffTime_Parms Parms;
		Parms.SkillTag=SkillTag;
		Parms.Time=Time;
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime),&Parms);
	}
	static FName NAME_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime = FName(TEXT("Server_SetSpeedBuffTime"));
	void USBZPlayerAbilitySystemComponent::Server_SetSpeedBuffTime(FGameplayTag const& SkillTag, float Time)
	{
		SBZPlayerAbilitySystemComponent_eventServer_SetSpeedBuffTime_Parms Parms;
		Parms.SkillTag=SkillTag;
		Parms.Time=Time;
		ProcessEvent(FindFunctionChecked(NAME_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime),&Parms);
	}
	void USBZPlayerAbilitySystemComponent::StaticRegisterNativesUSBZPlayerAbilitySystemComponent()
	{
		UClass* Class = USBZPlayerAbilitySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_RejectBuffTime", &USBZPlayerAbilitySystemComponent::execClient_RejectBuffTime },
			{ "Multicast_BlockSkillTankLastManStanding", &USBZPlayerAbilitySystemComponent::execMulticast_BlockSkillTankLastManStanding },
			{ "Multicast_MarkedForDeath", &USBZPlayerAbilitySystemComponent::execMulticast_MarkedForDeath },
			{ "Multicast_MarkTarget", &USBZPlayerAbilitySystemComponent::execMulticast_MarkTarget },
			{ "Multicast_ResetDamageBuffTime", &USBZPlayerAbilitySystemComponent::execMulticast_ResetDamageBuffTime },
			{ "Multicast_ResetMitigationBuffTime", &USBZPlayerAbilitySystemComponent::execMulticast_ResetMitigationBuffTime },
			{ "Multicast_ResetSpeedBuffTime", &USBZPlayerAbilitySystemComponent::execMulticast_ResetSpeedBuffTime },
			{ "Multicast_SetDamageBuffTime", &USBZPlayerAbilitySystemComponent::execMulticast_SetDamageBuffTime },
			{ "Multicast_SetMitigationBuffTime", &USBZPlayerAbilitySystemComponent::execMulticast_SetMitigationBuffTime },
			{ "Multicast_SetSpeedBuffTime", &USBZPlayerAbilitySystemComponent::execMulticast_SetSpeedBuffTime },
			{ "Multicast_SetTacticalDroneBuffBlockCooldown", &USBZPlayerAbilitySystemComponent::execMulticast_SetTacticalDroneBuffBlockCooldown },
			{ "Multicast_UnblockSkillTankLastManStanding", &USBZPlayerAbilitySystemComponent::execMulticast_UnblockSkillTankLastManStanding },
			{ "OnBuffBlockCooldownTimeArrayChanged", &USBZPlayerAbilitySystemComponent::execOnBuffBlockCooldownTimeArrayChanged },
			{ "OnBuffBlockCountArrayChanged", &USBZPlayerAbilitySystemComponent::execOnBuffBlockCountArrayChanged },
			{ "OnBuffTimeArrayChanged", &USBZPlayerAbilitySystemComponent::execOnBuffTimeArrayChanged },
			{ "OnSkillTankLastManStandingBlockingChanged", &USBZPlayerAbilitySystemComponent::execOnSkillTankLastManStandingBlockingChanged },
			{ "OnSkillTankLastManStandingImmuneTimeChanged", &USBZPlayerAbilitySystemComponent::execOnSkillTankLastManStandingImmuneTimeChanged },
			{ "Server_ResetDamageBuffTime", &USBZPlayerAbilitySystemComponent::execServer_ResetDamageBuffTime },
			{ "Server_ResetMitigationBuffTime", &USBZPlayerAbilitySystemComponent::execServer_ResetMitigationBuffTime },
			{ "Server_ResetSpeedBuffTime", &USBZPlayerAbilitySystemComponent::execServer_ResetSpeedBuffTime },
			{ "Server_SetDamageBuffTime", &USBZPlayerAbilitySystemComponent::execServer_SetDamageBuffTime },
			{ "Server_SetMitigationBuffTime", &USBZPlayerAbilitySystemComponent::execServer_SetMitigationBuffTime },
			{ "Server_SetSpeedBuffTime", &USBZPlayerAbilitySystemComponent::execServer_SetSpeedBuffTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerAbilitySystemComponent_eventClient_RejectBuffTime_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZPlayerAbilityBuffType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Client_RejectBuffTime", nullptr, nullptr, sizeof(SBZPlayerAbilitySystemComponent_eventClient_RejectBuffTime_Parms), Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_BlockSkillTankLastManStanding_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImmuneTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_BlockSkillTankLastManStanding_Statics::NewProp_ImmuneTime = { "ImmuneTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerAbilitySystemComponent_eventMulticast_BlockSkillTankLastManStanding_Parms, ImmuneTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_BlockSkillTankLastManStanding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_BlockSkillTankLastManStanding_Statics::NewProp_ImmuneTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_BlockSkillTankLastManStanding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_BlockSkillTankLastManStanding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Multicast_BlockSkillTankLastManStanding", nullptr, nullptr, sizeof(SBZPlayerAbilitySystemComponent_eventMulticast_BlockSkillTankLastManStanding_Parms), Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_BlockSkillTankLastManStanding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_BlockSkillTankLastManStanding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_BlockSkillTankLastManStanding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_BlockSkillTankLastManStanding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_BlockSkillTankLastManStanding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_BlockSkillTankLastManStanding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AICharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AICharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AICharacters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics::NewProp_AICharacters_Inner = { "AICharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics::NewProp_AICharacters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics::NewProp_AICharacters = { "AICharacters", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerAbilitySystemComponent_eventMulticast_MarkedForDeath_Parms, AICharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics::NewProp_AICharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics::NewProp_AICharacters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics::NewProp_AICharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics::NewProp_AICharacters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Multicast_MarkedForDeath", nullptr, nullptr, sizeof(SBZPlayerAbilitySystemComponent_eventMulticast_MarkedForDeath_Parms), Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkedPawn;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget_Statics::NewProp_MarkedPawn = { "MarkedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerAbilitySystemComponent_eventMulticast_MarkTarget_Parms, MarkedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerAbilitySystemComponent_eventMulticast_MarkTarget_Parms, InDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget_Statics::NewProp_MarkedPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget_Statics::NewProp_InDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Multicast_MarkTarget", nullptr, nullptr, sizeof(SBZPlayerAbilitySystemComponent_eventMulticast_MarkTarget_Parms), Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetDamageBuffTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetDamageBuffTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetDamageBuffTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Multicast_ResetDamageBuffTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetDamageBuffTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetDamageBuffTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetDamageBuffTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetDamageBuffTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetMitigationBuffTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetMitigationBuffTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetMitigationBuffTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Multicast_ResetMitigationBuffTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetMitigationBuffTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetMitigationBuffTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetMitigationBuffTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetMitigationBuffTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetSpeedBuffTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetSpeedBuffTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetSpeedBuffTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Multicast_ResetSpeedBuffTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetSpeedBuffTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetSpeedBuffTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetSpeedBuffTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetSpeedBuffTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetDamageBuffTime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetDamageBuffTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerAbilitySystemComponent_eventMulticast_SetDamageBuffTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetDamageBuffTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetDamageBuffTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetDamageBuffTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetDamageBuffTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Multicast_SetDamageBuffTime", nullptr, nullptr, sizeof(SBZPlayerAbilitySystemComponent_eventMulticast_SetDamageBuffTime_Parms), Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetDamageBuffTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetDamageBuffTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetDamageBuffTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetDamageBuffTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetDamageBuffTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetDamageBuffTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetMitigationBuffTime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetMitigationBuffTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerAbilitySystemComponent_eventMulticast_SetMitigationBuffTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetMitigationBuffTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetMitigationBuffTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetMitigationBuffTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetMitigationBuffTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Multicast_SetMitigationBuffTime", nullptr, nullptr, sizeof(SBZPlayerAbilitySystemComponent_eventMulticast_SetMitigationBuffTime_Parms), Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetMitigationBuffTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetMitigationBuffTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetMitigationBuffTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetMitigationBuffTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetMitigationBuffTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetMitigationBuffTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetSpeedBuffTime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetSpeedBuffTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerAbilitySystemComponent_eventMulticast_SetSpeedBuffTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetSpeedBuffTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetSpeedBuffTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetSpeedBuffTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetSpeedBuffTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Multicast_SetSpeedBuffTime", nullptr, nullptr, sizeof(SBZPlayerAbilitySystemComponent_eventMulticast_SetSpeedBuffTime_Parms), Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetSpeedBuffTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetSpeedBuffTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetSpeedBuffTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetSpeedBuffTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetSpeedBuffTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetSpeedBuffTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetTacticalDroneBuffBlockCooldown_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetTacticalDroneBuffBlockCooldown_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerAbilitySystemComponent_eventMulticast_SetTacticalDroneBuffBlockCooldown_Parms, Cooldown), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetTacticalDroneBuffBlockCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetTacticalDroneBuffBlockCooldown_Statics::NewProp_Cooldown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetTacticalDroneBuffBlockCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetTacticalDroneBuffBlockCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Multicast_SetTacticalDroneBuffBlockCooldown", nullptr, nullptr, sizeof(SBZPlayerAbilitySystemComponent_eventMulticast_SetTacticalDroneBuffBlockCooldown_Parms), Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetTacticalDroneBuffBlockCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetTacticalDroneBuffBlockCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetTacticalDroneBuffBlockCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetTacticalDroneBuffBlockCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetTacticalDroneBuffBlockCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetTacticalDroneBuffBlockCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_UnblockSkillTankLastManStanding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_UnblockSkillTankLastManStanding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_UnblockSkillTankLastManStanding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Multicast_UnblockSkillTankLastManStanding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_UnblockSkillTankLastManStanding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_UnblockSkillTankLastManStanding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_UnblockSkillTankLastManStanding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_UnblockSkillTankLastManStanding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCooldownTimeArrayChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCooldownTimeArrayChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCooldownTimeArrayChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "OnBuffBlockCooldownTimeArrayChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCooldownTimeArrayChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCooldownTimeArrayChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCooldownTimeArrayChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCooldownTimeArrayChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCountArrayChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCountArrayChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCountArrayChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "OnBuffBlockCountArrayChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCountArrayChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCountArrayChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCountArrayChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCountArrayChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffTimeArrayChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffTimeArrayChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffTimeArrayChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "OnBuffTimeArrayChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffTimeArrayChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffTimeArrayChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffTimeArrayChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffTimeArrayChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingBlockingChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingBlockingChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingBlockingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "OnSkillTankLastManStandingBlockingChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingBlockingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingBlockingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingBlockingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingBlockingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingImmuneTimeChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingImmuneTimeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingImmuneTimeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "OnSkillTankLastManStandingImmuneTimeChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingImmuneTimeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingImmuneTimeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingImmuneTimeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingImmuneTimeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetDamageBuffTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetDamageBuffTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetDamageBuffTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Server_ResetDamageBuffTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetDamageBuffTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetDamageBuffTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetDamageBuffTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetDamageBuffTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetMitigationBuffTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetMitigationBuffTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetMitigationBuffTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Server_ResetMitigationBuffTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetMitigationBuffTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetMitigationBuffTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetMitigationBuffTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetMitigationBuffTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetSpeedBuffTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetSpeedBuffTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetSpeedBuffTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Server_ResetSpeedBuffTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetSpeedBuffTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetSpeedBuffTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetSpeedBuffTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetSpeedBuffTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillTag;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics::NewProp_SkillTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics::NewProp_SkillTag = { "SkillTag", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerAbilitySystemComponent_eventServer_SetDamageBuffTime_Parms, SkillTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics::NewProp_SkillTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics::NewProp_SkillTag_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerAbilitySystemComponent_eventServer_SetDamageBuffTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics::NewProp_SkillTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Server_SetDamageBuffTime", nullptr, nullptr, sizeof(SBZPlayerAbilitySystemComponent_eventServer_SetDamageBuffTime_Parms), Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillTag;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics::NewProp_SkillTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics::NewProp_SkillTag = { "SkillTag", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerAbilitySystemComponent_eventServer_SetMitigationBuffTime_Parms, SkillTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics::NewProp_SkillTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics::NewProp_SkillTag_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerAbilitySystemComponent_eventServer_SetMitigationBuffTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics::NewProp_SkillTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Server_SetMitigationBuffTime", nullptr, nullptr, sizeof(SBZPlayerAbilitySystemComponent_eventServer_SetMitigationBuffTime_Parms), Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillTag;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics::NewProp_SkillTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics::NewProp_SkillTag = { "SkillTag", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerAbilitySystemComponent_eventServer_SetSpeedBuffTime_Parms, SkillTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics::NewProp_SkillTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics::NewProp_SkillTag_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerAbilitySystemComponent_eventServer_SetSpeedBuffTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics::NewProp_SkillTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerAbilitySystemComponent, nullptr, "Server_SetSpeedBuffTime", nullptr, nullptr, sizeof(SBZPlayerAbilitySystemComponent_eventServer_SetSpeedBuffTime_Parms), Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPlayerAbilitySystemComponent_NoRegister()
	{
		return USBZPlayerAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaggeredTargetDamageIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaggeredTargetDamageIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffTimeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuffTimeArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerBuffTimeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerBuffTimeArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffDurationArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuffDurationArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffMovementSpeedIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuffMovementSpeedIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffDamageReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuffDamageReduction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffDamageIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuffDamageIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictingBuffBitmask_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PredictingBuffBitmask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffTickCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuffTickCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffCooldownTickCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuffCooldownTickCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffBlockCountArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuffBlockCountArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffGUIEffectDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuffGUIEffectDataArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedBuffGUIEffectDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockedBuffGUIEffectDataArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankLastManStandingImmuneGUIEffectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TankLastManStandingImmuneGUIEffectData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoSpecialistHighGrainGUIEffectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoSpecialistHighGrainGUIEffectData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffGUIEffectHandleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_BuffGUIEffectHandleArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedBuffGUIEffectHandleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_BlockedBuffGUIEffectHandleArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankLastManStandingImmuneGUIEffectHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_TankLastManStandingImmuneGUIEffectHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoSpecialistHighGrainGUIEffectHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmmoSpecialistHighGrainGUIEffectHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSkillTankLastManStandingBlocking_MetaData[];
#endif
		static void NewProp_bIsSkillTankLastManStandingBlocking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSkillTankLastManStandingBlocking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillTankLastManStandingImmuneTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkillTankLastManStandingImmuneTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkillCooldownSecondsMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillCooldownSecondsMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillCooldownSecondsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SkillCooldownSecondsMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanTriggerCoupDeGraceSkill_MetaData[];
#endif
		static void NewProp_bCanTriggerCoupDeGraceSkill_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanTriggerCoupDeGraceSkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAmmoSpecialistHighGrain_MetaData[];
#endif
		static void NewProp_bIsAmmoSpecialistHighGrain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAmmoSpecialistHighGrain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoSpecialistHighGrainDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmmoSpecialistHighGrainDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoSpecialistHighGrainArmorPenetrationPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoSpecialistHighGrainArmorPenetrationPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverHealDegradationTickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverHealDegradationTickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverHealDamagePauseTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverHealDamagePauseTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffBlockCooldownTimeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuffBlockCooldownTimeArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastManStandingSkillData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastManStandingSkillData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Client_RejectBuffTime, "Client_RejectBuffTime" }, // 1572243342
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_BlockSkillTankLastManStanding, "Multicast_BlockSkillTankLastManStanding" }, // 3357911845
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkedForDeath, "Multicast_MarkedForDeath" }, // 2645983568
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_MarkTarget, "Multicast_MarkTarget" }, // 3175121524
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetDamageBuffTime, "Multicast_ResetDamageBuffTime" }, // 2681984265
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetMitigationBuffTime, "Multicast_ResetMitigationBuffTime" }, // 557360332
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_ResetSpeedBuffTime, "Multicast_ResetSpeedBuffTime" }, // 459977026
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetDamageBuffTime, "Multicast_SetDamageBuffTime" }, // 1446228874
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetMitigationBuffTime, "Multicast_SetMitigationBuffTime" }, // 2204134621
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetSpeedBuffTime, "Multicast_SetSpeedBuffTime" }, // 2088817251
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_SetTacticalDroneBuffBlockCooldown, "Multicast_SetTacticalDroneBuffBlockCooldown" }, // 3582544002
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Multicast_UnblockSkillTankLastManStanding, "Multicast_UnblockSkillTankLastManStanding" }, // 415955832
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCooldownTimeArrayChanged, "OnBuffBlockCooldownTimeArrayChanged" }, // 423779020
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffBlockCountArrayChanged, "OnBuffBlockCountArrayChanged" }, // 1375068763
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnBuffTimeArrayChanged, "OnBuffTimeArrayChanged" }, // 95514055
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingBlockingChanged, "OnSkillTankLastManStandingBlockingChanged" }, // 4196772048
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_OnSkillTankLastManStandingImmuneTimeChanged, "OnSkillTankLastManStandingImmuneTimeChanged" }, // 949623432
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetDamageBuffTime, "Server_ResetDamageBuffTime" }, // 65277727
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetMitigationBuffTime, "Server_ResetMitigationBuffTime" }, // 796535326
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_ResetSpeedBuffTime, "Server_ResetSpeedBuffTime" }, // 2011068811
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetDamageBuffTime, "Server_SetDamageBuffTime" }, // 3035832482
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetMitigationBuffTime, "Server_SetMitigationBuffTime" }, // 3713183098
		{ &Z_Construct_UFunction_USBZPlayerAbilitySystemComponent_Server_SetSpeedBuffTime, "Server_SetSpeedBuffTime" }, // 2139394467
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "SBZPlayerAbilitySystemComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_StaggeredTargetDamageIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_StaggeredTargetDamageIncrease = { "StaggeredTargetDamageIncrease", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, StaggeredTargetDamageIncrease), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_StaggeredTargetDamageIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_StaggeredTargetDamageIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffTimeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffTimeArray = { "BuffTimeArray", "OnBuffTimeArrayChanged", (EPropertyFlags)0x0040000100002021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BuffTimeArray, USBZPlayerAbilitySystemComponent), STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffTimeArray), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffTimeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffTimeArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_ServerBuffTimeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_ServerBuffTimeArray = { "ServerBuffTimeArray", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ServerBuffTimeArray, USBZPlayerAbilitySystemComponent), STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, ServerBuffTimeArray), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_ServerBuffTimeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_ServerBuffTimeArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffDurationArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffDurationArray = { "BuffDurationArray", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BuffDurationArray, USBZPlayerAbilitySystemComponent), STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffDurationArray), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffDurationArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffDurationArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffMovementSpeedIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffMovementSpeedIncrease = { "BuffMovementSpeedIncrease", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffMovementSpeedIncrease), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffMovementSpeedIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffMovementSpeedIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffDamageReduction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffDamageReduction = { "BuffDamageReduction", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffDamageReduction), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffDamageReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffDamageReduction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffDamageIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffDamageIncrease = { "BuffDamageIncrease", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffDamageIncrease), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffDamageIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffDamageIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_PredictingBuffBitmask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_PredictingBuffBitmask = { "PredictingBuffBitmask", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, PredictingBuffBitmask), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_PredictingBuffBitmask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_PredictingBuffBitmask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffTickCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffTickCount = { "BuffTickCount", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffTickCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffTickCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffTickCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffCooldownTickCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffCooldownTickCount = { "BuffCooldownTickCount", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffCooldownTickCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffCooldownTickCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffCooldownTickCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffBlockCountArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffBlockCountArray = { "BuffBlockCountArray", "OnBuffBlockCountArrayChanged", (EPropertyFlags)0x0040000100002021, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BuffBlockCountArray, USBZPlayerAbilitySystemComponent), STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffBlockCountArray), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffBlockCountArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffBlockCountArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffGUIEffectDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffGUIEffectDataArray = { "BuffGUIEffectDataArray", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BuffGUIEffectDataArray, USBZPlayerAbilitySystemComponent), STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffGUIEffectDataArray), Z_Construct_UClass_USBZCharacterEffectDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffGUIEffectDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffGUIEffectDataArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BlockedBuffGUIEffectDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BlockedBuffGUIEffectDataArray = { "BlockedBuffGUIEffectDataArray", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BlockedBuffGUIEffectDataArray, USBZPlayerAbilitySystemComponent), STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BlockedBuffGUIEffectDataArray), Z_Construct_UClass_USBZCharacterEffectDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BlockedBuffGUIEffectDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BlockedBuffGUIEffectDataArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_TankLastManStandingImmuneGUIEffectData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_TankLastManStandingImmuneGUIEffectData = { "TankLastManStandingImmuneGUIEffectData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, TankLastManStandingImmuneGUIEffectData), Z_Construct_UClass_USBZCharacterEffectDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_TankLastManStandingImmuneGUIEffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_TankLastManStandingImmuneGUIEffectData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainGUIEffectData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainGUIEffectData = { "AmmoSpecialistHighGrainGUIEffectData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, AmmoSpecialistHighGrainGUIEffectData), Z_Construct_UClass_USBZCharacterEffectDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainGUIEffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainGUIEffectData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffGUIEffectHandleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffGUIEffectHandleArray = { "BuffGUIEffectHandleArray", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BuffGUIEffectHandleArray, USBZPlayerAbilitySystemComponent), STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffGUIEffectHandleArray), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffGUIEffectHandleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffGUIEffectHandleArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BlockedBuffGUIEffectHandleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BlockedBuffGUIEffectHandleArray = { "BlockedBuffGUIEffectHandleArray", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BlockedBuffGUIEffectHandleArray, USBZPlayerAbilitySystemComponent), STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BlockedBuffGUIEffectHandleArray), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BlockedBuffGUIEffectHandleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BlockedBuffGUIEffectHandleArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_TankLastManStandingImmuneGUIEffectHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_TankLastManStandingImmuneGUIEffectHandle = { "TankLastManStandingImmuneGUIEffectHandle", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, TankLastManStandingImmuneGUIEffectHandle), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_TankLastManStandingImmuneGUIEffectHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_TankLastManStandingImmuneGUIEffectHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainGUIEffectHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainGUIEffectHandle = { "AmmoSpecialistHighGrainGUIEffectHandle", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, AmmoSpecialistHighGrainGUIEffectHandle), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainGUIEffectHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainGUIEffectHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bIsSkillTankLastManStandingBlocking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bIsSkillTankLastManStandingBlocking_SetBit(void* Obj)
	{
		((USBZPlayerAbilitySystemComponent*)Obj)->bIsSkillTankLastManStandingBlocking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bIsSkillTankLastManStandingBlocking = { "bIsSkillTankLastManStandingBlocking", "OnSkillTankLastManStandingBlockingChanged", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPlayerAbilitySystemComponent), &Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bIsSkillTankLastManStandingBlocking_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bIsSkillTankLastManStandingBlocking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bIsSkillTankLastManStandingBlocking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_SkillTankLastManStandingImmuneTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_SkillTankLastManStandingImmuneTime = { "SkillTankLastManStandingImmuneTime", "OnSkillTankLastManStandingImmuneTimeChanged", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, SkillTankLastManStandingImmuneTime), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_SkillTankLastManStandingImmuneTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_SkillTankLastManStandingImmuneTime_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_SkillCooldownSecondsMap_ValueProp = { "SkillCooldownSecondsMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_SkillCooldownSecondsMap_Key_KeyProp = { "SkillCooldownSecondsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_SkillCooldownSecondsMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_SkillCooldownSecondsMap = { "SkillCooldownSecondsMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, SkillCooldownSecondsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_SkillCooldownSecondsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_SkillCooldownSecondsMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bCanTriggerCoupDeGraceSkill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bCanTriggerCoupDeGraceSkill_SetBit(void* Obj)
	{
		((USBZPlayerAbilitySystemComponent*)Obj)->bCanTriggerCoupDeGraceSkill = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bCanTriggerCoupDeGraceSkill = { "bCanTriggerCoupDeGraceSkill", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPlayerAbilitySystemComponent), &Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bCanTriggerCoupDeGraceSkill_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bCanTriggerCoupDeGraceSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bCanTriggerCoupDeGraceSkill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bIsAmmoSpecialistHighGrain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bIsAmmoSpecialistHighGrain_SetBit(void* Obj)
	{
		((USBZPlayerAbilitySystemComponent*)Obj)->bIsAmmoSpecialistHighGrain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bIsAmmoSpecialistHighGrain = { "bIsAmmoSpecialistHighGrain", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPlayerAbilitySystemComponent), &Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bIsAmmoSpecialistHighGrain_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bIsAmmoSpecialistHighGrain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bIsAmmoSpecialistHighGrain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainDamage = { "AmmoSpecialistHighGrainDamage", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, AmmoSpecialistHighGrainDamage), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainArmorPenetrationPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainArmorPenetrationPoints = { "AmmoSpecialistHighGrainArmorPenetrationPoints", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, AmmoSpecialistHighGrainArmorPenetrationPoints), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainArmorPenetrationPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainArmorPenetrationPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_OverHealDegradationTickInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_OverHealDegradationTickInterval = { "OverHealDegradationTickInterval", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, OverHealDegradationTickInterval), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_OverHealDegradationTickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_OverHealDegradationTickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_OverHealDamagePauseTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_OverHealDamagePauseTimer = { "OverHealDamagePauseTimer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, OverHealDamagePauseTimer), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_OverHealDamagePauseTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_OverHealDamagePauseTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffBlockCooldownTimeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffBlockCooldownTimeArray = { "BuffBlockCooldownTimeArray", "OnBuffBlockCooldownTimeArrayChanged", (EPropertyFlags)0x0040000100002021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BuffBlockCooldownTimeArray, USBZPlayerAbilitySystemComponent), STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, BuffBlockCooldownTimeArray), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffBlockCooldownTimeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffBlockCooldownTimeArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_LastManStandingSkillData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAbilitySystemComponent" },
		{ "ModuleRelativePath", "Public/SBZPlayerAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_LastManStandingSkillData = { "LastManStandingSkillData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAbilitySystemComponent, LastManStandingSkillData), Z_Construct_UClass_USBZSkillData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_LastManStandingSkillData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_LastManStandingSkillData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_StaggeredTargetDamageIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffTimeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_ServerBuffTimeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffDurationArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffMovementSpeedIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffDamageReduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffDamageIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_PredictingBuffBitmask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffTickCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffCooldownTickCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffBlockCountArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffGUIEffectDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BlockedBuffGUIEffectDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_TankLastManStandingImmuneGUIEffectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainGUIEffectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffGUIEffectHandleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BlockedBuffGUIEffectHandleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_TankLastManStandingImmuneGUIEffectHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainGUIEffectHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bIsSkillTankLastManStandingBlocking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_SkillTankLastManStandingImmuneTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_SkillCooldownSecondsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_SkillCooldownSecondsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_SkillCooldownSecondsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bCanTriggerCoupDeGraceSkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_bIsAmmoSpecialistHighGrain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_AmmoSpecialistHighGrainArmorPenetrationPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_OverHealDegradationTickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_OverHealDamagePauseTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_BuffBlockCooldownTimeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::NewProp_LastManStandingSkillData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerAbilitySystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::ClassParams = {
		&USBZPlayerAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerAbilitySystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerAbilitySystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerAbilitySystemComponent, 3611859879);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerAbilitySystemComponent>()
	{
		return USBZPlayerAbilitySystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerAbilitySystemComponent(Z_Construct_UClass_USBZPlayerAbilitySystemComponent, &USBZPlayerAbilitySystemComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerAbilitySystemComponent"), false, nullptr, nullptr, nullptr);

	void USBZPlayerAbilitySystemComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_BuffTimeArray(TEXT("BuffTimeArray"));
		static const FName Name_BuffBlockCountArray(TEXT("BuffBlockCountArray"));
		static const FName Name_bIsSkillTankLastManStandingBlocking(TEXT("bIsSkillTankLastManStandingBlocking"));
		static const FName Name_SkillTankLastManStandingImmuneTime(TEXT("SkillTankLastManStandingImmuneTime"));
		static const FName Name_BuffBlockCooldownTimeArray(TEXT("BuffBlockCooldownTimeArray"));

		const bool bIsValid = true
			&& Name_BuffTimeArray == ClassReps[(int32)ENetFields_Private::BuffTimeArray_STATIC_ARRAY].Property->GetFName()
			&& Name_BuffBlockCountArray == ClassReps[(int32)ENetFields_Private::BuffBlockCountArray_STATIC_ARRAY].Property->GetFName()
			&& Name_bIsSkillTankLastManStandingBlocking == ClassReps[(int32)ENetFields_Private::bIsSkillTankLastManStandingBlocking].Property->GetFName()
			&& Name_SkillTankLastManStandingImmuneTime == ClassReps[(int32)ENetFields_Private::SkillTankLastManStandingImmuneTime].Property->GetFName()
			&& Name_BuffBlockCooldownTimeArray == ClassReps[(int32)ENetFields_Private::BuffBlockCooldownTimeArray_STATIC_ARRAY].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZPlayerAbilitySystemComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerAbilitySystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
