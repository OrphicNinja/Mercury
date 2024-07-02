// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAudioInputComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioInputComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioInputComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioInputComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkAudioInputComponent::execPostAssociatedAudioInputEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PostAssociatedAudioInputEvent();
		P_NATIVE_END;
	}
	void UAkAudioInputComponent::StaticRegisterNativesUAkAudioInputComponent()
	{
		UClass* Class = UAkAudioInputComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostAssociatedAudioInputEvent", &UAkAudioInputComponent::execPostAssociatedAudioInputEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics
	{
		struct AkAudioInputComponent_eventPostAssociatedAudioInputEvent_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkAudioInputComponent_eventPostAssociatedAudioInputEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAudioInputComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioInputComponent, nullptr, "PostAssociatedAudioInputEvent", nullptr, nullptr, sizeof(AkAudioInputComponent_eventPostAssociatedAudioInputEvent_Parms), Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkAudioInputComponent_NoRegister()
	{
		return UAkAudioInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkAudioInputComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent, "PostAssociatedAudioInputEvent" }, // 3751548694
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioInputComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkAudioInputComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAudioInputComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioInputComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioInputComponent_Statics::ClassParams = {
		&UAkAudioInputComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioInputComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAudioInputComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAudioInputComponent, 3218279127);
	template<> AKAUDIO_API UClass* StaticClass<UAkAudioInputComponent>()
	{
		return UAkAudioInputComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAudioInputComponent(Z_Construct_UClass_UAkAudioInputComponent, &UAkAudioInputComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAudioInputComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioInputComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
