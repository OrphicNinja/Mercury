// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAmbientSoundRadioComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAmbientSoundRadioComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmbientSoundRadioComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmbientSoundRadioComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmbientSoundComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAmbientSoundRadioComponent::execPlayRadioSound)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayRadioSound(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAmbientSoundRadioComponent::execPlayRadioSoundRand)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayRadioSoundRand(Z_Param_bValue);
		P_NATIVE_END;
	}
	void USBZAmbientSoundRadioComponent::StaticRegisterNativesUSBZAmbientSoundRadioComponent()
	{
		UClass* Class = USBZAmbientSoundRadioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayRadioSound", &USBZAmbientSoundRadioComponent::execPlayRadioSound },
			{ "PlayRadioSoundRand", &USBZAmbientSoundRadioComponent::execPlayRadioSoundRand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSound_Statics
	{
		struct SBZAmbientSoundRadioComponent_eventPlayRadioSound_Parms
		{
			bool bValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSound_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SBZAmbientSoundRadioComponent_eventPlayRadioSound_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSound_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAmbientSoundRadioComponent_eventPlayRadioSound_Parms), &Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSound_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSound_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAmbientSoundRadioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAmbientSoundRadioComponent, nullptr, "PlayRadioSound", nullptr, nullptr, sizeof(SBZAmbientSoundRadioComponent_eventPlayRadioSound_Parms), Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSoundRand_Statics
	{
		struct SBZAmbientSoundRadioComponent_eventPlayRadioSoundRand_Parms
		{
			bool bValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSoundRand_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SBZAmbientSoundRadioComponent_eventPlayRadioSoundRand_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSoundRand_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAmbientSoundRadioComponent_eventPlayRadioSoundRand_Parms), &Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSoundRand_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSoundRand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSoundRand_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSoundRand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAmbientSoundRadioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSoundRand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAmbientSoundRadioComponent, nullptr, "PlayRadioSoundRand", nullptr, nullptr, sizeof(SBZAmbientSoundRadioComponent_eventPlayRadioSoundRand_Parms), Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSoundRand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSoundRand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSoundRand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSoundRand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSoundRand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSoundRand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAmbientSoundRadioComponent_NoRegister()
	{
		return USBZAmbientSoundRadioComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadioSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioStopSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadioStopSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioPlayingChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RadioPlayingChance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAmbientSoundComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSound, "PlayRadioSound" }, // 745270213
		{ &Z_Construct_UFunction_USBZAmbientSoundRadioComponent_PlayRadioSoundRand, "PlayRadioSoundRand" }, // 3688219879
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SBZAmbientSoundRadioComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundRadioComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::NewProp_RadioSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSoundRadioComponent" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundRadioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::NewProp_RadioSoundEvent = { "RadioSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAmbientSoundRadioComponent, RadioSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::NewProp_RadioSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::NewProp_RadioSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::NewProp_RadioStopSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSoundRadioComponent" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundRadioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::NewProp_RadioStopSoundEvent = { "RadioStopSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAmbientSoundRadioComponent, RadioStopSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::NewProp_RadioStopSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::NewProp_RadioStopSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::NewProp_RadioPlayingChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSoundRadioComponent" },
		{ "ModuleRelativePath", "Public/SBZAmbientSoundRadioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::NewProp_RadioPlayingChance = { "RadioPlayingChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAmbientSoundRadioComponent, RadioPlayingChance), METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::NewProp_RadioPlayingChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::NewProp_RadioPlayingChance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::NewProp_RadioSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::NewProp_RadioStopSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::NewProp_RadioPlayingChance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAmbientSoundRadioComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::ClassParams = {
		&USBZAmbientSoundRadioComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAmbientSoundRadioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAmbientSoundRadioComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAmbientSoundRadioComponent, 3844769823);
	template<> STARBREEZE_API UClass* StaticClass<USBZAmbientSoundRadioComponent>()
	{
		return USBZAmbientSoundRadioComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAmbientSoundRadioComponent(Z_Construct_UClass_USBZAmbientSoundRadioComponent, &USBZAmbientSoundRadioComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAmbientSoundRadioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAmbientSoundRadioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
