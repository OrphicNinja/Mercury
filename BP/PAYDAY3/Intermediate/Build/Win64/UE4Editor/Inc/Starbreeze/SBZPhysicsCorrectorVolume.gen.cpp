// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPhysicsCorrectorVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPhysicsCorrectorVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPhysicsCorrectorVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPhysicsCorrectorVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPhysicsCorrectorVolume::execMulticast_SetVolumeEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetVolumeEnabled_Implementation(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPhysicsCorrectorVolume::execOnRep_VolumeEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_VolumeEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPhysicsCorrectorVolume::execSetVolumeEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPhysicsCorrectorVolume::execSetVolumeEnabledLocally)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeEnabledLocally(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	static FName NAME_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled = FName(TEXT("Multicast_SetVolumeEnabled"));
	void ASBZPhysicsCorrectorVolume::Multicast_SetVolumeEnabled(bool bEnabled)
	{
		SBZPhysicsCorrectorVolume_eventMulticast_SetVolumeEnabled_Parms Parms;
		Parms.bEnabled=bEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled),&Parms);
	}
	void ASBZPhysicsCorrectorVolume::StaticRegisterNativesASBZPhysicsCorrectorVolume()
	{
		UClass* Class = ASBZPhysicsCorrectorVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetVolumeEnabled", &ASBZPhysicsCorrectorVolume::execMulticast_SetVolumeEnabled },
			{ "OnRep_VolumeEnabled", &ASBZPhysicsCorrectorVolume::execOnRep_VolumeEnabled },
			{ "SetVolumeEnabled", &ASBZPhysicsCorrectorVolume::execSetVolumeEnabled },
			{ "SetVolumeEnabledLocally", &ASBZPhysicsCorrectorVolume::execSetVolumeEnabledLocally },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled_Statics
	{
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZPhysicsCorrectorVolume_eventMulticast_SetVolumeEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPhysicsCorrectorVolume_eventMulticast_SetVolumeEnabled_Parms), &Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPhysicsCorrectorVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPhysicsCorrectorVolume, nullptr, "Multicast_SetVolumeEnabled", nullptr, nullptr, sizeof(SBZPhysicsCorrectorVolume_eventMulticast_SetVolumeEnabled_Parms), Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_OnRep_VolumeEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_OnRep_VolumeEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPhysicsCorrectorVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_OnRep_VolumeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPhysicsCorrectorVolume, nullptr, "OnRep_VolumeEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_OnRep_VolumeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_OnRep_VolumeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_OnRep_VolumeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_OnRep_VolumeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabled_Statics
	{
		struct SBZPhysicsCorrectorVolume_eventSetVolumeEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZPhysicsCorrectorVolume_eventSetVolumeEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPhysicsCorrectorVolume_eventSetVolumeEnabled_Parms), &Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPhysicsCorrectorVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPhysicsCorrectorVolume, nullptr, "SetVolumeEnabled", nullptr, nullptr, sizeof(SBZPhysicsCorrectorVolume_eventSetVolumeEnabled_Parms), Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabledLocally_Statics
	{
		struct SBZPhysicsCorrectorVolume_eventSetVolumeEnabledLocally_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabledLocally_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZPhysicsCorrectorVolume_eventSetVolumeEnabledLocally_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabledLocally_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPhysicsCorrectorVolume_eventSetVolumeEnabledLocally_Parms), &Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabledLocally_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabledLocally_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabledLocally_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabledLocally_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPhysicsCorrectorVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabledLocally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPhysicsCorrectorVolume, nullptr, "SetVolumeEnabledLocally", nullptr, nullptr, sizeof(SBZPhysicsCorrectorVolume_eventSetVolumeEnabledLocally_Parms), Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabledLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabledLocally_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabledLocally_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabledLocally_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabledLocally()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabledLocally_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPhysicsCorrectorVolume_NoRegister()
	{
		return ASBZPhysicsCorrectorVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NonCorrectedActorsInVolume_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonCorrectedActorsInVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NonCorrectedActorsInVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVolumeEnabled_MetaData[];
#endif
		static void NewProp_bIsVolumeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVolumeEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartVolumeEnabled_MetaData[];
#endif
		static void NewProp_bStartVolumeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartVolumeEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_Multicast_SetVolumeEnabled, "Multicast_SetVolumeEnabled" }, // 2832838269
		{ &Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_OnRep_VolumeEnabled, "OnRep_VolumeEnabled" }, // 2230414757
		{ &Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabled, "SetVolumeEnabled" }, // 2969172292
		{ &Z_Construct_UFunction_ASBZPhysicsCorrectorVolume_SetVolumeEnabledLocally, "SetVolumeEnabledLocally" }, // 1018802572
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZPhysicsCorrectorVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPhysicsCorrectorVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_NonCorrectedActorsInVolume_Inner = { "NonCorrectedActorsInVolume", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_NonCorrectedActorsInVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhysicsCorrectorVolume" },
		{ "ModuleRelativePath", "Public/SBZPhysicsCorrectorVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_NonCorrectedActorsInVolume = { "NonCorrectedActorsInVolume", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPhysicsCorrectorVolume, NonCorrectedActorsInVolume), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_NonCorrectedActorsInVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_NonCorrectedActorsInVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_bIsVolumeEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhysicsCorrectorVolume" },
		{ "ModuleRelativePath", "Public/SBZPhysicsCorrectorVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_bIsVolumeEnabled_SetBit(void* Obj)
	{
		((ASBZPhysicsCorrectorVolume*)Obj)->bIsVolumeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_bIsVolumeEnabled = { "bIsVolumeEnabled", "OnRep_VolumeEnabled", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPhysicsCorrectorVolume), &Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_bIsVolumeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_bIsVolumeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_bIsVolumeEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_bStartVolumeEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhysicsCorrectorVolume" },
		{ "ModuleRelativePath", "Public/SBZPhysicsCorrectorVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_bStartVolumeEnabled_SetBit(void* Obj)
	{
		((ASBZPhysicsCorrectorVolume*)Obj)->bStartVolumeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_bStartVolumeEnabled = { "bStartVolumeEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPhysicsCorrectorVolume), &Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_bStartVolumeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_bStartVolumeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_bStartVolumeEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_BoundingBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhysicsCorrectorVolume" },
		{ "ModuleRelativePath", "Public/SBZPhysicsCorrectorVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPhysicsCorrectorVolume, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_BoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_BoundingBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_NonCorrectedActorsInVolume_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_NonCorrectedActorsInVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_bIsVolumeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_bStartVolumeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::NewProp_BoundingBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPhysicsCorrectorVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::ClassParams = {
		&ASBZPhysicsCorrectorVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPhysicsCorrectorVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPhysicsCorrectorVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPhysicsCorrectorVolume, 1165857445);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPhysicsCorrectorVolume>()
	{
		return ASBZPhysicsCorrectorVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPhysicsCorrectorVolume(Z_Construct_UClass_ASBZPhysicsCorrectorVolume, &ASBZPhysicsCorrectorVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPhysicsCorrectorVolume"), false, nullptr, nullptr, nullptr);

	void ASBZPhysicsCorrectorVolume::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsVolumeEnabled(TEXT("bIsVolumeEnabled"));

		const bool bIsValid = true
			&& Name_bIsVolumeEnabled == ClassReps[(int32)ENetFields_Private::bIsVolumeEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZPhysicsCorrectorVolume"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPhysicsCorrectorVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
