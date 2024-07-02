// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActorFilterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActorFilterComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorFilterComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorFilterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActorFilterDefinition();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZFilterActorDynamicDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZFilterDesiredCountDynamicDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZFilterAllDesiredCountsDynamicDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZActorFilterComponent::execOnComponentBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZActorFilterComponent::execOnComponentEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZActorFilterComponent::execSetPrimitiveComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewPrimitiveComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrimitiveComponent(Z_Param_NewPrimitiveComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZActorFilterComponent::execSetPrimitiveComponentEnableCollision)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrimitiveComponentEnableCollision(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void USBZActorFilterComponent::StaticRegisterNativesUSBZActorFilterComponent()
	{
		UClass* Class = USBZActorFilterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentBeginOverlap", &USBZActorFilterComponent::execOnComponentBeginOverlap },
			{ "OnComponentEndOverlap", &USBZActorFilterComponent::execOnComponentEndOverlap },
			{ "SetPrimitiveComponent", &USBZActorFilterComponent::execSetPrimitiveComponent },
			{ "SetPrimitiveComponentEnableCollision", &USBZActorFilterComponent::execSetPrimitiveComponentEnableCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics
	{
		struct SBZActorFilterComponent_eventOnComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorFilterComponent_eventOnComponentBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorFilterComponent_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorFilterComponent_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorFilterComponent_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZActorFilterComponent_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZActorFilterComponent_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorFilterComponent_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActorFilterComponent, nullptr, "OnComponentBeginOverlap", nullptr, nullptr, sizeof(SBZActorFilterComponent_eventOnComponentBeginOverlap_Parms), Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics
	{
		struct SBZActorFilterComponent_eventOnComponentEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorFilterComponent_eventOnComponentEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorFilterComponent_eventOnComponentEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorFilterComponent_eventOnComponentEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorFilterComponent_eventOnComponentEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActorFilterComponent, nullptr, "OnComponentEndOverlap", nullptr, nullptr, sizeof(SBZActorFilterComponent_eventOnComponentEndOverlap_Parms), Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent_Statics
	{
		struct SBZActorFilterComponent_eventSetPrimitiveComponent_Parms
		{
			UPrimitiveComponent* NewPrimitiveComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPrimitiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPrimitiveComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent_Statics::NewProp_NewPrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent_Statics::NewProp_NewPrimitiveComponent = { "NewPrimitiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActorFilterComponent_eventSetPrimitiveComponent_Parms, NewPrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent_Statics::NewProp_NewPrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent_Statics::NewProp_NewPrimitiveComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent_Statics::NewProp_NewPrimitiveComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActorFilterComponent, nullptr, "SetPrimitiveComponent", nullptr, nullptr, sizeof(SBZActorFilterComponent_eventSetPrimitiveComponent_Parms), Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponentEnableCollision_Statics
	{
		struct SBZActorFilterComponent_eventSetPrimitiveComponentEnableCollision_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponentEnableCollision_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZActorFilterComponent_eventSetPrimitiveComponentEnableCollision_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponentEnableCollision_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZActorFilterComponent_eventSetPrimitiveComponentEnableCollision_Parms), &Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponentEnableCollision_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponentEnableCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponentEnableCollision_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponentEnableCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponentEnableCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActorFilterComponent, nullptr, "SetPrimitiveComponentEnableCollision", nullptr, nullptr, sizeof(SBZActorFilterComponent_eventSetPrimitiveComponentEnableCollision_Parms), Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponentEnableCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponentEnableCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponentEnableCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponentEnableCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponentEnableCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponentEnableCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZActorFilterComponent_NoRegister()
	{
		return USBZActorFilterComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZActorFilterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeakPrimitiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_WeakPrimitiveComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedCollisionEnabledState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CachedCollisionEnabledState;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilterDefinitions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilterDefinitions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableWhenActorBeginsOverlapping_MetaData[];
#endif
		static void NewProp_bDisableWhenActorBeginsOverlapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableWhenActorBeginsOverlapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableWhenDesiredCountReached_MetaData[];
#endif
		static void NewProp_bDisableWhenDesiredCountReached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableWhenDesiredCountReached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableWhenAllDesiredCountsReached_MetaData[];
#endif
		static void NewProp_bDisableWhenAllDesiredCountsReached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableWhenAllDesiredCountsReached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysBroadcastOverlapEndEvents_MetaData[];
#endif
		static void NewProp_bAlwaysBroadcastOverlapEndEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysBroadcastOverlapEndEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilteredActorBeginOverlapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FilteredActorBeginOverlapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilteredActorEndOverlapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FilteredActorEndOverlapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterHasDesiredCountChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FilterHasDesiredCountChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiltersAllHaveDesiredCountsChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FiltersAllHaveDesiredCountsChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZActorFilterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZActorFilterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZActorFilterComponent_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 909122788
		{ &Z_Construct_UFunction_USBZActorFilterComponent_OnComponentEndOverlap, "OnComponentEndOverlap" }, // 975811297
		{ &Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponent, "SetPrimitiveComponent" }, // 2288951098
		{ &Z_Construct_UFunction_USBZActorFilterComponent_SetPrimitiveComponentEnableCollision, "SetPrimitiveComponentEnableCollision" }, // 3101617055
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorFilterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZActorFilterComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_WeakPrimitiveComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorFilterComponent" },
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_WeakPrimitiveComponent = { "WeakPrimitiveComponent", nullptr, (EPropertyFlags)0x002408000008000d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActorFilterComponent, WeakPrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_WeakPrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_WeakPrimitiveComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorFilterComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActorFilterComponent, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_PrimitiveComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_CachedCollisionEnabledState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorFilterComponent" },
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_CachedCollisionEnabledState = { "CachedCollisionEnabledState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActorFilterComponent, CachedCollisionEnabledState), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_CachedCollisionEnabledState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_CachedCollisionEnabledState_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilterDefinitions_Inner = { "FilterDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZActorFilterDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilterDefinitions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorFilterComponent" },
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilterDefinitions = { "FilterDefinitions", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActorFilterComponent, FilterDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilterDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilterDefinitions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenActorBeginsOverlapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorFilterComponent" },
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenActorBeginsOverlapping_SetBit(void* Obj)
	{
		((USBZActorFilterComponent*)Obj)->bDisableWhenActorBeginsOverlapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenActorBeginsOverlapping = { "bDisableWhenActorBeginsOverlapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZActorFilterComponent), &Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenActorBeginsOverlapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenActorBeginsOverlapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenActorBeginsOverlapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenDesiredCountReached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorFilterComponent" },
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenDesiredCountReached_SetBit(void* Obj)
	{
		((USBZActorFilterComponent*)Obj)->bDisableWhenDesiredCountReached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenDesiredCountReached = { "bDisableWhenDesiredCountReached", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZActorFilterComponent), &Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenDesiredCountReached_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenDesiredCountReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenDesiredCountReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenAllDesiredCountsReached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorFilterComponent" },
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenAllDesiredCountsReached_SetBit(void* Obj)
	{
		((USBZActorFilterComponent*)Obj)->bDisableWhenAllDesiredCountsReached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenAllDesiredCountsReached = { "bDisableWhenAllDesiredCountsReached", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZActorFilterComponent), &Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenAllDesiredCountsReached_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenAllDesiredCountsReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenAllDesiredCountsReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bAlwaysBroadcastOverlapEndEvents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorFilterComponent" },
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bAlwaysBroadcastOverlapEndEvents_SetBit(void* Obj)
	{
		((USBZActorFilterComponent*)Obj)->bAlwaysBroadcastOverlapEndEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bAlwaysBroadcastOverlapEndEvents = { "bAlwaysBroadcastOverlapEndEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZActorFilterComponent), &Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bAlwaysBroadcastOverlapEndEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bAlwaysBroadcastOverlapEndEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bAlwaysBroadcastOverlapEndEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilteredActorBeginOverlapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorFilterComponent" },
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilteredActorBeginOverlapping = { "FilteredActorBeginOverlapping", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActorFilterComponent, FilteredActorBeginOverlapping), Z_Construct_UDelegateFunction_Starbreeze_SBZFilterActorDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilteredActorBeginOverlapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilteredActorBeginOverlapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilteredActorEndOverlapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorFilterComponent" },
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilteredActorEndOverlapping = { "FilteredActorEndOverlapping", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActorFilterComponent, FilteredActorEndOverlapping), Z_Construct_UDelegateFunction_Starbreeze_SBZFilterActorDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilteredActorEndOverlapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilteredActorEndOverlapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilterHasDesiredCountChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorFilterComponent" },
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilterHasDesiredCountChanged = { "FilterHasDesiredCountChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActorFilterComponent, FilterHasDesiredCountChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZFilterDesiredCountDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilterHasDesiredCountChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilterHasDesiredCountChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FiltersAllHaveDesiredCountsChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorFilterComponent" },
		{ "ModuleRelativePath", "Public/SBZActorFilterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FiltersAllHaveDesiredCountsChanged = { "FiltersAllHaveDesiredCountsChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActorFilterComponent, FiltersAllHaveDesiredCountsChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZFilterAllDesiredCountsDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FiltersAllHaveDesiredCountsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FiltersAllHaveDesiredCountsChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZActorFilterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_WeakPrimitiveComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_PrimitiveComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_CachedCollisionEnabledState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilterDefinitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilterDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenActorBeginsOverlapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenDesiredCountReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bDisableWhenAllDesiredCountsReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_bAlwaysBroadcastOverlapEndEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilteredActorBeginOverlapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilteredActorEndOverlapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FilterHasDesiredCountChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorFilterComponent_Statics::NewProp_FiltersAllHaveDesiredCountsChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZActorFilterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZActorFilterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZActorFilterComponent_Statics::ClassParams = {
		&USBZActorFilterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZActorFilterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorFilterComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZActorFilterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorFilterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZActorFilterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZActorFilterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZActorFilterComponent, 919414443);
	template<> STARBREEZE_API UClass* StaticClass<USBZActorFilterComponent>()
	{
		return USBZActorFilterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZActorFilterComponent(Z_Construct_UClass_USBZActorFilterComponent, &USBZActorFilterComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZActorFilterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZActorFilterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
