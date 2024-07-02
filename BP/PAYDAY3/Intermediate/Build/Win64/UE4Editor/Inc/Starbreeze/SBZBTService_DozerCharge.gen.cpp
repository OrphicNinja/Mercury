// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_DozerCharge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_DozerCharge() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_DozerCharge_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_DozerCharge();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZBTService_DozerCharge::execOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bIsInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bIsInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBTService_DozerCharge::execTickChargeMeleeCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickChargeMeleeCheck();
		P_NATIVE_END;
	}
	void USBZBTService_DozerCharge::StaticRegisterNativesUSBZBTService_DozerCharge()
	{
		UClass* Class = USBZBTService_DozerCharge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMontageEnded", &USBZBTService_DozerCharge::execOnMontageEnded },
			{ "TickChargeMeleeCheck", &USBZBTService_DozerCharge::execTickChargeMeleeCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded_Statics
	{
		struct SBZBTService_DozerCharge_eventOnMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bIsInterrupted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bIsInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBTService_DozerCharge_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded_Statics::NewProp_bIsInterrupted_SetBit(void* Obj)
	{
		((SBZBTService_DozerCharge_eventOnMontageEnded_Parms*)Obj)->bIsInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded_Statics::NewProp_bIsInterrupted = { "bIsInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBTService_DozerCharge_eventOnMontageEnded_Parms), &Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded_Statics::NewProp_bIsInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded_Statics::NewProp_bIsInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBTService_DozerCharge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBTService_DozerCharge, nullptr, "OnMontageEnded", nullptr, nullptr, sizeof(SBZBTService_DozerCharge_eventOnMontageEnded_Parms), Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBTService_DozerCharge_TickChargeMeleeCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBTService_DozerCharge_TickChargeMeleeCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBTService_DozerCharge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBTService_DozerCharge_TickChargeMeleeCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBTService_DozerCharge, nullptr, "TickChargeMeleeCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBTService_DozerCharge_TickChargeMeleeCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBTService_DozerCharge_TickChargeMeleeCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBTService_DozerCharge_TickChargeMeleeCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBTService_DozerCharge_TickChargeMeleeCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBTService_DozerCharge_NoRegister()
	{
		return USBZBTService_DozerCharge::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_DozerCharge_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraChargeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExtraChargeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckForHitTickRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CheckForHitTickRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargeComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChargeComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactionWeightOnAI_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HurtReactionWeightOnAI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_DozerCharge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBTService_DozerCharge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBTService_DozerCharge_OnMontageEnded, "OnMontageEnded" }, // 3018068635
		{ &Z_Construct_UFunction_USBZBTService_DozerCharge_TickChargeMeleeCheck, "TickChargeMeleeCheck" }, // 240170980
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_DozerCharge_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_DozerCharge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_DozerCharge.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_ExtraChargeDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_DozerCharge" },
		{ "ModuleRelativePath", "Public/SBZBTService_DozerCharge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_ExtraChargeDistance = { "ExtraChargeDistance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_DozerCharge, ExtraChargeDistance), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_ExtraChargeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_ExtraChargeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_CheckForHitTickRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_DozerCharge" },
		{ "ModuleRelativePath", "Public/SBZBTService_DozerCharge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_CheckForHitTickRate = { "CheckForHitTickRate", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_DozerCharge, CheckForHitTickRate), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_CheckForHitTickRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_CheckForHitTickRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_ChargeComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_DozerCharge" },
		{ "ModuleRelativePath", "Public/SBZBTService_DozerCharge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_ChargeComment = { "ChargeComment", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_DozerCharge, ChargeComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_ChargeComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_ChargeComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_HurtReactionWeightOnAI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_DozerCharge" },
		{ "ModuleRelativePath", "Public/SBZBTService_DozerCharge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_HurtReactionWeightOnAI = { "HurtReactionWeightOnAI", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_DozerCharge, HurtReactionWeightOnAI), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_HurtReactionWeightOnAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_HurtReactionWeightOnAI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_AIController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_DozerCharge" },
		{ "ModuleRelativePath", "Public/SBZBTService_DozerCharge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_DozerCharge, AIController), Z_Construct_UClass_ASBZAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_AIController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_CurrentMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_DozerCharge" },
		{ "ModuleRelativePath", "Public/SBZBTService_DozerCharge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_CurrentMontage = { "CurrentMontage", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_DozerCharge, CurrentMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_CurrentMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_CurrentMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_DozerCharge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_ExtraChargeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_CheckForHitTickRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_ChargeComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_HurtReactionWeightOnAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_DozerCharge_Statics::NewProp_CurrentMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_DozerCharge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_DozerCharge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_DozerCharge_Statics::ClassParams = {
		&USBZBTService_DozerCharge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBTService_DozerCharge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_DozerCharge_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_DozerCharge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_DozerCharge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_DozerCharge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_DozerCharge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_DozerCharge, 2635771443);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_DozerCharge>()
	{
		return USBZBTService_DozerCharge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_DozerCharge(Z_Construct_UClass_USBZBTService_DozerCharge, &USBZBTService_DozerCharge::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_DozerCharge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_DozerCharge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
