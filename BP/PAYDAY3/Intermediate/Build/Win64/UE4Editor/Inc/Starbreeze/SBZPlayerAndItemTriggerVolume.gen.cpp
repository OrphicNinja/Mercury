// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerAndItemTriggerVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerAndItemTriggerVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagItem_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeEmptyDelegate__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPlayerAndItemTriggerVolume::execSetVolumeEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	void ASBZPlayerAndItemTriggerVolume::StaticRegisterNativesASBZPlayerAndItemTriggerVolume()
	{
		UClass* Class = ASBZPlayerAndItemTriggerVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetVolumeEnabled", &ASBZPlayerAndItemTriggerVolume::execSetVolumeEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPlayerAndItemTriggerVolume_SetVolumeEnabled_Statics
	{
		struct SBZPlayerAndItemTriggerVolume_eventSetVolumeEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlayerAndItemTriggerVolume_SetVolumeEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((SBZPlayerAndItemTriggerVolume_eventSetVolumeEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerAndItemTriggerVolume_SetVolumeEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerAndItemTriggerVolume_eventSetVolumeEnabled_Parms), &Z_Construct_UFunction_ASBZPlayerAndItemTriggerVolume_SetVolumeEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerAndItemTriggerVolume_SetVolumeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerAndItemTriggerVolume_SetVolumeEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerAndItemTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerAndItemTriggerVolume_SetVolumeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume, nullptr, "SetVolumeEnabled", nullptr, nullptr, sizeof(SBZPlayerAndItemTriggerVolume_eventSetVolumeEnabled_Parms), Z_Construct_UFunction_ASBZPlayerAndItemTriggerVolume_SetVolumeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerAndItemTriggerVolume_SetVolumeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerAndItemTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerAndItemTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerAndItemTriggerVolume_SetVolumeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerAndItemTriggerVolume_SetVolumeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_NoRegister()
	{
		return ASBZPlayerAndItemTriggerVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastOverlapActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastOverlapActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapPlayerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapPlayerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlapPlayerArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapBagArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapBagArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlapBagArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerCountChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerCountChangedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerEmptyDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerEmptyDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVolumeEnabledInitially_MetaData[];
#endif
		static void NewProp_bIsVolumeEnabledInitially_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVolumeEnabledInitially;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVolumeEnabled_MetaData[];
#endif
		static void NewProp_bIsVolumeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVolumeEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabledOnAlarm_MetaData[];
#endif
		static void NewProp_bIsEnabledOnAlarm_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabledOnAlarm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDisabledOnEmpty_MetaData[];
#endif
		static void NewProp_bIsDisabledOnEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDisabledOnEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDisabledOnEmptyInitially_MetaData[];
#endif
		static void NewProp_bIsDisabledOnEmptyInitially_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDisabledOnEmptyInitially;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBagsTeleported_MetaData[];
#endif
		static void NewProp_bIsBagsTeleported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBagsTeleported;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagTeleportLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagTeleportLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsClosedOffWhenDisabled_MetaData[];
#endif
		static void NewProp_bIsClosedOffWhenDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsClosedOffWhenDisabled;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClosedReactorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosedReactorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClosedReactorArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPlayerAndItemTriggerVolume_SetVolumeEnabled, "SetVolumeEnabled" }, // 1054643634
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZPlayerAndItemTriggerVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_LastOverlapActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAndItemTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_LastOverlapActor = { "LastOverlapActor", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, LastOverlapActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_LastOverlapActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_LastOverlapActor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_OverlapPlayerArray_Inner = { "OverlapPlayerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_OverlapPlayerArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAndItemTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_OverlapPlayerArray = { "OverlapPlayerArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, OverlapPlayerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_OverlapPlayerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_OverlapPlayerArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_OverlapBagArray_Inner = { "OverlapBagArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZBagItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_OverlapBagArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAndItemTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_OverlapBagArray = { "OverlapBagArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, OverlapBagArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_OverlapBagArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_OverlapBagArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ServerCountChangedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAndItemTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ServerCountChangedDelegate = { "ServerCountChangedDelegate", nullptr, (EPropertyFlags)0x0020280010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, ServerCountChangedDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ServerCountChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ServerCountChangedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ServerEmptyDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAndItemTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ServerEmptyDelegate = { "ServerEmptyDelegate", nullptr, (EPropertyFlags)0x0020280010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, ServerEmptyDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeEmptyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ServerEmptyDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ServerEmptyDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsVolumeEnabledInitially_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAndItemTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsVolumeEnabledInitially_SetBit(void* Obj)
	{
		((ASBZPlayerAndItemTriggerVolume*)Obj)->bIsVolumeEnabledInitially = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsVolumeEnabledInitially = { "bIsVolumeEnabledInitially", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerAndItemTriggerVolume), &Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsVolumeEnabledInitially_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsVolumeEnabledInitially_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsVolumeEnabledInitially_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsVolumeEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAndItemTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsVolumeEnabled_SetBit(void* Obj)
	{
		((ASBZPlayerAndItemTriggerVolume*)Obj)->bIsVolumeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsVolumeEnabled = { "bIsVolumeEnabled", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerAndItemTriggerVolume), &Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsVolumeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsVolumeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsVolumeEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsEnabledOnAlarm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAndItemTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsEnabledOnAlarm_SetBit(void* Obj)
	{
		((ASBZPlayerAndItemTriggerVolume*)Obj)->bIsEnabledOnAlarm = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsEnabledOnAlarm = { "bIsEnabledOnAlarm", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerAndItemTriggerVolume), &Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsEnabledOnAlarm_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsEnabledOnAlarm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsEnabledOnAlarm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsDisabledOnEmpty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAndItemTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsDisabledOnEmpty_SetBit(void* Obj)
	{
		((ASBZPlayerAndItemTriggerVolume*)Obj)->bIsDisabledOnEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsDisabledOnEmpty = { "bIsDisabledOnEmpty", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerAndItemTriggerVolume), &Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsDisabledOnEmpty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsDisabledOnEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsDisabledOnEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsDisabledOnEmptyInitially_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAndItemTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsDisabledOnEmptyInitially_SetBit(void* Obj)
	{
		((ASBZPlayerAndItemTriggerVolume*)Obj)->bIsDisabledOnEmptyInitially = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsDisabledOnEmptyInitially = { "bIsDisabledOnEmptyInitially", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerAndItemTriggerVolume), &Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsDisabledOnEmptyInitially_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsDisabledOnEmptyInitially_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsDisabledOnEmptyInitially_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsBagsTeleported_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAndItemTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsBagsTeleported_SetBit(void* Obj)
	{
		((ASBZPlayerAndItemTriggerVolume*)Obj)->bIsBagsTeleported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsBagsTeleported = { "bIsBagsTeleported", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerAndItemTriggerVolume), &Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsBagsTeleported_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsBagsTeleported_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsBagsTeleported_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_BagTeleportLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAndItemTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_BagTeleportLocation = { "BagTeleportLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, BagTeleportLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_BagTeleportLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_BagTeleportLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsClosedOffWhenDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAndItemTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsClosedOffWhenDisabled_SetBit(void* Obj)
	{
		((ASBZPlayerAndItemTriggerVolume*)Obj)->bIsClosedOffWhenDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsClosedOffWhenDisabled = { "bIsClosedOffWhenDisabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerAndItemTriggerVolume), &Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsClosedOffWhenDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsClosedOffWhenDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsClosedOffWhenDisabled_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ClosedReactorArray_Inner = { "ClosedReactorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ClosedReactorArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAndItemTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ClosedReactorArray = { "ClosedReactorArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerAndItemTriggerVolume, ClosedReactorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ClosedReactorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ClosedReactorArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_LastOverlapActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_OverlapPlayerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_OverlapPlayerArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_OverlapBagArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_OverlapBagArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ServerCountChangedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ServerEmptyDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsVolumeEnabledInitially,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsVolumeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsEnabledOnAlarm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsDisabledOnEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsDisabledOnEmptyInitially,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsBagsTeleported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_BagTeleportLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_bIsClosedOffWhenDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ClosedReactorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::NewProp_ClosedReactorArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlayerAndItemTriggerVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::ClassParams = {
		&ASBZPlayerAndItemTriggerVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlayerAndItemTriggerVolume, 3801258354);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlayerAndItemTriggerVolume>()
	{
		return ASBZPlayerAndItemTriggerVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlayerAndItemTriggerVolume(Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume, &ASBZPlayerAndItemTriggerVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlayerAndItemTriggerVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlayerAndItemTriggerVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
