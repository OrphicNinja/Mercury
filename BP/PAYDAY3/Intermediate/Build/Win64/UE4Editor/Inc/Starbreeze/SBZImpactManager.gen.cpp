// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZImpactManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZImpactManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZImpactManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZImpactManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTranslucentTimer();
// End Cross Module References
	DEFINE_FUNCTION(USBZImpactManager::execHandleDroppedDecalComponent)
	{
		P_GET_OBJECT(UObject,Z_Param_DroppedElement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleDroppedDecalComponent(Z_Param_DroppedElement);
		P_NATIVE_END;
	}
	void USBZImpactManager::StaticRegisterNativesUSBZImpactManager()
	{
		UClass* Class = USBZImpactManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleDroppedDecalComponent", &USBZImpactManager::execHandleDroppedDecalComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZImpactManager_HandleDroppedDecalComponent_Statics
	{
		struct SBZImpactManager_eventHandleDroppedDecalComponent_Parms
		{
			UObject* DroppedElement;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DroppedElement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZImpactManager_HandleDroppedDecalComponent_Statics::NewProp_DroppedElement = { "DroppedElement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZImpactManager_eventHandleDroppedDecalComponent_Parms, DroppedElement), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZImpactManager_HandleDroppedDecalComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZImpactManager_HandleDroppedDecalComponent_Statics::NewProp_DroppedElement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZImpactManager_HandleDroppedDecalComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZImpactManager_HandleDroppedDecalComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZImpactManager, nullptr, "HandleDroppedDecalComponent", nullptr, nullptr, sizeof(SBZImpactManager_eventHandleDroppedDecalComponent_Parms), Z_Construct_UFunction_USBZImpactManager_HandleDroppedDecalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZImpactManager_HandleDroppedDecalComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZImpactManager_HandleDroppedDecalComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZImpactManager_HandleDroppedDecalComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZImpactManager_HandleDroppedDecalComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZImpactManager_HandleDroppedDecalComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZImpactManager_NoRegister()
	{
		return USBZImpactManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZImpactManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileDecals_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProjectileDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileInstancedDecals_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileInstancedDecals_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileInstancedDecals_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileInstancedDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ProjectileInstancedDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableProjectileDecals_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableProjectileDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableProjectileDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ThrowableProjectileDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableProjectileInstancedDecals_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableProjectileInstancedDecals_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableProjectileInstancedDecals_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableProjectileInstancedDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ThrowableProjectileInstancedDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeDecals_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeleeDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDecals_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExplosionDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepDecals_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootstepDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FootstepDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlidingDecals_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlidingDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlidingDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlidingDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MantlingDecals_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MantlingDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MantlingDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MantlingDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepUpDecals_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StepUpDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepUpDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StepUpDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectImpactDecals_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectImpactDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectImpactDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectImpactDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebrisImpactDecals_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebrisImpactDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebrisImpactDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebrisImpactDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagItemImpactDecals_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagItemImpactDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagItemImpactDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BagItemImpactDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableDecals_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ThrowableDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodSplatterDecals_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloodSplatterDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodSplatterDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BloodSplatterDecals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslucentPrimitiveComponenets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentPrimitiveComponenets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TranslucentPrimitiveComponenets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZImpactManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZImpactManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZImpactManager_HandleDroppedDecalComponent, "HandleDroppedDecalComponent" }, // 3406150517
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZImpactManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileDecals_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileDecals_Inner = { "ProjectileDecals", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileDecals_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileDecals_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileDecals = { "ProjectileDecals", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, ProjectileDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileInstancedDecals_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileInstancedDecals_ValueProp = { "ProjectileInstancedDecals", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileInstancedDecals_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileInstancedDecals_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileInstancedDecals_Key_KeyProp = { "ProjectileInstancedDecals_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileInstancedDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileInstancedDecals = { "ProjectileInstancedDecals", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, ProjectileInstancedDecals), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileInstancedDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileInstancedDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileDecals_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileDecals_Inner = { "ThrowableProjectileDecals", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileDecals_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileDecals_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileDecals = { "ThrowableProjectileDecals", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, ThrowableProjectileDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileInstancedDecals_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileInstancedDecals_ValueProp = { "ThrowableProjectileInstancedDecals", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileInstancedDecals_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileInstancedDecals_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileInstancedDecals_Key_KeyProp = { "ThrowableProjectileInstancedDecals_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileInstancedDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileInstancedDecals = { "ThrowableProjectileInstancedDecals", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, ThrowableProjectileInstancedDecals), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileInstancedDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileInstancedDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MeleeDecals_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MeleeDecals_Inner = { "MeleeDecals", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MeleeDecals_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MeleeDecals_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MeleeDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MeleeDecals = { "MeleeDecals", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, MeleeDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MeleeDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MeleeDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ExplosionDecals_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ExplosionDecals_Inner = { "ExplosionDecals", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ExplosionDecals_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ExplosionDecals_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ExplosionDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ExplosionDecals = { "ExplosionDecals", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, ExplosionDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ExplosionDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ExplosionDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_FootstepDecals_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_FootstepDecals_Inner = { "FootstepDecals", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_FootstepDecals_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_FootstepDecals_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_FootstepDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_FootstepDecals = { "FootstepDecals", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, FootstepDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_FootstepDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_FootstepDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_SlidingDecals_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_SlidingDecals_Inner = { "SlidingDecals", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_SlidingDecals_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_SlidingDecals_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_SlidingDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_SlidingDecals = { "SlidingDecals", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, SlidingDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_SlidingDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_SlidingDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MantlingDecals_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MantlingDecals_Inner = { "MantlingDecals", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MantlingDecals_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MantlingDecals_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MantlingDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MantlingDecals = { "MantlingDecals", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, MantlingDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MantlingDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MantlingDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_StepUpDecals_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_StepUpDecals_Inner = { "StepUpDecals", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_StepUpDecals_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_StepUpDecals_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_StepUpDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_StepUpDecals = { "StepUpDecals", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, StepUpDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_StepUpDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_StepUpDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ObjectImpactDecals_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ObjectImpactDecals_Inner = { "ObjectImpactDecals", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ObjectImpactDecals_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ObjectImpactDecals_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ObjectImpactDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ObjectImpactDecals = { "ObjectImpactDecals", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, ObjectImpactDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ObjectImpactDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ObjectImpactDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_DebrisImpactDecals_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_DebrisImpactDecals_Inner = { "DebrisImpactDecals", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_DebrisImpactDecals_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_DebrisImpactDecals_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_DebrisImpactDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_DebrisImpactDecals = { "DebrisImpactDecals", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, DebrisImpactDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_DebrisImpactDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_DebrisImpactDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BagItemImpactDecals_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BagItemImpactDecals_Inner = { "BagItemImpactDecals", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BagItemImpactDecals_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BagItemImpactDecals_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BagItemImpactDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BagItemImpactDecals = { "BagItemImpactDecals", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, BagItemImpactDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BagItemImpactDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BagItemImpactDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableDecals_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableDecals_Inner = { "ThrowableDecals", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableDecals_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableDecals_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableDecals = { "ThrowableDecals", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, ThrowableDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BloodSplatterDecals_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BloodSplatterDecals_Inner = { "BloodSplatterDecals", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BloodSplatterDecals_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BloodSplatterDecals_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BloodSplatterDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BloodSplatterDecals = { "BloodSplatterDecals", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, BloodSplatterDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BloodSplatterDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BloodSplatterDecals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_TranslucentPrimitiveComponenets_Inner = { "TranslucentPrimitiveComponenets", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZTranslucentTimer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZImpactManager_Statics::NewProp_TranslucentPrimitiveComponenets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZImpactManager" },
		{ "ModuleRelativePath", "Public/SBZImpactManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZImpactManager_Statics::NewProp_TranslucentPrimitiveComponenets = { "TranslucentPrimitiveComponenets", nullptr, (EPropertyFlags)0x0040008000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZImpactManager, TranslucentPrimitiveComponenets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_TranslucentPrimitiveComponenets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::NewProp_TranslucentPrimitiveComponenets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZImpactManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileInstancedDecals_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileInstancedDecals_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ProjectileInstancedDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileInstancedDecals_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileInstancedDecals_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableProjectileInstancedDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MeleeDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MeleeDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ExplosionDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ExplosionDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_FootstepDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_FootstepDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_SlidingDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_SlidingDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MantlingDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_MantlingDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_StepUpDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_StepUpDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ObjectImpactDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ObjectImpactDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_DebrisImpactDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_DebrisImpactDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BagItemImpactDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BagItemImpactDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_ThrowableDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BloodSplatterDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_BloodSplatterDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_TranslucentPrimitiveComponenets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZImpactManager_Statics::NewProp_TranslucentPrimitiveComponenets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZImpactManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZImpactManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZImpactManager_Statics::ClassParams = {
		&USBZImpactManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZImpactManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZImpactManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZImpactManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZImpactManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZImpactManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZImpactManager, 1346019361);
	template<> STARBREEZE_API UClass* StaticClass<USBZImpactManager>()
	{
		return USBZImpactManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZImpactManager(Z_Construct_UClass_USBZImpactManager, &USBZImpactManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZImpactManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZImpactManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
