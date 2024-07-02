// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutZoneOverlapObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutZoneOverlapObjective() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutZoneOverlapObjective();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutObjectiveBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZHoldOutZoneOverlapObjective::execOnFilteredActorBeginOverlapping)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentTotalActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFilteredActorBeginOverlapping(Z_Param_Identifier,Z_Param_Actor,Z_Param_CurrentTotalActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHoldOutZoneOverlapObjective::execOnFilteredActorEndOverlapping)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Identifier);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentTotalActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFilteredActorEndOverlapping(Z_Param_Identifier,Z_Param_Actor,Z_Param_CurrentTotalActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHoldOutZoneOverlapObjective::execOnPlayersAliveCountChanged)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Players);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayersAliveCountChanged(Z_Param_Out_Players);
		P_NATIVE_END;
	}
	void USBZHoldOutZoneOverlapObjective::StaticRegisterNativesUSBZHoldOutZoneOverlapObjective()
	{
		UClass* Class = USBZHoldOutZoneOverlapObjective::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFilteredActorBeginOverlapping", &USBZHoldOutZoneOverlapObjective::execOnFilteredActorBeginOverlapping },
			{ "OnFilteredActorEndOverlapping", &USBZHoldOutZoneOverlapObjective::execOnFilteredActorEndOverlapping },
			{ "OnPlayersAliveCountChanged", &USBZHoldOutZoneOverlapObjective::execOnPlayersAliveCountChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping_Statics
	{
		struct SBZHoldOutZoneOverlapObjective_eventOnFilteredActorBeginOverlapping_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutZoneOverlapObjective_eventOnFilteredActorBeginOverlapping_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutZoneOverlapObjective_eventOnFilteredActorBeginOverlapping_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping_Statics::NewProp_CurrentTotalActors = { "CurrentTotalActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutZoneOverlapObjective_eventOnFilteredActorBeginOverlapping_Parms, CurrentTotalActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping_Statics::NewProp_Identifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping_Statics::NewProp_CurrentTotalActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutZoneOverlapObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutZoneOverlapObjective, nullptr, "OnFilteredActorBeginOverlapping", nullptr, nullptr, sizeof(SBZHoldOutZoneOverlapObjective_eventOnFilteredActorBeginOverlapping_Parms), Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping_Statics
	{
		struct SBZHoldOutZoneOverlapObjective_eventOnFilteredActorEndOverlapping_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutZoneOverlapObjective_eventOnFilteredActorEndOverlapping_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutZoneOverlapObjective_eventOnFilteredActorEndOverlapping_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping_Statics::NewProp_CurrentTotalActors = { "CurrentTotalActors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutZoneOverlapObjective_eventOnFilteredActorEndOverlapping_Parms, CurrentTotalActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping_Statics::NewProp_Identifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping_Statics::NewProp_CurrentTotalActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutZoneOverlapObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutZoneOverlapObjective, nullptr, "OnFilteredActorEndOverlapping", nullptr, nullptr, sizeof(SBZHoldOutZoneOverlapObjective_eventOnFilteredActorEndOverlapping_Parms), Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics
	{
		struct SBZHoldOutZoneOverlapObjective_eventOnPlayersAliveCountChanged_Parms
		{
			TArray<UObject*> Players;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Players_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics::NewProp_Players_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutZoneOverlapObjective_eventOnPlayersAliveCountChanged_Parms, Players), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics::NewProp_Players_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics::NewProp_Players_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics::NewProp_Players,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutZoneOverlapObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutZoneOverlapObjective, nullptr, "OnPlayersAliveCountChanged", nullptr, nullptr, sizeof(SBZHoldOutZoneOverlapObjective_eventOnPlayersAliveCountChanged_Parms), Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_NoRegister()
	{
		return USBZHoldOutZoneOverlapObjective::StaticClass();
	}
	struct Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePlayerCount_MetaData[];
#endif
		static void NewProp_bUsePlayerCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePlayerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumActorToOverlap_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumActorToOverlap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZHoldOutObjectiveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorBeginOverlapping, "OnFilteredActorBeginOverlapping" }, // 4051438239
		{ &Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnFilteredActorEndOverlapping, "OnFilteredActorEndOverlapping" }, // 2945098869
		{ &Z_Construct_UFunction_USBZHoldOutZoneOverlapObjective_OnPlayersAliveCountChanged, "OnPlayersAliveCountChanged" }, // 1652336595
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHoldOutZoneOverlapObjective.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutZoneOverlapObjective.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_TriggerVolumeActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutZoneOverlapObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutZoneOverlapObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_TriggerVolumeActor = { "TriggerVolumeActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutZoneOverlapObjective, TriggerVolumeActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_TriggerVolumeActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_TriggerVolumeActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_bUsePlayerCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutZoneOverlapObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutZoneOverlapObjective.h" },
	};
#endif
	void Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_bUsePlayerCount_SetBit(void* Obj)
	{
		((USBZHoldOutZoneOverlapObjective*)Obj)->bUsePlayerCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_bUsePlayerCount = { "bUsePlayerCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZHoldOutZoneOverlapObjective), &Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_bUsePlayerCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_bUsePlayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_bUsePlayerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_NumActorToOverlap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutZoneOverlapObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutZoneOverlapObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_NumActorToOverlap = { "NumActorToOverlap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutZoneOverlapObjective, NumActorToOverlap), METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_NumActorToOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_NumActorToOverlap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_TriggerVolumeActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_bUsePlayerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::NewProp_NumActorToOverlap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHoldOutZoneOverlapObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::ClassParams = {
		&USBZHoldOutZoneOverlapObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHoldOutZoneOverlapObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHoldOutZoneOverlapObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHoldOutZoneOverlapObjective, 1843124871);
	template<> STARBREEZE_API UClass* StaticClass<USBZHoldOutZoneOverlapObjective>()
	{
		return USBZHoldOutZoneOverlapObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHoldOutZoneOverlapObjective(Z_Construct_UClass_USBZHoldOutZoneOverlapObjective, &USBZHoldOutZoneOverlapObjective::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHoldOutZoneOverlapObjective"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHoldOutZoneOverlapObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
