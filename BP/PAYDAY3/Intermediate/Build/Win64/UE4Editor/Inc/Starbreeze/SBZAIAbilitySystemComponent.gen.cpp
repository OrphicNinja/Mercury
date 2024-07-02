// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAbilitySystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAbilitySystemComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAbilitySystemComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAbilitySystemComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAbilitySystemComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionPrediction();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIAbilitySystemComponent::execMulticast_ApplyHurtInterrupt)
	{
		P_GET_STRUCT(FSBZHurtReactionPrediction,Z_Param_HurtReactionPrediction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ApplyHurtInterrupt_Implementation(Z_Param_HurtReactionPrediction);
		P_NATIVE_END;
	}
	static FName NAME_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt = FName(TEXT("Multicast_ApplyHurtInterrupt"));
	void USBZAIAbilitySystemComponent::Multicast_ApplyHurtInterrupt(FSBZHurtReactionPrediction const& HurtReactionPrediction)
	{
		SBZAIAbilitySystemComponent_eventMulticast_ApplyHurtInterrupt_Parms Parms;
		Parms.HurtReactionPrediction=HurtReactionPrediction;
		ProcessEvent(FindFunctionChecked(NAME_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt),&Parms);
	}
	void USBZAIAbilitySystemComponent::StaticRegisterNativesUSBZAIAbilitySystemComponent()
	{
		UClass* Class = USBZAIAbilitySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ApplyHurtInterrupt", &USBZAIAbilitySystemComponent::execMulticast_ApplyHurtInterrupt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactionPrediction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HurtReactionPrediction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt_Statics::NewProp_HurtReactionPrediction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt_Statics::NewProp_HurtReactionPrediction = { "HurtReactionPrediction", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAbilitySystemComponent_eventMulticast_ApplyHurtInterrupt_Parms, HurtReactionPrediction), Z_Construct_UScriptStruct_FSBZHurtReactionPrediction, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt_Statics::NewProp_HurtReactionPrediction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt_Statics::NewProp_HurtReactionPrediction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt_Statics::NewProp_HurtReactionPrediction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAbilitySystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAbilitySystemComponent, nullptr, "Multicast_ApplyHurtInterrupt", nullptr, nullptr, sizeof(SBZAIAbilitySystemComponent_eventMulticast_ApplyHurtInterrupt_Parms), Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIAbilitySystemComponent_NoRegister()
	{
		return USBZAIAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIAbilitySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIAbilitySystemComponent_Multicast_ApplyHurtInterrupt, "Multicast_ApplyHurtInterrupt" }, // 3632366827
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "SBZAIAbilitySystemComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAbilitySystemComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAbilitySystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAbilitySystemComponent_Statics::ClassParams = {
		&USBZAIAbilitySystemComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAbilitySystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAbilitySystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAbilitySystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAbilitySystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAbilitySystemComponent, 2713600241);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAbilitySystemComponent>()
	{
		return USBZAIAbilitySystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAbilitySystemComponent(Z_Construct_UClass_USBZAIAbilitySystemComponent, &USBZAIAbilitySystemComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAbilitySystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAbilitySystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
