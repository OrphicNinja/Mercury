// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAction_Order.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAction_Order() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_Order_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_Order();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIAction_Order::execOnOrderCompleted)
	{
		P_GET_OBJECT(USBZAIOrder,Z_Param_Order);
		P_GET_OBJECT(APawn,Z_Param_OrderPawn);
		P_GET_PROPERTY(FByteProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOrderCompleted(Z_Param_Order,Z_Param_OrderPawn,EBTNodeResult::Type(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIAction_Order::execOnOrderStarted)
	{
		P_GET_OBJECT(USBZAIOrder,Z_Param_Order);
		P_GET_OBJECT(APawn,Z_Param_OrderPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOrderStarted(Z_Param_Order,Z_Param_OrderPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIAction_Order::execOnOrderStopped)
	{
		P_GET_OBJECT(USBZAIOrder,Z_Param_Order);
		P_GET_OBJECT(APawn,Z_Param_OrderPawn);
		P_GET_PROPERTY(FByteProperty,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOrderStopped(Z_Param_Order,Z_Param_OrderPawn,EBTNodeResult::Type(Z_Param_Result));
		P_NATIVE_END;
	}
	void USBZAIAction_Order::StaticRegisterNativesUSBZAIAction_Order()
	{
		UClass* Class = USBZAIAction_Order::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOrderCompleted", &USBZAIAction_Order::execOnOrderCompleted },
			{ "OnOrderStarted", &USBZAIAction_Order::execOnOrderStarted },
			{ "OnOrderStopped", &USBZAIAction_Order::execOnOrderStopped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted_Statics
	{
		struct SBZAIAction_Order_eventOnOrderCompleted_Parms
		{
			USBZAIOrder* Order;
			APawn* OrderPawn;
			TEnumAsByte<EBTNodeResult::Type> Result;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrderPawn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_Order_eventOnOrderCompleted_Parms, Order), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted_Statics::NewProp_OrderPawn = { "OrderPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_Order_eventOnOrderCompleted_Parms, OrderPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_Order_eventOnOrderCompleted_Parms, Result), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted_Statics::NewProp_Order,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted_Statics::NewProp_OrderPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAction_Order.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAction_Order, nullptr, "OnOrderCompleted", nullptr, nullptr, sizeof(SBZAIAction_Order_eventOnOrderCompleted_Parms), Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIAction_Order_OnOrderStarted_Statics
	{
		struct SBZAIAction_Order_eventOnOrderStarted_Parms
		{
			USBZAIOrder* Order;
			APawn* OrderPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrderPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAction_Order_OnOrderStarted_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_Order_eventOnOrderStarted_Parms, Order), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAction_Order_OnOrderStarted_Statics::NewProp_OrderPawn = { "OrderPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_Order_eventOnOrderStarted_Parms, OrderPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIAction_Order_OnOrderStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_Order_OnOrderStarted_Statics::NewProp_Order,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_Order_OnOrderStarted_Statics::NewProp_OrderPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAction_Order_OnOrderStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAction_Order.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAction_Order_OnOrderStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAction_Order, nullptr, "OnOrderStarted", nullptr, nullptr, sizeof(SBZAIAction_Order_eventOnOrderStarted_Parms), Z_Construct_UFunction_USBZAIAction_Order_OnOrderStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_Order_OnOrderStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAction_Order_OnOrderStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_Order_OnOrderStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAction_Order_OnOrderStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAction_Order_OnOrderStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped_Statics
	{
		struct SBZAIAction_Order_eventOnOrderStopped_Parms
		{
			USBZAIOrder* Order;
			APawn* OrderPawn;
			TEnumAsByte<EBTNodeResult::Type> Result;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrderPawn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_Order_eventOnOrderStopped_Parms, Order), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped_Statics::NewProp_OrderPawn = { "OrderPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_Order_eventOnOrderStopped_Parms, OrderPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAction_Order_eventOnOrderStopped_Parms, Result), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped_Statics::NewProp_Order,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped_Statics::NewProp_OrderPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAction_Order.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAction_Order, nullptr, "OnOrderStopped", nullptr, nullptr, sizeof(SBZAIAction_Order_eventOnOrderStopped_Parms), Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIAction_Order_NoRegister()
	{
		return USBZAIAction_Order::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAction_Order_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrderInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAction_Order_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIAction,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIAction_Order_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIAction_Order_OnOrderCompleted, "OnOrderCompleted" }, // 2805344787
		{ &Z_Construct_UFunction_USBZAIAction_Order_OnOrderStarted, "OnOrderStarted" }, // 1298886633
		{ &Z_Construct_UFunction_USBZAIAction_Order_OnOrderStopped, "OnOrderStopped" }, // 2264703511
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_Order_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAction_Order.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_Order.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_Order_Statics::NewProp_ActionOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_Order" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_Order.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_Order_Statics::NewProp_ActionOrder = { "ActionOrder", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_Order, ActionOrder), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_Order_Statics::NewProp_ActionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_Order_Statics::NewProp_ActionOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_Order_Statics::NewProp_OrderInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_Order" },
		{ "ModuleRelativePath", "Public/SBZAIAction_Order.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAction_Order_Statics::NewProp_OrderInstance = { "OrderInstance", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_Order, OrderInstance), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_Order_Statics::NewProp_OrderInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_Order_Statics::NewProp_OrderInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIAction_Order_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_Order_Statics::NewProp_ActionOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_Order_Statics::NewProp_OrderInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAction_Order_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAction_Order>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAction_Order_Statics::ClassParams = {
		&USBZAIAction_Order::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIAction_Order_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_Order_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_Order_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_Order_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAction_Order()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAction_Order_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAction_Order, 645311192);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAction_Order>()
	{
		return USBZAIAction_Order::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAction_Order(Z_Construct_UClass_USBZAIAction_Order, &USBZAIAction_Order::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAction_Order"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAction_Order);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
