// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRandomNoiseComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRandomNoiseComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRandomNoiseComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRandomNoiseComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZRandomNoiseComponent::execMulticastForceSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastForceSound_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USBZRandomNoiseComponent_MulticastForceSound = FName(TEXT("MulticastForceSound"));
	void USBZRandomNoiseComponent::MulticastForceSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZRandomNoiseComponent_MulticastForceSound),NULL);
	}
	void USBZRandomNoiseComponent::StaticRegisterNativesUSBZRandomNoiseComponent()
	{
		UClass* Class = USBZRandomNoiseComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastForceSound", &USBZRandomNoiseComponent::execMulticastForceSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZRandomNoiseComponent_MulticastForceSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRandomNoiseComponent_MulticastForceSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRandomNoiseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRandomNoiseComponent_MulticastForceSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRandomNoiseComponent, nullptr, "MulticastForceSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRandomNoiseComponent_MulticastForceSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRandomNoiseComponent_MulticastForceSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRandomNoiseComponent_MulticastForceSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRandomNoiseComponent_MulticastForceSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZRandomNoiseComponent_NoRegister()
	{
		return USBZRandomNoiseComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZRandomNoiseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseToMake_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseToMake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRandomNoiseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZRandomNoiseComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZRandomNoiseComponent_MulticastForceSound, "MulticastForceSound" }, // 3684122858
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRandomNoiseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZRandomNoiseComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRandomNoiseComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRandomNoiseComponent_Statics::NewProp_SoundInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRandomNoiseComponent" },
		{ "ModuleRelativePath", "Public/SBZRandomNoiseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZRandomNoiseComponent_Statics::NewProp_SoundInterval = { "SoundInterval", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRandomNoiseComponent, SoundInterval), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_USBZRandomNoiseComponent_Statics::NewProp_SoundInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRandomNoiseComponent_Statics::NewProp_SoundInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRandomNoiseComponent_Statics::NewProp_NoiseToMake_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRandomNoiseComponent" },
		{ "ModuleRelativePath", "Public/SBZRandomNoiseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZRandomNoiseComponent_Statics::NewProp_NoiseToMake = { "NoiseToMake", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRandomNoiseComponent, NoiseToMake), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZRandomNoiseComponent_Statics::NewProp_NoiseToMake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRandomNoiseComponent_Statics::NewProp_NoiseToMake_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZRandomNoiseComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRandomNoiseComponent_Statics::NewProp_SoundInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRandomNoiseComponent_Statics::NewProp_NoiseToMake,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRandomNoiseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRandomNoiseComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRandomNoiseComponent_Statics::ClassParams = {
		&USBZRandomNoiseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZRandomNoiseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZRandomNoiseComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZRandomNoiseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRandomNoiseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRandomNoiseComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRandomNoiseComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRandomNoiseComponent, 3683544965);
	template<> STARBREEZE_API UClass* StaticClass<USBZRandomNoiseComponent>()
	{
		return USBZRandomNoiseComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRandomNoiseComponent(Z_Construct_UClass_USBZRandomNoiseComponent, &USBZRandomNoiseComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRandomNoiseComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRandomNoiseComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
