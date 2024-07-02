// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSoundEnvironment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSoundEnvironment() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSoundEnvironment_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSoundEnvironment();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAkAcousticPortal_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSoundEnvironmentManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBrushComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZSoundEnvironment::execActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSoundEnvironment::execOnDebugLoggingPortal)
	{
		P_GET_OBJECT(ASBZAkAcousticPortal,Z_Param_TargetPortal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDebugLoggingPortal(Z_Param_TargetPortal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSoundEnvironment::execOnDebugLoggingPostEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AudioEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDebugLoggingPostEvent(Z_Param_AudioEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSoundEnvironment::execOnDebugLoggingSoundEnvironment)
	{
		P_GET_OBJECT(ASBZSoundEnvironment,Z_Param_TargetEnvironment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDebugLoggingSoundEnvironment(Z_Param_TargetEnvironment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSoundEnvironment::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ASBZSoundEnvironment::StaticRegisterNativesASBZSoundEnvironment()
	{
		UClass* Class = ASBZSoundEnvironment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &ASBZSoundEnvironment::execActivate },
			{ "OnDebugLoggingPortal", &ASBZSoundEnvironment::execOnDebugLoggingPortal },
			{ "OnDebugLoggingPostEvent", &ASBZSoundEnvironment::execOnDebugLoggingPostEvent },
			{ "OnDebugLoggingSoundEnvironment", &ASBZSoundEnvironment::execOnDebugLoggingSoundEnvironment },
			{ "OnOverlapBegin", &ASBZSoundEnvironment::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZSoundEnvironment_Activate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSoundEnvironment_Activate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSoundEnvironment_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSoundEnvironment, nullptr, "Activate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSoundEnvironment_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSoundEnvironment_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSoundEnvironment_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSoundEnvironment_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPortal_Statics
	{
		struct SBZSoundEnvironment_eventOnDebugLoggingPortal_Parms
		{
			ASBZAkAcousticPortal* TargetPortal;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPortal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPortal_Statics::NewProp_TargetPortal = { "TargetPortal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSoundEnvironment_eventOnDebugLoggingPortal_Parms, TargetPortal), Z_Construct_UClass_ASBZAkAcousticPortal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPortal_Statics::NewProp_TargetPortal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSoundEnvironment, nullptr, "OnDebugLoggingPortal", nullptr, nullptr, sizeof(SBZSoundEnvironment_eventOnDebugLoggingPortal_Parms), Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPortal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPostEvent_Statics
	{
		struct SBZSoundEnvironment_eventOnDebugLoggingPostEvent_Parms
		{
			UAkAudioEvent* AudioEvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPostEvent_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSoundEnvironment_eventOnDebugLoggingPostEvent_Parms, AudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPostEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPostEvent_Statics::NewProp_AudioEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPostEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPostEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSoundEnvironment, nullptr, "OnDebugLoggingPostEvent", nullptr, nullptr, sizeof(SBZSoundEnvironment_eventOnDebugLoggingPostEvent_Parms), Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPostEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPostEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPostEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPostEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPostEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPostEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingSoundEnvironment_Statics
	{
		struct SBZSoundEnvironment_eventOnDebugLoggingSoundEnvironment_Parms
		{
			ASBZSoundEnvironment* TargetEnvironment;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetEnvironment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingSoundEnvironment_Statics::NewProp_TargetEnvironment = { "TargetEnvironment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSoundEnvironment_eventOnDebugLoggingSoundEnvironment_Parms, TargetEnvironment), Z_Construct_UClass_ASBZSoundEnvironment_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingSoundEnvironment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingSoundEnvironment_Statics::NewProp_TargetEnvironment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingSoundEnvironment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingSoundEnvironment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSoundEnvironment, nullptr, "OnDebugLoggingSoundEnvironment", nullptr, nullptr, sizeof(SBZSoundEnvironment_eventOnDebugLoggingSoundEnvironment_Parms), Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingSoundEnvironment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingSoundEnvironment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingSoundEnvironment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingSoundEnvironment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingSoundEnvironment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingSoundEnvironment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics
	{
		struct SBZSoundEnvironment_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSoundEnvironment_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSoundEnvironment_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSoundEnvironment_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSoundEnvironment_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SBZSoundEnvironment_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSoundEnvironment_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSoundEnvironment_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSoundEnvironment, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(SBZSoundEnvironment_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSoundEnvironment_NoRegister()
	{
		return ASBZSoundEnvironment::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSoundEnvironment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateReverbComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LateReverbComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnterEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnterEvents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExitEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExitEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcousticState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AcousticState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EchoState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EchoState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnvironmentProximity_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentProximity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnvironmentProximity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundPortals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundPortals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundPortals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundEnvironmentManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundEnvironmentManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugEnabled_MetaData[];
#endif
		static void NewProp_bDebugEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushComponentPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrushComponentPointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSoundEnvironment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSoundEnvironment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSoundEnvironment_Activate, "Activate" }, // 3348660641
		{ &Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPortal, "OnDebugLoggingPortal" }, // 83919860
		{ &Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingPostEvent, "OnDebugLoggingPostEvent" }, // 1015908828
		{ &Z_Construct_UFunction_ASBZSoundEnvironment_OnDebugLoggingSoundEnvironment, "OnDebugLoggingSoundEnvironment" }, // 1461387947
		{ &Z_Construct_UFunction_ASBZSoundEnvironment_OnOverlapBegin, "OnOverlapBegin" }, // 3897621671
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSoundEnvironment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZSoundEnvironment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_LateReverbComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoundEnvironment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_LateReverbComponent = { "LateReverbComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSoundEnvironment, LateReverbComponent), Z_Construct_UClass_UAkLateReverbComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_LateReverbComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_LateReverbComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_RoomComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoundEnvironment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_RoomComponent = { "RoomComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSoundEnvironment, RoomComponent), Z_Construct_UClass_UAkRoomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_RoomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_RoomComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_AkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoundEnvironment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSoundEnvironment, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_AkComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EnterEvents_Inner = { "EnterEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EnterEvents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoundEnvironment" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EnterEvents = { "EnterEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSoundEnvironment, EnterEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EnterEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EnterEvents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_ExitEvents_Inner = { "ExitEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_ExitEvents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoundEnvironment" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_ExitEvents = { "ExitEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSoundEnvironment, ExitEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_ExitEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_ExitEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_AcousticState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoundEnvironment" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_AcousticState = { "AcousticState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSoundEnvironment, AcousticState), METADATA_PARAMS(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_AcousticState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_AcousticState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EchoState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoundEnvironment" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EchoState = { "EchoState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSoundEnvironment, EchoState), METADATA_PARAMS(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EchoState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EchoState_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EnvironmentProximity_Inner = { "EnvironmentProximity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSoundEnvironment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EnvironmentProximity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoundEnvironment" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EnvironmentProximity = { "EnvironmentProximity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSoundEnvironment, EnvironmentProximity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EnvironmentProximity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EnvironmentProximity_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_SoundPortals_Inner = { "SoundPortals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZAkAcousticPortal_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_SoundPortals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoundEnvironment" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_SoundPortals = { "SoundPortals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSoundEnvironment, SoundPortals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_SoundPortals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_SoundPortals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_SoundEnvironmentManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoundEnvironment" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_SoundEnvironmentManager = { "SoundEnvironmentManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSoundEnvironment, SoundEnvironmentManager), Z_Construct_UClass_USBZSoundEnvironmentManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_SoundEnvironmentManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_SoundEnvironmentManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_bDebugEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoundEnvironment" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_bDebugEnabled_SetBit(void* Obj)
	{
		((ASBZSoundEnvironment*)Obj)->bDebugEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_bDebugEnabled = { "bDebugEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSoundEnvironment), &Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_bDebugEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_bDebugEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_bDebugEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_DebugTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoundEnvironment" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_DebugTimer = { "DebugTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSoundEnvironment, DebugTimer), METADATA_PARAMS(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_DebugTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_DebugTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_BrushComponentPointer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSoundEnvironment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSoundEnvironment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_BrushComponentPointer = { "BrushComponentPointer", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSoundEnvironment, BrushComponentPointer), Z_Construct_UClass_UBrushComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_BrushComponentPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_BrushComponentPointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSoundEnvironment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_LateReverbComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_RoomComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_AkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EnterEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EnterEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_ExitEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_ExitEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_AcousticState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EchoState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EnvironmentProximity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_EnvironmentProximity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_SoundPortals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_SoundPortals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_SoundEnvironmentManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_bDebugEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_DebugTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSoundEnvironment_Statics::NewProp_BrushComponentPointer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSoundEnvironment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSoundEnvironment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSoundEnvironment_Statics::ClassParams = {
		&ASBZSoundEnvironment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZSoundEnvironment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSoundEnvironment_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSoundEnvironment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSoundEnvironment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSoundEnvironment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSoundEnvironment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSoundEnvironment, 2695906866);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSoundEnvironment>()
	{
		return ASBZSoundEnvironment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSoundEnvironment(Z_Construct_UClass_ASBZSoundEnvironment, &ASBZSoundEnvironment::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSoundEnvironment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSoundEnvironment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
