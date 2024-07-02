// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_FollowTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_FollowTarget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_FollowTarget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_FollowTarget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIOrder_FollowTarget::execOnAIPawnKilled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAIPawnKilled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIOrder_FollowTarget::execOnHitByPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHitByPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIOrder_FollowTarget::execOnOwnerInteracted)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerInteracted(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIOrder_FollowTarget::execOnOwnerOrderPushed)
	{
		P_GET_OBJECT(ASBZAIController,Z_Param_AIController);
		P_GET_OBJECT(USBZAIOrder,Z_Param_AIOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerOrderPushed(Z_Param_AIController,Z_Param_AIOrder);
		P_NATIVE_END;
	}
	void USBZAIOrder_FollowTarget::StaticRegisterNativesUSBZAIOrder_FollowTarget()
	{
		UClass* Class = USBZAIOrder_FollowTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAIPawnKilled", &USBZAIOrder_FollowTarget::execOnAIPawnKilled },
			{ "OnHitByPlayer", &USBZAIOrder_FollowTarget::execOnHitByPlayer },
			{ "OnOwnerInteracted", &USBZAIOrder_FollowTarget::execOnOwnerInteracted },
			{ "OnOwnerOrderPushed", &USBZAIOrder_FollowTarget::execOnOwnerOrderPushed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnAIPawnKilled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnAIPawnKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_FollowTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnAIPawnKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_FollowTarget, nullptr, "OnAIPawnKilled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnAIPawnKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnAIPawnKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnAIPawnKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnAIPawnKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnHitByPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnHitByPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_FollowTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnHitByPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_FollowTarget, nullptr, "OnHitByPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnHitByPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnHitByPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnHitByPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnHitByPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics
	{
		struct SBZAIOrder_FollowTarget_eventOnOwnerInteracted_Parms
		{
			USBZBaseInteractableComponent* Interactable;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_FollowTarget_eventOnOwnerInteracted_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_FollowTarget_eventOnOwnerInteracted_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZAIOrder_FollowTarget_eventOnOwnerInteracted_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIOrder_FollowTarget_eventOnOwnerInteracted_Parms), &Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_FollowTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_FollowTarget, nullptr, "OnOwnerInteracted", nullptr, nullptr, sizeof(SBZAIOrder_FollowTarget_eventOnOwnerInteracted_Parms), Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerOrderPushed_Statics
	{
		struct SBZAIOrder_FollowTarget_eventOnOwnerOrderPushed_Parms
		{
			ASBZAIController* AIController;
			USBZAIOrder* AIOrder;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerOrderPushed_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_FollowTarget_eventOnOwnerOrderPushed_Parms, AIController), Z_Construct_UClass_ASBZAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerOrderPushed_Statics::NewProp_AIOrder = { "AIOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_FollowTarget_eventOnOwnerOrderPushed_Parms, AIOrder), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerOrderPushed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerOrderPushed_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerOrderPushed_Statics::NewProp_AIOrder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerOrderPushed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_FollowTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerOrderPushed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_FollowTarget, nullptr, "OnOwnerOrderPushed", nullptr, nullptr, sizeof(SBZAIOrder_FollowTarget_eventOnOwnerOrderPushed_Parms), Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerOrderPushed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerOrderPushed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerOrderPushed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerOrderPushed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerOrderPushed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerOrderPushed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIOrder_FollowTarget_NoRegister()
	{
		return USBZAIOrder_FollowTarget::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_FollowTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_FollowTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIOrder_FollowTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnAIPawnKilled, "OnAIPawnKilled" }, // 1835025731
		{ &Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnHitByPlayer, "OnHitByPlayer" }, // 1753143429
		{ &Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerInteracted, "OnOwnerInteracted" }, // 1682400099
		{ &Z_Construct_UFunction_USBZAIOrder_FollowTarget_OnOwnerOrderPushed, "OnOwnerOrderPushed" }, // 3195925750
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_FollowTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_FollowTarget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_FollowTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_FollowTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_FollowTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_FollowTarget_Statics::ClassParams = {
		&USBZAIOrder_FollowTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_FollowTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_FollowTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_FollowTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_FollowTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_FollowTarget, 1492228866);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_FollowTarget>()
	{
		return USBZAIOrder_FollowTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_FollowTarget(Z_Construct_UClass_USBZAIOrder_FollowTarget, &USBZAIOrder_FollowTarget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_FollowTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_FollowTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
