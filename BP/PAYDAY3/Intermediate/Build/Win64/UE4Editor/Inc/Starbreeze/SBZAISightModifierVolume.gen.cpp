// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAISightModifierVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAISightModifierVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAISightModifierVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAISightModifierVolume();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISightBlockerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAISightModifierVolume::execMulticast_OnEffectActivated)
	{
		P_GET_UBOOL(Z_Param_bSetActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnEffectActivated_Implementation(Z_Param_bSetActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAISightModifierVolume::execOnRep_IsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAISightModifierVolume::execSetSightModifierVolumeActive)
	{
		P_GET_UBOOL(Z_Param_bSetActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSightModifierVolumeActive(Z_Param_bSetActive);
		P_NATIVE_END;
	}
	static FName NAME_ASBZAISightModifierVolume_Multicast_OnEffectActivated = FName(TEXT("Multicast_OnEffectActivated"));
	void ASBZAISightModifierVolume::Multicast_OnEffectActivated(bool bSetActive)
	{
		SBZAISightModifierVolume_eventMulticast_OnEffectActivated_Parms Parms;
		Parms.bSetActive=bSetActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAISightModifierVolume_Multicast_OnEffectActivated),&Parms);
	}
	static FName NAME_ASBZAISightModifierVolume_OnActiveStateChanged = FName(TEXT("OnActiveStateChanged"));
	void ASBZAISightModifierVolume::OnActiveStateChanged(bool bSetActive, bool bDoCosmetics)
	{
		SBZAISightModifierVolume_eventOnActiveStateChanged_Parms Parms;
		Parms.bSetActive=bSetActive ? true : false;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAISightModifierVolume_OnActiveStateChanged),&Parms);
	}
	void ASBZAISightModifierVolume::StaticRegisterNativesASBZAISightModifierVolume()
	{
		UClass* Class = ASBZAISightModifierVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_OnEffectActivated", &ASBZAISightModifierVolume::execMulticast_OnEffectActivated },
			{ "OnRep_IsActive", &ASBZAISightModifierVolume::execOnRep_IsActive },
			{ "SetSightModifierVolumeActive", &ASBZAISightModifierVolume::execSetSightModifierVolumeActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAISightModifierVolume_Multicast_OnEffectActivated_Statics
	{
		static void NewProp_bSetActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZAISightModifierVolume_Multicast_OnEffectActivated_Statics::NewProp_bSetActive_SetBit(void* Obj)
	{
		((SBZAISightModifierVolume_eventMulticast_OnEffectActivated_Parms*)Obj)->bSetActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAISightModifierVolume_Multicast_OnEffectActivated_Statics::NewProp_bSetActive = { "bSetActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAISightModifierVolume_eventMulticast_OnEffectActivated_Parms), &Z_Construct_UFunction_ASBZAISightModifierVolume_Multicast_OnEffectActivated_Statics::NewProp_bSetActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAISightModifierVolume_Multicast_OnEffectActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAISightModifierVolume_Multicast_OnEffectActivated_Statics::NewProp_bSetActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAISightModifierVolume_Multicast_OnEffectActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAISightModifierVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAISightModifierVolume_Multicast_OnEffectActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAISightModifierVolume, nullptr, "Multicast_OnEffectActivated", nullptr, nullptr, sizeof(SBZAISightModifierVolume_eventMulticast_OnEffectActivated_Parms), Z_Construct_UFunction_ASBZAISightModifierVolume_Multicast_OnEffectActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAISightModifierVolume_Multicast_OnEffectActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAISightModifierVolume_Multicast_OnEffectActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAISightModifierVolume_Multicast_OnEffectActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAISightModifierVolume_Multicast_OnEffectActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAISightModifierVolume_Multicast_OnEffectActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics
	{
		static void NewProp_bSetActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetActive;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::NewProp_bSetActive_SetBit(void* Obj)
	{
		((SBZAISightModifierVolume_eventOnActiveStateChanged_Parms*)Obj)->bSetActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::NewProp_bSetActive = { "bSetActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAISightModifierVolume_eventOnActiveStateChanged_Parms), &Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::NewProp_bSetActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZAISightModifierVolume_eventOnActiveStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAISightModifierVolume_eventOnActiveStateChanged_Parms), &Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::NewProp_bSetActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAISightModifierVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAISightModifierVolume, nullptr, "OnActiveStateChanged", nullptr, nullptr, sizeof(SBZAISightModifierVolume_eventOnActiveStateChanged_Parms), Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAISightModifierVolume_OnRep_IsActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAISightModifierVolume_OnRep_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAISightModifierVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAISightModifierVolume_OnRep_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAISightModifierVolume, nullptr, "OnRep_IsActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAISightModifierVolume_OnRep_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAISightModifierVolume_OnRep_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAISightModifierVolume_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAISightModifierVolume_OnRep_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAISightModifierVolume_SetSightModifierVolumeActive_Statics
	{
		struct SBZAISightModifierVolume_eventSetSightModifierVolumeActive_Parms
		{
			bool bSetActive;
		};
		static void NewProp_bSetActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZAISightModifierVolume_SetSightModifierVolumeActive_Statics::NewProp_bSetActive_SetBit(void* Obj)
	{
		((SBZAISightModifierVolume_eventSetSightModifierVolumeActive_Parms*)Obj)->bSetActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAISightModifierVolume_SetSightModifierVolumeActive_Statics::NewProp_bSetActive = { "bSetActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAISightModifierVolume_eventSetSightModifierVolumeActive_Parms), &Z_Construct_UFunction_ASBZAISightModifierVolume_SetSightModifierVolumeActive_Statics::NewProp_bSetActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAISightModifierVolume_SetSightModifierVolumeActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAISightModifierVolume_SetSightModifierVolumeActive_Statics::NewProp_bSetActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAISightModifierVolume_SetSightModifierVolumeActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAISightModifierVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAISightModifierVolume_SetSightModifierVolumeActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAISightModifierVolume, nullptr, "SetSightModifierVolumeActive", nullptr, nullptr, sizeof(SBZAISightModifierVolume_eventSetSightModifierVolumeActive_Parms), Z_Construct_UFunction_ASBZAISightModifierVolume_SetSightModifierVolumeActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAISightModifierVolume_SetSightModifierVolumeActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAISightModifierVolume_SetSightModifierVolumeActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAISightModifierVolume_SetSightModifierVolumeActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAISightModifierVolume_SetSightModifierVolumeActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAISightModifierVolume_SetSightModifierVolumeActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAISightModifierVolume_NoRegister()
	{
		return ASBZAISightModifierVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAISightModifierVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VolumeBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthSightModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StealthSightModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudSightModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoudSightModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAISightModifierVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAISightModifierVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAISightModifierVolume_Multicast_OnEffectActivated, "Multicast_OnEffectActivated" }, // 1751424124
		{ &Z_Construct_UFunction_ASBZAISightModifierVolume_OnActiveStateChanged, "OnActiveStateChanged" }, // 2172759272
		{ &Z_Construct_UFunction_ASBZAISightModifierVolume_OnRep_IsActive, "OnRep_IsActive" }, // 1261237284
		{ &Z_Construct_UFunction_ASBZAISightModifierVolume_SetSightModifierVolumeActive, "SetSightModifierVolumeActive" }, // 2211534956
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAISightModifierVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAISightModifierVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAISightModifierVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_VolumeBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISightModifierVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAISightModifierVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_VolumeBox = { "VolumeBox", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAISightModifierVolume, VolumeBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_VolumeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_VolumeBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_StealthSightModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISightModifierVolume" },
		{ "ModuleRelativePath", "Public/SBZAISightModifierVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_StealthSightModifier = { "StealthSightModifier", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAISightModifierVolume, StealthSightModifier), METADATA_PARAMS(Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_StealthSightModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_StealthSightModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_LoudSightModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISightModifierVolume" },
		{ "ModuleRelativePath", "Public/SBZAISightModifierVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_LoudSightModifier = { "LoudSightModifier", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAISightModifierVolume, LoudSightModifier), METADATA_PARAMS(Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_LoudSightModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_LoudSightModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_bIsActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISightModifierVolume" },
		{ "ModuleRelativePath", "Public/SBZAISightModifierVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((ASBZAISightModifierVolume*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_bIsActive = { "bIsActive", "OnRep_IsActive", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAISightModifierVolume), &Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_bIsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAISightModifierVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_VolumeBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_StealthSightModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_LoudSightModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAISightModifierVolume_Statics::NewProp_bIsActive,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAISightModifierVolume_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAISightBlockerInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAISightModifierVolume, ISBZAISightBlockerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAISightModifierVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAISightModifierVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAISightModifierVolume_Statics::ClassParams = {
		&ASBZAISightModifierVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAISightModifierVolume_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAISightModifierVolume_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAISightModifierVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAISightModifierVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAISightModifierVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAISightModifierVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAISightModifierVolume, 2281335577);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAISightModifierVolume>()
	{
		return ASBZAISightModifierVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAISightModifierVolume(Z_Construct_UClass_ASBZAISightModifierVolume, &ASBZAISightModifierVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAISightModifierVolume"), false, nullptr, nullptr, nullptr);

	void ASBZAISightModifierVolume::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsActive(TEXT("bIsActive"));

		const bool bIsValid = true
			&& Name_bIsActive == ClassReps[(int32)ENetFields_Private::bIsActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZAISightModifierVolume"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAISightModifierVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
