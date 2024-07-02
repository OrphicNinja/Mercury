// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIRefractorShield.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIRefractorShield() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIRefractorShield_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIRefractorShield();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPropDamageContext();
	ANIMATIONBUDGETALLOCATOR_API UClass* Z_Construct_UClass_USkeletalMeshComponentBudgeted_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPropDamageComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAIRefractorShield::execOnPropDamaged)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_PoolComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_GET_STRUCT_REF(FSBZPropDamageContext,Z_Param_Out_DamageContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPropDamaged(Z_Param_PoolComponent,Z_Param_Health,Z_Param_bDoCosmetics,Z_Param_Out_DamageContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIRefractorShield::execOnRep_HasDeployed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HasDeployed();
		P_NATIVE_END;
	}
	void ASBZAIRefractorShield::StaticRegisterNativesASBZAIRefractorShield()
	{
		UClass* Class = ASBZAIRefractorShield::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPropDamaged", &ASBZAIRefractorShield::execOnPropDamaged },
			{ "OnRep_HasDeployed", &ASBZAIRefractorShield::execOnRep_HasDeployed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics
	{
		struct SBZAIRefractorShield_eventOnPropDamaged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_PoolComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_PoolComponent = { "PoolComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIRefractorShield_eventOnPropDamaged_Parms, PoolComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_PoolComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_PoolComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIRefractorShield_eventOnPropDamaged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZAIRefractorShield_eventOnPropDamaged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIRefractorShield_eventOnPropDamaged_Parms), &Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_DamageContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_DamageContext = { "DamageContext", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIRefractorShield_eventOnPropDamaged_Parms, DamageContext), Z_Construct_UScriptStruct_FSBZPropDamageContext, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_DamageContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_DamageContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_PoolComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_bDoCosmetics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::NewProp_DamageContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIRefractorShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIRefractorShield, nullptr, "OnPropDamaged", nullptr, nullptr, sizeof(SBZAIRefractorShield_eventOnPropDamaged_Parms), Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIRefractorShield_OnRep_HasDeployed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIRefractorShield_OnRep_HasDeployed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIRefractorShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIRefractorShield_OnRep_HasDeployed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIRefractorShield, nullptr, "OnRep_HasDeployed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIRefractorShield_OnRep_HasDeployed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIRefractorShield_OnRep_HasDeployed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIRefractorShield_OnRep_HasDeployed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIRefractorShield_OnRep_HasDeployed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAIRefractorShield_NoRegister()
	{
		return ASBZAIRefractorShield::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAIRefractorShield_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropDamageComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PropDamageComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyedEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeployAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeployAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetractAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RetractAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDeployed_MetaData[];
#endif
		static void NewProp_bHasDeployed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDeployed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAIRefractorShield_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAIRefractorShield_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAIRefractorShield_OnPropDamaged, "OnPropDamaged" }, // 352233017
		{ &Z_Construct_UFunction_ASBZAIRefractorShield_OnRep_HasDeployed, "OnRep_HasDeployed" }, // 3751233462
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIRefractorShield_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIRefractorShield.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIRefractorShield.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIRefractorShield" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIRefractorShield.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIRefractorShield, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponentBudgeted_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_PropDamageComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIRefractorShield" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIRefractorShield.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_PropDamageComponent = { "PropDamageComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIRefractorShield, PropDamageComponent), Z_Construct_UClass_USBZPropDamageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_PropDamageComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_PropDamageComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_DestroyedEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIRefractorShield" },
		{ "ModuleRelativePath", "Public/SBZAIRefractorShield.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_DestroyedEffect = { "DestroyedEffect", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIRefractorShield, DestroyedEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_DestroyedEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_DestroyedEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_DestroyedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIRefractorShield" },
		{ "ModuleRelativePath", "Public/SBZAIRefractorShield.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_DestroyedEvent = { "DestroyedEvent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIRefractorShield, DestroyedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_DestroyedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_DestroyedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_DeployAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIRefractorShield" },
		{ "ModuleRelativePath", "Public/SBZAIRefractorShield.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_DeployAnimation = { "DeployAnimation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIRefractorShield, DeployAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_DeployAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_DeployAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_RetractAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIRefractorShield" },
		{ "ModuleRelativePath", "Public/SBZAIRefractorShield.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_RetractAnimation = { "RetractAnimation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIRefractorShield, RetractAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_RetractAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_RetractAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_bHasDeployed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIRefractorShield" },
		{ "ModuleRelativePath", "Public/SBZAIRefractorShield.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_bHasDeployed_SetBit(void* Obj)
	{
		((ASBZAIRefractorShield*)Obj)->bHasDeployed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_bHasDeployed = { "bHasDeployed", "OnRep_HasDeployed", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAIRefractorShield), &Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_bHasDeployed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_bHasDeployed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_bHasDeployed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAIRefractorShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_PropDamageComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_DestroyedEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_DestroyedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_DeployAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_RetractAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIRefractorShield_Statics::NewProp_bHasDeployed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAIRefractorShield_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAIRefractorShield>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAIRefractorShield_Statics::ClassParams = {
		&ASBZAIRefractorShield::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAIRefractorShield_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIRefractorShield_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAIRefractorShield_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIRefractorShield_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAIRefractorShield()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAIRefractorShield_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAIRefractorShield, 2816906973);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAIRefractorShield>()
	{
		return ASBZAIRefractorShield::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAIRefractorShield(Z_Construct_UClass_ASBZAIRefractorShield, &ASBZAIRefractorShield::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAIRefractorShield"), false, nullptr, nullptr, nullptr);

	void ASBZAIRefractorShield::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bHasDeployed(TEXT("bHasDeployed"));

		const bool bIsValid = true
			&& Name_bHasDeployed == ClassReps[(int32)ENetFields_Private::bHasDeployed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZAIRefractorShield"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAIRefractorShield);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
