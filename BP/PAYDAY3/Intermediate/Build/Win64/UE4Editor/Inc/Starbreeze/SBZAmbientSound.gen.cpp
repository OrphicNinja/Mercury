// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAmbientSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAmbientSound() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAmbientSound_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAmbientSound();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmbientSoundComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAmbientSound::execHandleActivateSoundComponent)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_Component);
		P_GET_UBOOL(Z_Param_bReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleActivateSoundComponent(Z_Param_Component,Z_Param_bReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAmbientSound::execHandleDeactivateSoundComponent)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleDeactivateSoundComponent(Z_Param_Component);
		P_NATIVE_END;
	}
	void ASBZAmbientSound::StaticRegisterNativesASBZAmbientSound()
	{
		UClass* Class = ASBZAmbientSound::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleActivateSoundComponent", &ASBZAmbientSound::execHandleActivateSoundComponent },
			{ "HandleDeactivateSoundComponent", &ASBZAmbientSound::execHandleDeactivateSoundComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics
	{
		struct SBZAmbientSound_eventHandleActivateSoundComponent_Parms
		{
			UActorComponent* Component;
			bool bReset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_bReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAmbientSound_eventHandleActivateSoundComponent_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((SBZAmbientSound_eventHandleActivateSoundComponent_Parms*)Obj)->bReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAmbientSound_eventHandleActivateSoundComponent_Parms), &Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::NewProp_bReset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAmbientSound.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAmbientSound, nullptr, "HandleActivateSoundComponent", nullptr, nullptr, sizeof(SBZAmbientSound_eventHandleActivateSoundComponent_Parms), Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent_Statics
	{
		struct SBZAmbientSound_eventHandleDeactivateSoundComponent_Parms
		{
			UActorComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAmbientSound_eventHandleDeactivateSoundComponent_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAmbientSound.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAmbientSound, nullptr, "HandleDeactivateSoundComponent", nullptr, nullptr, sizeof(SBZAmbientSound_eventHandleDeactivateSoundComponent_Parms), Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAmbientSound_NoRegister()
	{
		return ASBZAmbientSound::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAmbientSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientSoundComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmbientSoundComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAmbientSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAmbientSound_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAmbientSound_HandleActivateSoundComponent, "HandleActivateSoundComponent" }, // 3223505452
		{ &Z_Construct_UFunction_ASBZAmbientSound_HandleDeactivateSoundComponent, "HandleDeactivateSoundComponent" }, // 286676872
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAmbientSound_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAmbientSound.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAmbientSound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAmbientSound_Statics::NewProp_AmbientSoundComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmbientSound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAmbientSound.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAmbientSound_Statics::NewProp_AmbientSoundComponent = { "AmbientSoundComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAmbientSound, AmbientSoundComponent), Z_Construct_UClass_USBZAmbientSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAmbientSound_Statics::NewProp_AmbientSoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAmbientSound_Statics::NewProp_AmbientSoundComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAmbientSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAmbientSound_Statics::NewProp_AmbientSoundComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAmbientSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAmbientSound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAmbientSound_Statics::ClassParams = {
		&ASBZAmbientSound::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAmbientSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAmbientSound_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAmbientSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAmbientSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAmbientSound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAmbientSound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAmbientSound, 3229786259);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAmbientSound>()
	{
		return ASBZAmbientSound::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAmbientSound(Z_Construct_UClass_ASBZAmbientSound, &ASBZAmbientSound::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAmbientSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAmbientSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
