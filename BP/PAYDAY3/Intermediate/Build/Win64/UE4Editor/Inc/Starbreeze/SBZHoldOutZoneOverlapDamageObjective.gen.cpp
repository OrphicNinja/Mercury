// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutZoneOverlapDamageObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutZoneOverlapDamageObjective() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutObjectiveBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZHoldOutZoneOverlapDamageObjective::execOnFilteredActorBeginOverlapping)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentTotalActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFilteredActorBeginOverlapping(Z_Param_Identifier,Z_Param_Actor,Z_Param_CurrentTotalActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHoldOutZoneOverlapDamageObjective::execOnFilteredActorEndOverlapping)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentTotalActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFilteredActorEndOverlapping(Z_Param_Identifier,Z_Param_Actor,Z_Param_CurrentTotalActors);
		P_NATIVE_END;
	}
	void USBZHoldOutZoneOverlapDamageObjective::StaticRegisterNativesUSBZHoldOutZoneOverlapDamageObjective()
	{
		UClass* Class = USBZHoldOutZoneOverlapDamageObjective::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFilteredActorBeginOverlapping", &USBZHoldOutZoneOverlapDamageObjective::execOnFilteredActorBeginOverlapping },
			{ "OnFilteredActorEndOverlapping", &USBZHoldOutZoneOverlapDamageObjective::execOnFilteredActorEndOverlapping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping_Statics
	{
		struct SBZHoldOutZoneOverlapDamageObjective_eventOnFilteredActorBeginOverlapping_Parms
		{
			FName Identifier;
			AActor* Actor;
			int32 CurrentTotalActors;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTotalActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutZoneOverlapDamageObjective_eventOnFilteredActorBeginOverlapping_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutZoneOverlapDamageObjective_eventOnFilteredActorBeginOverlapping_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping_Statics::NewProp_CurrentTotalActors = { "CurrentTotalActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutZoneOverlapDamageObjective_eventOnFilteredActorBeginOverlapping_Parms, CurrentTotalActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping_Statics::NewProp_Identifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping_Statics::NewProp_CurrentTotalActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutZoneOverlapDamageObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective, nullptr, "OnFilteredActorBeginOverlapping", nullptr, nullptr, sizeof(SBZHoldOutZoneOverlapDamageObjective_eventOnFilteredActorBeginOverlapping_Parms), Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping_Statics
	{
		struct SBZHoldOutZoneOverlapDamageObjective_eventOnFilteredActorEndOverlapping_Parms
		{
			FName Identifier;
			AActor* Actor;
			int32 CurrentTotalActors;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTotalActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutZoneOverlapDamageObjective_eventOnFilteredActorEndOverlapping_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutZoneOverlapDamageObjective_eventOnFilteredActorEndOverlapping_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping_Statics::NewProp_CurrentTotalActors = { "CurrentTotalActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutZoneOverlapDamageObjective_eventOnFilteredActorEndOverlapping_Parms, CurrentTotalActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping_Statics::NewProp_Identifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping_Statics::NewProp_CurrentTotalActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutZoneOverlapDamageObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective, nullptr, "OnFilteredActorEndOverlapping", nullptr, nullptr, sizeof(SBZHoldOutZoneOverlapDamageObjective_eventOnFilteredActorEndOverlapping_Parms), Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_NoRegister()
	{
		return USBZHoldOutZoneOverlapDamageObjective::StaticClass();
	}
	struct Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerVolumeActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerVolumeActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZHoldOutObjectiveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorBeginOverlapping, "OnFilteredActorBeginOverlapping" }, // 3264724246
		{ &Z_Construct_UFunction_USBZHoldOutZoneOverlapDamageObjective_OnFilteredActorEndOverlapping, "OnFilteredActorEndOverlapping" }, // 1529851783
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHoldOutZoneOverlapDamageObjective.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutZoneOverlapDamageObjective.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::NewProp_TriggerVolumeActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutZoneOverlapDamageObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutZoneOverlapDamageObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::NewProp_TriggerVolumeActor = { "TriggerVolumeActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutZoneOverlapDamageObjective, TriggerVolumeActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::NewProp_TriggerVolumeActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::NewProp_TriggerVolumeActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutZoneOverlapDamageObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutZoneOverlapDamageObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutZoneOverlapDamageObjective, Health), METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::NewProp_TriggerVolumeActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHoldOutZoneOverlapDamageObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::ClassParams = {
		&USBZHoldOutZoneOverlapDamageObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHoldOutZoneOverlapDamageObjective, 1944796510);
	template<> STARBREEZE_API UClass* StaticClass<USBZHoldOutZoneOverlapDamageObjective>()
	{
		return USBZHoldOutZoneOverlapDamageObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHoldOutZoneOverlapDamageObjective(Z_Construct_UClass_USBZHoldOutZoneOverlapDamageObjective, &USBZHoldOutZoneOverlapDamageObjective::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHoldOutZoneOverlapDamageObjective"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHoldOutZoneOverlapDamageObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
