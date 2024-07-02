// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGasVolumeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGasVolumeComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGasVolumeComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGasVolumeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ULineBatchComponent_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGasCellGrowMode();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLocalGasLocations();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGasCellHitData();
// End Cross Module References
	DEFINE_FUNCTION(USBZGasVolumeComponent::execFeedNiagaraWithParticleLocations)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FeedNiagaraWithParticleLocations(Z_Param_NiagaraComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGasVolumeComponent::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGasVolumeComponent::execIsCharacterOverlapping)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCharacterOverlapping(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGasVolumeComponent::execIsLocationOverlapping)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocationOverlapping(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGasVolumeComponent::execIsSegmentOverlapping)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
		P_GET_UBOOL(Z_Param_bQuickOverlap);
		P_GET_UBOOL(Z_Param_bUseLineTrace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSegmentOverlapping(Z_Param_Out_Start,Z_Param_Out_End,Z_Param_bQuickOverlap,Z_Param_bUseLineTrace);
		P_NATIVE_END;
	}
	void USBZGasVolumeComponent::StaticRegisterNativesUSBZGasVolumeComponent()
	{
		UClass* Class = USBZGasVolumeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FeedNiagaraWithParticleLocations", &USBZGasVolumeComponent::execFeedNiagaraWithParticleLocations },
			{ "Init", &USBZGasVolumeComponent::execInit },
			{ "IsCharacterOverlapping", &USBZGasVolumeComponent::execIsCharacterOverlapping },
			{ "IsLocationOverlapping", &USBZGasVolumeComponent::execIsLocationOverlapping },
			{ "IsSegmentOverlapping", &USBZGasVolumeComponent::execIsSegmentOverlapping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations_Statics
	{
		struct SBZGasVolumeComponent_eventFeedNiagaraWithParticleLocations_Parms
		{
			UNiagaraComponent* NiagaraComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations_Statics::NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGasVolumeComponent_eventFeedNiagaraWithParticleLocations_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations_Statics::NewProp_NiagaraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations_Statics::NewProp_NiagaraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations_Statics::NewProp_NiagaraComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGasVolumeComponent, nullptr, "FeedNiagaraWithParticleLocations", nullptr, nullptr, sizeof(SBZGasVolumeComponent_eventFeedNiagaraWithParticleLocations_Parms), Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGasVolumeComponent_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGasVolumeComponent_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGasVolumeComponent_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGasVolumeComponent, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGasVolumeComponent_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGasVolumeComponent_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGasVolumeComponent_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGasVolumeComponent_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics
	{
		struct SBZGasVolumeComponent_eventIsCharacterOverlapping_Parms
		{
			const ASBZCharacter* Character;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGasVolumeComponent_eventIsCharacterOverlapping_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::NewProp_Character_MetaData)) };
	void Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGasVolumeComponent_eventIsCharacterOverlapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGasVolumeComponent_eventIsCharacterOverlapping_Parms), &Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGasVolumeComponent, nullptr, "IsCharacterOverlapping", nullptr, nullptr, sizeof(SBZGasVolumeComponent_eventIsCharacterOverlapping_Parms), Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics
	{
		struct SBZGasVolumeComponent_eventIsLocationOverlapping_Parms
		{
			FVector Location;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGasVolumeComponent_eventIsLocationOverlapping_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::NewProp_Location_MetaData)) };
	void Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGasVolumeComponent_eventIsLocationOverlapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGasVolumeComponent_eventIsLocationOverlapping_Parms), &Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGasVolumeComponent, nullptr, "IsLocationOverlapping", nullptr, nullptr, sizeof(SBZGasVolumeComponent_eventIsLocationOverlapping_Parms), Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics
	{
		struct SBZGasVolumeComponent_eventIsSegmentOverlapping_Parms
		{
			FVector Start;
			FVector End;
			bool bQuickOverlap;
			bool bUseLineTrace;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static void NewProp_bQuickOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQuickOverlap;
		static void NewProp_bUseLineTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLineTrace;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGasVolumeComponent_eventIsSegmentOverlapping_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGasVolumeComponent_eventIsSegmentOverlapping_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_End_MetaData)) };
	void Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_bQuickOverlap_SetBit(void* Obj)
	{
		((SBZGasVolumeComponent_eventIsSegmentOverlapping_Parms*)Obj)->bQuickOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_bQuickOverlap = { "bQuickOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGasVolumeComponent_eventIsSegmentOverlapping_Parms), &Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_bQuickOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_bUseLineTrace_SetBit(void* Obj)
	{
		((SBZGasVolumeComponent_eventIsSegmentOverlapping_Parms*)Obj)->bUseLineTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_bUseLineTrace = { "bUseLineTrace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGasVolumeComponent_eventIsSegmentOverlapping_Parms), &Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_bUseLineTrace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGasVolumeComponent_eventIsSegmentOverlapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGasVolumeComponent_eventIsSegmentOverlapping_Parms), &Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_bQuickOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_bUseLineTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGasVolumeComponent, nullptr, "IsSegmentOverlapping", nullptr, nullptr, sizeof(SBZGasVolumeComponent_eventIsSegmentOverlapping_Parms), Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGasVolumeComponent_NoRegister()
	{
		return USBZGasVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZGasVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatchComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatchComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitOnBeginPlay_MetaData[];
#endif
		static void NewProp_bInitOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitOnBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBeforeDieToStartKillingCells_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBeforeDieToStartKillingCells;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_CellSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTravelDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_MaxTravelDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_HorizontalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_VerticalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxComputationPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxComputationPerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCellDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_MaxCellDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCellDensityToHurt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_MinCellDensityToHurt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCellDensityToGrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_MinCellDensityToGrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityToAddPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DensityToAddPerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityToLoosePerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DensityToLoosePerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCellIndexToBoost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_MaxCellIndexToBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartupDensityBoostMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_StartupDensityBoostMultiplier;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GrowMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrowMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GrowMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraParticleArrayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NiagaraParticleArrayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraBorderParticleArrayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NiagaraBorderParticleArrayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraParticleCountName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NiagaraParticleCountName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraBorderParticleCountName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NiagaraBorderParticleCountName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxParticleCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxParticleCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleCountMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParticleCountMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateParticleLocationsInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateParticleLocationsInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUpdateLocationPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxUpdateLocationPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverdrawOptimisationPoolID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverdrawOptimisationPoolID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedLocalLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedLocalLocations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedLocalBorderLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedLocalBorderLocations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CellHitData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellHitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CellHitData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGasVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGasVolumeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGasVolumeComponent_FeedNiagaraWithParticleLocations, "FeedNiagaraWithParticleLocations" }, // 3553752788
		{ &Z_Construct_UFunction_USBZGasVolumeComponent_Init, "Init" }, // 3923614193
		{ &Z_Construct_UFunction_USBZGasVolumeComponent_IsCharacterOverlapping, "IsCharacterOverlapping" }, // 1545362478
		{ &Z_Construct_UFunction_USBZGasVolumeComponent_IsLocationOverlapping, "IsLocationOverlapping" }, // 472574974
		{ &Z_Construct_UFunction_USBZGasVolumeComponent_IsSegmentOverlapping, "IsSegmentOverlapping" }, // 513241584
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZGasVolumeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_LineBatchComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_LineBatchComponent = { "LineBatchComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, LineBatchComponent), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_LineBatchComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_LineBatchComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_bInitOnBeginPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_bInitOnBeginPlay_SetBit(void* Obj)
	{
		((USBZGasVolumeComponent*)Obj)->bInitOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_bInitOnBeginPlay = { "bInitOnBeginPlay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGasVolumeComponent), &Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_bInitOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_bInitOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_bInitOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, Duration), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_TimeBeforeDieToStartKillingCells_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_TimeBeforeDieToStartKillingCells = { "TimeBeforeDieToStartKillingCells", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, TimeBeforeDieToStartKillingCells), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_TimeBeforeDieToStartKillingCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_TimeBeforeDieToStartKillingCells_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CellSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, CellSize), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CellSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxTravelDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxTravelDistance = { "MaxTravelDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, MaxTravelDistance), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxTravelDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxTravelDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_HorizontalSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_HorizontalSize = { "HorizontalSize", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, HorizontalSize), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_HorizontalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_HorizontalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_VerticalSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_VerticalSize = { "VerticalSize", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, VerticalSize), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_VerticalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_VerticalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxComputationPerSecond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxComputationPerSecond = { "MaxComputationPerSecond", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, MaxComputationPerSecond), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxComputationPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxComputationPerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxCellDensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxCellDensity = { "MaxCellDensity", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, MaxCellDensity), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxCellDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxCellDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MinCellDensityToHurt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MinCellDensityToHurt = { "MinCellDensityToHurt", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, MinCellDensityToHurt), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MinCellDensityToHurt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MinCellDensityToHurt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MinCellDensityToGrow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MinCellDensityToGrow = { "MinCellDensityToGrow", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, MinCellDensityToGrow), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MinCellDensityToGrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MinCellDensityToGrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_DensityToAddPerSecond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_DensityToAddPerSecond = { "DensityToAddPerSecond", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, DensityToAddPerSecond), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_DensityToAddPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_DensityToAddPerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_DensityToLoosePerSecond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_DensityToLoosePerSecond = { "DensityToLoosePerSecond", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, DensityToLoosePerSecond), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_DensityToLoosePerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_DensityToLoosePerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxCellIndexToBoost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxCellIndexToBoost = { "MaxCellIndexToBoost", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, MaxCellIndexToBoost), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxCellIndexToBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxCellIndexToBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_StartupDensityBoostMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_StartupDensityBoostMultiplier = { "StartupDensityBoostMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, StartupDensityBoostMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_StartupDensityBoostMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_StartupDensityBoostMultiplier_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_GrowMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_GrowMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_GrowMode = { "GrowMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, GrowMode), Z_Construct_UEnum_Starbreeze_ESBZGasCellGrowMode, METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_GrowMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_GrowMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CollisionProfileName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, CollisionProfileName), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CollisionProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CollisionProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraParticleArrayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraParticleArrayName = { "NiagaraParticleArrayName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, NiagaraParticleArrayName), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraParticleArrayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraParticleArrayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraBorderParticleArrayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraBorderParticleArrayName = { "NiagaraBorderParticleArrayName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, NiagaraBorderParticleArrayName), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraBorderParticleArrayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraBorderParticleArrayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraParticleCountName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraParticleCountName = { "NiagaraParticleCountName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, NiagaraParticleCountName), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraParticleCountName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraParticleCountName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraBorderParticleCountName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraBorderParticleCountName = { "NiagaraBorderParticleCountName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, NiagaraBorderParticleCountName), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraBorderParticleCountName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraBorderParticleCountName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxParticleCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxParticleCount = { "MaxParticleCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, MaxParticleCount), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxParticleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxParticleCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_ParticleCountMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_ParticleCountMultiplier = { "ParticleCountMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, ParticleCountMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_ParticleCountMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_ParticleCountMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_UpdateParticleLocationsInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_UpdateParticleLocationsInterval = { "UpdateParticleLocationsInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, UpdateParticleLocationsInterval), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_UpdateParticleLocationsInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_UpdateParticleLocationsInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxUpdateLocationPerFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxUpdateLocationPerFrame = { "MaxUpdateLocationPerFrame", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, MaxUpdateLocationPerFrame), METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxUpdateLocationPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxUpdateLocationPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_OverdrawOptimisationPoolID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_OverdrawOptimisationPoolID = { "OverdrawOptimisationPoolID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, OverdrawOptimisationPoolID), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_OverdrawOptimisationPoolID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_OverdrawOptimisationPoolID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_ReplicatedLocalLocations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_ReplicatedLocalLocations = { "ReplicatedLocalLocations", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, ReplicatedLocalLocations), Z_Construct_UScriptStruct_FSBZLocalGasLocations, METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_ReplicatedLocalLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_ReplicatedLocalLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_ReplicatedLocalBorderLocations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_ReplicatedLocalBorderLocations = { "ReplicatedLocalBorderLocations", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, ReplicatedLocalBorderLocations), Z_Construct_UScriptStruct_FSBZLocalGasLocations, METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_ReplicatedLocalBorderLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_ReplicatedLocalBorderLocations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CellHitData_Inner = { "CellHitData", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGasCellHitData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CellHitData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGasVolumeComponent" },
		{ "ModuleRelativePath", "Public/SBZGasVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CellHitData = { "CellHitData", nullptr, (EPropertyFlags)0x0020088000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGasVolumeComponent, CellHitData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CellHitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CellHitData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGasVolumeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_LineBatchComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_bInitOnBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_TimeBeforeDieToStartKillingCells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CellSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxTravelDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_HorizontalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_VerticalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxComputationPerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxCellDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MinCellDensityToHurt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MinCellDensityToGrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_DensityToAddPerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_DensityToLoosePerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxCellIndexToBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_StartupDensityBoostMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_GrowMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_GrowMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CollisionProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraParticleArrayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraBorderParticleArrayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraParticleCountName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_NiagaraBorderParticleCountName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxParticleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_ParticleCountMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_UpdateParticleLocationsInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_MaxUpdateLocationPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_OverdrawOptimisationPoolID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_ReplicatedLocalLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_ReplicatedLocalBorderLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CellHitData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGasVolumeComponent_Statics::NewProp_CellHitData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGasVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGasVolumeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGasVolumeComponent_Statics::ClassParams = {
		&USBZGasVolumeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZGasVolumeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGasVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGasVolumeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGasVolumeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGasVolumeComponent, 3433768217);
	template<> STARBREEZE_API UClass* StaticClass<USBZGasVolumeComponent>()
	{
		return USBZGasVolumeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGasVolumeComponent(Z_Construct_UClass_USBZGasVolumeComponent, &USBZGasVolumeComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGasVolumeComponent"), false, nullptr, nullptr, nullptr);

	void USBZGasVolumeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedLocalLocations(TEXT("ReplicatedLocalLocations"));
		static const FName Name_ReplicatedLocalBorderLocations(TEXT("ReplicatedLocalBorderLocations"));

		const bool bIsValid = true
			&& Name_ReplicatedLocalLocations == ClassReps[(int32)ENetFields_Private::ReplicatedLocalLocations].Property->GetFName()
			&& Name_ReplicatedLocalBorderLocations == ClassReps[(int32)ENetFields_Private::ReplicatedLocalBorderLocations].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZGasVolumeComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGasVolumeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
