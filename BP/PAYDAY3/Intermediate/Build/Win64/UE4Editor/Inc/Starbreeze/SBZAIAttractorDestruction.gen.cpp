// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAttractorDestruction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAttractorDestruction() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIAttractorDestruction_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIAttractorDestruction();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPropDamageContext();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPropDamageComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityObstacleInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAIAttractorDestruction::execSetAttractorInstigator)
	{
		P_GET_OBJECT(APawn,Z_Param_NewInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttractorInstigator(Z_Param_NewInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIAttractorDestruction::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIAttractorDestruction::execBreakDestructionAttractor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BreakDestructionAttractor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIAttractorDestruction::execMulticast_BreakDestructionAttractor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_BreakDestructionAttractor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIAttractorDestruction::execOnPropDamageHealth)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_PoolComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_GET_STRUCT_REF(FSBZPropDamageContext,Z_Param_Out_DamageContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPropDamageHealth(Z_Param_PoolComponent,Z_Param_Health,Z_Param_bDoCosmetics,Z_Param_Out_DamageContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIAttractorDestruction::execOnPropDamageHits)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_PoolComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_Hits);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_GET_STRUCT_REF(FSBZPropDamageContext,Z_Param_Out_DamageContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPropDamageHits(Z_Param_PoolComponent,Z_Param_Hits,Z_Param_bDoCosmetics,Z_Param_Out_DamageContext);
		P_NATIVE_END;
	}
	static FName NAME_ASBZAIAttractorDestruction_Multicast_BreakDestructionAttractor = FName(TEXT("Multicast_BreakDestructionAttractor"));
	void ASBZAIAttractorDestruction::Multicast_BreakDestructionAttractor()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIAttractorDestruction_Multicast_BreakDestructionAttractor),NULL);
	}
	void ASBZAIAttractorDestruction::StaticRegisterNativesASBZAIAttractorDestruction()
	{
		UClass* Class = ASBZAIAttractorDestruction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakDestructionAttractor", &ASBZAIAttractorDestruction::execBreakDestructionAttractor },
			{ "Multicast_BreakDestructionAttractor", &ASBZAIAttractorDestruction::execMulticast_BreakDestructionAttractor },
			{ "OnPropDamageHealth", &ASBZAIAttractorDestruction::execOnPropDamageHealth },
			{ "OnPropDamageHits", &ASBZAIAttractorDestruction::execOnPropDamageHits },
			{ "SetAttractorInstigator", &ASBZAIAttractorDestruction::execSetAttractorInstigator },
			{ "SetEnabled", &ASBZAIAttractorDestruction::execSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAIAttractorDestruction_BreakDestructionAttractor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIAttractorDestruction_BreakDestructionAttractor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAttractorDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIAttractorDestruction_BreakDestructionAttractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIAttractorDestruction, nullptr, "BreakDestructionAttractor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIAttractorDestruction_BreakDestructionAttractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIAttractorDestruction_BreakDestructionAttractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIAttractorDestruction_BreakDestructionAttractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIAttractorDestruction_BreakDestructionAttractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIAttractorDestruction_Multicast_BreakDestructionAttractor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIAttractorDestruction_Multicast_BreakDestructionAttractor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAttractorDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIAttractorDestruction_Multicast_BreakDestructionAttractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIAttractorDestruction, nullptr, "Multicast_BreakDestructionAttractor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIAttractorDestruction_Multicast_BreakDestructionAttractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIAttractorDestruction_Multicast_BreakDestructionAttractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIAttractorDestruction_Multicast_BreakDestructionAttractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIAttractorDestruction_Multicast_BreakDestructionAttractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics
	{
		struct SBZAIAttractorDestruction_eventOnPropDamageHealth_Parms
		{
			UActorComponent* PoolComponent;
			float Health;
			bool bDoCosmetics;
			FSBZPropDamageContext DamageContext;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoolComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_PoolComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_PoolComponent = { "PoolComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAttractorDestruction_eventOnPropDamageHealth_Parms, PoolComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_PoolComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_PoolComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAttractorDestruction_eventOnPropDamageHealth_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZAIAttractorDestruction_eventOnPropDamageHealth_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIAttractorDestruction_eventOnPropDamageHealth_Parms), &Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_DamageContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_DamageContext = { "DamageContext", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAttractorDestruction_eventOnPropDamageHealth_Parms, DamageContext), Z_Construct_UScriptStruct_FSBZPropDamageContext, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_DamageContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_DamageContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_PoolComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_bDoCosmetics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::NewProp_DamageContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAttractorDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIAttractorDestruction, nullptr, "OnPropDamageHealth", nullptr, nullptr, sizeof(SBZAIAttractorDestruction_eventOnPropDamageHealth_Parms), Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics
	{
		struct SBZAIAttractorDestruction_eventOnPropDamageHits_Parms
		{
			UActorComponent* PoolComponent;
			int32 Hits;
			bool bDoCosmetics;
			FSBZPropDamageContext DamageContext;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoolComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hits;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_PoolComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_PoolComponent = { "PoolComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAttractorDestruction_eventOnPropDamageHits_Parms, PoolComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_PoolComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_PoolComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAttractorDestruction_eventOnPropDamageHits_Parms, Hits), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZAIAttractorDestruction_eventOnPropDamageHits_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIAttractorDestruction_eventOnPropDamageHits_Parms), &Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_DamageContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_DamageContext = { "DamageContext", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAttractorDestruction_eventOnPropDamageHits_Parms, DamageContext), Z_Construct_UScriptStruct_FSBZPropDamageContext, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_DamageContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_DamageContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_PoolComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_Hits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_bDoCosmetics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::NewProp_DamageContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAttractorDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIAttractorDestruction, nullptr, "OnPropDamageHits", nullptr, nullptr, sizeof(SBZAIAttractorDestruction_eventOnPropDamageHits_Parms), Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIAttractorDestruction_SetAttractorInstigator_Statics
	{
		struct SBZAIAttractorDestruction_eventSetAttractorInstigator_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIAttractorDestruction_SetAttractorInstigator_Statics::NewProp_NewInstigator = { "NewInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAttractorDestruction_eventSetAttractorInstigator_Parms, NewInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIAttractorDestruction_SetAttractorInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIAttractorDestruction_SetAttractorInstigator_Statics::NewProp_NewInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIAttractorDestruction_SetAttractorInstigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAttractorDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIAttractorDestruction_SetAttractorInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIAttractorDestruction, nullptr, "SetAttractorInstigator", nullptr, nullptr, sizeof(SBZAIAttractorDestruction_eventSetAttractorInstigator_Parms), Z_Construct_UFunction_ASBZAIAttractorDestruction_SetAttractorInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIAttractorDestruction_SetAttractorInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIAttractorDestruction_SetAttractorInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIAttractorDestruction_SetAttractorInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIAttractorDestruction_SetAttractorInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIAttractorDestruction_SetAttractorInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics
	{
		struct SBZAIAttractorDestruction_eventSetEnabled_Parms
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
	void Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZAIAttractorDestruction_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIAttractorDestruction_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIAttractorDestruction_eventSetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIAttractorDestruction_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAttractorDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIAttractorDestruction, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZAIAttractorDestruction_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAIAttractorDestruction_NoRegister()
	{
		return ASBZAIAttractorDestruction::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAIAttractorDestruction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PropDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAirNavOnDestruction_MetaData[];
#endif
		static void NewProp_bIsAirNavOnDestruction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAirNavOnDestruction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAIAttractorDestruction_BreakDestructionAttractor, "BreakDestructionAttractor" }, // 2488446495
		{ &Z_Construct_UFunction_ASBZAIAttractorDestruction_Multicast_BreakDestructionAttractor, "Multicast_BreakDestructionAttractor" }, // 783075926
		{ &Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHealth, "OnPropDamageHealth" }, // 3638136645
		{ &Z_Construct_UFunction_ASBZAIAttractorDestruction_OnPropDamageHits, "OnPropDamageHits" }, // 1271531084
		{ &Z_Construct_UFunction_ASBZAIAttractorDestruction_SetAttractorInstigator, "SetAttractorInstigator" }, // 2186007712
		{ &Z_Construct_UFunction_ASBZAIAttractorDestruction_SetEnabled, "SetEnabled" }, // 4079532103
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAttractorDestruction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorDestruction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_PropDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorDestruction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_PropDamage = { "PropDamage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIAttractorDestruction, PropDamage), Z_Construct_UClass_USBZPropDamageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_PropDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_PropDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_AttractorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorDestruction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorDestruction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_AttractorComponent = { "AttractorComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIAttractorDestruction, AttractorComponent), Z_Construct_UClass_USBZAIAttractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_AttractorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_AttractorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_bIsAirNavOnDestruction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAttractorDestruction" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorDestruction.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_bIsAirNavOnDestruction_SetBit(void* Obj)
	{
		((ASBZAIAttractorDestruction*)Obj)->bIsAirNavOnDestruction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_bIsAirNavOnDestruction = { "bIsAirNavOnDestruction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAIAttractorDestruction), &Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_bIsAirNavOnDestruction_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_bIsAirNavOnDestruction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_bIsAirNavOnDestruction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_PropDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_AttractorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::NewProp_bIsAirNavOnDestruction,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAIAttractorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIAttractorDestruction, ISBZAIAttractorInterface), false },
			{ Z_Construct_UClass_UAISightTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIAttractorDestruction, IAISightTargetInterface), false },
			{ Z_Construct_UClass_USBZAgilityObstacleInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIAttractorDestruction, ISBZAgilityObstacleInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAIAttractorDestruction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::ClassParams = {
		&ASBZAIAttractorDestruction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAIAttractorDestruction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAIAttractorDestruction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAIAttractorDestruction, 1187664299);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAIAttractorDestruction>()
	{
		return ASBZAIAttractorDestruction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAIAttractorDestruction(Z_Construct_UClass_ASBZAIAttractorDestruction, &ASBZAIAttractorDestruction::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAIAttractorDestruction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAIAttractorDestruction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
