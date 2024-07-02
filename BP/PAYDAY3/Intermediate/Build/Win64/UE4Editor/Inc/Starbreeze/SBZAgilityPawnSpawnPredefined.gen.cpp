// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilityPawnSpawnPredefined.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilityPawnSpawnPredefined() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnPredefined();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavLinkAgilityComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityTrajectoryInterface_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAgilityPawnSpawnPredefined::execSpawnedPawnOrderPushed)
	{
		P_GET_OBJECT(ASBZAIController,Z_Param_Controller);
		P_GET_OBJECT(USBZAIOrder,Z_Param_Order);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnedPawnOrderPushed(Z_Param_Controller,Z_Param_Order);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAgilityPawnSpawnPredefined::execUpdateAgilityTrajectory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAgilityTrajectory();
		P_NATIVE_END;
	}
	void ASBZAgilityPawnSpawnPredefined::StaticRegisterNativesASBZAgilityPawnSpawnPredefined()
	{
		UClass* Class = ASBZAgilityPawnSpawnPredefined::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnedPawnOrderPushed", &ASBZAgilityPawnSpawnPredefined::execSpawnedPawnOrderPushed },
			{ "UpdateAgilityTrajectory", &ASBZAgilityPawnSpawnPredefined::execUpdateAgilityTrajectory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_SpawnedPawnOrderPushed_Statics
	{
		struct SBZAgilityPawnSpawnPredefined_eventSpawnedPawnOrderPushed_Parms
		{
			ASBZAIController* Controller;
			USBZAIOrder* Order;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_SpawnedPawnOrderPushed_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAgilityPawnSpawnPredefined_eventSpawnedPawnOrderPushed_Parms, Controller), Z_Construct_UClass_ASBZAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_SpawnedPawnOrderPushed_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAgilityPawnSpawnPredefined_eventSpawnedPawnOrderPushed_Parms, Order), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_SpawnedPawnOrderPushed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_SpawnedPawnOrderPushed_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_SpawnedPawnOrderPushed_Statics::NewProp_Order,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_SpawnedPawnOrderPushed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAgilityPawnSpawnPredefined.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_SpawnedPawnOrderPushed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined, nullptr, "SpawnedPawnOrderPushed", nullptr, nullptr, sizeof(SBZAgilityPawnSpawnPredefined_eventSpawnedPawnOrderPushed_Parms), Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_SpawnedPawnOrderPushed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_SpawnedPawnOrderPushed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_SpawnedPawnOrderPushed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_SpawnedPawnOrderPushed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_SpawnedPawnOrderPushed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_SpawnedPawnOrderPushed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_UpdateAgilityTrajectory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_UpdateAgilityTrajectory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAgilityPawnSpawnPredefined.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_UpdateAgilityTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined, nullptr, "UpdateAgilityTrajectory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_UpdateAgilityTrajectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_UpdateAgilityTrajectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_UpdateAgilityTrajectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_UpdateAgilityTrajectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_NoRegister()
	{
		return ASBZAgilityPawnSpawnPredefined::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForcedMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAnimationToComputeEnd_MetaData[];
#endif
		static void NewProp_bUseAnimationToComputeEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAnimationToComputeEnd;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AgilityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AgilityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLinkAgilityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavLinkAgilityComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavigationLink;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPawnSpawnPredefined,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_SpawnedPawnOrderPushed, "SpawnedPawnOrderPushed" }, // 2826454948
		{ &Z_Construct_UFunction_ASBZAgilityPawnSpawnPredefined_UpdateAgilityTrajectory, "UpdateAgilityTrajectory" }, // 2825055321
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAgilityPawnSpawnPredefined.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityPawnSpawnPredefined.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_ForcedMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityPawnSpawnPredefined" },
		{ "ModuleRelativePath", "Public/SBZAgilityPawnSpawnPredefined.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_ForcedMontage = { "ForcedMontage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAgilityPawnSpawnPredefined, ForcedMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_ForcedMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_ForcedMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_bUseAnimationToComputeEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityPawnSpawnPredefined" },
		{ "ModuleRelativePath", "Public/SBZAgilityPawnSpawnPredefined.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_bUseAnimationToComputeEnd_SetBit(void* Obj)
	{
		((ASBZAgilityPawnSpawnPredefined*)Obj)->bUseAnimationToComputeEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_bUseAnimationToComputeEnd = { "bUseAnimationToComputeEnd", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAgilityPawnSpawnPredefined), &Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_bUseAnimationToComputeEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_bUseAnimationToComputeEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_bUseAnimationToComputeEnd_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_AgilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_AgilityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityPawnSpawnPredefined" },
		{ "ModuleRelativePath", "Public/SBZAgilityPawnSpawnPredefined.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_AgilityType = { "AgilityType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAgilityPawnSpawnPredefined, AgilityType), Z_Construct_UEnum_Starbreeze_ESBZAgilityType, METADATA_PARAMS(Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_AgilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_AgilityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_NavLinkAgilityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityPawnSpawnPredefined" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityPawnSpawnPredefined.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_NavLinkAgilityComponent = { "NavLinkAgilityComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAgilityPawnSpawnPredefined, NavLinkAgilityComponent), Z_Construct_UClass_USBZNavLinkAgilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_NavLinkAgilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_NavLinkAgilityComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_NavigationLink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityPawnSpawnPredefined" },
		{ "ModuleRelativePath", "Public/SBZAgilityPawnSpawnPredefined.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_NavigationLink = { "NavigationLink", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAgilityPawnSpawnPredefined, NavigationLink), Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_NavigationLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_NavigationLink_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_ForcedMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_bUseAnimationToComputeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_AgilityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_AgilityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_NavLinkAgilityComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::NewProp_NavigationLink,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAgilityTrajectoryInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAgilityPawnSpawnPredefined, ISBZAgilityTrajectoryInterface), false },
			{ Z_Construct_UClass_UNavLinkCustomInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAgilityPawnSpawnPredefined, INavLinkCustomInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAgilityPawnSpawnPredefined>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::ClassParams = {
		&ASBZAgilityPawnSpawnPredefined::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAgilityPawnSpawnPredefined, 460041909);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAgilityPawnSpawnPredefined>()
	{
		return ASBZAgilityPawnSpawnPredefined::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAgilityPawnSpawnPredefined(Z_Construct_UClass_ASBZAgilityPawnSpawnPredefined, &ASBZAgilityPawnSpawnPredefined::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAgilityPawnSpawnPredefined"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAgilityPawnSpawnPredefined);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
