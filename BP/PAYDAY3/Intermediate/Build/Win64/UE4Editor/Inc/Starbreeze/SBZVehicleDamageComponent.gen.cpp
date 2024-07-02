// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleDamageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleDamageComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleDamageComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleDamageComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPointDamageEvent();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageEvent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
// End Cross Module References
	DEFINE_FUNCTION(USBZVehicleDamageComponent::execHandleTakePointDamage)
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
	DEFINE_FUNCTION(USBZVehicleDamageComponent::execHandleTakeRadialDamage)
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
	void USBZVehicleDamageComponent::StaticRegisterNativesUSBZVehicleDamageComponent()
	{
		UClass* Class = USBZVehicleDamageComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTakePointDamage", &USBZVehicleDamageComponent::execHandleTakePointDamage },
			{ "HandleTakeRadialDamage", &USBZVehicleDamageComponent::execHandleTakeRadialDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics
	{
		struct SBZVehicleDamageComponent_eventHandleTakePointDamage_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleDamageComponent_eventHandleTakePointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleDamageComponent_eventHandleTakePointDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleDamageComponent_eventHandleTakePointDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FPointDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageEvent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleDamageComponent_eventHandleTakePointDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleDamageComponent_eventHandleTakePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleDamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleDamageComponent, nullptr, "HandleTakePointDamage", nullptr, nullptr, sizeof(SBZVehicleDamageComponent_eventHandleTakePointDamage_Parms), Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics
	{
		struct SBZVehicleDamageComponent_eventHandleTakeRadialDamage_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleDamageComponent_eventHandleTakeRadialDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleDamageComponent_eventHandleTakeRadialDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleDamageComponent_eventHandleTakeRadialDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FRadialDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageEvent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleDamageComponent_eventHandleTakeRadialDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleDamageComponent_eventHandleTakeRadialDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleDamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleDamageComponent, nullptr, "HandleTakeRadialDamage", nullptr, nullptr, sizeof(SBZVehicleDamageComponent_eventHandleTakeRadialDamage_Parms), Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZVehicleDamageComponent_NoRegister()
	{
		return USBZVehicleDamageComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZVehicleDamageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageZones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageZones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DamageZones;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVehicleDamageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZVehicleDamageComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakePointDamage, "HandleTakePointDamage" }, // 1427621996
		{ &Z_Construct_UFunction_USBZVehicleDamageComponent_HandleTakeRadialDamage, "HandleTakeRadialDamage" }, // 56937875
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleDamageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZVehicleDamageComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleDamageComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVehicleDamageComponent_Statics::NewProp_DamageZones_Inner = { "DamageZones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleDamageComponent_Statics::NewProp_DamageZones_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleDamageComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleDamageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZVehicleDamageComponent_Statics::NewProp_DamageZones = { "DamageZones", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleDamageComponent, DamageZones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleDamageComponent_Statics::NewProp_DamageZones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleDamageComponent_Statics::NewProp_DamageZones_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVehicleDamageComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleDamageComponent_Statics::NewProp_DamageZones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleDamageComponent_Statics::NewProp_DamageZones,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVehicleDamageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVehicleDamageComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVehicleDamageComponent_Statics::ClassParams = {
		&USBZVehicleDamageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZVehicleDamageComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleDamageComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVehicleDamageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleDamageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVehicleDamageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVehicleDamageComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVehicleDamageComponent, 3932784670);
	template<> STARBREEZE_API UClass* StaticClass<USBZVehicleDamageComponent>()
	{
		return USBZVehicleDamageComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVehicleDamageComponent(Z_Construct_UClass_USBZVehicleDamageComponent, &USBZVehicleDamageComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVehicleDamageComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVehicleDamageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
