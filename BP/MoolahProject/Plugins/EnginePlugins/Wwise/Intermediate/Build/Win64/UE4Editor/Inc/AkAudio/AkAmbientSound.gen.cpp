// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAmbientSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAmbientSound() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAmbientSound_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAmbientSound();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAkAmbientSound::execStartAmbientSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAmbientSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAkAmbientSound::execStopAmbientSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAmbientSound();
		P_NATIVE_END;
	}
	void AAkAmbientSound::StaticRegisterNativesAAkAmbientSound()
	{
		UClass* Class = AAkAmbientSound::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartAmbientSound", &AAkAmbientSound::execStartAmbientSound },
			{ "StopAmbientSound", &AAkAmbientSound::execStopAmbientSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAmbientSound.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAmbientSound, nullptr, "StartAmbientSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAmbientSound.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAmbientSound, nullptr, "StopAmbientSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAkAmbientSound_NoRegister()
	{
		return AAkAmbientSound::StaticClass();
	}
	struct Z_Construct_UClass_AAkAmbientSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopWhenOwnerIsDestroyed_MetaData[];
#endif
		static void NewProp_StopWhenOwnerIsDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopWhenOwnerIsDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoPost_MetaData[];
#endif
		static void NewProp_AutoPost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoPost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAkAmbientSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAkAmbientSound_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound, "StartAmbientSound" }, // 79390499
		{ &Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound, "StopAmbientSound" }, // 3881529410
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAmbientSound_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAmbientSound.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAmbientSound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAmbientSound" },
		{ "ModuleRelativePath", "Public/AkAmbientSound.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent = { "AkAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkAmbientSound, AkAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAmbientSound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AkAmbientSound.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkAmbientSound, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAmbientSound" },
		{ "ModuleRelativePath", "Public/AkAmbientSound.h" },
	};
#endif
	void Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_SetBit(void* Obj)
	{
		((AAkAmbientSound*)Obj)->StopWhenOwnerIsDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed = { "StopWhenOwnerIsDestroyed", nullptr, (EPropertyFlags)0x0010020000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAkAmbientSound), &Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAmbientSound" },
		{ "ModuleRelativePath", "Public/AkAmbientSound.h" },
	};
#endif
	void Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_SetBit(void* Obj)
	{
		((AAkAmbientSound*)Obj)->AutoPost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost = { "AutoPost", nullptr, (EPropertyFlags)0x0010020000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAkAmbientSound), &Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkAmbientSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAkAmbientSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkAmbientSound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAkAmbientSound_Statics::ClassParams = {
		&AAkAmbientSound::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAkAmbientSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAkAmbientSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAkAmbientSound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAkAmbientSound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAkAmbientSound, 494266577);
	template<> AKAUDIO_API UClass* StaticClass<AAkAmbientSound>()
	{
		return AAkAmbientSound::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkAmbientSound(Z_Construct_UClass_AAkAmbientSound, &AAkAmbientSound::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkAmbientSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkAmbientSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
