// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPawnSpawnPredefined.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPawnSpawnPredefined() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnPredefined_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnPredefined();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnSpawnRequestHandle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZKilledPawnSpawnPredefinedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZSpawnRequestCompletedDelegate__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnSpawnRequest();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPawnSpawnPredefined::execSpawnPredefined)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZPawnSpawnRequestHandle*)Z_Param__Result=P_THIS->SpawnPredefined();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPawnSpawnPredefined::execSpawnPredefinedLatent)
	{
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnPredefinedLatent(Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	static FName NAME_ASBZPawnSpawnPredefined_OnSelectedTick = FName(TEXT("OnSelectedTick"));
	void ASBZPawnSpawnPredefined::OnSelectedTick()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPawnSpawnPredefined_OnSelectedTick),NULL);
	}
	void ASBZPawnSpawnPredefined::StaticRegisterNativesASBZPawnSpawnPredefined()
	{
		UClass* Class = ASBZPawnSpawnPredefined::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnPredefined", &ASBZPawnSpawnPredefined::execSpawnPredefined },
			{ "SpawnPredefinedLatent", &ASBZPawnSpawnPredefined::execSpawnPredefinedLatent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPawnSpawnPredefined_OnSelectedTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPawnSpawnPredefined_OnSelectedTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPawnSpawnPredefined.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPawnSpawnPredefined_OnSelectedTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPawnSpawnPredefined, nullptr, "OnSelectedTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPawnSpawnPredefined_OnSelectedTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPawnSpawnPredefined_OnSelectedTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPawnSpawnPredefined_OnSelectedTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPawnSpawnPredefined_OnSelectedTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefined_Statics
	{
		struct SBZPawnSpawnPredefined_eventSpawnPredefined_Parms
		{
			FSBZPawnSpawnRequestHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefined_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPawnSpawnPredefined_eventSpawnPredefined_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZPawnSpawnRequestHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefined_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefined_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefined_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPawnSpawnPredefined.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefined_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPawnSpawnPredefined, nullptr, "SpawnPredefined", nullptr, nullptr, sizeof(SBZPawnSpawnPredefined_eventSpawnPredefined_Parms), Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefined_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefined_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefined_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefined_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefined()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefined_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefinedLatent_Statics
	{
		struct SBZPawnSpawnPredefined_eventSpawnPredefinedLatent_Parms
		{
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefinedLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPawnSpawnPredefined_eventSpawnPredefinedLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefinedLatent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefinedLatent_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefinedLatent_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnPredefined.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefinedLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPawnSpawnPredefined, nullptr, "SpawnPredefinedLatent", nullptr, nullptr, sizeof(SBZPawnSpawnPredefined_eventSpawnPredefinedLatent_Parms), Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefinedLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefinedLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefinedLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefinedLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefinedLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefinedLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPawnSpawnPredefined_NoRegister()
	{
		return ASBZPawnSpawnPredefined::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnOnBeginPlay_MetaData[];
#endif
		static void NewProp_bSpawnOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnOnBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSpawningMethod_MetaData[];
#endif
		static void NewProp_bOverrideSpawningMethod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSpawningMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverridenSpawningMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenSpawningMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OverridenSpawningMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRandomMeshScale_MetaData[];
#endif
		static void NewProp_bEnableRandomMeshScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRandomMeshScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KilledPawnDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_KilledPawnDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredefinedRequestActionActorRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PredefinedRequestActionActorRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedPawnDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SpawnedPawnDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredefinedPawnRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredefinedPawnRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPawnSpawnBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPawnSpawnPredefined_OnSelectedTick, "OnSelectedTick" }, // 1200287519
		{ &Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefined, "SpawnPredefined" }, // 2192668121
		{ &Z_Construct_UFunction_ASBZPawnSpawnPredefined_SpawnPredefinedLatent, "SpawnPredefinedLatent" }, // 1747935687
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPawnSpawnPredefined.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnPredefined.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bSpawnOnBeginPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnPredefined" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnPredefined.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bSpawnOnBeginPlay_SetBit(void* Obj)
	{
		((ASBZPawnSpawnPredefined*)Obj)->bSpawnOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bSpawnOnBeginPlay = { "bSpawnOnBeginPlay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPawnSpawnPredefined), &Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bSpawnOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bSpawnOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bSpawnOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bOverrideSpawningMethod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnPredefined" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnPredefined.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bOverrideSpawningMethod_SetBit(void* Obj)
	{
		((ASBZPawnSpawnPredefined*)Obj)->bOverrideSpawningMethod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bOverrideSpawningMethod = { "bOverrideSpawningMethod", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPawnSpawnPredefined), &Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bOverrideSpawningMethod_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bOverrideSpawningMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bOverrideSpawningMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_OverridenSpawningMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_OverridenSpawningMethod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnPredefined" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnPredefined.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_OverridenSpawningMethod = { "OverridenSpawningMethod", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPawnSpawnPredefined, OverridenSpawningMethod), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_OverridenSpawningMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_OverridenSpawningMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bEnableRandomMeshScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnPredefined" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnPredefined.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bEnableRandomMeshScale_SetBit(void* Obj)
	{
		((ASBZPawnSpawnPredefined*)Obj)->bEnableRandomMeshScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bEnableRandomMeshScale = { "bEnableRandomMeshScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPawnSpawnPredefined), &Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bEnableRandomMeshScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bEnableRandomMeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bEnableRandomMeshScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_KilledPawnDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnPredefined" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnPredefined.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_KilledPawnDelegate = { "KilledPawnDelegate", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPawnSpawnPredefined, KilledPawnDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZKilledPawnSpawnPredefinedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_KilledPawnDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_KilledPawnDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_PredefinedRequestActionActorRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnPredefined" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnPredefined.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_PredefinedRequestActionActorRef = { "PredefinedRequestActionActorRef", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPawnSpawnPredefined, PredefinedRequestActionActorRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_PredefinedRequestActionActorRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_PredefinedRequestActionActorRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_SpawnedPawnDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnPredefined" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnPredefined.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_SpawnedPawnDelegate = { "SpawnedPawnDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPawnSpawnPredefined, SpawnedPawnDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZSpawnRequestCompletedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_SpawnedPawnDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_SpawnedPawnDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_PredefinedPawnRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnSpawnPredefined" },
		{ "ModuleRelativePath", "Public/SBZPawnSpawnPredefined.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_PredefinedPawnRequest = { "PredefinedPawnRequest", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPawnSpawnPredefined, PredefinedPawnRequest), Z_Construct_UScriptStruct_FSBZPawnSpawnRequest, METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_PredefinedPawnRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_PredefinedPawnRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bSpawnOnBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bOverrideSpawningMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_OverridenSpawningMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_OverridenSpawningMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_bEnableRandomMeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_KilledPawnDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_PredefinedRequestActionActorRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_SpawnedPawnDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::NewProp_PredefinedPawnRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPawnSpawnPredefined>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::ClassParams = {
		&ASBZPawnSpawnPredefined::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPawnSpawnPredefined()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPawnSpawnPredefined_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPawnSpawnPredefined, 1439692417);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPawnSpawnPredefined>()
	{
		return ASBZPawnSpawnPredefined::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPawnSpawnPredefined(Z_Construct_UClass_ASBZPawnSpawnPredefined, &ASBZPawnSpawnPredefined::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPawnSpawnPredefined"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPawnSpawnPredefined);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
