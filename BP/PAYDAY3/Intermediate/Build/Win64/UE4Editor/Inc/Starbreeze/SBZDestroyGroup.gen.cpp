// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDestroyGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDestroyGroup() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDestroyGroup_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDestroyGroup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnDestroyActorsDoneDynamicDelegate__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
// End Cross Module References
	DEFINE_FUNCTION(ASBZDestroyGroup::execDestroyActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_KeptActors);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_DestroyedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyActors(Z_Param_Out_KeptActors,Z_Param_Out_DestroyedActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDestroyGroup::execMulticast_DestroyActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DestroyActors_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZDestroyGroup::execOnRep_HasDestroyedActors)
	{
		P_GET_UBOOL(Z_Param_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HasDestroyedActors(Z_Param_OldValue);
		P_NATIVE_END;
	}
	static FName NAME_ASBZDestroyGroup_Multicast_DestroyActors = FName(TEXT("Multicast_DestroyActors"));
	void ASBZDestroyGroup::Multicast_DestroyActors()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZDestroyGroup_Multicast_DestroyActors),NULL);
	}
	void ASBZDestroyGroup::StaticRegisterNativesASBZDestroyGroup()
	{
		UClass* Class = ASBZDestroyGroup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyActors", &ASBZDestroyGroup::execDestroyActors },
			{ "Multicast_DestroyActors", &ASBZDestroyGroup::execMulticast_DestroyActors },
			{ "OnRep_HasDestroyedActors", &ASBZDestroyGroup::execOnRep_HasDestroyedActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics
	{
		struct SBZDestroyGroup_eventDestroyActors_Parms
		{
			TArray<AActor*> KeptActors;
			TArray<AActor*> DestroyedActors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeptActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeptActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DestroyedActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::NewProp_KeptActors_Inner = { "KeptActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::NewProp_KeptActors = { "KeptActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDestroyGroup_eventDestroyActors_Parms, KeptActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::NewProp_DestroyedActors_Inner = { "DestroyedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::NewProp_DestroyedActors = { "DestroyedActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDestroyGroup_eventDestroyActors_Parms, DestroyedActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::NewProp_KeptActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::NewProp_KeptActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::NewProp_DestroyedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::NewProp_DestroyedActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDestroyGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDestroyGroup, nullptr, "DestroyActors", nullptr, nullptr, sizeof(SBZDestroyGroup_eventDestroyActors_Parms), Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDestroyGroup_Multicast_DestroyActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDestroyGroup_Multicast_DestroyActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDestroyGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDestroyGroup_Multicast_DestroyActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDestroyGroup, nullptr, "Multicast_DestroyActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDestroyGroup_Multicast_DestroyActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDestroyGroup_Multicast_DestroyActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDestroyGroup_Multicast_DestroyActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDestroyGroup_Multicast_DestroyActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZDestroyGroup_OnRep_HasDestroyedActors_Statics
	{
		struct SBZDestroyGroup_eventOnRep_HasDestroyedActors_Parms
		{
			bool OldValue;
		};
		static void NewProp_OldValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZDestroyGroup_OnRep_HasDestroyedActors_Statics::NewProp_OldValue_SetBit(void* Obj)
	{
		((SBZDestroyGroup_eventOnRep_HasDestroyedActors_Parms*)Obj)->OldValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZDestroyGroup_OnRep_HasDestroyedActors_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDestroyGroup_eventOnRep_HasDestroyedActors_Parms), &Z_Construct_UFunction_ASBZDestroyGroup_OnRep_HasDestroyedActors_Statics::NewProp_OldValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDestroyGroup_OnRep_HasDestroyedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDestroyGroup_OnRep_HasDestroyedActors_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDestroyGroup_OnRep_HasDestroyedActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDestroyGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDestroyGroup_OnRep_HasDestroyedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDestroyGroup, nullptr, "OnRep_HasDestroyedActors", nullptr, nullptr, sizeof(SBZDestroyGroup_eventOnRep_HasDestroyedActors_Parms), Z_Construct_UFunction_ASBZDestroyGroup_OnRep_HasDestroyedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDestroyGroup_OnRep_HasDestroyedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDestroyGroup_OnRep_HasDestroyedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDestroyGroup_OnRep_HasDestroyedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDestroyGroup_OnRep_HasDestroyedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDestroyGroup_OnRep_HasDestroyedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZDestroyGroup_NoRegister()
	{
		return ASBZDestroyGroup::StaticClass();
	}
	struct Z_Construct_UClass_ASBZDestroyGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDestroyActorsDone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDestroyActorsDone;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToDestroy_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfActorsToDestroyPerDifficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NumOfActorsToDestroyPerDifficulty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldDestroyOnBeginplay_MetaData[];
#endif
		static void NewProp_bShouldDestroyOnBeginplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDestroyOnBeginplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDestroyedNonReplicatedActors_MetaData[];
#endif
		static void NewProp_bHasDestroyedNonReplicatedActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDestroyedNonReplicatedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZDestroyGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZDestroyGroup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZDestroyGroup_DestroyActors, "DestroyActors" }, // 1458204667
		{ &Z_Construct_UFunction_ASBZDestroyGroup_Multicast_DestroyActors, "Multicast_DestroyActors" }, // 1589409418
		{ &Z_Construct_UFunction_ASBZDestroyGroup_OnRep_HasDestroyedActors, "OnRep_HasDestroyedActors" }, // 2007947388
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDestroyGroup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDestroyGroup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDestroyGroup.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_OnDestroyActorsDone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDestroyGroup" },
		{ "ModuleRelativePath", "Public/SBZDestroyGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_OnDestroyActorsDone = { "OnDestroyActorsDone", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDestroyGroup, OnDestroyActorsDone), Z_Construct_UDelegateFunction_Starbreeze_SBZOnDestroyActorsDoneDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_OnDestroyActorsDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_OnDestroyActorsDone_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_ActorsToDestroy_Inner = { "ActorsToDestroy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_ActorsToDestroy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDestroyGroup" },
		{ "ModuleRelativePath", "Public/SBZDestroyGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_ActorsToDestroy = { "ActorsToDestroy", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDestroyGroup, ActorsToDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_ActorsToDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_ActorsToDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_NumOfActorsToDestroyPerDifficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDestroyGroup" },
		{ "ModuleRelativePath", "Public/SBZDestroyGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_NumOfActorsToDestroyPerDifficulty = { "NumOfActorsToDestroyPerDifficulty", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(NumOfActorsToDestroyPerDifficulty, ASBZDestroyGroup), STRUCT_OFFSET(ASBZDestroyGroup, NumOfActorsToDestroyPerDifficulty), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_NumOfActorsToDestroyPerDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_NumOfActorsToDestroyPerDifficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_bShouldDestroyOnBeginplay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDestroyGroup" },
		{ "ModuleRelativePath", "Public/SBZDestroyGroup.h" },
	};
#endif
	void Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_bShouldDestroyOnBeginplay_SetBit(void* Obj)
	{
		((ASBZDestroyGroup*)Obj)->bShouldDestroyOnBeginplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_bShouldDestroyOnBeginplay = { "bShouldDestroyOnBeginplay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZDestroyGroup), &Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_bShouldDestroyOnBeginplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_bShouldDestroyOnBeginplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_bShouldDestroyOnBeginplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_bHasDestroyedNonReplicatedActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDestroyGroup" },
		{ "ModuleRelativePath", "Public/SBZDestroyGroup.h" },
	};
#endif
	void Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_bHasDestroyedNonReplicatedActors_SetBit(void* Obj)
	{
		((ASBZDestroyGroup*)Obj)->bHasDestroyedNonReplicatedActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_bHasDestroyedNonReplicatedActors = { "bHasDestroyedNonReplicatedActors", "OnRep_HasDestroyedActors", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZDestroyGroup), &Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_bHasDestroyedNonReplicatedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_bHasDestroyedNonReplicatedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_bHasDestroyedNonReplicatedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDestroyGroup" },
		{ "ModuleRelativePath", "Public/SBZDestroyGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZDestroyGroup, Seed), METADATA_PARAMS(Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_Seed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZDestroyGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_OnDestroyActorsDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_ActorsToDestroy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_ActorsToDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_NumOfActorsToDestroyPerDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_bShouldDestroyOnBeginplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_bHasDestroyedNonReplicatedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZDestroyGroup_Statics::NewProp_Seed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZDestroyGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZDestroyGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZDestroyGroup_Statics::ClassParams = {
		&ASBZDestroyGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZDestroyGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDestroyGroup_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZDestroyGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDestroyGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZDestroyGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZDestroyGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZDestroyGroup, 3650288453);
	template<> STARBREEZE_API UClass* StaticClass<ASBZDestroyGroup>()
	{
		return ASBZDestroyGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZDestroyGroup(Z_Construct_UClass_ASBZDestroyGroup, &ASBZDestroyGroup::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZDestroyGroup"), false, nullptr, nullptr, nullptr);

	void ASBZDestroyGroup::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bHasDestroyedNonReplicatedActors(TEXT("bHasDestroyedNonReplicatedActors"));

		const bool bIsValid = true
			&& Name_bHasDestroyedNonReplicatedActors == ClassReps[(int32)ENetFields_Private::bHasDestroyedNonReplicatedActors].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZDestroyGroup"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZDestroyGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
