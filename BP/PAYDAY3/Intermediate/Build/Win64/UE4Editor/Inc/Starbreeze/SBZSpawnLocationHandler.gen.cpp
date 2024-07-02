// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnLocationHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnLocationHandler() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpawnLocationHandler_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpawnLocationHandler();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnLocationSelectedEvent__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZSpawnLocationHandlerDelegate__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnLocation();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackableActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInteractionActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZSpawnLocationHandler::execOnServerImportantLootPickedUp)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerImportantLootPickedUp(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSpawnLocationHandler::execTriggerSpawnManually)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerSpawnManually();
		P_NATIVE_END;
	}
	void ASBZSpawnLocationHandler::StaticRegisterNativesASBZSpawnLocationHandler()
	{
		UClass* Class = ASBZSpawnLocationHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnServerImportantLootPickedUp", &ASBZSpawnLocationHandler::execOnServerImportantLootPickedUp },
			{ "TriggerSpawnManually", &ASBZSpawnLocationHandler::execTriggerSpawnManually },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics
	{
		struct SBZSpawnLocationHandler_eventOnServerImportantLootPickedUp_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnLocationHandler_eventOnServerImportantLootPickedUp_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnLocationHandler_eventOnServerImportantLootPickedUp_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZSpawnLocationHandler_eventOnServerImportantLootPickedUp_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSpawnLocationHandler_eventOnServerImportantLootPickedUp_Parms), &Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnLocationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSpawnLocationHandler, nullptr, "OnServerImportantLootPickedUp", nullptr, nullptr, sizeof(SBZSpawnLocationHandler_eventOnServerImportantLootPickedUp_Parms), Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSpawnLocationHandler_TriggerSpawnManually_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSpawnLocationHandler_TriggerSpawnManually_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnLocationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSpawnLocationHandler_TriggerSpawnManually_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSpawnLocationHandler, nullptr, "TriggerSpawnManually", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSpawnLocationHandler_TriggerSpawnManually_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpawnLocationHandler_TriggerSpawnManually_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSpawnLocationHandler_TriggerSpawnManually()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSpawnLocationHandler_TriggerSpawnManually_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSpawnLocationHandler_NoRegister()
	{
		return ASBZSpawnLocationHandler::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSpawnLocationHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLocationSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLocationSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKeyItemPickedUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyItemPickedUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldRandomizeOnBeginPlay_MetaData[];
#endif
		static void NewProp_bShouldRandomizeOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldRandomizeOnBeginPlay;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocationArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnLocationArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackableActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackableActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackableActorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackableActorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HackableActorArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackableEmailIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HackableEmailIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportantItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ImportantItem;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomLootToSpawnMap_ValueProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RandomLootToSpawnMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomLootToSpawnMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RandomLootToSpawnMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOnlyOneLocation_MetaData[];
#endif
		static void NewProp_bUseOnlyOneLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOnlyOneLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSpawnLocationHandler_OnServerImportantLootPickedUp, "OnServerImportantLootPickedUp" }, // 4168301940
		{ &Z_Construct_UFunction_ASBZSpawnLocationHandler_TriggerSpawnManually, "TriggerSpawnManually" }, // 4172260078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSpawnLocationHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocationHandler.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_OnLocationSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnLocationHandler" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_OnLocationSelected = { "OnLocationSelected", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnLocationHandler, OnLocationSelected), Z_Construct_UDelegateFunction_Starbreeze_SBZOnLocationSelectedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_OnLocationSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_OnLocationSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_OnKeyItemPickedUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnLocationHandler" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_OnKeyItemPickedUp = { "OnKeyItemPickedUp", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnLocationHandler, OnKeyItemPickedUp), Z_Construct_UDelegateFunction_Starbreeze_SBZSpawnLocationHandlerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_OnKeyItemPickedUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_OnKeyItemPickedUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_bShouldRandomizeOnBeginPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnLocationHandler" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocationHandler.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_bShouldRandomizeOnBeginPlay_SetBit(void* Obj)
	{
		((ASBZSpawnLocationHandler*)Obj)->bShouldRandomizeOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_bShouldRandomizeOnBeginPlay = { "bShouldRandomizeOnBeginPlay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSpawnLocationHandler), &Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_bShouldRandomizeOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_bShouldRandomizeOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_bShouldRandomizeOnBeginPlay_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_SpawnLocationArray_Inner = { "SpawnLocationArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSpawnLocation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_SpawnLocationArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnLocationHandler" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_SpawnLocationArray = { "SpawnLocationArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnLocationHandler, SpawnLocationArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_SpawnLocationArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_SpawnLocationArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnLocationHandler" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnLocationHandler, Seed), METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnLocationHandler" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableActor = { "HackableActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnLocationHandler, HackableActor), Z_Construct_UClass_ASBZHackableActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableActor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableActorArray_Inner = { "HackableActorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZHackableActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableActorArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnLocationHandler" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableActorArray = { "HackableActorArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnLocationHandler, HackableActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableActorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableActorArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableEmailIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnLocationHandler" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableEmailIndex = { "HackableEmailIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnLocationHandler, HackableEmailIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableEmailIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableEmailIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_ImportantItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnLocationHandler" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_ImportantItem = { "ImportantItem", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnLocationHandler, ImportantItem), Z_Construct_UClass_ASBZInteractionActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_ImportantItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_ImportantItem_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_RandomLootToSpawnMap_ValueProp = { "RandomLootToSpawnMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_RandomLootToSpawnMap_Key_KeyProp = { "RandomLootToSpawnMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_RandomLootToSpawnMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnLocationHandler" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_RandomLootToSpawnMap = { "RandomLootToSpawnMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnLocationHandler, RandomLootToSpawnMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_RandomLootToSpawnMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_RandomLootToSpawnMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_RandomIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnLocationHandler" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocationHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_RandomIndex = { "RandomIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpawnLocationHandler, RandomIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_RandomIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_RandomIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_bUseOnlyOneLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnLocationHandler" },
		{ "ModuleRelativePath", "Public/SBZSpawnLocationHandler.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_bUseOnlyOneLocation_SetBit(void* Obj)
	{
		((ASBZSpawnLocationHandler*)Obj)->bUseOnlyOneLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_bUseOnlyOneLocation = { "bUseOnlyOneLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSpawnLocationHandler), &Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_bUseOnlyOneLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_bUseOnlyOneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_bUseOnlyOneLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_OnLocationSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_OnKeyItemPickedUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_bShouldRandomizeOnBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_SpawnLocationArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_SpawnLocationArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableActorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableActorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_HackableEmailIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_ImportantItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_RandomLootToSpawnMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_RandomLootToSpawnMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_RandomLootToSpawnMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_RandomIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::NewProp_bUseOnlyOneLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSpawnLocationHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::ClassParams = {
		&ASBZSpawnLocationHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSpawnLocationHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSpawnLocationHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSpawnLocationHandler, 1150507509);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSpawnLocationHandler>()
	{
		return ASBZSpawnLocationHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSpawnLocationHandler(Z_Construct_UClass_ASBZSpawnLocationHandler, &ASBZSpawnLocationHandler::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSpawnLocationHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSpawnLocationHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
