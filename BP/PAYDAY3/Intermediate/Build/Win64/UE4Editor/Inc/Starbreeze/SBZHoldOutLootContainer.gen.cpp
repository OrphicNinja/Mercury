// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutLootContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutLootContainer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutLootContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutLootContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplicatedBinaryStateActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutLoot_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZHoldOutLootContainer::execMulticast_SetOpen)
	{
		P_GET_UBOOL(Z_Param_bInIsOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetOpen_Implementation(Z_Param_bInIsOpen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutLootContainer::execOnRep_Open)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Open();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutLootContainer::execSetOpen)
	{
		P_GET_UBOOL(Z_Param_bInIsOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOpen(Z_Param_bInIsOpen);
		P_NATIVE_END;
	}
	static FName NAME_ASBZHoldOutLootContainer_Multicast_SetOpen = FName(TEXT("Multicast_SetOpen"));
	void ASBZHoldOutLootContainer::Multicast_SetOpen(bool bInIsOpen)
	{
		SBZHoldOutLootContainer_eventMulticast_SetOpen_Parms Parms;
		Parms.bInIsOpen=bInIsOpen ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHoldOutLootContainer_Multicast_SetOpen),&Parms);
	}
	static FName NAME_ASBZHoldOutLootContainer_OnOpenStateChanged = FName(TEXT("OnOpenStateChanged"));
	void ASBZHoldOutLootContainer::OnOpenStateChanged(bool bInIsOpen, bool bDoCosmetics)
	{
		SBZHoldOutLootContainer_eventOnOpenStateChanged_Parms Parms;
		Parms.bInIsOpen=bInIsOpen ? true : false;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHoldOutLootContainer_OnOpenStateChanged),&Parms);
	}
	void ASBZHoldOutLootContainer::StaticRegisterNativesASBZHoldOutLootContainer()
	{
		UClass* Class = ASBZHoldOutLootContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetOpen", &ASBZHoldOutLootContainer::execMulticast_SetOpen },
			{ "OnRep_Open", &ASBZHoldOutLootContainer::execOnRep_Open },
			{ "SetOpen", &ASBZHoldOutLootContainer::execSetOpen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZHoldOutLootContainer_Multicast_SetOpen_Statics
	{
		static void NewProp_bInIsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZHoldOutLootContainer_Multicast_SetOpen_Statics::NewProp_bInIsOpen_SetBit(void* Obj)
	{
		((SBZHoldOutLootContainer_eventMulticast_SetOpen_Parms*)Obj)->bInIsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHoldOutLootContainer_Multicast_SetOpen_Statics::NewProp_bInIsOpen = { "bInIsOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHoldOutLootContainer_eventMulticast_SetOpen_Parms), &Z_Construct_UFunction_ASBZHoldOutLootContainer_Multicast_SetOpen_Statics::NewProp_bInIsOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutLootContainer_Multicast_SetOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutLootContainer_Multicast_SetOpen_Statics::NewProp_bInIsOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutLootContainer_Multicast_SetOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutLootContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutLootContainer_Multicast_SetOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutLootContainer, nullptr, "Multicast_SetOpen", nullptr, nullptr, sizeof(SBZHoldOutLootContainer_eventMulticast_SetOpen_Parms), Z_Construct_UFunction_ASBZHoldOutLootContainer_Multicast_SetOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutLootContainer_Multicast_SetOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutLootContainer_Multicast_SetOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutLootContainer_Multicast_SetOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutLootContainer_Multicast_SetOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutLootContainer_Multicast_SetOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics
	{
		static void NewProp_bInIsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsOpen;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::NewProp_bInIsOpen_SetBit(void* Obj)
	{
		((SBZHoldOutLootContainer_eventOnOpenStateChanged_Parms*)Obj)->bInIsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::NewProp_bInIsOpen = { "bInIsOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHoldOutLootContainer_eventOnOpenStateChanged_Parms), &Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::NewProp_bInIsOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZHoldOutLootContainer_eventOnOpenStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHoldOutLootContainer_eventOnOpenStateChanged_Parms), &Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::NewProp_bInIsOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutLootContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutLootContainer, nullptr, "OnOpenStateChanged", nullptr, nullptr, sizeof(SBZHoldOutLootContainer_eventOnOpenStateChanged_Parms), Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutLootContainer_OnRep_Open_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutLootContainer_OnRep_Open_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutLootContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutLootContainer_OnRep_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutLootContainer, nullptr, "OnRep_Open", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutLootContainer_OnRep_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutLootContainer_OnRep_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutLootContainer_OnRep_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutLootContainer_OnRep_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutLootContainer_SetOpen_Statics
	{
		struct SBZHoldOutLootContainer_eventSetOpen_Parms
		{
			bool bInIsOpen;
		};
		static void NewProp_bInIsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZHoldOutLootContainer_SetOpen_Statics::NewProp_bInIsOpen_SetBit(void* Obj)
	{
		((SBZHoldOutLootContainer_eventSetOpen_Parms*)Obj)->bInIsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHoldOutLootContainer_SetOpen_Statics::NewProp_bInIsOpen = { "bInIsOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHoldOutLootContainer_eventSetOpen_Parms), &Z_Construct_UFunction_ASBZHoldOutLootContainer_SetOpen_Statics::NewProp_bInIsOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutLootContainer_SetOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutLootContainer_SetOpen_Statics::NewProp_bInIsOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutLootContainer_SetOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutLootContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutLootContainer_SetOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutLootContainer, nullptr, "SetOpen", nullptr, nullptr, sizeof(SBZHoldOutLootContainer_eventSetOpen_Parms), Z_Construct_UFunction_ASBZHoldOutLootContainer_SetOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutLootContainer_SetOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutLootContainer_SetOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutLootContainer_SetOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutLootContainer_SetOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutLootContainer_SetOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZHoldOutLootContainer_NoRegister()
	{
		return ASBZHoldOutLootContainer::StaticClass();
	}
	struct Z_Construct_UClass_ASBZHoldOutLootContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LootSpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LootSpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LootClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LootClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedLoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedLoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOpen_MetaData[];
#endif
		static void NewProp_bIsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicatedIsOpen_MetaData[];
#endif
		static void NewProp_bReplicatedIsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicatedIsOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZReplicatedBinaryStateActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZHoldOutLootContainer_Multicast_SetOpen, "Multicast_SetOpen" }, // 1750775573
		{ &Z_Construct_UFunction_ASBZHoldOutLootContainer_OnOpenStateChanged, "OnOpenStateChanged" }, // 1862434240
		{ &Z_Construct_UFunction_ASBZHoldOutLootContainer_OnRep_Open, "OnRep_Open" }, // 1636538492
		{ &Z_Construct_UFunction_ASBZHoldOutLootContainer_SetOpen, "SetOpen" }, // 3950680980
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHoldOutLootContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutLootContainer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_LootSpawnLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutLootContainer" },
		{ "ModuleRelativePath", "Public/SBZHoldOutLootContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_LootSpawnLocation = { "LootSpawnLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutLootContainer, LootSpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_LootSpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_LootSpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_LootClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutLootContainer" },
		{ "ModuleRelativePath", "Public/SBZHoldOutLootContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_LootClass = { "LootClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutLootContainer, LootClass), Z_Construct_UClass_ASBZHoldOutLoot_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_LootClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_LootClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_SpawnedLoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutLootContainer" },
		{ "ModuleRelativePath", "Public/SBZHoldOutLootContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_SpawnedLoot = { "SpawnedLoot", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutLootContainer, SpawnedLoot), Z_Construct_UClass_ASBZHoldOutLoot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_SpawnedLoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_SpawnedLoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_bIsOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutLootContainer" },
		{ "ModuleRelativePath", "Public/SBZHoldOutLootContainer.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_bIsOpen_SetBit(void* Obj)
	{
		((ASBZHoldOutLootContainer*)Obj)->bIsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHoldOutLootContainer), &Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_bIsOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_bIsOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_bReplicatedIsOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutLootContainer" },
		{ "ModuleRelativePath", "Public/SBZHoldOutLootContainer.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_bReplicatedIsOpen_SetBit(void* Obj)
	{
		((ASBZHoldOutLootContainer*)Obj)->bReplicatedIsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_bReplicatedIsOpen = { "bReplicatedIsOpen", "OnRep_Open", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHoldOutLootContainer), &Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_bReplicatedIsOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_bReplicatedIsOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_bReplicatedIsOpen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_LootSpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_LootClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_SpawnedLoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_bIsOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::NewProp_bReplicatedIsOpen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZHoldOutLootContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::ClassParams = {
		&ASBZHoldOutLootContainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZHoldOutLootContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZHoldOutLootContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZHoldOutLootContainer, 2058664925);
	template<> STARBREEZE_API UClass* StaticClass<ASBZHoldOutLootContainer>()
	{
		return ASBZHoldOutLootContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZHoldOutLootContainer(Z_Construct_UClass_ASBZHoldOutLootContainer, &ASBZHoldOutLootContainer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZHoldOutLootContainer"), false, nullptr, nullptr, nullptr);

	void ASBZHoldOutLootContainer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bReplicatedIsOpen(TEXT("bReplicatedIsOpen"));

		const bool bIsValid = true
			&& Name_bReplicatedIsOpen == ClassReps[(int32)ENetFields_Private::bReplicatedIsOpen].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZHoldOutLootContainer"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZHoldOutLootContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
