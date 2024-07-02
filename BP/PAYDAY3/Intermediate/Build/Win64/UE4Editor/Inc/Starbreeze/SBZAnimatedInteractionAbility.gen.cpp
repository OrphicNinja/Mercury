// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimatedInteractionAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimatedInteractionAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnimatedInteractionAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnimatedInteractionAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnimatedInteractionInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnimatedInteractionData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAnimatedInteractionAbility::execOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	void USBZAnimatedInteractionAbility::StaticRegisterNativesUSBZAnimatedInteractionAbility()
	{
		UClass* Class = USBZAnimatedInteractionAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMontageEnded", &USBZAnimatedInteractionAbility::execOnMontageEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded_Statics
	{
		struct SBZAnimatedInteractionAbility_eventOnMontageEnded_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAnimatedInteractionAbility_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((SBZAnimatedInteractionAbility_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAnimatedInteractionAbility_eventOnMontageEnded_Parms), &Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAnimatedInteractionAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAnimatedInteractionAbility, nullptr, "OnMontageEnded", nullptr, nullptr, sizeof(SBZAnimatedInteractionAbility_eventOnMontageEnded_Parms), Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAnimatedInteractionAbility_NoRegister()
	{
		return USBZAnimatedInteractionAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractionMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractionMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAnimatedInteractionInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_CurrentAnimatedInteractionInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAnimatedInteractionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentAnimatedInteractionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAnimatedInteractionAbility_OnMontageEnded, "OnMontageEnded" }, // 778900788
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAnimatedInteractionAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimatedInteractionAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::NewProp_CurrentInteractionMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimatedInteractionAbility" },
		{ "ModuleRelativePath", "Public/SBZAnimatedInteractionAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::NewProp_CurrentInteractionMontage = { "CurrentInteractionMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnimatedInteractionAbility, CurrentInteractionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::NewProp_CurrentInteractionMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::NewProp_CurrentInteractionMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::NewProp_CurrentAnimatedInteractionInterface_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimatedInteractionAbility" },
		{ "ModuleRelativePath", "Public/SBZAnimatedInteractionAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::NewProp_CurrentAnimatedInteractionInterface = { "CurrentAnimatedInteractionInterface", nullptr, (EPropertyFlags)0x0024080000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnimatedInteractionAbility, CurrentAnimatedInteractionInterface), Z_Construct_UClass_USBZAnimatedInteractionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::NewProp_CurrentAnimatedInteractionInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::NewProp_CurrentAnimatedInteractionInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::NewProp_CurrentAnimatedInteractionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimatedInteractionAbility" },
		{ "ModuleRelativePath", "Public/SBZAnimatedInteractionAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::NewProp_CurrentAnimatedInteractionData = { "CurrentAnimatedInteractionData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnimatedInteractionAbility, CurrentAnimatedInteractionData), Z_Construct_UClass_USBZAnimatedInteractionData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::NewProp_CurrentAnimatedInteractionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::NewProp_CurrentAnimatedInteractionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::NewProp_CurrentInteractionMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::NewProp_CurrentAnimatedInteractionInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::NewProp_CurrentAnimatedInteractionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAnimatedInteractionAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::ClassParams = {
		&USBZAnimatedInteractionAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAnimatedInteractionAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAnimatedInteractionAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAnimatedInteractionAbility, 2621871490);
	template<> STARBREEZE_API UClass* StaticClass<USBZAnimatedInteractionAbility>()
	{
		return USBZAnimatedInteractionAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAnimatedInteractionAbility(Z_Construct_UClass_USBZAnimatedInteractionAbility, &USBZAnimatedInteractionAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAnimatedInteractionAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAnimatedInteractionAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
