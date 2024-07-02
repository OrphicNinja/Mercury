// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPersistentWorldDamageZoneComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPersistentWorldDamageZoneComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEllipsoidComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPointDamageEvent();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageEvent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZPersistentWorldDamageZoneComponent::execHandleTakePointDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_GET_STRUCT_REF(FPointDamageEvent,Z_Param_Out_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTakePointDamage(Z_Param_DamagedActor,Z_Param_DamageAmount,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPersistentWorldDamageZoneComponent::execHandleTakeRadialDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_GET_STRUCT_REF(FRadialDamageEvent,Z_Param_Out_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTakeRadialDamage(Z_Param_DamagedActor,Z_Param_DamageAmount,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	void USBZPersistentWorldDamageZoneComponent::StaticRegisterNativesUSBZPersistentWorldDamageZoneComponent()
	{
		UClass* Class = USBZPersistentWorldDamageZoneComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTakePointDamage", &USBZPersistentWorldDamageZoneComponent::execHandleTakePointDamage },
			{ "HandleTakeRadialDamage", &USBZPersistentWorldDamageZoneComponent::execHandleTakeRadialDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics
	{
		struct SBZPersistentWorldDamageZoneComponent_eventHandleTakePointDamage_Parms
		{
			AActor* DamagedActor;
			float DamageAmount;
			FPointDamageEvent DamageEvent;
			AController* EventInstigator;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPersistentWorldDamageZoneComponent_eventHandleTakePointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPersistentWorldDamageZoneComponent_eventHandleTakePointDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPersistentWorldDamageZoneComponent_eventHandleTakePointDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FPointDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::NewProp_DamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::NewProp_DamageEvent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPersistentWorldDamageZoneComponent_eventHandleTakePointDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPersistentWorldDamageZoneComponent_eventHandleTakePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::NewProp_DamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageZoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent, nullptr, "HandleTakePointDamage", nullptr, nullptr, sizeof(SBZPersistentWorldDamageZoneComponent_eventHandleTakePointDamage_Parms), Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics
	{
		struct SBZPersistentWorldDamageZoneComponent_eventHandleTakeRadialDamage_Parms
		{
			AActor* DamagedActor;
			float DamageAmount;
			FRadialDamageEvent DamageEvent;
			AController* EventInstigator;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPersistentWorldDamageZoneComponent_eventHandleTakeRadialDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPersistentWorldDamageZoneComponent_eventHandleTakeRadialDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPersistentWorldDamageZoneComponent_eventHandleTakeRadialDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FRadialDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::NewProp_DamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::NewProp_DamageEvent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPersistentWorldDamageZoneComponent_eventHandleTakeRadialDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPersistentWorldDamageZoneComponent_eventHandleTakeRadialDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::NewProp_DamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageZoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent, nullptr, "HandleTakeRadialDamage", nullptr, nullptr, sizeof(SBZPersistentWorldDamageZoneComponent_eventHandleTakeRadialDamage_Parms), Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_NoRegister()
	{
		return USBZPersistentWorldDamageZoneComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_InfluencedMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfluencedMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InfluencedMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousRadialDamageCauser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousRadialDamageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialDamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadialDamageMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectOwnerOnly_MetaData[];
#endif
		static void NewProp_bAffectOwnerOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectOwnerOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEllipsoidComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakePointDamage, "HandleTakePointDamage" }, // 1810154898
		{ &Z_Construct_UFunction_USBZPersistentWorldDamageZoneComponent_HandleTakeRadialDamage, "HandleTakeRadialDamage" }, // 1654769595
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "SBZPersistentWorldDamageZoneComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageZoneComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_InfluencedMeshes_Inner = { "InfluencedMeshes", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_InfluencedMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPersistentWorldDamageZoneComponent" },
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageZoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_InfluencedMeshes = { "InfluencedMeshes", nullptr, (EPropertyFlags)0x004480800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPersistentWorldDamageZoneComponent, InfluencedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_InfluencedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_InfluencedMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_PreviousRadialDamageCauser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPersistentWorldDamageZoneComponent" },
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageZoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_PreviousRadialDamageCauser = { "PreviousRadialDamageCauser", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPersistentWorldDamageZoneComponent, PreviousRadialDamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_PreviousRadialDamageCauser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_PreviousRadialDamageCauser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPersistentWorldDamageZoneComponent" },
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageZoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPersistentWorldDamageZoneComponent, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPersistentWorldDamageZoneComponent" },
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageZoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPersistentWorldDamageZoneComponent, Health), METADATA_PARAMS(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_RadialDamageMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPersistentWorldDamageZoneComponent" },
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageZoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_RadialDamageMultiplier = { "RadialDamageMultiplier", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPersistentWorldDamageZoneComponent, RadialDamageMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_RadialDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_RadialDamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_bAffectOwnerOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPersistentWorldDamageZoneComponent" },
		{ "ModuleRelativePath", "Public/SBZPersistentWorldDamageZoneComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_bAffectOwnerOnly_SetBit(void* Obj)
	{
		((USBZPersistentWorldDamageZoneComponent*)Obj)->bAffectOwnerOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_bAffectOwnerOnly = { "bAffectOwnerOnly", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPersistentWorldDamageZoneComponent), &Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_bAffectOwnerOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_bAffectOwnerOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_bAffectOwnerOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_InfluencedMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_InfluencedMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_PreviousRadialDamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_RadialDamageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::NewProp_bAffectOwnerOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPersistentWorldDamageZoneComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::ClassParams = {
		&USBZPersistentWorldDamageZoneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPersistentWorldDamageZoneComponent, 1551807783);
	template<> STARBREEZE_API UClass* StaticClass<USBZPersistentWorldDamageZoneComponent>()
	{
		return USBZPersistentWorldDamageZoneComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPersistentWorldDamageZoneComponent(Z_Construct_UClass_USBZPersistentWorldDamageZoneComponent, &USBZPersistentWorldDamageZoneComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPersistentWorldDamageZoneComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPersistentWorldDamageZoneComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
