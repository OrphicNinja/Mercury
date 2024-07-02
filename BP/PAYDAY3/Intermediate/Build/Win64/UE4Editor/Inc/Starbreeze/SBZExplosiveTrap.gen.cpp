// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZExplosiveTrap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZExplosiveTrap() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZExplosiveTrap_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZExplosiveTrap();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZExplosiveLevelProp();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZExplosiveTrap::execMulticast_CriticalDamage)
	{
		P_GET_STRUCT(FVector,Z_Param_ImpactLocation);
		P_GET_STRUCT(FVector,Z_Param_ImpactNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_CriticalDamage_Implementation(Z_Param_ImpactLocation,Z_Param_ImpactNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZExplosiveTrap::execMulticast_CriticalDamageNoParams)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_CriticalDamageNoParams_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ASBZExplosiveTrap_BP_OnCriticalDamage = FName(TEXT("BP_OnCriticalDamage"));
	void ASBZExplosiveTrap::BP_OnCriticalDamage()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZExplosiveTrap_BP_OnCriticalDamage),NULL);
	}
	static FName NAME_ASBZExplosiveTrap_Multicast_CriticalDamage = FName(TEXT("Multicast_CriticalDamage"));
	void ASBZExplosiveTrap::Multicast_CriticalDamage(const FVector ImpactLocation, const FVector ImpactNormal)
	{
		SBZExplosiveTrap_eventMulticast_CriticalDamage_Parms Parms;
		Parms.ImpactLocation=ImpactLocation;
		Parms.ImpactNormal=ImpactNormal;
		ProcessEvent(FindFunctionChecked(NAME_ASBZExplosiveTrap_Multicast_CriticalDamage),&Parms);
	}
	static FName NAME_ASBZExplosiveTrap_Multicast_CriticalDamageNoParams = FName(TEXT("Multicast_CriticalDamageNoParams"));
	void ASBZExplosiveTrap::Multicast_CriticalDamageNoParams()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZExplosiveTrap_Multicast_CriticalDamageNoParams),NULL);
	}
	void ASBZExplosiveTrap::StaticRegisterNativesASBZExplosiveTrap()
	{
		UClass* Class = ASBZExplosiveTrap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_CriticalDamage", &ASBZExplosiveTrap::execMulticast_CriticalDamage },
			{ "Multicast_CriticalDamageNoParams", &ASBZExplosiveTrap::execMulticast_CriticalDamageNoParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZExplosiveTrap_BP_OnCriticalDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveTrap_BP_OnCriticalDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveTrap_BP_OnCriticalDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveTrap, nullptr, "BP_OnCriticalDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveTrap_BP_OnCriticalDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrap_BP_OnCriticalDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveTrap_BP_OnCriticalDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveTrap_BP_OnCriticalDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::NewProp_ImpactLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::NewProp_ImpactLocation = { "ImpactLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZExplosiveTrap_eventMulticast_CriticalDamage_Parms, ImpactLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::NewProp_ImpactLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::NewProp_ImpactLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::NewProp_ImpactNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZExplosiveTrap_eventMulticast_CriticalDamage_Parms, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::NewProp_ImpactNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::NewProp_ImpactNormal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::NewProp_ImpactLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::NewProp_ImpactNormal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveTrap, nullptr, "Multicast_CriticalDamage", nullptr, nullptr, sizeof(SBZExplosiveTrap_eventMulticast_CriticalDamage_Parms), Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamageNoParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamageNoParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosiveTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamageNoParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZExplosiveTrap, nullptr, "Multicast_CriticalDamageNoParams", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamageNoParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamageNoParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamageNoParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamageNoParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZExplosiveTrap_NoRegister()
	{
		return ASBZExplosiveTrap::StaticClass();
	}
	struct Z_Construct_UClass_ASBZExplosiveTrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfShotsToExplode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfShotsToExplode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfHitsForCriticalDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfHitsForCriticalDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionTimerInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExplosionTimerInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseImpactPointForEffect_MetaData[];
#endif
		static void NewProp_bUseImpactPointForEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseImpactPointForEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriticalDamageEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CriticalDamageEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfHitShots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfHitShots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MarkerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZExplosiveTrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZExplosiveLevelProp,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZExplosiveTrap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZExplosiveTrap_BP_OnCriticalDamage, "BP_OnCriticalDamage" }, // 1195634923
		{ &Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamage, "Multicast_CriticalDamage" }, // 4232018546
		{ &Z_Construct_UFunction_ASBZExplosiveTrap_Multicast_CriticalDamageNoParams, "Multicast_CriticalDamageNoParams" }, // 878743957
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZExplosiveTrap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrap.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NumberOfShotsToExplode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrap" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NumberOfShotsToExplode = { "NumberOfShotsToExplode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrap, NumberOfShotsToExplode), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NumberOfShotsToExplode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NumberOfShotsToExplode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NumberOfHitsForCriticalDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrap" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NumberOfHitsForCriticalDamage = { "NumberOfHitsForCriticalDamage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrap, NumberOfHitsForCriticalDamage), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NumberOfHitsForCriticalDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NumberOfHitsForCriticalDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_ExplosionTimerInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrap" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_ExplosionTimerInterval = { "ExplosionTimerInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrap, ExplosionTimerInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_ExplosionTimerInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_ExplosionTimerInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_bUseImpactPointForEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrap" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrap.h" },
	};
#endif
	void Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_bUseImpactPointForEffect_SetBit(void* Obj)
	{
		((ASBZExplosiveTrap*)Obj)->bUseImpactPointForEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_bUseImpactPointForEffect = { "bUseImpactPointForEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZExplosiveTrap), &Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_bUseImpactPointForEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_bUseImpactPointForEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_bUseImpactPointForEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_CriticalDamageEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrap" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_CriticalDamageEffect = { "CriticalDamageEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrap, CriticalDamageEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_CriticalDamageEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_CriticalDamageEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_MarkerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrap" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_MarkerAsset = { "MarkerAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrap, MarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_MarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_MarkerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_MarkerOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrap" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_MarkerOffset = { "MarkerOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrap, MarkerOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_MarkerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_MarkerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NumberOfHitShots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrap" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NumberOfHitShots = { "NumberOfHitShots", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrap, NumberOfHitShots), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NumberOfHitShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NumberOfHitShots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NiagaraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrap, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NiagaraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NiagaraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_MarkerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosiveTrap" },
		{ "ModuleRelativePath", "Public/SBZExplosiveTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_MarkerId = { "MarkerId", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZExplosiveTrap, MarkerId), METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_MarkerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_MarkerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZExplosiveTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NumberOfShotsToExplode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NumberOfHitsForCriticalDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_ExplosionTimerInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_bUseImpactPointForEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_CriticalDamageEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_MarkerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_MarkerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NumberOfHitShots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_NiagaraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZExplosiveTrap_Statics::NewProp_MarkerId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZExplosiveTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZExplosiveTrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZExplosiveTrap_Statics::ClassParams = {
		&ASBZExplosiveTrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZExplosiveTrap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrap_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZExplosiveTrap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZExplosiveTrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZExplosiveTrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZExplosiveTrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZExplosiveTrap, 3692958668);
	template<> STARBREEZE_API UClass* StaticClass<ASBZExplosiveTrap>()
	{
		return ASBZExplosiveTrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZExplosiveTrap(Z_Construct_UClass_ASBZExplosiveTrap, &ASBZExplosiveTrap::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZExplosiveTrap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZExplosiveTrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
