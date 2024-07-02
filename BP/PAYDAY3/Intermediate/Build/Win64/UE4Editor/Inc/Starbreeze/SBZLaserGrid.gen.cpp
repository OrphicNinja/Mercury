// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLaserGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLaserGrid() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLaserGrid_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLaserGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnLaserGridTriggered__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLaser_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLaserPointConnection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLaserPattern();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmbientSoundComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZLaserGrid::execBlockingActorEntered)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlockingActorEntered(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLaserGrid::execMulticast_NextPattern)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_NextPattern_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLaserGrid::execMulticast_SetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetEnabled_Implementation(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLaserGrid::execNextPattern)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextPattern();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLaserGrid::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLaserGrid::execOnRep_CurrentPatternIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentPatternIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLaserGrid::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLaserGrid::execStartCyclingPatterns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCyclingPatterns();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZLaserGrid::execStopCyclingPatterns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCyclingPatterns();
		P_NATIVE_END;
	}
	static FName NAME_ASBZLaserGrid_Multicast_NextPattern = FName(TEXT("Multicast_NextPattern"));
	void ASBZLaserGrid::Multicast_NextPattern()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZLaserGrid_Multicast_NextPattern),NULL);
	}
	static FName NAME_ASBZLaserGrid_Multicast_SetEnabled = FName(TEXT("Multicast_SetEnabled"));
	void ASBZLaserGrid::Multicast_SetEnabled(bool bEnabled)
	{
		SBZLaserGrid_eventMulticast_SetEnabled_Parms Parms;
		Parms.bEnabled=bEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLaserGrid_Multicast_SetEnabled),&Parms);
	}
	void ASBZLaserGrid::StaticRegisterNativesASBZLaserGrid()
	{
		UClass* Class = ASBZLaserGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlockingActorEntered", &ASBZLaserGrid::execBlockingActorEntered },
			{ "Multicast_NextPattern", &ASBZLaserGrid::execMulticast_NextPattern },
			{ "Multicast_SetEnabled", &ASBZLaserGrid::execMulticast_SetEnabled },
			{ "NextPattern", &ASBZLaserGrid::execNextPattern },
			{ "OnHeistStateChanged", &ASBZLaserGrid::execOnHeistStateChanged },
			{ "OnRep_CurrentPatternIndex", &ASBZLaserGrid::execOnRep_CurrentPatternIndex },
			{ "SetEnabled", &ASBZLaserGrid::execSetEnabled },
			{ "StartCyclingPatterns", &ASBZLaserGrid::execStartCyclingPatterns },
			{ "StopCyclingPatterns", &ASBZLaserGrid::execStopCyclingPatterns },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics
	{
		struct SBZLaserGrid_eventBlockingActorEntered_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLaserGrid_eventBlockingActorEntered_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLaserGrid_eventBlockingActorEntered_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLaserGrid_eventBlockingActorEntered_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLaserGrid_eventBlockingActorEntered_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZLaserGrid_eventBlockingActorEntered_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLaserGrid_eventBlockingActorEntered_Parms), &Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLaserGrid_eventBlockingActorEntered_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLaserGrid, nullptr, "BlockingActorEntered", nullptr, nullptr, sizeof(SBZLaserGrid_eventBlockingActorEntered_Parms), Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLaserGrid_Multicast_NextPattern_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLaserGrid_Multicast_NextPattern_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLaserGrid_Multicast_NextPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLaserGrid, nullptr, "Multicast_NextPattern", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLaserGrid_Multicast_NextPattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_Multicast_NextPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLaserGrid_Multicast_NextPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLaserGrid_Multicast_NextPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLaserGrid_Multicast_SetEnabled_Statics
	{
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZLaserGrid_Multicast_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZLaserGrid_eventMulticast_SetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLaserGrid_Multicast_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLaserGrid_eventMulticast_SetEnabled_Parms), &Z_Construct_UFunction_ASBZLaserGrid_Multicast_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLaserGrid_Multicast_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLaserGrid_Multicast_SetEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLaserGrid_Multicast_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLaserGrid_Multicast_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLaserGrid, nullptr, "Multicast_SetEnabled", nullptr, nullptr, sizeof(SBZLaserGrid_eventMulticast_SetEnabled_Parms), Z_Construct_UFunction_ASBZLaserGrid_Multicast_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_Multicast_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLaserGrid_Multicast_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_Multicast_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLaserGrid_Multicast_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLaserGrid_Multicast_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLaserGrid_NextPattern_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLaserGrid_NextPattern_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLaserGrid_NextPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLaserGrid, nullptr, "NextPattern", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLaserGrid_NextPattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_NextPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLaserGrid_NextPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLaserGrid_NextPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics
	{
		struct SBZLaserGrid_eventOnHeistStateChanged_Parms
		{
			EPD3HeistState OldState;
			EPD3HeistState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLaserGrid_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLaserGrid_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLaserGrid, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(SBZLaserGrid_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLaserGrid_OnRep_CurrentPatternIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLaserGrid_OnRep_CurrentPatternIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLaserGrid_OnRep_CurrentPatternIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLaserGrid, nullptr, "OnRep_CurrentPatternIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLaserGrid_OnRep_CurrentPatternIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_OnRep_CurrentPatternIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLaserGrid_OnRep_CurrentPatternIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLaserGrid_OnRep_CurrentPatternIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLaserGrid_SetEnabled_Statics
	{
		struct SBZLaserGrid_eventSetEnabled_Parms
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
	void Z_Construct_UFunction_ASBZLaserGrid_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZLaserGrid_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZLaserGrid_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLaserGrid_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZLaserGrid_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLaserGrid_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLaserGrid_SetEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLaserGrid_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLaserGrid_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLaserGrid, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZLaserGrid_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZLaserGrid_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLaserGrid_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLaserGrid_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLaserGrid_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLaserGrid_StartCyclingPatterns_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLaserGrid_StartCyclingPatterns_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLaserGrid_StartCyclingPatterns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLaserGrid, nullptr, "StartCyclingPatterns", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLaserGrid_StartCyclingPatterns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_StartCyclingPatterns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLaserGrid_StartCyclingPatterns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLaserGrid_StartCyclingPatterns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZLaserGrid_StopCyclingPatterns_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLaserGrid_StopCyclingPatterns_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLaserGrid_StopCyclingPatterns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLaserGrid, nullptr, "StopCyclingPatterns", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLaserGrid_StopCyclingPatterns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLaserGrid_StopCyclingPatterns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLaserGrid_StopCyclingPatterns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLaserGrid_StopCyclingPatterns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZLaserGrid_NoRegister()
	{
		return ASBZLaserGrid::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLaserGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLaserGridTriggered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLaserGridTriggered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LaserComponentClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaserConnectionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserConnectionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LaserConnectionArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitBoxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitBoxSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldDisableOnAlarm_MetaData[];
#endif
		static void NewProp_bShouldDisableOnAlarm_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDisableOnAlarm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldUsePatterns_MetaData[];
#endif
		static void NewProp_bShouldUsePatterns_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldUsePatterns;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaserPatterns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserPatterns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LaserPatterns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatternCyclingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PatternCyclingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserShutdownAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserShutdownAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLaserArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedLaserArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLaserArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedLaserArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBoxArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedBoxArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBoxArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedBoxArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedAmbientSoundArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedAmbientSoundArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedAmbientSoundArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedAmbientSoundArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPatternIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentPatternIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLaserGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZLaserGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZLaserGrid_BlockingActorEntered, "BlockingActorEntered" }, // 901046416
		{ &Z_Construct_UFunction_ASBZLaserGrid_Multicast_NextPattern, "Multicast_NextPattern" }, // 3838812884
		{ &Z_Construct_UFunction_ASBZLaserGrid_Multicast_SetEnabled, "Multicast_SetEnabled" }, // 716144462
		{ &Z_Construct_UFunction_ASBZLaserGrid_NextPattern, "NextPattern" }, // 2188567410
		{ &Z_Construct_UFunction_ASBZLaserGrid_OnHeistStateChanged, "OnHeistStateChanged" }, // 3616172105
		{ &Z_Construct_UFunction_ASBZLaserGrid_OnRep_CurrentPatternIndex, "OnRep_CurrentPatternIndex" }, // 65860434
		{ &Z_Construct_UFunction_ASBZLaserGrid_SetEnabled, "SetEnabled" }, // 1422183332
		{ &Z_Construct_UFunction_ASBZLaserGrid_StartCyclingPatterns, "StartCyclingPatterns" }, // 952458322
		{ &Z_Construct_UFunction_ASBZLaserGrid_StopCyclingPatterns, "StopCyclingPatterns" }, // 1050118248
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLaserGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_OnLaserGridTriggered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_OnLaserGridTriggered = { "OnLaserGridTriggered", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLaserGrid, OnLaserGridTriggered), Z_Construct_UDelegateFunction_Starbreeze_SBZOnLaserGridTriggered__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_OnLaserGridTriggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_OnLaserGridTriggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserComponentClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserComponentClass = { "LaserComponentClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLaserGrid, LaserComponentClass), Z_Construct_UClass_USBZLaser_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserComponentClass_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserConnectionArray_Inner = { "LaserConnectionArray", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLaserPointConnection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserConnectionArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserConnectionArray = { "LaserConnectionArray", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLaserGrid, LaserConnectionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserConnectionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserConnectionArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_HitBoxSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_HitBoxSize = { "HitBoxSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLaserGrid, HitBoxSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_HitBoxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_HitBoxSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bShouldDisableOnAlarm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	void Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bShouldDisableOnAlarm_SetBit(void* Obj)
	{
		((ASBZLaserGrid*)Obj)->bShouldDisableOnAlarm = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bShouldDisableOnAlarm = { "bShouldDisableOnAlarm", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZLaserGrid), &Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bShouldDisableOnAlarm_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bShouldDisableOnAlarm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bShouldDisableOnAlarm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bShouldUsePatterns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	void Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bShouldUsePatterns_SetBit(void* Obj)
	{
		((ASBZLaserGrid*)Obj)->bShouldUsePatterns = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bShouldUsePatterns = { "bShouldUsePatterns", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZLaserGrid), &Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bShouldUsePatterns_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bShouldUsePatterns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bShouldUsePatterns_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserPatterns_Inner = { "LaserPatterns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLaserPattern, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserPatterns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserPatterns = { "LaserPatterns", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLaserGrid, LaserPatterns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserPatterns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserPatterns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_PatternCyclingTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_PatternCyclingTime = { "PatternCyclingTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLaserGrid, PatternCyclingTime), METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_PatternCyclingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_PatternCyclingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserAudioEvent = { "LaserAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLaserGrid, LaserAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserShutdownAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserShutdownAudioEvent = { "LaserShutdownAudioEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLaserGrid, LaserShutdownAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserShutdownAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserShutdownAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedLaserArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedLaserArray_Inner = { "CachedLaserArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZLaser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedLaserArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedLaserArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedLaserArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedLaserArray = { "CachedLaserArray", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLaserGrid, CachedLaserArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedLaserArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedLaserArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedBoxArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedBoxArray_Inner = { "CachedBoxArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedBoxArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedBoxArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedBoxArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedBoxArray = { "CachedBoxArray", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLaserGrid, CachedBoxArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedBoxArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedBoxArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedAmbientSoundArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedAmbientSoundArray_Inner = { "CachedAmbientSoundArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAmbientSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedAmbientSoundArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedAmbientSoundArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedAmbientSoundArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedAmbientSoundArray = { "CachedAmbientSoundArray", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLaserGrid, CachedAmbientSoundArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedAmbientSoundArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedAmbientSoundArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CurrentPatternIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CurrentPatternIndex = { "CurrentPatternIndex", "OnRep_CurrentPatternIndex", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLaserGrid, CurrentPatternIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CurrentPatternIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CurrentPatternIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGrid" },
		{ "ModuleRelativePath", "Public/SBZLaserGrid.h" },
	};
#endif
	void Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((ASBZLaserGrid*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0040000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZLaserGrid), &Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bIsEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZLaserGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_OnLaserGridTriggered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserConnectionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserConnectionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_HitBoxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bShouldDisableOnAlarm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bShouldUsePatterns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserPatterns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserPatterns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_PatternCyclingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_LaserShutdownAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedLaserArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedLaserArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedBoxArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedBoxArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedAmbientSoundArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CachedAmbientSoundArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_CurrentPatternIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGrid_Statics::NewProp_bIsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLaserGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLaserGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLaserGrid_Statics::ClassParams = {
		&ASBZLaserGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZLaserGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLaserGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLaserGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLaserGrid, 4235982436);
	template<> STARBREEZE_API UClass* StaticClass<ASBZLaserGrid>()
	{
		return ASBZLaserGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLaserGrid(Z_Construct_UClass_ASBZLaserGrid, &ASBZLaserGrid::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZLaserGrid"), false, nullptr, nullptr, nullptr);

	void ASBZLaserGrid::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentPatternIndex(TEXT("CurrentPatternIndex"));
		static const FName Name_bIsEnabled(TEXT("bIsEnabled"));

		const bool bIsValid = true
			&& Name_CurrentPatternIndex == ClassReps[(int32)ENetFields_Private::CurrentPatternIndex].Property->GetFName()
			&& Name_bIsEnabled == ClassReps[(int32)ENetFields_Private::bIsEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZLaserGrid"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLaserGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
