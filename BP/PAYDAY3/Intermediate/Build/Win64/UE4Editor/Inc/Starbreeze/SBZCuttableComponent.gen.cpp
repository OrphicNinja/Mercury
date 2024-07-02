// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCuttableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCuttableComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCuttableState();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCuttableType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCutProgressData();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnCutCompleteServer__DelegateSignature();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCuttingMaterialTier();
// End Cross Module References
	DEFINE_FUNCTION(USBZCuttableComponent::execGetCuttableState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZCuttableState*)Z_Param__Result=P_THIS->GetCuttableState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCuttableComponent::execGetCuttableType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZCuttableType*)Z_Param__Result=P_THIS->GetCuttableType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCuttableComponent::execMulticast_CreateCut)
	{
		P_GET_STRUCT(FSBZCutProgressData,Z_Param_NewCutProgressData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_CreateCut_Implementation(Z_Param_NewCutProgressData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCuttableComponent::execMulticast_CreateInitialCut)
	{
		P_GET_STRUCT(FSBZCutProgressData,Z_Param_NewCutProgressData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_CreateInitialCut_Implementation(Z_Param_NewCutProgressData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCuttableComponent::execMulticast_CreateInitialCutAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InCutAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_CreateInitialCutAngle_Implementation(Z_Param_InCutAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCuttableComponent::execMulticast_CreateLineCut)
	{
		P_GET_STRUCT(FSBZCutProgressData,Z_Param_NewCutProgressData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_CreateLineCut_Implementation(Z_Param_NewCutProgressData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCuttableComponent::execMulticast_SetCuttableState)
	{
		P_GET_ENUM(ESBZCuttableState,Z_Param_NewCuttableState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetCuttableState_Implementation(ESBZCuttableState(Z_Param_NewCuttableState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCuttableComponent::execMulticast_SetCuttingBlocked)
	{
		P_GET_UBOOL(Z_Param_bInIsBlocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetCuttingBlocked_Implementation(Z_Param_bInIsBlocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCuttableComponent::execOnRep_CutProgressData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CutProgressData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCuttableComponent::execOnRep_CuttableState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CuttableState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCuttableComponent::execOnRep_InitialCutAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InitialCutAngle();
		P_NATIVE_END;
	}
	static FName NAME_USBZCuttableComponent_Multicast_CreateCut = FName(TEXT("Multicast_CreateCut"));
	void USBZCuttableComponent::Multicast_CreateCut(FSBZCutProgressData NewCutProgressData)
	{
		SBZCuttableComponent_eventMulticast_CreateCut_Parms Parms;
		Parms.NewCutProgressData=NewCutProgressData;
		ProcessEvent(FindFunctionChecked(NAME_USBZCuttableComponent_Multicast_CreateCut),&Parms);
	}
	static FName NAME_USBZCuttableComponent_Multicast_CreateInitialCut = FName(TEXT("Multicast_CreateInitialCut"));
	void USBZCuttableComponent::Multicast_CreateInitialCut(FSBZCutProgressData NewCutProgressData)
	{
		SBZCuttableComponent_eventMulticast_CreateInitialCut_Parms Parms;
		Parms.NewCutProgressData=NewCutProgressData;
		ProcessEvent(FindFunctionChecked(NAME_USBZCuttableComponent_Multicast_CreateInitialCut),&Parms);
	}
	static FName NAME_USBZCuttableComponent_Multicast_CreateInitialCutAngle = FName(TEXT("Multicast_CreateInitialCutAngle"));
	void USBZCuttableComponent::Multicast_CreateInitialCutAngle(float InCutAngle)
	{
		SBZCuttableComponent_eventMulticast_CreateInitialCutAngle_Parms Parms;
		Parms.InCutAngle=InCutAngle;
		ProcessEvent(FindFunctionChecked(NAME_USBZCuttableComponent_Multicast_CreateInitialCutAngle),&Parms);
	}
	static FName NAME_USBZCuttableComponent_Multicast_CreateLineCut = FName(TEXT("Multicast_CreateLineCut"));
	void USBZCuttableComponent::Multicast_CreateLineCut(FSBZCutProgressData NewCutProgressData)
	{
		SBZCuttableComponent_eventMulticast_CreateLineCut_Parms Parms;
		Parms.NewCutProgressData=NewCutProgressData;
		ProcessEvent(FindFunctionChecked(NAME_USBZCuttableComponent_Multicast_CreateLineCut),&Parms);
	}
	static FName NAME_USBZCuttableComponent_Multicast_SetCuttableState = FName(TEXT("Multicast_SetCuttableState"));
	void USBZCuttableComponent::Multicast_SetCuttableState(ESBZCuttableState NewCuttableState)
	{
		SBZCuttableComponent_eventMulticast_SetCuttableState_Parms Parms;
		Parms.NewCuttableState=NewCuttableState;
		ProcessEvent(FindFunctionChecked(NAME_USBZCuttableComponent_Multicast_SetCuttableState),&Parms);
	}
	static FName NAME_USBZCuttableComponent_Multicast_SetCuttingBlocked = FName(TEXT("Multicast_SetCuttingBlocked"));
	void USBZCuttableComponent::Multicast_SetCuttingBlocked(bool bInIsBlocked)
	{
		SBZCuttableComponent_eventMulticast_SetCuttingBlocked_Parms Parms;
		Parms.bInIsBlocked=bInIsBlocked ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZCuttableComponent_Multicast_SetCuttingBlocked),&Parms);
	}
	static FName NAME_USBZCuttableComponent_OnCutCompleted = FName(TEXT("OnCutCompleted"));
	void USBZCuttableComponent::OnCutCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZCuttableComponent_OnCutCompleted),NULL);
	}
	void USBZCuttableComponent::StaticRegisterNativesUSBZCuttableComponent()
	{
		UClass* Class = USBZCuttableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCuttableState", &USBZCuttableComponent::execGetCuttableState },
			{ "GetCuttableType", &USBZCuttableComponent::execGetCuttableType },
			{ "Multicast_CreateCut", &USBZCuttableComponent::execMulticast_CreateCut },
			{ "Multicast_CreateInitialCut", &USBZCuttableComponent::execMulticast_CreateInitialCut },
			{ "Multicast_CreateInitialCutAngle", &USBZCuttableComponent::execMulticast_CreateInitialCutAngle },
			{ "Multicast_CreateLineCut", &USBZCuttableComponent::execMulticast_CreateLineCut },
			{ "Multicast_SetCuttableState", &USBZCuttableComponent::execMulticast_SetCuttableState },
			{ "Multicast_SetCuttingBlocked", &USBZCuttableComponent::execMulticast_SetCuttingBlocked },
			{ "OnRep_CutProgressData", &USBZCuttableComponent::execOnRep_CutProgressData },
			{ "OnRep_CuttableState", &USBZCuttableComponent::execOnRep_CuttableState },
			{ "OnRep_InitialCutAngle", &USBZCuttableComponent::execOnRep_InitialCutAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCuttableComponent_GetCuttableState_Statics
	{
		struct SBZCuttableComponent_eventGetCuttableState_Parms
		{
			ESBZCuttableState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCuttableComponent_GetCuttableState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCuttableComponent_GetCuttableState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableComponent_eventGetCuttableState_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZCuttableState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableComponent_GetCuttableState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableComponent_GetCuttableState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableComponent_GetCuttableState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableComponent_GetCuttableState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableComponent_GetCuttableState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableComponent, nullptr, "GetCuttableState", nullptr, nullptr, sizeof(SBZCuttableComponent_eventGetCuttableState_Parms), Z_Construct_UFunction_USBZCuttableComponent_GetCuttableState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_GetCuttableState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableComponent_GetCuttableState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_GetCuttableState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableComponent_GetCuttableState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableComponent_GetCuttableState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableComponent_GetCuttableType_Statics
	{
		struct SBZCuttableComponent_eventGetCuttableType_Parms
		{
			ESBZCuttableType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCuttableComponent_GetCuttableType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCuttableComponent_GetCuttableType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableComponent_eventGetCuttableType_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZCuttableType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableComponent_GetCuttableType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableComponent_GetCuttableType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableComponent_GetCuttableType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableComponent_GetCuttableType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableComponent_GetCuttableType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableComponent, nullptr, "GetCuttableType", nullptr, nullptr, sizeof(SBZCuttableComponent_eventGetCuttableType_Parms), Z_Construct_UFunction_USBZCuttableComponent_GetCuttableType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_GetCuttableType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableComponent_GetCuttableType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_GetCuttableType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableComponent_GetCuttableType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableComponent_GetCuttableType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateCut_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCutProgressData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateCut_Statics::NewProp_NewCutProgressData = { "NewCutProgressData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableComponent_eventMulticast_CreateCut_Parms, NewCutProgressData), Z_Construct_UScriptStruct_FSBZCutProgressData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateCut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateCut_Statics::NewProp_NewCutProgressData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateCut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateCut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableComponent, nullptr, "Multicast_CreateCut", nullptr, nullptr, sizeof(SBZCuttableComponent_eventMulticast_CreateCut_Parms), Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateCut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateCut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateCut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateCut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateCut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateCut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCut_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCutProgressData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCut_Statics::NewProp_NewCutProgressData = { "NewCutProgressData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableComponent_eventMulticast_CreateInitialCut_Parms, NewCutProgressData), Z_Construct_UScriptStruct_FSBZCutProgressData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCut_Statics::NewProp_NewCutProgressData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableComponent, nullptr, "Multicast_CreateInitialCut", nullptr, nullptr, sizeof(SBZCuttableComponent_eventMulticast_CreateInitialCut_Parms), Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCutAngle_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InCutAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCutAngle_Statics::NewProp_InCutAngle = { "InCutAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableComponent_eventMulticast_CreateInitialCutAngle_Parms, InCutAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCutAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCutAngle_Statics::NewProp_InCutAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCutAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCutAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableComponent, nullptr, "Multicast_CreateInitialCutAngle", nullptr, nullptr, sizeof(SBZCuttableComponent_eventMulticast_CreateInitialCutAngle_Parms), Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCutAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCutAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCutAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCutAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCutAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCutAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateLineCut_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCutProgressData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateLineCut_Statics::NewProp_NewCutProgressData = { "NewCutProgressData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableComponent_eventMulticast_CreateLineCut_Parms, NewCutProgressData), Z_Construct_UScriptStruct_FSBZCutProgressData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateLineCut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateLineCut_Statics::NewProp_NewCutProgressData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateLineCut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateLineCut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableComponent, nullptr, "Multicast_CreateLineCut", nullptr, nullptr, sizeof(SBZCuttableComponent_eventMulticast_CreateLineCut_Parms), Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateLineCut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateLineCut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateLineCut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateLineCut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateLineCut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateLineCut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttableState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCuttableState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewCuttableState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttableState_Statics::NewProp_NewCuttableState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttableState_Statics::NewProp_NewCuttableState = { "NewCuttableState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableComponent_eventMulticast_SetCuttableState_Parms, NewCuttableState), Z_Construct_UEnum_Starbreeze_ESBZCuttableState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttableState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttableState_Statics::NewProp_NewCuttableState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttableState_Statics::NewProp_NewCuttableState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttableState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttableState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableComponent, nullptr, "Multicast_SetCuttableState", nullptr, nullptr, sizeof(SBZCuttableComponent_eventMulticast_SetCuttableState_Parms), Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttableState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttableState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttableState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttableState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttableState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttableState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttingBlocked_Statics
	{
		static void NewProp_bInIsBlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsBlocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttingBlocked_Statics::NewProp_bInIsBlocked_SetBit(void* Obj)
	{
		((SBZCuttableComponent_eventMulticast_SetCuttingBlocked_Parms*)Obj)->bInIsBlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttingBlocked_Statics::NewProp_bInIsBlocked = { "bInIsBlocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCuttableComponent_eventMulticast_SetCuttingBlocked_Parms), &Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttingBlocked_Statics::NewProp_bInIsBlocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttingBlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttingBlocked_Statics::NewProp_bInIsBlocked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttingBlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttingBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableComponent, nullptr, "Multicast_SetCuttingBlocked", nullptr, nullptr, sizeof(SBZCuttableComponent_eventMulticast_SetCuttingBlocked_Parms), Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttingBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttingBlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttingBlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttingBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttingBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttingBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableComponent_OnCutCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableComponent_OnCutCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableComponent_OnCutCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableComponent, nullptr, "OnCutCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableComponent_OnCutCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_OnCutCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableComponent_OnCutCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableComponent_OnCutCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableComponent_OnRep_CutProgressData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableComponent_OnRep_CutProgressData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableComponent_OnRep_CutProgressData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableComponent, nullptr, "OnRep_CutProgressData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableComponent_OnRep_CutProgressData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_OnRep_CutProgressData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableComponent_OnRep_CutProgressData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableComponent_OnRep_CutProgressData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableComponent_OnRep_CuttableState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableComponent_OnRep_CuttableState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableComponent_OnRep_CuttableState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableComponent, nullptr, "OnRep_CuttableState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableComponent_OnRep_CuttableState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_OnRep_CuttableState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableComponent_OnRep_CuttableState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableComponent_OnRep_CuttableState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableComponent_OnRep_InitialCutAngle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableComponent_OnRep_InitialCutAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableComponent_OnRep_InitialCutAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableComponent, nullptr, "OnRep_InitialCutAngle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableComponent_OnRep_InitialCutAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableComponent_OnRep_InitialCutAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableComponent_OnRep_InitialCutAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableComponent_OnRep_InitialCutAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCuttableComponent_NoRegister()
	{
		return USBZCuttableComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZCuttableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FuelCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FuelCost;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CuttableType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuttableType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CuttableType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CuttableState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuttableState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CuttableState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCutCompleteServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCutCompleteServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalCutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalCutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutProgressData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutProgressData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CuttableTier_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuttableTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CuttableTier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HotSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialCutAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialCutAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraEffectVisibilityTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NiagaraEffectVisibilityTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCuttingBlocked_MetaData[];
#endif
		static void NewProp_bIsCuttingBlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCuttingBlocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCuttableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCuttableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCuttableComponent_GetCuttableState, "GetCuttableState" }, // 2860173277
		{ &Z_Construct_UFunction_USBZCuttableComponent_GetCuttableType, "GetCuttableType" }, // 4000162679
		{ &Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateCut, "Multicast_CreateCut" }, // 2372296214
		{ &Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCut, "Multicast_CreateInitialCut" }, // 2523986338
		{ &Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateInitialCutAngle, "Multicast_CreateInitialCutAngle" }, // 4022348811
		{ &Z_Construct_UFunction_USBZCuttableComponent_Multicast_CreateLineCut, "Multicast_CreateLineCut" }, // 2434699223
		{ &Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttableState, "Multicast_SetCuttableState" }, // 1001443680
		{ &Z_Construct_UFunction_USBZCuttableComponent_Multicast_SetCuttingBlocked, "Multicast_SetCuttingBlocked" }, // 1629442896
		{ &Z_Construct_UFunction_USBZCuttableComponent_OnCutCompleted, "OnCutCompleted" }, // 676451546
		{ &Z_Construct_UFunction_USBZCuttableComponent_OnRep_CutProgressData, "OnRep_CutProgressData" }, // 1116280264
		{ &Z_Construct_UFunction_USBZCuttableComponent_OnRep_CuttableState, "OnRep_CuttableState" }, // 891958863
		{ &Z_Construct_UFunction_USBZCuttableComponent_OnRep_InitialCutAngle, "OnRep_InitialCutAngle" }, // 2002680019
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZCuttableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_FuelCost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_FuelCost = { "FuelCost", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableComponent, FuelCost), METADATA_PARAMS(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_FuelCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_FuelCost_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableType = { "CuttableType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableComponent, CuttableType), Z_Construct_UEnum_Starbreeze_ESBZCuttableType, METADATA_PARAMS(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableState = { "CuttableState", "OnRep_CuttableState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableComponent, CuttableState), Z_Construct_UEnum_Starbreeze_ESBZCuttableState, METADATA_PARAMS(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_OnCutCompleteServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_OnCutCompleteServer = { "OnCutCompleteServer", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableComponent, OnCutCompleteServer), Z_Construct_UDelegateFunction_Starbreeze_SBZOnCutCompleteServer__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_OnCutCompleteServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_OnCutCompleteServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_TotalCutTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_TotalCutTime = { "TotalCutTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableComponent, TotalCutTime), METADATA_PARAMS(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_TotalCutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_TotalCutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CutProgressData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CutProgressData = { "CutProgressData", "OnRep_CutProgressData", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableComponent, CutProgressData), Z_Construct_UScriptStruct_FSBZCutProgressData, METADATA_PARAMS(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CutProgressData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CutProgressData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableTier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableTier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableTier = { "CuttableTier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableComponent, CuttableTier), Z_Construct_UEnum_Starbreeze_ESBZCuttingMaterialTier, METADATA_PARAMS(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_HotSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_HotSpeed = { "HotSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableComponent, HotSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_HotSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_HotSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CoolSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CoolSpeed = { "CoolSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableComponent, CoolSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CoolSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CoolSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_InitialCutAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_InitialCutAngle = { "InitialCutAngle", "OnRep_InitialCutAngle", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableComponent, InitialCutAngle), METADATA_PARAMS(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_InitialCutAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_InitialCutAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_NiagaraEffectVisibilityTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_NiagaraEffectVisibilityTime = { "NiagaraEffectVisibilityTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCuttableComponent, NiagaraEffectVisibilityTime), METADATA_PARAMS(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_NiagaraEffectVisibilityTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_NiagaraEffectVisibilityTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_bIsCuttingBlocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCuttableComponent" },
		{ "ModuleRelativePath", "Public/SBZCuttableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_bIsCuttingBlocked_SetBit(void* Obj)
	{
		((USBZCuttableComponent*)Obj)->bIsCuttingBlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_bIsCuttingBlocked = { "bIsCuttingBlocked", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCuttableComponent), &Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_bIsCuttingBlocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_bIsCuttingBlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_bIsCuttingBlocked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCuttableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_FuelCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_OnCutCompleteServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_TotalCutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CutProgressData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableTier_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CuttableTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_HotSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_CoolSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_InitialCutAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_NiagaraEffectVisibilityTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCuttableComponent_Statics::NewProp_bIsCuttingBlocked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCuttableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCuttableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCuttableComponent_Statics::ClassParams = {
		&USBZCuttableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCuttableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCuttableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCuttableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCuttableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCuttableComponent, 1156611883);
	template<> STARBREEZE_API UClass* StaticClass<USBZCuttableComponent>()
	{
		return USBZCuttableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCuttableComponent(Z_Construct_UClass_USBZCuttableComponent, &USBZCuttableComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCuttableComponent"), false, nullptr, nullptr, nullptr);

	void USBZCuttableComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CuttableState(TEXT("CuttableState"));
		static const FName Name_CutProgressData(TEXT("CutProgressData"));
		static const FName Name_InitialCutAngle(TEXT("InitialCutAngle"));
		static const FName Name_bIsCuttingBlocked(TEXT("bIsCuttingBlocked"));

		const bool bIsValid = true
			&& Name_CuttableState == ClassReps[(int32)ENetFields_Private::CuttableState].Property->GetFName()
			&& Name_CutProgressData == ClassReps[(int32)ENetFields_Private::CutProgressData].Property->GetFName()
			&& Name_InitialCutAngle == ClassReps[(int32)ENetFields_Private::InitialCutAngle].Property->GetFName()
			&& Name_bIsCuttingBlocked == ClassReps[(int32)ENetFields_Private::bIsCuttingBlocked].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZCuttableComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCuttableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
