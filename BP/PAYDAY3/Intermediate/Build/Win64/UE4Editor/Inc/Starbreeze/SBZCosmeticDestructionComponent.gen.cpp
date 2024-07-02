// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCosmeticDestructionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCosmeticDestructionComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticDestructionComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticDestructionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPointDamageEvent();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageEvent();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZCosmeticDestructionComponenteSignature__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZCosmeticDestructionComponent::execHandleSBZTakePointDamageEx)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_STRUCT_REF(FPointDamageEvent,Z_Param_Out_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSBZTakePointDamageEx(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_Out_DamageEvent,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCosmeticDestructionComponent::execHandleSBZTakeRadialDamageEx)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_STRUCT_REF(FRadialDamageEvent,Z_Param_Out_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSBZTakeRadialDamageEx(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_Out_DamageEvent,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	void USBZCosmeticDestructionComponent::StaticRegisterNativesUSBZCosmeticDestructionComponent()
	{
		UClass* Class = USBZCosmeticDestructionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleSBZTakePointDamageEx", &USBZCosmeticDestructionComponent::execHandleSBZTakePointDamageEx },
			{ "HandleSBZTakeRadialDamageEx", &USBZCosmeticDestructionComponent::execHandleSBZTakeRadialDamageEx },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics
	{
		struct SBZCosmeticDestructionComponent_eventHandleSBZTakePointDamageEx_Parms
		{
			AActor* DamagedActor;
			float Damage;
			FPointDamageEvent DamageEvent;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCosmeticDestructionComponent_eventHandleSBZTakePointDamageEx_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCosmeticDestructionComponent_eventHandleSBZTakePointDamageEx_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCosmeticDestructionComponent_eventHandleSBZTakePointDamageEx_Parms, DamageEvent), Z_Construct_UScriptStruct_FPointDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::NewProp_DamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::NewProp_DamageEvent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCosmeticDestructionComponent_eventHandleSBZTakePointDamageEx_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCosmeticDestructionComponent_eventHandleSBZTakePointDamageEx_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::NewProp_DamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCosmeticDestructionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCosmeticDestructionComponent, nullptr, "HandleSBZTakePointDamageEx", nullptr, nullptr, sizeof(SBZCosmeticDestructionComponent_eventHandleSBZTakePointDamageEx_Parms), Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics
	{
		struct SBZCosmeticDestructionComponent_eventHandleSBZTakeRadialDamageEx_Parms
		{
			AActor* DamagedActor;
			float Damage;
			FRadialDamageEvent DamageEvent;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCosmeticDestructionComponent_eventHandleSBZTakeRadialDamageEx_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCosmeticDestructionComponent_eventHandleSBZTakeRadialDamageEx_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCosmeticDestructionComponent_eventHandleSBZTakeRadialDamageEx_Parms, DamageEvent), Z_Construct_UScriptStruct_FRadialDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::NewProp_DamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::NewProp_DamageEvent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCosmeticDestructionComponent_eventHandleSBZTakeRadialDamageEx_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCosmeticDestructionComponent_eventHandleSBZTakeRadialDamageEx_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::NewProp_DamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCosmeticDestructionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCosmeticDestructionComponent, nullptr, "HandleSBZTakeRadialDamageEx", nullptr, nullptr, sizeof(SBZCosmeticDestructionComponent_eventHandleSBZTakeRadialDamageEx_Parms), Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCosmeticDestructionComponent_NoRegister()
	{
		return USBZCosmeticDestructionComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCosmeticDestructionHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCosmeticDestructionHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Chance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseExplosionCoolDown_MetaData[];
#endif
		static void NewProp_bUseExplosionCoolDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseExplosionCoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionCoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionCoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseExplosionChance_MetaData[];
#endif
		static void NewProp_bUseExplosionChance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseExplosionChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionChance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakePointDamageEx, "HandleSBZTakePointDamageEx" }, // 3565373369
		{ &Z_Construct_UFunction_USBZCosmeticDestructionComponent_HandleSBZTakeRadialDamageEx, "HandleSBZTakeRadialDamageEx" }, // 2293807099
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZCosmeticDestructionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCosmeticDestructionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_OnCosmeticDestructionHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticDestructionComponent" },
		{ "ModuleRelativePath", "Public/SBZCosmeticDestructionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_OnCosmeticDestructionHit = { "OnCosmeticDestructionHit", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCosmeticDestructionComponent, OnCosmeticDestructionHit), Z_Construct_UDelegateFunction_Starbreeze_SBZCosmeticDestructionComponenteSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_OnCosmeticDestructionHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_OnCosmeticDestructionHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_CoolDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticDestructionComponent" },
		{ "ModuleRelativePath", "Public/SBZCosmeticDestructionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_CoolDown = { "CoolDown", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCosmeticDestructionComponent, CoolDown), METADATA_PARAMS(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_CoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_CoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_Chance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticDestructionComponent" },
		{ "ModuleRelativePath", "Public/SBZCosmeticDestructionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_Chance = { "Chance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCosmeticDestructionComponent, Chance), METADATA_PARAMS(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_Chance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_Chance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_bUseExplosionCoolDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticDestructionComponent" },
		{ "ModuleRelativePath", "Public/SBZCosmeticDestructionComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_bUseExplosionCoolDown_SetBit(void* Obj)
	{
		((USBZCosmeticDestructionComponent*)Obj)->bUseExplosionCoolDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_bUseExplosionCoolDown = { "bUseExplosionCoolDown", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCosmeticDestructionComponent), &Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_bUseExplosionCoolDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_bUseExplosionCoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_bUseExplosionCoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_ExplosionCoolDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticDestructionComponent" },
		{ "ModuleRelativePath", "Public/SBZCosmeticDestructionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_ExplosionCoolDown = { "ExplosionCoolDown", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCosmeticDestructionComponent, ExplosionCoolDown), METADATA_PARAMS(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_ExplosionCoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_ExplosionCoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_bUseExplosionChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticDestructionComponent" },
		{ "ModuleRelativePath", "Public/SBZCosmeticDestructionComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_bUseExplosionChance_SetBit(void* Obj)
	{
		((USBZCosmeticDestructionComponent*)Obj)->bUseExplosionChance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_bUseExplosionChance = { "bUseExplosionChance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCosmeticDestructionComponent), &Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_bUseExplosionChance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_bUseExplosionChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_bUseExplosionChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_ExplosionChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticDestructionComponent" },
		{ "ModuleRelativePath", "Public/SBZCosmeticDestructionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_ExplosionChance = { "ExplosionChance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCosmeticDestructionComponent, ExplosionChance), METADATA_PARAMS(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_ExplosionChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_ExplosionChance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_OnCosmeticDestructionHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_CoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_Chance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_bUseExplosionCoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_ExplosionCoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_bUseExplosionChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::NewProp_ExplosionChance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCosmeticDestructionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::ClassParams = {
		&USBZCosmeticDestructionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCosmeticDestructionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCosmeticDestructionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCosmeticDestructionComponent, 3544130138);
	template<> STARBREEZE_API UClass* StaticClass<USBZCosmeticDestructionComponent>()
	{
		return USBZCosmeticDestructionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCosmeticDestructionComponent(Z_Construct_UClass_USBZCosmeticDestructionComponent, &USBZCosmeticDestructionComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCosmeticDestructionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCosmeticDestructionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
