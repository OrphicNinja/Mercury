// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIExplosiveWeakPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIExplosiveWeakPoint() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIExplosiveWeakPoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIExplosiveWeakPoint();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIWeakPoint();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosive_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIExplosiveWeakPoint::execMulticast_ReplicateExplosion)
	{
		P_GET_STRUCT(FSBZExplosionResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReplicateExplosion_Implementation(Z_Param_Result);
		P_NATIVE_END;
	}
	static FName NAME_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion = FName(TEXT("Multicast_ReplicateExplosion"));
	void USBZAIExplosiveWeakPoint::Multicast_ReplicateExplosion(FSBZExplosionResult const& Result)
	{
		SBZAIExplosiveWeakPoint_eventMulticast_ReplicateExplosion_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion),&Parms);
	}
	void USBZAIExplosiveWeakPoint::StaticRegisterNativesUSBZAIExplosiveWeakPoint()
	{
		UClass* Class = USBZAIExplosiveWeakPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ReplicateExplosion", &USBZAIExplosiveWeakPoint::execMulticast_ReplicateExplosion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIExplosiveWeakPoint_eventMulticast_ReplicateExplosion_Parms, Result), Z_Construct_UScriptStruct_FSBZExplosionResult, METADATA_PARAMS(Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIExplosiveWeakPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIExplosiveWeakPoint, nullptr, "Multicast_ReplicateExplosion", nullptr, nullptr, sizeof(SBZAIExplosiveWeakPoint_eventMulticast_ReplicateExplosion_Parms), Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIExplosiveWeakPoint_NoRegister()
	{
		return USBZAIExplosiveWeakPoint::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIExplosionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIExplosionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerExplosionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerExplosionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HurtReactionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIWeakPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIExplosiveWeakPoint_Multicast_ReplicateExplosion, "Multicast_ReplicateExplosion" }, // 2974628373
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "SBZAIExplosiveWeakPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIExplosiveWeakPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_GameplayEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIExplosiveWeakPoint" },
		{ "ModuleRelativePath", "Public/SBZAIExplosiveWeakPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIExplosiveWeakPoint, GameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_GameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_GameplayEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_AIExplosionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIExplosiveWeakPoint" },
		{ "ModuleRelativePath", "Public/SBZAIExplosiveWeakPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_AIExplosionRange = { "AIExplosionRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIExplosiveWeakPoint, AIExplosionRange), METADATA_PARAMS(Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_AIExplosionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_AIExplosionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_PlayerExplosionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIExplosiveWeakPoint" },
		{ "ModuleRelativePath", "Public/SBZAIExplosiveWeakPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_PlayerExplosionRange = { "PlayerExplosionRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIExplosiveWeakPoint, PlayerExplosionRange), METADATA_PARAMS(Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_PlayerExplosionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_PlayerExplosionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_HurtReactionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIExplosiveWeakPoint" },
		{ "ModuleRelativePath", "Public/SBZAIExplosiveWeakPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_HurtReactionData = { "HurtReactionData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIExplosiveWeakPoint, HurtReactionData), Z_Construct_UScriptStruct_FSBZHurtReactionData, METADATA_PARAMS(Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_HurtReactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_HurtReactionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_GameplayEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_AIExplosionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_PlayerExplosionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::NewProp_HurtReactionData,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZExplosive_NoRegister, (int32)VTABLE_OFFSET(USBZAIExplosiveWeakPoint, ISBZExplosive), false },
			{ Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister, (int32)VTABLE_OFFSET(USBZAIExplosiveWeakPoint, ISBZHurtReactionDataInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIExplosiveWeakPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::ClassParams = {
		&USBZAIExplosiveWeakPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A5u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIExplosiveWeakPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIExplosiveWeakPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIExplosiveWeakPoint, 591927823);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIExplosiveWeakPoint>()
	{
		return USBZAIExplosiveWeakPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIExplosiveWeakPoint(Z_Construct_UClass_USBZAIExplosiveWeakPoint, &USBZAIExplosiveWeakPoint::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIExplosiveWeakPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIExplosiveWeakPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
