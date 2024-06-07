// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UniversalVoiceChatPro/Public/AudioCaptureAndroid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCaptureAndroid() {}
// Cross Module References
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_UAudioCaptureAndroid_NoRegister();
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_UAudioCaptureAndroid();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UniversalVoiceChatPro();
	UNIVERSALVOICECHATPRO_API UClass* Z_Construct_UClass_UMicrophoneSpeakComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAudioCaptureAndroid::execAndroidAskPermission)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioCaptureAndroid::AndroidAskPermission();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioCaptureAndroid::execAndroidHasPermission)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAudioCaptureAndroid::AndroidHasPermission();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioCaptureAndroid::execAndroidMicrophoneStart)
	{
		P_GET_OBJECT(UMicrophoneSpeakComponent,Z_Param_callbackComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_sampleRateToUse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAudioCaptureAndroid::AndroidMicrophoneStart(Z_Param_callbackComp,Z_Param_sampleRateToUse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioCaptureAndroid::execAndroidMicrophoneStop)
	{
		P_GET_OBJECT(UMicrophoneSpeakComponent,Z_Param_callbackComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAudioCaptureAndroid::AndroidMicrophoneStop(Z_Param_callbackComp);
		P_NATIVE_END;
	}
	void UAudioCaptureAndroid::StaticRegisterNativesUAudioCaptureAndroid()
	{
		UClass* Class = UAudioCaptureAndroid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AndroidAskPermission", &UAudioCaptureAndroid::execAndroidAskPermission },
			{ "AndroidHasPermission", &UAudioCaptureAndroid::execAndroidHasPermission },
			{ "AndroidMicrophoneStart", &UAudioCaptureAndroid::execAndroidMicrophoneStart },
			{ "AndroidMicrophoneStop", &UAudioCaptureAndroid::execAndroidMicrophoneStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioCaptureAndroid_AndroidAskPermission_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCaptureAndroid_AndroidAskPermission_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioCaptureAndroid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCaptureAndroid_AndroidAskPermission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCaptureAndroid, nullptr, "AndroidAskPermission", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioCaptureAndroid_AndroidAskPermission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureAndroid_AndroidAskPermission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioCaptureAndroid_AndroidAskPermission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioCaptureAndroid_AndroidAskPermission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioCaptureAndroid_AndroidHasPermission_Statics
	{
		struct AudioCaptureAndroid_eventAndroidHasPermission_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioCaptureAndroid_AndroidHasPermission_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioCaptureAndroid_eventAndroidHasPermission_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioCaptureAndroid_AndroidHasPermission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioCaptureAndroid_eventAndroidHasPermission_Parms), &Z_Construct_UFunction_UAudioCaptureAndroid_AndroidHasPermission_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioCaptureAndroid_AndroidHasPermission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCaptureAndroid_AndroidHasPermission_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCaptureAndroid_AndroidHasPermission_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioCaptureAndroid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCaptureAndroid_AndroidHasPermission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCaptureAndroid, nullptr, "AndroidHasPermission", nullptr, nullptr, sizeof(AudioCaptureAndroid_eventAndroidHasPermission_Parms), Z_Construct_UFunction_UAudioCaptureAndroid_AndroidHasPermission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureAndroid_AndroidHasPermission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioCaptureAndroid_AndroidHasPermission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureAndroid_AndroidHasPermission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioCaptureAndroid_AndroidHasPermission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioCaptureAndroid_AndroidHasPermission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics
	{
		struct AudioCaptureAndroid_eventAndroidMicrophoneStart_Parms
		{
			UMicrophoneSpeakComponent* callbackComp;
			int32 sampleRateToUse;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callbackComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_callbackComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleRateToUse;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::NewProp_callbackComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::NewProp_callbackComp = { "callbackComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioCaptureAndroid_eventAndroidMicrophoneStart_Parms, callbackComp), Z_Construct_UClass_UMicrophoneSpeakComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::NewProp_callbackComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::NewProp_callbackComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::NewProp_sampleRateToUse = { "sampleRateToUse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioCaptureAndroid_eventAndroidMicrophoneStart_Parms, sampleRateToUse), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioCaptureAndroid_eventAndroidMicrophoneStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioCaptureAndroid_eventAndroidMicrophoneStart_Parms), &Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::NewProp_callbackComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::NewProp_sampleRateToUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioCaptureAndroid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCaptureAndroid, nullptr, "AndroidMicrophoneStart", nullptr, nullptr, sizeof(AudioCaptureAndroid_eventAndroidMicrophoneStart_Parms), Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop_Statics
	{
		struct AudioCaptureAndroid_eventAndroidMicrophoneStop_Parms
		{
			UMicrophoneSpeakComponent* callbackComp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callbackComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_callbackComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop_Statics::NewProp_callbackComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop_Statics::NewProp_callbackComp = { "callbackComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioCaptureAndroid_eventAndroidMicrophoneStop_Parms, callbackComp), Z_Construct_UClass_UMicrophoneSpeakComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop_Statics::NewProp_callbackComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop_Statics::NewProp_callbackComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop_Statics::NewProp_callbackComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioCaptureAndroid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCaptureAndroid, nullptr, "AndroidMicrophoneStop", nullptr, nullptr, sizeof(AudioCaptureAndroid_eventAndroidMicrophoneStop_Parms), Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAudioCaptureAndroid_NoRegister()
	{
		return UAudioCaptureAndroid::StaticClass();
	}
	struct Z_Construct_UClass_UAudioCaptureAndroid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioCaptureAndroid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalVoiceChatPro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioCaptureAndroid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioCaptureAndroid_AndroidAskPermission, "AndroidAskPermission" }, // 3688081236
		{ &Z_Construct_UFunction_UAudioCaptureAndroid_AndroidHasPermission, "AndroidHasPermission" }, // 4238588906
		{ &Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStart, "AndroidMicrophoneStart" }, // 4261485160
		{ &Z_Construct_UFunction_UAudioCaptureAndroid_AndroidMicrophoneStop, "AndroidMicrophoneStop" }, // 1594496610
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCaptureAndroid_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AudioCaptureAndroid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AudioCaptureAndroid.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioCaptureAndroid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioCaptureAndroid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioCaptureAndroid_Statics::ClassParams = {
		&UAudioCaptureAndroid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioCaptureAndroid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureAndroid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioCaptureAndroid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioCaptureAndroid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioCaptureAndroid, 4114964983);
	template<> UNIVERSALVOICECHATPRO_API UClass* StaticClass<UAudioCaptureAndroid>()
	{
		return UAudioCaptureAndroid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioCaptureAndroid(Z_Construct_UClass_UAudioCaptureAndroid, &UAudioCaptureAndroid::StaticClass, TEXT("/Script/UniversalVoiceChatPro"), TEXT("UAudioCaptureAndroid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioCaptureAndroid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
