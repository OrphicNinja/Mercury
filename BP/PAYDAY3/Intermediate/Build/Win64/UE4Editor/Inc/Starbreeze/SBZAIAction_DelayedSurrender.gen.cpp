// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAction_DelayedSurrender.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAction_DelayedSurrender() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_DelayedSurrender_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_DelayedSurrender();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIAction_DelayedSurrender::execOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIAction_DelayedSurrender::execOnTakeDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakeDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	void USBZAIAction_DelayedSurrender::StaticRegisterNativesUSBZAIAction_DelayedSurrender()
	{
		UClass* Class = USBZAIAction_DelayedSurrender::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMontageEnded", &USBZAIAction_DelayedSurrender::execOnMontageEnded },
			{ "OnTakeDamage", &USBZAIAction_DelayedSurrender::execOnTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded_Statics
	{
		struct SBZAIAction_DelayedSurrender_eventOnMontageEnded_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_DelayedSurrender_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((SBZAIAction_DelayedSurrender_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIAction_DelayedSurrender_eventOnMontageEnded_Parms), &Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAction_DelayedSurrender.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAction_DelayedSurrender, nullptr, "OnMontageEnded", nullptr, nullptr, sizeof(SBZAIAction_DelayedSurrender_eventOnMontageEnded_Parms), Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics
	{
		struct SBZAIAction_DelayedSurrender_eventOnTakeDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_DelayedSurrender_eventOnTakeDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_DelayedSurrender_eventOnTakeDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_DelayedSurrender_eventOnTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_DelayedSurrender_eventOnTakeDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_DelayedSurrender_eventOnTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAction_DelayedSurrender.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAction_DelayedSurrender, nullptr, "OnTakeDamage", nullptr, nullptr, sizeof(SBZAIAction_DelayedSurrender_eventOnTakeDamage_Parms), Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIAction_DelayedSurrender_NoRegister()
	{
		return USBZAIAction_DelayedSurrender::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAimDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAimDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIAction,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnMontageEnded, "OnMontageEnded" }, // 1783654165
		{ &Z_Construct_UFunction_USBZAIAction_DelayedSurrender_OnTakeDamage, "OnTakeDamage" }, // 2721436814
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAction_DelayedSurrender.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_DelayedSurrender.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::NewProp_MinAimDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_DelayedSurrender" },
		{ "ModuleRelativePath", "Public/SBZAIAction_DelayedSurrender.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::NewProp_MinAimDist = { "MinAimDist", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_DelayedSurrender, MinAimDist), METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::NewProp_MinAimDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::NewProp_MinAimDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::NewProp_AIController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_DelayedSurrender" },
		{ "ModuleRelativePath", "Public/SBZAIAction_DelayedSurrender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_DelayedSurrender, AIController), Z_Construct_UClass_ASBZAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::NewProp_AIController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::NewProp_SelectedMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_DelayedSurrender" },
		{ "ModuleRelativePath", "Public/SBZAIAction_DelayedSurrender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::NewProp_SelectedMontage = { "SelectedMontage", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_DelayedSurrender, SelectedMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::NewProp_SelectedMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::NewProp_SelectedMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::NewProp_MinAimDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::NewProp_SelectedMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAction_DelayedSurrender>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::ClassParams = {
		&USBZAIAction_DelayedSurrender::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAction_DelayedSurrender()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAction_DelayedSurrender_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAction_DelayedSurrender, 2489768564);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAction_DelayedSurrender>()
	{
		return USBZAIAction_DelayedSurrender::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAction_DelayedSurrender(Z_Construct_UClass_USBZAIAction_DelayedSurrender, &USBZAIAction_DelayedSurrender::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAction_DelayedSurrender"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAction_DelayedSurrender);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
