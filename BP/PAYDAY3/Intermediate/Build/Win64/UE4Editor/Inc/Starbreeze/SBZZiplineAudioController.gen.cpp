// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZZiplineAudioController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZZiplineAudioController() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZZiplineAudioController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZZiplineAudioController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZZiplineAudioController::execSetZiplineRtpcPerspective)
	{
		P_GET_UBOOL(Z_Param_bLocalPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetZiplineRtpcPerspective(Z_Param_bLocalPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZZiplineAudioController::execStartZiplineAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartZiplineAudio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZZiplineAudioController::execStopZiplineAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopZiplineAudio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZZiplineAudioController::execUpdateZiplineRtpc)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ZiplineVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateZiplineRtpc(Z_Param_ZiplineVelocity);
		P_NATIVE_END;
	}
	void USBZZiplineAudioController::StaticRegisterNativesUSBZZiplineAudioController()
	{
		UClass* Class = USBZZiplineAudioController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetZiplineRtpcPerspective", &USBZZiplineAudioController::execSetZiplineRtpcPerspective },
			{ "StartZiplineAudio", &USBZZiplineAudioController::execStartZiplineAudio },
			{ "StopZiplineAudio", &USBZZiplineAudioController::execStopZiplineAudio },
			{ "UpdateZiplineRtpc", &USBZZiplineAudioController::execUpdateZiplineRtpc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZZiplineAudioController_SetZiplineRtpcPerspective_Statics
	{
		struct SBZZiplineAudioController_eventSetZiplineRtpcPerspective_Parms
		{
			bool bLocalPlayer;
		};
		static void NewProp_bLocalPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocalPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZZiplineAudioController_SetZiplineRtpcPerspective_Statics::NewProp_bLocalPlayer_SetBit(void* Obj)
	{
		((SBZZiplineAudioController_eventSetZiplineRtpcPerspective_Parms*)Obj)->bLocalPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZZiplineAudioController_SetZiplineRtpcPerspective_Statics::NewProp_bLocalPlayer = { "bLocalPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZZiplineAudioController_eventSetZiplineRtpcPerspective_Parms), &Z_Construct_UFunction_USBZZiplineAudioController_SetZiplineRtpcPerspective_Statics::NewProp_bLocalPlayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZZiplineAudioController_SetZiplineRtpcPerspective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZZiplineAudioController_SetZiplineRtpcPerspective_Statics::NewProp_bLocalPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZZiplineAudioController_SetZiplineRtpcPerspective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZZiplineAudioController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZZiplineAudioController_SetZiplineRtpcPerspective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZZiplineAudioController, nullptr, "SetZiplineRtpcPerspective", nullptr, nullptr, sizeof(SBZZiplineAudioController_eventSetZiplineRtpcPerspective_Parms), Z_Construct_UFunction_USBZZiplineAudioController_SetZiplineRtpcPerspective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZZiplineAudioController_SetZiplineRtpcPerspective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZZiplineAudioController_SetZiplineRtpcPerspective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZZiplineAudioController_SetZiplineRtpcPerspective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZZiplineAudioController_SetZiplineRtpcPerspective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZZiplineAudioController_SetZiplineRtpcPerspective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZZiplineAudioController_StartZiplineAudio_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZZiplineAudioController_StartZiplineAudio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZZiplineAudioController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZZiplineAudioController_StartZiplineAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZZiplineAudioController, nullptr, "StartZiplineAudio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZZiplineAudioController_StartZiplineAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZZiplineAudioController_StartZiplineAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZZiplineAudioController_StartZiplineAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZZiplineAudioController_StartZiplineAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZZiplineAudioController_StopZiplineAudio_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZZiplineAudioController_StopZiplineAudio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZZiplineAudioController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZZiplineAudioController_StopZiplineAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZZiplineAudioController, nullptr, "StopZiplineAudio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZZiplineAudioController_StopZiplineAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZZiplineAudioController_StopZiplineAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZZiplineAudioController_StopZiplineAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZZiplineAudioController_StopZiplineAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZZiplineAudioController_UpdateZiplineRtpc_Statics
	{
		struct SBZZiplineAudioController_eventUpdateZiplineRtpc_Parms
		{
			float ZiplineVelocity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZiplineVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZZiplineAudioController_UpdateZiplineRtpc_Statics::NewProp_ZiplineVelocity = { "ZiplineVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZZiplineAudioController_eventUpdateZiplineRtpc_Parms, ZiplineVelocity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZZiplineAudioController_UpdateZiplineRtpc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZZiplineAudioController_UpdateZiplineRtpc_Statics::NewProp_ZiplineVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZZiplineAudioController_UpdateZiplineRtpc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZZiplineAudioController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZZiplineAudioController_UpdateZiplineRtpc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZZiplineAudioController, nullptr, "UpdateZiplineRtpc", nullptr, nullptr, sizeof(SBZZiplineAudioController_eventUpdateZiplineRtpc_Parms), Z_Construct_UFunction_USBZZiplineAudioController_UpdateZiplineRtpc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZZiplineAudioController_UpdateZiplineRtpc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZZiplineAudioController_UpdateZiplineRtpc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZZiplineAudioController_UpdateZiplineRtpc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZZiplineAudioController_UpdateZiplineRtpc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZZiplineAudioController_UpdateZiplineRtpc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZZiplineAudioController_NoRegister()
	{
		return USBZZiplineAudioController::StaticClass();
	}
	struct Z_Construct_UClass_USBZZiplineAudioController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineStartAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZiplineStartAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineStopAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZiplineStopAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineVelocityRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZiplineVelocityRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterPerspectiveRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterPerspectiveRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bZiplineActive_MetaData[];
#endif
		static void NewProp_bZiplineActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bZiplineActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineSoundMultiplicationValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZiplineSoundMultiplicationValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZZiplineAudioController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZZiplineAudioController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZZiplineAudioController_SetZiplineRtpcPerspective, "SetZiplineRtpcPerspective" }, // 714295277
		{ &Z_Construct_UFunction_USBZZiplineAudioController_StartZiplineAudio, "StartZiplineAudio" }, // 3391411266
		{ &Z_Construct_UFunction_USBZZiplineAudioController_StopZiplineAudio, "StopZiplineAudio" }, // 1191235191
		{ &Z_Construct_UFunction_USBZZiplineAudioController_UpdateZiplineRtpc, "UpdateZiplineRtpc" }, // 3118280301
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZZiplineAudioController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZZiplineAudioController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZZiplineAudioController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineStartAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZiplineAudioController" },
		{ "ModuleRelativePath", "Public/SBZZiplineAudioController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineStartAudioEvent = { "ZiplineStartAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZZiplineAudioController, ZiplineStartAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineStartAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineStartAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineStopAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZiplineAudioController" },
		{ "ModuleRelativePath", "Public/SBZZiplineAudioController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineStopAudioEvent = { "ZiplineStopAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZZiplineAudioController, ZiplineStopAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineStopAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineStopAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineVelocityRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZiplineAudioController" },
		{ "ModuleRelativePath", "Public/SBZZiplineAudioController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineVelocityRtpc = { "ZiplineVelocityRtpc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZZiplineAudioController, ZiplineVelocityRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineVelocityRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineVelocityRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_CharacterPerspectiveRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZiplineAudioController" },
		{ "ModuleRelativePath", "Public/SBZZiplineAudioController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_CharacterPerspectiveRtpc = { "CharacterPerspectiveRtpc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZZiplineAudioController, CharacterPerspectiveRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_CharacterPerspectiveRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_CharacterPerspectiveRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_bZiplineActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZiplineAudioController" },
		{ "ModuleRelativePath", "Public/SBZZiplineAudioController.h" },
	};
#endif
	void Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_bZiplineActive_SetBit(void* Obj)
	{
		((USBZZiplineAudioController*)Obj)->bZiplineActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_bZiplineActive = { "bZiplineActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZZiplineAudioController), &Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_bZiplineActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_bZiplineActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_bZiplineActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZiplineAudioController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZZiplineAudioController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZZiplineAudioController, AudioComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineSoundMultiplicationValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZiplineAudioController" },
		{ "ModuleRelativePath", "Public/SBZZiplineAudioController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineSoundMultiplicationValue = { "ZiplineSoundMultiplicationValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZZiplineAudioController, ZiplineSoundMultiplicationValue), METADATA_PARAMS(Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineSoundMultiplicationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineSoundMultiplicationValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZZiplineAudioController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineStartAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineStopAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineVelocityRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_CharacterPerspectiveRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_bZiplineActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZZiplineAudioController_Statics::NewProp_ZiplineSoundMultiplicationValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZZiplineAudioController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZZiplineAudioController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZZiplineAudioController_Statics::ClassParams = {
		&USBZZiplineAudioController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZZiplineAudioController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineAudioController_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZZiplineAudioController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineAudioController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZZiplineAudioController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZZiplineAudioController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZZiplineAudioController, 2856072111);
	template<> STARBREEZE_API UClass* StaticClass<USBZZiplineAudioController>()
	{
		return USBZZiplineAudioController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZZiplineAudioController(Z_Construct_UClass_USBZZiplineAudioController, &USBZZiplineAudioController::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZZiplineAudioController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZZiplineAudioController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
