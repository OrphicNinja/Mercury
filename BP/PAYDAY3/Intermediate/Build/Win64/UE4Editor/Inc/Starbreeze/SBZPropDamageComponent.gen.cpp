// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPropDamageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPropDamageComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPropDamageComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPropDamageComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageParams();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPropDamageHitsSignature__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPropDamageHealthSignature__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPropDamagePool();
// End Cross Module References
	DEFINE_FUNCTION(USBZPropDamageComponent::execHandleTakePointDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_ShotFromDirection);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTakePointDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_InstigatedBy,Z_Param_HitLocation,Z_Param_HitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_DamageType,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPropDamageComponent::execHandleTakeRadialDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_HitInfos);
		P_GET_STRUCT_REF(FRadialDamageParams,Z_Param_Out_Params);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTakeRadialDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_InstigatedBy,Z_Param_Out_HitInfos,Z_Param_Out_Params,Z_Param_Out_Origin,Z_Param_DamageType,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPropDamageComponent::execOnRep_DamagePools)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DamagePools();
		P_NATIVE_END;
	}
	void USBZPropDamageComponent::StaticRegisterNativesUSBZPropDamageComponent()
	{
		UClass* Class = USBZPropDamageComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTakePointDamage", &USBZPropDamageComponent::execHandleTakePointDamage },
			{ "HandleTakeRadialDamage", &USBZPropDamageComponent::execHandleTakeRadialDamage },
			{ "OnRep_DamagePools", &USBZPropDamageComponent::execOnRep_DamagePools },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics
	{
		struct SBZPropDamageComponent_eventHandleTakePointDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			AController* InstigatedBy;
			FVector HitLocation;
			UPrimitiveComponent* HitComponent;
			FName BoneName;
			FVector ShotFromDirection;
			const UDamageType* DamageType;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakePointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakePointDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakePointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakePointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakePointDamage_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakePointDamage_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakePointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakePointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_ShotFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPropDamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPropDamageComponent, nullptr, "HandleTakePointDamage", nullptr, nullptr, sizeof(SBZPropDamageComponent_eventHandleTakePointDamage_Parms), Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics
	{
		struct SBZPropDamageComponent_eventHandleTakeRadialDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			AController* InstigatedBy;
			TArray<FHitResult> HitInfos;
			FRadialDamageParams Params;
			FVector Origin;
			const UDamageType* DamageType;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitInfos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakeRadialDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakeRadialDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakeRadialDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_HitInfos_Inner = { "HitInfos", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_HitInfos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_HitInfos = { "HitInfos", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakeRadialDamage_Parms, HitInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_HitInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_HitInfos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakeRadialDamage_Parms, Params), Z_Construct_UScriptStruct_FRadialDamageParams, METADATA_PARAMS(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_Params_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakeRadialDamage_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakeRadialDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPropDamageComponent_eventHandleTakeRadialDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_HitInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_HitInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPropDamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPropDamageComponent, nullptr, "HandleTakeRadialDamage", nullptr, nullptr, sizeof(SBZPropDamageComponent_eventHandleTakeRadialDamage_Parms), Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPropDamageComponent_OnRep_DamagePools_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPropDamageComponent_OnRep_DamagePools_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPropDamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPropDamageComponent_OnRep_DamagePools_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPropDamageComponent, nullptr, "OnRep_DamagePools", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPropDamageComponent_OnRep_DamagePools_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPropDamageComponent_OnRep_DamagePools_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPropDamageComponent_OnRep_DamagePools()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPropDamageComponent_OnRep_DamagePools_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPropDamageComponent_NoRegister()
	{
		return USBZPropDamageComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZPropDamageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPropDamageHits_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPropDamageHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPropDamageHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPropDamageHealth;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamagePools_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePools_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DamagePools;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPropDamageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPropDamageComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPropDamageComponent_HandleTakePointDamage, "HandleTakePointDamage" }, // 678880328
		{ &Z_Construct_UFunction_USBZPropDamageComponent_HandleTakeRadialDamage, "HandleTakeRadialDamage" }, // 3346654786
		{ &Z_Construct_UFunction_USBZPropDamageComponent_OnRep_DamagePools, "OnRep_DamagePools" }, // 3908505466
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPropDamageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZPropDamageComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPropDamageComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_OnPropDamageHits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPropDamageComponent" },
		{ "ModuleRelativePath", "Public/SBZPropDamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_OnPropDamageHits = { "OnPropDamageHits", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPropDamageComponent, OnPropDamageHits), Z_Construct_UDelegateFunction_Starbreeze_SBZPropDamageHitsSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_OnPropDamageHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_OnPropDamageHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_OnPropDamageHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPropDamageComponent" },
		{ "ModuleRelativePath", "Public/SBZPropDamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_OnPropDamageHealth = { "OnPropDamageHealth", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPropDamageComponent, OnPropDamageHealth), Z_Construct_UDelegateFunction_Starbreeze_SBZPropDamageHealthSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_OnPropDamageHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_OnPropDamageHealth_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_DamagePools_Inner = { "DamagePools", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPropDamagePool, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_DamagePools_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPropDamageComponent" },
		{ "ModuleRelativePath", "Public/SBZPropDamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_DamagePools = { "DamagePools", "OnRep_DamagePools", (EPropertyFlags)0x0020088100000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPropDamageComponent, DamagePools), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_DamagePools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_DamagePools_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPropDamageComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_OnPropDamageHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_OnPropDamageHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_DamagePools_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPropDamageComponent_Statics::NewProp_DamagePools,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPropDamageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPropDamageComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPropDamageComponent_Statics::ClassParams = {
		&USBZPropDamageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPropDamageComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPropDamageComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPropDamageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPropDamageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPropDamageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPropDamageComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPropDamageComponent, 2107651759);
	template<> STARBREEZE_API UClass* StaticClass<USBZPropDamageComponent>()
	{
		return USBZPropDamageComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPropDamageComponent(Z_Construct_UClass_USBZPropDamageComponent, &USBZPropDamageComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPropDamageComponent"), false, nullptr, nullptr, nullptr);

	void USBZPropDamageComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_DamagePools(TEXT("DamagePools"));

		const bool bIsValid = true
			&& Name_DamagePools == ClassReps[(int32)ENetFields_Private::DamagePools].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZPropDamageComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPropDamageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
