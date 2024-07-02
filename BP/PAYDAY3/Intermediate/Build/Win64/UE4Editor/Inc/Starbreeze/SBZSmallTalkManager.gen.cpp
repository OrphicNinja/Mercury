// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSmallTalkManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSmallTalkManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSmallTalkManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSmallTalkManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISmallTalkCollection_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZSmallTalkManager::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	void USBZSmallTalkManager::StaticRegisterNativesUSBZSmallTalkManager()
	{
		UClass* Class = USBZSmallTalkManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHeistStateChanged", &USBZSmallTalkManager::execOnHeistStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics
	{
		struct SBZSmallTalkManager_eventOnHeistStateChanged_Parms
		{
			EPD3HeistState OldState;
			EPD3HeistState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallTalkManager_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSmallTalkManager_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSmallTalkManager, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(SBZSmallTalkManager_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSmallTalkManager_NoRegister()
	{
		return USBZSmallTalkManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZSmallTalkManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SmallTalkCollections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallTalkCollections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SmallTalkCollections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhoneSmallTalkCollections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhoneSmallTalkCollections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhoneSmallTalkCollections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversationNeededTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConversationNeededTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhoneNeededTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhoneNeededTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoloNeededTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoloNeededTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoloDialogInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoloDialogInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxIterationPerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxIterationPerTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSearchDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSearchDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CullingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistBetweenConversationPerformers_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistBetweenConversationPerformers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAngleBetweenConversationPerformers_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAngleBetweenConversationPerformers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentPhone_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxConcurrentPhone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentSolo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxConcurrentSolo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentConversation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxConcurrentConversation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConversationCullingMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConversationCullingMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversationCullingMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ConversationCullingMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhoneCullingMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhoneCullingMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhoneCullingMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PhoneCullingMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoloCullingMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoloCullingMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoloCullingMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SoloCullingMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSmallTalkManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSmallTalkManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSmallTalkManager_OnHeistStateChanged, "OnHeistStateChanged" }, // 3761715818
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZSmallTalkManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SmallTalkCollections_Inner = { "SmallTalkCollections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAISmallTalkCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SmallTalkCollections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SmallTalkCollections = { "SmallTalkCollections", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, SmallTalkCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SmallTalkCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SmallTalkCollections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneSmallTalkCollections_Inner = { "PhoneSmallTalkCollections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAISmallTalkCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneSmallTalkCollections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneSmallTalkCollections = { "PhoneSmallTalkCollections", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, PhoneSmallTalkCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneSmallTalkCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneSmallTalkCollections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_ConversationNeededTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_ConversationNeededTags = { "ConversationNeededTags", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, ConversationNeededTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_ConversationNeededTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_ConversationNeededTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneNeededTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneNeededTags = { "PhoneNeededTags", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, PhoneNeededTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneNeededTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneNeededTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloNeededTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloNeededTags = { "SoloNeededTags", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, SoloNeededTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloNeededTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloNeededTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloDialogInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloDialogInterval = { "SoloDialogInterval", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, SoloDialogInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloDialogInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloDialogInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxIterationPerTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxIterationPerTick = { "MaxIterationPerTick", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, MaxIterationPerTick), METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxIterationPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxIterationPerTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxSearchDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxSearchDistance = { "MaxSearchDistance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, MaxSearchDistance), METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxSearchDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxSearchDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_CullingDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_CullingDistance = { "CullingDistance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, CullingDistance), METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_CullingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_CullingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxDistBetweenConversationPerformers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxDistBetweenConversationPerformers = { "MaxDistBetweenConversationPerformers", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, MaxDistBetweenConversationPerformers), METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxDistBetweenConversationPerformers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxDistBetweenConversationPerformers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MinAngleBetweenConversationPerformers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MinAngleBetweenConversationPerformers = { "MinAngleBetweenConversationPerformers", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, MinAngleBetweenConversationPerformers), METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MinAngleBetweenConversationPerformers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MinAngleBetweenConversationPerformers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxConcurrentPhone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxConcurrentPhone = { "MaxConcurrentPhone", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, MaxConcurrentPhone), METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxConcurrentPhone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxConcurrentPhone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxConcurrentSolo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxConcurrentSolo = { "MaxConcurrentSolo", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, MaxConcurrentSolo), METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxConcurrentSolo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxConcurrentSolo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxConcurrentConversation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxConcurrentConversation = { "MaxConcurrentConversation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, MaxConcurrentConversation), METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxConcurrentConversation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxConcurrentConversation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_ConversationCullingMap_ValueProp = { "ConversationCullingMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_ConversationCullingMap_Key_KeyProp = { "ConversationCullingMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_ConversationCullingMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_ConversationCullingMap = { "ConversationCullingMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, ConversationCullingMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_ConversationCullingMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_ConversationCullingMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneCullingMap_ValueProp = { "PhoneCullingMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneCullingMap_Key_KeyProp = { "PhoneCullingMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneCullingMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneCullingMap = { "PhoneCullingMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, PhoneCullingMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneCullingMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneCullingMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloCullingMap_ValueProp = { "SoloCullingMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloCullingMap_Key_KeyProp = { "SoloCullingMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloCullingMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSmallTalkManager" },
		{ "ModuleRelativePath", "Public/SBZSmallTalkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloCullingMap = { "SoloCullingMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSmallTalkManager, SoloCullingMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloCullingMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloCullingMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSmallTalkManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SmallTalkCollections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SmallTalkCollections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneSmallTalkCollections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneSmallTalkCollections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_ConversationNeededTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneNeededTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloNeededTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloDialogInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxIterationPerTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxSearchDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_CullingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxDistBetweenConversationPerformers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MinAngleBetweenConversationPerformers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxConcurrentPhone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxConcurrentSolo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_MaxConcurrentConversation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_ConversationCullingMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_ConversationCullingMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_ConversationCullingMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneCullingMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneCullingMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_PhoneCullingMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloCullingMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloCullingMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSmallTalkManager_Statics::NewProp_SoloCullingMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSmallTalkManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSmallTalkManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSmallTalkManager_Statics::ClassParams = {
		&USBZSmallTalkManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSmallTalkManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSmallTalkManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSmallTalkManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSmallTalkManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSmallTalkManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSmallTalkManager, 2281962948);
	template<> STARBREEZE_API UClass* StaticClass<USBZSmallTalkManager>()
	{
		return USBZSmallTalkManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSmallTalkManager(Z_Construct_UClass_USBZSmallTalkManager, &USBZSmallTalkManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSmallTalkManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSmallTalkManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
