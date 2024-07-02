// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEmoteAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEmoteAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEmoteAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEmoteAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZEmoteAbility::execOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	void USBZEmoteAbility::StaticRegisterNativesUSBZEmoteAbility()
	{
		UClass* Class = USBZEmoteAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMontageEnded", &USBZEmoteAbility::execOnMontageEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded_Statics
	{
		struct SBZEmoteAbility_eventOnMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEmoteAbility_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((SBZEmoteAbility_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZEmoteAbility_eventOnMontageEnded_Parms), &Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEmoteAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZEmoteAbility, nullptr, "OnMontageEnded", nullptr, nullptr, sizeof(SBZEmoteAbility_eventOnMontageEnded_Parms), Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZEmoteAbility_NoRegister()
	{
		return USBZEmoteAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZEmoteAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableBlendOutAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisableBlendOutAbilities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeedbackClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FeedbackClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEmoteAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZEmoteAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZEmoteAbility_OnMontageEnded, "OnMontageEnded" }, // 3741835224
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmoteAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEmoteAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEmoteAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmoteAbility_Statics::NewProp_DisableBlendOutAbilities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEmoteAbility" },
		{ "ModuleRelativePath", "Public/SBZEmoteAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEmoteAbility_Statics::NewProp_DisableBlendOutAbilities = { "DisableBlendOutAbilities", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEmoteAbility, DisableBlendOutAbilities), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZEmoteAbility_Statics::NewProp_DisableBlendOutAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmoteAbility_Statics::NewProp_DisableBlendOutAbilities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmoteAbility_Statics::NewProp_FeedbackClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEmoteAbility" },
		{ "ModuleRelativePath", "Public/SBZEmoteAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZEmoteAbility_Statics::NewProp_FeedbackClass = { "FeedbackClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEmoteAbility, FeedbackClass), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZEmoteAbility_Statics::NewProp_FeedbackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmoteAbility_Statics::NewProp_FeedbackClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEmoteAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmoteAbility_Statics::NewProp_DisableBlendOutAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmoteAbility_Statics::NewProp_FeedbackClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEmoteAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEmoteAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEmoteAbility_Statics::ClassParams = {
		&USBZEmoteAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZEmoteAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmoteAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEmoteAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmoteAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEmoteAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEmoteAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEmoteAbility, 563886089);
	template<> STARBREEZE_API UClass* StaticClass<USBZEmoteAbility>()
	{
		return USBZEmoteAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEmoteAbility(Z_Construct_UClass_USBZEmoteAbility, &USBZEmoteAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEmoteAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEmoteAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
