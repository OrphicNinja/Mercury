// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3PawnSpawnGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3PawnSpawnGroup() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_APD3PawnSpawnGroup_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_APD3PawnSpawnGroup();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnGroup();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnSpawnRequestHandle();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnBase_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZGroupSpawnedPawnDelegateBP__DelegateSignature();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(APD3PawnSpawnGroup::execOnSpawnFinished)
	{
		P_GET_STRUCT_REF(FSBZPawnSpawnRequestHandle,Z_Param_Out_Handle);
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_OBJECT(ASBZPawnSpawnBase,Z_Param_Spawner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpawnFinished(Z_Param_Out_Handle,Z_Param_Pawn,Z_Param_Spawner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3PawnSpawnGroup::execSetEnabledForAssault)
	{
		P_GET_UBOOL(Z_Param_bInIsEnabledForAssault);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabledForAssault(Z_Param_bInIsEnabledForAssault);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APD3PawnSpawnGroup::execSetEnabledForCivilians)
	{
		P_GET_UBOOL(Z_Param_bInIsEnabledForCivilians);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabledForCivilians(Z_Param_bInIsEnabledForCivilians);
		P_NATIVE_END;
	}
	void APD3PawnSpawnGroup::StaticRegisterNativesAPD3PawnSpawnGroup()
	{
		UClass* Class = APD3PawnSpawnGroup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSpawnFinished", &APD3PawnSpawnGroup::execOnSpawnFinished },
			{ "SetEnabledForAssault", &APD3PawnSpawnGroup::execSetEnabledForAssault },
			{ "SetEnabledForCivilians", &APD3PawnSpawnGroup::execSetEnabledForCivilians },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics
	{
		struct PD3PawnSpawnGroup_eventOnSpawnFinished_Parms
		{
			FSBZPawnSpawnRequestHandle Handle;
			APawn* Pawn;
			ASBZPawnSpawnBase* Spawner;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spawner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3PawnSpawnGroup_eventOnSpawnFinished_Parms, Handle), Z_Construct_UScriptStruct_FSBZPawnSpawnRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3PawnSpawnGroup_eventOnSpawnFinished_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3PawnSpawnGroup_eventOnSpawnFinished_Parms, Spawner), Z_Construct_UClass_ASBZPawnSpawnBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::NewProp_Spawner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3PawnSpawnGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3PawnSpawnGroup, nullptr, "OnSpawnFinished", nullptr, nullptr, sizeof(PD3PawnSpawnGroup_eventOnSpawnFinished_Parms), Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForAssault_Statics
	{
		struct PD3PawnSpawnGroup_eventSetEnabledForAssault_Parms
		{
			bool bInIsEnabledForAssault;
		};
		static void NewProp_bInIsEnabledForAssault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsEnabledForAssault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForAssault_Statics::NewProp_bInIsEnabledForAssault_SetBit(void* Obj)
	{
		((PD3PawnSpawnGroup_eventSetEnabledForAssault_Parms*)Obj)->bInIsEnabledForAssault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForAssault_Statics::NewProp_bInIsEnabledForAssault = { "bInIsEnabledForAssault", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3PawnSpawnGroup_eventSetEnabledForAssault_Parms), &Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForAssault_Statics::NewProp_bInIsEnabledForAssault_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForAssault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForAssault_Statics::NewProp_bInIsEnabledForAssault,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForAssault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3PawnSpawnGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForAssault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3PawnSpawnGroup, nullptr, "SetEnabledForAssault", nullptr, nullptr, sizeof(PD3PawnSpawnGroup_eventSetEnabledForAssault_Parms), Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForAssault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForAssault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForAssault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForAssault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForAssault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForAssault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForCivilians_Statics
	{
		struct PD3PawnSpawnGroup_eventSetEnabledForCivilians_Parms
		{
			bool bInIsEnabledForCivilians;
		};
		static void NewProp_bInIsEnabledForCivilians_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsEnabledForCivilians;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForCivilians_Statics::NewProp_bInIsEnabledForCivilians_SetBit(void* Obj)
	{
		((PD3PawnSpawnGroup_eventSetEnabledForCivilians_Parms*)Obj)->bInIsEnabledForCivilians = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForCivilians_Statics::NewProp_bInIsEnabledForCivilians = { "bInIsEnabledForCivilians", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3PawnSpawnGroup_eventSetEnabledForCivilians_Parms), &Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForCivilians_Statics::NewProp_bInIsEnabledForCivilians_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForCivilians_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForCivilians_Statics::NewProp_bInIsEnabledForCivilians,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForCivilians_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3PawnSpawnGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForCivilians_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APD3PawnSpawnGroup, nullptr, "SetEnabledForCivilians", nullptr, nullptr, sizeof(PD3PawnSpawnGroup_eventSetEnabledForCivilians_Parms), Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForCivilians_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForCivilians_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForCivilians_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForCivilians_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForCivilians()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForCivilians_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APD3PawnSpawnGroup_NoRegister()
	{
		return APD3PawnSpawnGroup::StaticClass();
	}
	struct Z_Construct_UClass_APD3PawnSpawnGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPawnSpawnedBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPawnSpawnedBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabledForAssault_MetaData[];
#endif
		static void NewProp_bIsEnabledForAssault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabledForAssault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabledForCivilians_MetaData[];
#endif
		static void NewProp_bIsEnabledForCivilians_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabledForCivilians;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedPawnTypeContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllowedPawnTypeContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APD3PawnSpawnGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPawnSpawnGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APD3PawnSpawnGroup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APD3PawnSpawnGroup_OnSpawnFinished, "OnSpawnFinished" }, // 1846773884
		{ &Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForAssault, "SetEnabledForAssault" }, // 2899671313
		{ &Z_Construct_UFunction_APD3PawnSpawnGroup_SetEnabledForCivilians, "SetEnabledForCivilians" }, // 2150383603
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3PawnSpawnGroup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3PawnSpawnGroup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3PawnSpawnGroup.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_OnPawnSpawnedBP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PawnSpawnGroup" },
		{ "ModuleRelativePath", "Public/PD3PawnSpawnGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_OnPawnSpawnedBP = { "OnPawnSpawnedBP", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3PawnSpawnGroup, OnPawnSpawnedBP), Z_Construct_UDelegateFunction_Starbreeze_SBZGroupSpawnedPawnDelegateBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_OnPawnSpawnedBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_OnPawnSpawnedBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_bIsEnabledForAssault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PawnSpawnGroup" },
		{ "ModuleRelativePath", "Public/PD3PawnSpawnGroup.h" },
	};
#endif
	void Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_bIsEnabledForAssault_SetBit(void* Obj)
	{
		((APD3PawnSpawnGroup*)Obj)->bIsEnabledForAssault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_bIsEnabledForAssault = { "bIsEnabledForAssault", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APD3PawnSpawnGroup), &Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_bIsEnabledForAssault_SetBit, METADATA_PARAMS(Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_bIsEnabledForAssault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_bIsEnabledForAssault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_bIsEnabledForCivilians_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PawnSpawnGroup" },
		{ "ModuleRelativePath", "Public/PD3PawnSpawnGroup.h" },
	};
#endif
	void Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_bIsEnabledForCivilians_SetBit(void* Obj)
	{
		((APD3PawnSpawnGroup*)Obj)->bIsEnabledForCivilians = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_bIsEnabledForCivilians = { "bIsEnabledForCivilians", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APD3PawnSpawnGroup), &Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_bIsEnabledForCivilians_SetBit, METADATA_PARAMS(Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_bIsEnabledForCivilians_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_bIsEnabledForCivilians_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_AllowedPawnTypeContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PawnSpawnGroup" },
		{ "ModuleRelativePath", "Public/PD3PawnSpawnGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_AllowedPawnTypeContainer = { "AllowedPawnTypeContainer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APD3PawnSpawnGroup, AllowedPawnTypeContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_AllowedPawnTypeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_AllowedPawnTypeContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APD3PawnSpawnGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_OnPawnSpawnedBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_bIsEnabledForAssault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_bIsEnabledForCivilians,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APD3PawnSpawnGroup_Statics::NewProp_AllowedPawnTypeContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APD3PawnSpawnGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APD3PawnSpawnGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APD3PawnSpawnGroup_Statics::ClassParams = {
		&APD3PawnSpawnGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APD3PawnSpawnGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APD3PawnSpawnGroup_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APD3PawnSpawnGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APD3PawnSpawnGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APD3PawnSpawnGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APD3PawnSpawnGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APD3PawnSpawnGroup, 2150720149);
	template<> STARBREEZE_API UClass* StaticClass<APD3PawnSpawnGroup>()
	{
		return APD3PawnSpawnGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APD3PawnSpawnGroup(Z_Construct_UClass_APD3PawnSpawnGroup, &APD3PawnSpawnGroup::StaticClass, TEXT("/Script/Starbreeze"), TEXT("APD3PawnSpawnGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APD3PawnSpawnGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
