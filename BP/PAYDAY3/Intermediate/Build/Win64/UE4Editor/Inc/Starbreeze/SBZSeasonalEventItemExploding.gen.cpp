// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSeasonalEventItemExploding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSeasonalEventItemExploding() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSeasonalEventItemExploding_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSeasonalEventItemExploding();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSeasonalEventItemBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionResult();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageDistance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosive_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreakableInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosivePropInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZSeasonalEventItemExploding::execMulticast_ReplicateExplosion)
	{
		P_GET_STRUCT(FSBZExplosionResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReplicateExplosion_Implementation(Z_Param_Result);
		P_NATIVE_END;
	}
	static FName NAME_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion = FName(TEXT("Multicast_ReplicateExplosion"));
	void ASBZSeasonalEventItemExploding::Multicast_ReplicateExplosion(FSBZExplosionResult const& Result)
	{
		SBZSeasonalEventItemExploding_eventMulticast_ReplicateExplosion_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion),&Parms);
	}
	void ASBZSeasonalEventItemExploding::StaticRegisterNativesASBZSeasonalEventItemExploding()
	{
		UClass* Class = ASBZSeasonalEventItemExploding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ReplicateExplosion", &ASBZSeasonalEventItemExploding::execMulticast_ReplicateExplosion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSeasonalEventItemExploding_eventMulticast_ReplicateExplosion_Parms, Result), Z_Construct_UScriptStruct_FSBZExplosionResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSeasonalEventItemExploding, nullptr, "Multicast_ReplicateExplosion", nullptr, nullptr, sizeof(SBZSeasonalEventItemExploding_eventMulticast_ReplicateExplosion_Parms), Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSeasonalEventItemExploding_NoRegister()
	{
		return ASBZSeasonalEventItemExploding::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIExplosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIExplosionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerExplosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerExplosionRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageDistanceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageDistanceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DamageDistanceArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorPenetration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyFireDamageScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FriendlyFireDamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyFireArmorPenetrationScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FriendlyFireArmorPenetrationScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExplosionDamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoDecal_MetaData[];
#endif
		static void NewProp_bDoDecal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoDecal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocalPlayerFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostDamagePhysicsEffectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostDamagePhysicsEffectData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerFeedbackCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerFeedbackCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HurtReactionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZSeasonalEventItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSeasonalEventItemExploding_Multicast_ReplicateExplosion, "Multicast_ReplicateExplosion" }, // 1788963378
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSeasonalEventItemExploding.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionSoundEvent = { "ExplosionSoundEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, ExplosionSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionDelay = { "ExplosionDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, ExplosionDelay), METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_AIExplosionRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_AIExplosionRadius = { "AIExplosionRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, AIExplosionRadius), METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_AIExplosionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_AIExplosionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_PlayerExplosionRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_PlayerExplosionRadius = { "PlayerExplosionRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, PlayerExplosionRadius), METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_PlayerExplosionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_PlayerExplosionRadius_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_DamageDistanceArray_Inner = { "DamageDistanceArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDamageDistance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_DamageDistanceArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_DamageDistanceArray = { "DamageDistanceArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, DamageDistanceArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_DamageDistanceArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_DamageDistanceArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ArmorPenetration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ArmorPenetration = { "ArmorPenetration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, ArmorPenetration), METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ArmorPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ArmorPenetration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_FriendlyFireDamageScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_FriendlyFireDamageScale = { "FriendlyFireDamageScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, FriendlyFireDamageScale), METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_FriendlyFireDamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_FriendlyFireDamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_FriendlyFireArmorPenetrationScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_FriendlyFireArmorPenetrationScale = { "FriendlyFireArmorPenetrationScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, FriendlyFireArmorPenetrationScale), METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_FriendlyFireArmorPenetrationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_FriendlyFireArmorPenetrationScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionDamageType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionDamageType = { "ExplosionDamageType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, ExplosionDamageType), Z_Construct_UClass_USBZDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionDamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionDamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_GameplayEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, GameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_GameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_GameplayEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionEffect = { "ExplosionEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, ExplosionEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_bDoDecal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_bDoDecal_SetBit(void* Obj)
	{
		((ASBZSeasonalEventItemExploding*)Obj)->bDoDecal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_bDoDecal = { "bDoDecal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSeasonalEventItemExploding), &Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_bDoDecal_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_bDoDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_bDoDecal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_LocalPlayerFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_LocalPlayerFeedback = { "LocalPlayerFeedback", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, LocalPlayerFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_LocalPlayerFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_LocalPlayerFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_PostDamagePhysicsEffectData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_PostDamagePhysicsEffectData = { "PostDamagePhysicsEffectData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, PostDamagePhysicsEffectData), Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_PostDamagePhysicsEffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_PostDamagePhysicsEffectData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_PlayerFeedbackCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_PlayerFeedbackCurve = { "PlayerFeedbackCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, PlayerFeedbackCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_PlayerFeedbackCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_PlayerFeedbackCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_HurtReactionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_HurtReactionData = { "HurtReactionData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, HurtReactionData), Z_Construct_UScriptStruct_FSBZHurtReactionData, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_HurtReactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_HurtReactionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionInstigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionInstigator = { "ExplosionInstigator", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, ExplosionInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSeasonalEventItemExploding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSeasonalEventItemExploding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionLocation = { "ExplosionLocation", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSeasonalEventItemExploding, ExplosionLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_AIExplosionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_PlayerExplosionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_DamageDistanceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_DamageDistanceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ArmorPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_FriendlyFireDamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_FriendlyFireArmorPenetrationScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_GameplayEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_bDoDecal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_LocalPlayerFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_PostDamagePhysicsEffectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_PlayerFeedbackCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_HurtReactionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::NewProp_ExplosionLocation,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZExplosive_NoRegister, (int32)VTABLE_OFFSET(ASBZSeasonalEventItemExploding, ISBZExplosive), false },
			{ Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSeasonalEventItemExploding, ISBZHurtReactionDataInterface), false },
			{ Z_Construct_UClass_USBZBreakableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSeasonalEventItemExploding, ISBZBreakableInterface), false },
			{ Z_Construct_UClass_USBZExplosivePropInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSeasonalEventItemExploding, ISBZExplosivePropInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSeasonalEventItemExploding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::ClassParams = {
		&ASBZSeasonalEventItemExploding::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSeasonalEventItemExploding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSeasonalEventItemExploding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSeasonalEventItemExploding, 449472308);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSeasonalEventItemExploding>()
	{
		return ASBZSeasonalEventItemExploding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSeasonalEventItemExploding(Z_Construct_UClass_ASBZSeasonalEventItemExploding, &ASBZSeasonalEventItemExploding::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSeasonalEventItemExploding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSeasonalEventItemExploding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
