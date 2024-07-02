// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTankAIComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTankAIComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTankAIComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTankAIComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpecialAIComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDozerFaceArmor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZArmorVariationInfo();
// End Cross Module References
	DEFINE_FUNCTION(USBZTankAIComponent::execOnAttackTagChanged)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_InTag);
		P_GET_PROPERTY(FIntProperty,Z_Param_TagCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackTagChanged(Z_Param_InTag,Z_Param_TagCount);
		P_NATIVE_END;
	}
	void USBZTankAIComponent::StaticRegisterNativesUSBZTankAIComponent()
	{
		UClass* Class = USBZTankAIComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttackTagChanged", &USBZTankAIComponent::execOnAttackTagChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics
	{
		struct SBZTankAIComponent_eventOnAttackTagChanged_Parms
		{
			FGameplayTag InTag;
			int32 TagCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TagCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics::NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTankAIComponent_eventOnAttackTagChanged_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics::NewProp_InTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics::NewProp_InTag_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics::NewProp_TagCount = { "TagCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTankAIComponent_eventOnAttackTagChanged_Parms, TagCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics::NewProp_InTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics::NewProp_TagCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTankAIComponent, nullptr, "OnAttackTagChanged", nullptr, nullptr, sizeof(SBZTankAIComponent_eventOnAttackTagChanged_Parms), Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZTankAIComponent_NoRegister()
	{
		return USBZTankAIComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZTankAIComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armored_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Armored;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArmorSelectors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorSelectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArmorSelectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorPopOffEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmorPopOffEvent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FaceArmorSelectors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceArmorSelectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FaceArmorSelectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadshotColliderSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadshotColliderSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaggerStateCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaggerStateCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChargeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistantChargeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DistantChargeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorParts_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmorParts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorParts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArmorParts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceArmor_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FaceArmor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FaceArmor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadshotCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadshotCollider;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyArmorNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyArmorNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BodyArmorNames;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyArmorMeshes_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BodyArmorMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyArmorMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BodyArmorMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArmorInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArmorInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTankAIComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSpecialAIComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZTankAIComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZTankAIComponent_OnAttackTagChanged, "OnAttackTagChanged" }, // 3913189214
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZTankAIComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_Armored_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_Armored = { "Armored", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAIComponent, Armored), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_Armored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_Armored_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorSelectors_Inner = { "ArmorSelectors", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorSelectors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorSelectors = { "ArmorSelectors", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAIComponent, ArmorSelectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorSelectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorSelectors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorPopOffEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorPopOffEvent = { "ArmorPopOffEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAIComponent, ArmorPopOffEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorPopOffEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorPopOffEvent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmorSelectors_Inner = { "FaceArmorSelectors", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmorSelectors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmorSelectors = { "FaceArmorSelectors", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAIComponent, FaceArmorSelectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmorSelectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmorSelectors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_HeadshotColliderSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_HeadshotColliderSelector = { "HeadshotColliderSelector", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAIComponent, HeadshotColliderSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_HeadshotColliderSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_HeadshotColliderSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_Cooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAIComponent, Cooldown), METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_Cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_StaggerStateCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_StaggerStateCooldown = { "StaggerStateCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAIComponent, StaggerStateCooldown), METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_StaggerStateCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_StaggerStateCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ChargeDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ChargeDistance = { "ChargeDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAIComponent, ChargeDistance), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ChargeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ChargeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_DistantChargeDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_DistantChargeDistance = { "DistantChargeDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAIComponent, DistantChargeDistance), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_DistantChargeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_DistantChargeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorParts_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorParts_Inner = { "ArmorParts", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorParts_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorParts_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorParts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorParts = { "ArmorParts", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAIComponent, ArmorParts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorParts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmor_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmor_Inner = { "FaceArmor", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZDozerFaceArmor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmor_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmor_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmor = { "FaceArmor", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAIComponent, FaceArmor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_HeadshotCollider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_HeadshotCollider = { "HeadshotCollider", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAIComponent, HeadshotCollider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_HeadshotCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_HeadshotCollider_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorNames_Inner = { "BodyArmorNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorNames = { "BodyArmorNames", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAIComponent, BodyArmorNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorNames_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorMeshes_ValueProp = { "BodyArmorMeshes", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorMeshes_Key_KeyProp = { "BodyArmorMeshes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorMeshes = { "BodyArmorMeshes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAIComponent, BodyArmorMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorMeshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorInfo_Inner = { "ArmorInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZArmorVariationInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankAIComponent" },
		{ "ModuleRelativePath", "Public/SBZTankAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorInfo = { "ArmorInfo", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTankAIComponent, ArmorInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZTankAIComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_Armored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorSelectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorSelectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorPopOffEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmorSelectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmorSelectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_HeadshotColliderSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_StaggerStateCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ChargeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_DistantChargeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorParts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorParts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_FaceArmor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_HeadshotCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_BodyArmorMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTankAIComponent_Statics::NewProp_ArmorInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTankAIComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTankAIComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTankAIComponent_Statics::ClassParams = {
		&USBZTankAIComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZTankAIComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTankAIComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTankAIComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTankAIComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTankAIComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTankAIComponent, 2348534129);
	template<> STARBREEZE_API UClass* StaticClass<USBZTankAIComponent>()
	{
		return USBZTankAIComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTankAIComponent(Z_Construct_UClass_USBZTankAIComponent, &USBZTankAIComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTankAIComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTankAIComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
