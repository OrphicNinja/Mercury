// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThrowableKnife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThrowableKnife() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThrowableKnife_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThrowableKnife();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThrowable();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThrowableKnifePickup_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIPointOfInterest_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAmmoPickup_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZThrowableKnife::execHasRetrieverSkill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasRetrieverSkill();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowableKnife::execMulticast_CreateImpact)
	{
		P_GET_UBOOL(Z_Param_bInShouldBladeBounce);
		P_GET_UBOOL(Z_Param_bInHasRetrieverSkill);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_CreateImpact_Implementation(Z_Param_bInShouldBladeBounce,Z_Param_bInHasRetrieverSkill);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowableKnife::execMulticast_FireKnife)
	{
		P_GET_STRUCT(FSBZKnifeProjectileTargetData,Z_Param_TargetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_FireKnife_Implementation(Z_Param_TargetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowableKnife::execOnParentActorEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_OldAttachParentActor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnParentActorEndPlay(Z_Param_OldAttachParentActor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowableKnife::execServer_CreateImpact)
	{
		P_GET_UBOOL(Z_Param_bInShouldBladeBounce);
		P_GET_UBOOL(Z_Param_bInHasRetrieverSkill);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InHitComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_InBoneName);
		P_GET_STRUCT(FVector,Z_Param_InRelativeLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_CreateImpact_Implementation(Z_Param_bInShouldBladeBounce,Z_Param_bInHasRetrieverSkill,Z_Param_InHitComponent,Z_Param_InBoneName,Z_Param_InRelativeLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowableKnife::execServer_PickedUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_PickedUp_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZThrowableKnife::execServer_ReplicateDamage)
	{
		P_GET_STRUCT(FSBZKnifeProjectileTargetData,Z_Param_TargetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_ReplicateDamage_Implementation(Z_Param_TargetData);
		P_NATIVE_END;
	}
	static FName NAME_ASBZThrowableKnife_Multicast_CreateImpact = FName(TEXT("Multicast_CreateImpact"));
	void ASBZThrowableKnife::Multicast_CreateImpact(bool bInShouldBladeBounce, bool bInHasRetrieverSkill)
	{
		SBZThrowableKnife_eventMulticast_CreateImpact_Parms Parms;
		Parms.bInShouldBladeBounce=bInShouldBladeBounce ? true : false;
		Parms.bInHasRetrieverSkill=bInHasRetrieverSkill ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZThrowableKnife_Multicast_CreateImpact),&Parms);
	}
	static FName NAME_ASBZThrowableKnife_Multicast_FireKnife = FName(TEXT("Multicast_FireKnife"));
	void ASBZThrowableKnife::Multicast_FireKnife(FSBZKnifeProjectileTargetData const& TargetData)
	{
		SBZThrowableKnife_eventMulticast_FireKnife_Parms Parms;
		Parms.TargetData=TargetData;
		ProcessEvent(FindFunctionChecked(NAME_ASBZThrowableKnife_Multicast_FireKnife),&Parms);
	}
	static FName NAME_ASBZThrowableKnife_Server_CreateImpact = FName(TEXT("Server_CreateImpact"));
	void ASBZThrowableKnife::Server_CreateImpact(bool bInShouldBladeBounce, bool bInHasRetrieverSkill, UPrimitiveComponent* InHitComponent, FName const& InBoneName, FVector const& InRelativeLocation)
	{
		SBZThrowableKnife_eventServer_CreateImpact_Parms Parms;
		Parms.bInShouldBladeBounce=bInShouldBladeBounce ? true : false;
		Parms.bInHasRetrieverSkill=bInHasRetrieverSkill ? true : false;
		Parms.InHitComponent=InHitComponent;
		Parms.InBoneName=InBoneName;
		Parms.InRelativeLocation=InRelativeLocation;
		ProcessEvent(FindFunctionChecked(NAME_ASBZThrowableKnife_Server_CreateImpact),&Parms);
	}
	static FName NAME_ASBZThrowableKnife_Server_PickedUp = FName(TEXT("Server_PickedUp"));
	void ASBZThrowableKnife::Server_PickedUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZThrowableKnife_Server_PickedUp),NULL);
	}
	static FName NAME_ASBZThrowableKnife_Server_ReplicateDamage = FName(TEXT("Server_ReplicateDamage"));
	void ASBZThrowableKnife::Server_ReplicateDamage(FSBZKnifeProjectileTargetData const& TargetData)
	{
		SBZThrowableKnife_eventServer_ReplicateDamage_Parms Parms;
		Parms.TargetData=TargetData;
		ProcessEvent(FindFunctionChecked(NAME_ASBZThrowableKnife_Server_ReplicateDamage),&Parms);
	}
	void ASBZThrowableKnife::StaticRegisterNativesASBZThrowableKnife()
	{
		UClass* Class = ASBZThrowableKnife::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasRetrieverSkill", &ASBZThrowableKnife::execHasRetrieverSkill },
			{ "Multicast_CreateImpact", &ASBZThrowableKnife::execMulticast_CreateImpact },
			{ "Multicast_FireKnife", &ASBZThrowableKnife::execMulticast_FireKnife },
			{ "OnParentActorEndPlay", &ASBZThrowableKnife::execOnParentActorEndPlay },
			{ "Server_CreateImpact", &ASBZThrowableKnife::execServer_CreateImpact },
			{ "Server_PickedUp", &ASBZThrowableKnife::execServer_PickedUp },
			{ "Server_ReplicateDamage", &ASBZThrowableKnife::execServer_ReplicateDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZThrowableKnife_HasRetrieverSkill_Statics
	{
		struct SBZThrowableKnife_eventHasRetrieverSkill_Parms
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
	void Z_Construct_UFunction_ASBZThrowableKnife_HasRetrieverSkill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZThrowableKnife_eventHasRetrieverSkill_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThrowableKnife_HasRetrieverSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThrowableKnife_eventHasRetrieverSkill_Parms), &Z_Construct_UFunction_ASBZThrowableKnife_HasRetrieverSkill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowableKnife_HasRetrieverSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowableKnife_HasRetrieverSkill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowableKnife_HasRetrieverSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowableKnife_HasRetrieverSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowableKnife, nullptr, "HasRetrieverSkill", nullptr, nullptr, sizeof(SBZThrowableKnife_eventHasRetrieverSkill_Parms), Z_Construct_UFunction_ASBZThrowableKnife_HasRetrieverSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_HasRetrieverSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowableKnife_HasRetrieverSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_HasRetrieverSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowableKnife_HasRetrieverSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowableKnife_HasRetrieverSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics
	{
		static void NewProp_bInShouldBladeBounce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInShouldBladeBounce;
		static void NewProp_bInHasRetrieverSkill_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInHasRetrieverSkill;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::NewProp_bInShouldBladeBounce_SetBit(void* Obj)
	{
		((SBZThrowableKnife_eventMulticast_CreateImpact_Parms*)Obj)->bInShouldBladeBounce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::NewProp_bInShouldBladeBounce = { "bInShouldBladeBounce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThrowableKnife_eventMulticast_CreateImpact_Parms), &Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::NewProp_bInShouldBladeBounce_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::NewProp_bInHasRetrieverSkill_SetBit(void* Obj)
	{
		((SBZThrowableKnife_eventMulticast_CreateImpact_Parms*)Obj)->bInHasRetrieverSkill = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::NewProp_bInHasRetrieverSkill = { "bInHasRetrieverSkill", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThrowableKnife_eventMulticast_CreateImpact_Parms), &Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::NewProp_bInHasRetrieverSkill_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::NewProp_bInShouldBladeBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::NewProp_bInHasRetrieverSkill,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowableKnife, nullptr, "Multicast_CreateImpact", nullptr, nullptr, sizeof(SBZThrowableKnife_eventMulticast_CreateImpact_Parms), Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife_Statics::NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowableKnife_eventMulticast_FireKnife_Parms, TargetData), Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife_Statics::NewProp_TargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife_Statics::NewProp_TargetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife_Statics::NewProp_TargetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowableKnife, nullptr, "Multicast_FireKnife", nullptr, nullptr, sizeof(SBZThrowableKnife_eventMulticast_FireKnife_Parms), Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowableKnife_OnParentActorEndPlay_Statics
	{
		struct SBZThrowableKnife_eventOnParentActorEndPlay_Parms
		{
			AActor* OldAttachParentActor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldAttachParentActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThrowableKnife_OnParentActorEndPlay_Statics::NewProp_OldAttachParentActor = { "OldAttachParentActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowableKnife_eventOnParentActorEndPlay_Parms, OldAttachParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZThrowableKnife_OnParentActorEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowableKnife_eventOnParentActorEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowableKnife_OnParentActorEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowableKnife_OnParentActorEndPlay_Statics::NewProp_OldAttachParentActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowableKnife_OnParentActorEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowableKnife_OnParentActorEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowableKnife_OnParentActorEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowableKnife, nullptr, "OnParentActorEndPlay", nullptr, nullptr, sizeof(SBZThrowableKnife_eventOnParentActorEndPlay_Parms), Z_Construct_UFunction_ASBZThrowableKnife_OnParentActorEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_OnParentActorEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowableKnife_OnParentActorEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_OnParentActorEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowableKnife_OnParentActorEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowableKnife_OnParentActorEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics
	{
		static void NewProp_bInShouldBladeBounce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInShouldBladeBounce;
		static void NewProp_bInHasRetrieverSkill_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInHasRetrieverSkill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InHitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InHitComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRelativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRelativeLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_bInShouldBladeBounce_SetBit(void* Obj)
	{
		((SBZThrowableKnife_eventServer_CreateImpact_Parms*)Obj)->bInShouldBladeBounce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_bInShouldBladeBounce = { "bInShouldBladeBounce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThrowableKnife_eventServer_CreateImpact_Parms), &Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_bInShouldBladeBounce_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_bInHasRetrieverSkill_SetBit(void* Obj)
	{
		((SBZThrowableKnife_eventServer_CreateImpact_Parms*)Obj)->bInHasRetrieverSkill = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_bInHasRetrieverSkill = { "bInHasRetrieverSkill", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThrowableKnife_eventServer_CreateImpact_Parms), &Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_bInHasRetrieverSkill_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_InHitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_InHitComponent = { "InHitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowableKnife_eventServer_CreateImpact_Parms, InHitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_InHitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_InHitComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_InBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowableKnife_eventServer_CreateImpact_Parms, InBoneName), METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_InBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_InBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_InRelativeLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_InRelativeLocation = { "InRelativeLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowableKnife_eventServer_CreateImpact_Parms, InRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_InRelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_InRelativeLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_bInShouldBladeBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_bInHasRetrieverSkill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_InHitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_InBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::NewProp_InRelativeLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowableKnife, nullptr, "Server_CreateImpact", nullptr, nullptr, sizeof(SBZThrowableKnife_eventServer_CreateImpact_Parms), Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A80CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowableKnife_Server_PickedUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowableKnife_Server_PickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowableKnife_Server_PickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowableKnife, nullptr, "Server_PickedUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowableKnife_Server_PickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_Server_PickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowableKnife_Server_PickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowableKnife_Server_PickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage_Statics::NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThrowableKnife_eventServer_ReplicateDamage_Parms, TargetData), Z_Construct_UScriptStruct_FSBZKnifeProjectileTargetData, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage_Statics::NewProp_TargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage_Statics::NewProp_TargetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage_Statics::NewProp_TargetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZThrowableKnife, nullptr, "Server_ReplicateDamage", nullptr, nullptr, sizeof(SBZThrowableKnife_eventServer_ReplicateDamage_Parms), Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZThrowableKnife_NoRegister()
	{
		return ASBZThrowableKnife::StaticClass();
	}
	struct Z_Construct_UClass_ASBZThrowableKnife_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideThrowableProjectileHitEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideThrowableProjectileHitEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideThrowableProjectileBounceHitEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideThrowableProjectileBounceHitEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoPickupAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AmmoPickupAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableKnifePOIClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ThrowableKnifePOIClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableKnifePOIInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableKnifePOIInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastHitComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoPickup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoPickup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZThrowableKnife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZThrowable,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZThrowableKnife_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZThrowableKnife_HasRetrieverSkill, "HasRetrieverSkill" }, // 3361408506
		{ &Z_Construct_UFunction_ASBZThrowableKnife_Multicast_CreateImpact, "Multicast_CreateImpact" }, // 1230613551
		{ &Z_Construct_UFunction_ASBZThrowableKnife_Multicast_FireKnife, "Multicast_FireKnife" }, // 4101511843
		{ &Z_Construct_UFunction_ASBZThrowableKnife_OnParentActorEndPlay, "OnParentActorEndPlay" }, // 3097132481
		{ &Z_Construct_UFunction_ASBZThrowableKnife_Server_CreateImpact, "Server_CreateImpact" }, // 3739370360
		{ &Z_Construct_UFunction_ASBZThrowableKnife_Server_PickedUp, "Server_PickedUp" }, // 101620006
		{ &Z_Construct_UFunction_ASBZThrowableKnife_Server_ReplicateDamage, "Server_ReplicateDamage" }, // 597068095
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowableKnife_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZThrowableKnife.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowableKnife" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowableKnife, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_BoxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_BoxCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_OverrideThrowableProjectileHitEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowableKnife" },
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_OverrideThrowableProjectileHitEvent = { "OverrideThrowableProjectileHitEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowableKnife, OverrideThrowableProjectileHitEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_OverrideThrowableProjectileHitEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_OverrideThrowableProjectileHitEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_OverrideThrowableProjectileBounceHitEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowableKnife" },
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_OverrideThrowableProjectileBounceHitEvent = { "OverrideThrowableProjectileBounceHitEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowableKnife, OverrideThrowableProjectileBounceHitEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_OverrideThrowableProjectileBounceHitEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_OverrideThrowableProjectileBounceHitEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_AmmoPickupAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowableKnife" },
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_AmmoPickupAsset = { "AmmoPickupAsset", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowableKnife, AmmoPickupAsset), Z_Construct_UClass_ASBZThrowableKnifePickup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_AmmoPickupAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_AmmoPickupAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_ThrowableKnifePOIClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowableKnife" },
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_ThrowableKnifePOIClass = { "ThrowableKnifePOIClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowableKnife, ThrowableKnifePOIClass), Z_Construct_UClass_ASBZAIPointOfInterest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_ThrowableKnifePOIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_ThrowableKnifePOIClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_ThrowableKnifePOIInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowableKnife" },
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_ThrowableKnifePOIInstance = { "ThrowableKnifePOIInstance", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowableKnife, ThrowableKnifePOIInstance), Z_Construct_UClass_ASBZAIPointOfInterest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_ThrowableKnifePOIInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_ThrowableKnifePOIInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_LastHitComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowableKnife" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_LastHitComponent = { "LastHitComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowableKnife, LastHitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_LastHitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_LastHitComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_AmmoPickup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowableKnife" },
		{ "ModuleRelativePath", "Public/SBZThrowableKnife.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_AmmoPickup = { "AmmoPickup", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZThrowableKnife, AmmoPickup), Z_Construct_UClass_ASBZAmmoPickup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_AmmoPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_AmmoPickup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZThrowableKnife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_BoxCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_OverrideThrowableProjectileHitEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_OverrideThrowableProjectileBounceHitEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_AmmoPickupAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_ThrowableKnifePOIClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_ThrowableKnifePOIInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_LastHitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZThrowableKnife_Statics::NewProp_AmmoPickup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZThrowableKnife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZThrowableKnife>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZThrowableKnife_Statics::ClassParams = {
		&ASBZThrowableKnife::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZThrowableKnife_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowableKnife_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZThrowableKnife_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZThrowableKnife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZThrowableKnife()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZThrowableKnife_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZThrowableKnife, 866042403);
	template<> STARBREEZE_API UClass* StaticClass<ASBZThrowableKnife>()
	{
		return ASBZThrowableKnife::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZThrowableKnife(Z_Construct_UClass_ASBZThrowableKnife, &ASBZThrowableKnife::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZThrowableKnife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZThrowableKnife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
