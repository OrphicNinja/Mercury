// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippable() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModGripAnimData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZEquippable::execOnRep_EquippableIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EquippableIndex();
		P_NATIVE_END;
	}
	void ASBZEquippable::StaticRegisterNativesASBZEquippable()
	{
		UClass* Class = ASBZEquippable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_EquippableIndex", &ASBZEquippable::execOnRep_EquippableIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZEquippable_OnRep_EquippableIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZEquippable_OnRep_EquippableIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZEquippable_OnRep_EquippableIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZEquippable, nullptr, "OnRep_EquippableIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZEquippable_OnRep_EquippableIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZEquippable_OnRep_EquippableIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZEquippable_OnRep_EquippableIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZEquippable_OnRep_EquippableIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZEquippable_NoRegister()
	{
		return ASBZEquippable::StaticClass();
	}
	struct Z_Construct_UClass_ASBZEquippable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalDamageFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocalDamageFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_EquippableIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippableConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModOverrideGripAnimData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModOverrideGripAnimData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInventory_MetaData[];
#endif
		static void NewProp_bIsInventory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableAkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableAkComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippingEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippingEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnequippingEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnequippingEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippingEventRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippingEventRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnequippingEventRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnequippingEventRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateRootAttachment_MetaData[];
#endif
		static void NewProp_bReplicateRootAttachment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateRootAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EquipmentState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZEquippable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZEquippable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZEquippable_OnRep_EquippableIndex, "OnRep_EquippableIndex" }, // 688078277
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEquippable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippable_Statics::NewProp_LocalDamageFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippable" },
		{ "ModuleRelativePath", "Public/SBZEquippable.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZEquippable_Statics::NewProp_LocalDamageFeedback = { "LocalDamageFeedback", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZEquippable, LocalDamageFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_LocalDamageFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_LocalDamageFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippable_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZEquippable_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZEquippable, Mesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippableIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippable" },
		{ "ModuleRelativePath", "Public/SBZEquippable.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippableIndex = { "EquippableIndex", "OnRep_EquippableIndex", (EPropertyFlags)0x0020080100002021, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZEquippable, EquippableIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippableIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippableIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippableConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippable" },
		{ "ModuleRelativePath", "Public/SBZEquippable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippableConfig = { "EquippableConfig", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZEquippable, EquippableConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippableConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippableConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippable_Statics::NewProp_ModOverrideGripAnimData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippable" },
		{ "ModuleRelativePath", "Public/SBZEquippable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZEquippable_Statics::NewProp_ModOverrideGripAnimData = { "ModOverrideGripAnimData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZEquippable, ModOverrideGripAnimData), Z_Construct_UClass_USBZModGripAnimData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_ModOverrideGripAnimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_ModOverrideGripAnimData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippable_Statics::NewProp_bIsInventory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippable" },
		{ "ModuleRelativePath", "Public/SBZEquippable.h" },
	};
#endif
	void Z_Construct_UClass_ASBZEquippable_Statics::NewProp_bIsInventory_SetBit(void* Obj)
	{
		((ASBZEquippable*)Obj)->bIsInventory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZEquippable_Statics::NewProp_bIsInventory = { "bIsInventory", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZEquippable), &Z_Construct_UClass_ASBZEquippable_Statics::NewProp_bIsInventory_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_bIsInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_bIsInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippableAkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippableAkComponent = { "EquippableAkComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZEquippable, EquippableAkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippableAkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippableAkComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippingEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippable" },
		{ "ModuleRelativePath", "Public/SBZEquippable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippingEvent = { "EquippingEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZEquippable, EquippingEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippingEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippingEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippable_Statics::NewProp_UnequippingEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippable" },
		{ "ModuleRelativePath", "Public/SBZEquippable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZEquippable_Statics::NewProp_UnequippingEvent = { "UnequippingEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZEquippable, UnequippingEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_UnequippingEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_UnequippingEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippingEventRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippable" },
		{ "ModuleRelativePath", "Public/SBZEquippable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippingEventRtpc = { "EquippingEventRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZEquippable, EquippingEventRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippingEventRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippingEventRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippable_Statics::NewProp_UnequippingEventRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippable" },
		{ "ModuleRelativePath", "Public/SBZEquippable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZEquippable_Statics::NewProp_UnequippingEventRtpc = { "UnequippingEventRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZEquippable, UnequippingEventRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_UnequippingEventRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_UnequippingEventRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippable_Statics::NewProp_bReplicateRootAttachment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippable" },
		{ "ModuleRelativePath", "Public/SBZEquippable.h" },
	};
#endif
	void Z_Construct_UClass_ASBZEquippable_Statics::NewProp_bReplicateRootAttachment_SetBit(void* Obj)
	{
		((ASBZEquippable*)Obj)->bReplicateRootAttachment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZEquippable_Statics::NewProp_bReplicateRootAttachment = { "bReplicateRootAttachment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZEquippable), &Z_Construct_UClass_ASBZEquippable_Statics::NewProp_bReplicateRootAttachment_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_bReplicateRootAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_bReplicateRootAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquipmentState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippable" },
		{ "ModuleRelativePath", "Public/SBZEquippable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquipmentState = { "EquipmentState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZEquippable, EquipmentState), METADATA_PARAMS(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquipmentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquipmentState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZEquippable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEquippable_Statics::NewProp_LocalDamageFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEquippable_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippableConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEquippable_Statics::NewProp_ModOverrideGripAnimData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEquippable_Statics::NewProp_bIsInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippableAkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippingEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEquippable_Statics::NewProp_UnequippingEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquippingEventRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEquippable_Statics::NewProp_UnequippingEventRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEquippable_Statics::NewProp_bReplicateRootAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZEquippable_Statics::NewProp_EquipmentState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZEquippable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZEquippable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZEquippable_Statics::ClassParams = {
		&ASBZEquippable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZEquippable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippable_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZEquippable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZEquippable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZEquippable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZEquippable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZEquippable, 177928223);
	template<> STARBREEZE_API UClass* StaticClass<ASBZEquippable>()
	{
		return ASBZEquippable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZEquippable(Z_Construct_UClass_ASBZEquippable, &ASBZEquippable::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZEquippable"), false, nullptr, nullptr, nullptr);

	void ASBZEquippable::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_EquippableIndex(TEXT("EquippableIndex"));

		const bool bIsValid = true
			&& Name_EquippableIndex == ClassReps[(int32)ENetFields_Private::EquippableIndex].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZEquippable"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZEquippable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
