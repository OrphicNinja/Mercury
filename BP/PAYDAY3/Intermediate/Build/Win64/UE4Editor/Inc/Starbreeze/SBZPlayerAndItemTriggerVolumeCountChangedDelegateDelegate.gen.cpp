// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerAndItemTriggerVolumeCountChangedDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerAndItemTriggerVolumeCountChangedDelegateDelegate() {}
// Cross Module References
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagItem_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_Starbreeze_eventSBZPlayerAndItemTriggerVolumeCountChangedDelegate_Parms
		{
			ASBZPlayerAndItemTriggerVolume* Volume;
			int32 OldPlayerCount;
			TArray<ASBZCharacter*> OverlappingPlayerArray;
			int32 OldItemCount;
			TArray<ASBZBagItem*> OverlappingBagArray;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldPlayerCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappingPlayerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappingPlayerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlappingPlayerArray;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldItemCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappingBagArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappingBagArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlappingBagArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZPlayerAndItemTriggerVolumeCountChangedDelegate_Parms, Volume), Z_Construct_UClass_ASBZPlayerAndItemTriggerVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OldPlayerCount = { "OldPlayerCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZPlayerAndItemTriggerVolumeCountChangedDelegate_Parms, OldPlayerCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OverlappingPlayerArray_Inner = { "OverlappingPlayerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OverlappingPlayerArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OverlappingPlayerArray = { "OverlappingPlayerArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZPlayerAndItemTriggerVolumeCountChangedDelegate_Parms, OverlappingPlayerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OverlappingPlayerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OverlappingPlayerArray_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OldItemCount = { "OldItemCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZPlayerAndItemTriggerVolumeCountChangedDelegate_Parms, OldItemCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OverlappingBagArray_Inner = { "OverlappingBagArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZBagItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OverlappingBagArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OverlappingBagArray = { "OverlappingBagArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Starbreeze_eventSBZPlayerAndItemTriggerVolumeCountChangedDelegate_Parms, OverlappingBagArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OverlappingBagArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OverlappingBagArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OldPlayerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OverlappingPlayerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OverlappingPlayerArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OldItemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OverlappingBagArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::NewProp_OverlappingBagArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerAndItemTriggerVolumeCountChangedDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Starbreeze, nullptr, "SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Starbreeze_eventSBZPlayerAndItemTriggerVolumeCountChangedDelegate_Parms), Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerAndItemTriggerVolumeCountChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
