// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStaticVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStaticVehicle() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStaticVehicle_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStaticVehicle();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleLightCPD();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleLightType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleLights();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVariationSetData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZStaticVehicle::execSetLightCPDBroken)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CPDIndex);
		P_GET_ENUM(ESBZVehicleLightCPD,Z_Param_LightBit);
		P_GET_UBOOL(Z_Param_bIsBroken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightCPDBroken(Z_Param_CPDIndex,ESBZVehicleLightCPD(Z_Param_LightBit),Z_Param_bIsBroken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZStaticVehicle::execSetLightType)
	{
		P_GET_ENUM(ESBZVehicleLightType,Z_Param_LightType);
		P_GET_UBOOL(Z_Param_bIsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightType(ESBZVehicleLightType(Z_Param_LightType),Z_Param_bIsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZStaticVehicle::execTryActivateAlarm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryActivateAlarm_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ASBZStaticVehicle_TryActivateAlarm = FName(TEXT("TryActivateAlarm"));
	void ASBZStaticVehicle::TryActivateAlarm()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZStaticVehicle_TryActivateAlarm),NULL);
	}
	void ASBZStaticVehicle::StaticRegisterNativesASBZStaticVehicle()
	{
		UClass* Class = ASBZStaticVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLightCPDBroken", &ASBZStaticVehicle::execSetLightCPDBroken },
			{ "SetLightType", &ASBZStaticVehicle::execSetLightType },
			{ "TryActivateAlarm", &ASBZStaticVehicle::execTryActivateAlarm },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics
	{
		struct SBZStaticVehicle_eventSetLightCPDBroken_Parms
		{
			int32 CPDIndex;
			ESBZVehicleLightCPD LightBit;
			bool bIsBroken;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CPDIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightBit_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LightBit;
		static void NewProp_bIsBroken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBroken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::NewProp_CPDIndex = { "CPDIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStaticVehicle_eventSetLightCPDBroken_Parms, CPDIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::NewProp_LightBit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::NewProp_LightBit = { "LightBit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStaticVehicle_eventSetLightCPDBroken_Parms, LightBit), Z_Construct_UEnum_Starbreeze_ESBZVehicleLightCPD, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::NewProp_bIsBroken_SetBit(void* Obj)
	{
		((SBZStaticVehicle_eventSetLightCPDBroken_Parms*)Obj)->bIsBroken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::NewProp_bIsBroken = { "bIsBroken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZStaticVehicle_eventSetLightCPDBroken_Parms), &Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::NewProp_bIsBroken_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::NewProp_CPDIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::NewProp_LightBit_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::NewProp_LightBit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::NewProp_bIsBroken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStaticVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStaticVehicle, nullptr, "SetLightCPDBroken", nullptr, nullptr, sizeof(SBZStaticVehicle_eventSetLightCPDBroken_Parms), Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics
	{
		struct SBZStaticVehicle_eventSetLightType_Parms
		{
			ESBZVehicleLightType LightType;
			bool bIsOn;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LightType;
		static void NewProp_bIsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::NewProp_LightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::NewProp_LightType = { "LightType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStaticVehicle_eventSetLightType_Parms, LightType), Z_Construct_UEnum_Starbreeze_ESBZVehicleLightType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::NewProp_bIsOn_SetBit(void* Obj)
	{
		((SBZStaticVehicle_eventSetLightType_Parms*)Obj)->bIsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::NewProp_bIsOn = { "bIsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZStaticVehicle_eventSetLightType_Parms), &Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::NewProp_bIsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::NewProp_LightType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::NewProp_LightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::NewProp_bIsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStaticVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStaticVehicle, nullptr, "SetLightType", nullptr, nullptr, sizeof(SBZStaticVehicle_eventSetLightType_Parms), Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStaticVehicle_SetLightType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStaticVehicle_SetLightType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZStaticVehicle_TryActivateAlarm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStaticVehicle_TryActivateAlarm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStaticVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStaticVehicle_TryActivateAlarm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStaticVehicle, nullptr, "TryActivateAlarm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStaticVehicle_TryActivateAlarm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticVehicle_TryActivateAlarm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStaticVehicle_TryActivateAlarm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStaticVehicle_TryActivateAlarm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZStaticVehicle_NoRegister()
	{
		return ASBZStaticVehicle::StaticClass();
	}
	struct Z_Construct_UClass_ASBZStaticVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightsCPDGraph_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightsCPDGraph_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightsCPDGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LightsCPDGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveLightsBitmask_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActiveLightsBitmask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VariationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlarmEquippedChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlarmEquippedChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasAlarm_MetaData[];
#endif
		static void NewProp_bHasAlarm_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasAlarm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlarmActivated_MetaData[];
#endif
		static void NewProp_bAlarmActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlarmActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlarmStartEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlarmStartEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlarmStopEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlarmStopEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZStaticVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZStaticVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZStaticVehicle_SetLightCPDBroken, "SetLightCPDBroken" }, // 333946613
		{ &Z_Construct_UFunction_ASBZStaticVehicle_SetLightType, "SetLightType" }, // 2168467999
		{ &Z_Construct_UFunction_ASBZStaticVehicle_TryActivateAlarm, "TryActivateAlarm" }, // 2531143903
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticVehicle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "SBZStaticVehicle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStaticVehicle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_LightsCPDGraph_ValueProp = { "LightsCPDGraph", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZVehicleLights, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_LightsCPDGraph_Key_KeyProp = { "LightsCPDGraph_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_LightsCPDGraph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStaticVehicle" },
		{ "ModuleRelativePath", "Public/SBZStaticVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_LightsCPDGraph = { "LightsCPDGraph", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStaticVehicle, LightsCPDGraph), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_LightsCPDGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_LightsCPDGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_ActiveLightsBitmask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStaticVehicle" },
		{ "ModuleRelativePath", "Public/SBZStaticVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_ActiveLightsBitmask = { "ActiveLightsBitmask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStaticVehicle, ActiveLightsBitmask), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_ActiveLightsBitmask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_ActiveLightsBitmask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_VariationData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStaticVehicle" },
		{ "ModuleRelativePath", "Public/SBZStaticVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_VariationData = { "VariationData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStaticVehicle, VariationData), Z_Construct_UClass_USBZVariationSetData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_VariationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_VariationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStaticVehicle" },
		{ "ModuleRelativePath", "Public/SBZStaticVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStaticVehicle, Seed), METADATA_PARAMS(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AlarmEquippedChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStaticVehicle" },
		{ "ModuleRelativePath", "Public/SBZStaticVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AlarmEquippedChance = { "AlarmEquippedChance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStaticVehicle, AlarmEquippedChance), METADATA_PARAMS(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AlarmEquippedChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AlarmEquippedChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_bHasAlarm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStaticVehicle" },
		{ "ModuleRelativePath", "Public/SBZStaticVehicle.h" },
	};
#endif
	void Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_bHasAlarm_SetBit(void* Obj)
	{
		((ASBZStaticVehicle*)Obj)->bHasAlarm = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_bHasAlarm = { "bHasAlarm", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZStaticVehicle), &Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_bHasAlarm_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_bHasAlarm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_bHasAlarm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_bAlarmActivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStaticVehicle" },
		{ "ModuleRelativePath", "Public/SBZStaticVehicle.h" },
	};
#endif
	void Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_bAlarmActivated_SetBit(void* Obj)
	{
		((ASBZStaticVehicle*)Obj)->bAlarmActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_bAlarmActivated = { "bAlarmActivated", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZStaticVehicle), &Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_bAlarmActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_bAlarmActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_bAlarmActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStaticVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZStaticVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStaticVehicle, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AkComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AlarmStartEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStaticVehicle" },
		{ "ModuleRelativePath", "Public/SBZStaticVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AlarmStartEvent = { "AlarmStartEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStaticVehicle, AlarmStartEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AlarmStartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AlarmStartEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AlarmStopEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStaticVehicle" },
		{ "ModuleRelativePath", "Public/SBZStaticVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AlarmStopEvent = { "AlarmStopEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStaticVehicle, AlarmStopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AlarmStopEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AlarmStopEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZStaticVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_LightsCPDGraph_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_LightsCPDGraph_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_LightsCPDGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_ActiveLightsBitmask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_VariationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AlarmEquippedChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_bHasAlarm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_bAlarmActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AlarmStartEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStaticVehicle_Statics::NewProp_AlarmStopEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZStaticVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZStaticVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZStaticVehicle_Statics::ClassParams = {
		&ASBZStaticVehicle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZStaticVehicle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticVehicle_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZStaticVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZStaticVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZStaticVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZStaticVehicle, 2048321719);
	template<> STARBREEZE_API UClass* StaticClass<ASBZStaticVehicle>()
	{
		return ASBZStaticVehicle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZStaticVehicle(Z_Construct_UClass_ASBZStaticVehicle, &ASBZStaticVehicle::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZStaticVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZStaticVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
