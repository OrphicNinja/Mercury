// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPedestrianTrafficNavLink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPedestrianTrafficNavLink() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPedestrianTrafficNavLink_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPedestrianTrafficNavLink();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSmartNavLink();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavLinkWaitSlotRoot_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTrafficVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPedestrianTrafficNavLink::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPedestrianTrafficNavLink::execSetTrafficAllowed)
	{
		P_GET_UBOOL(Z_Param_bAllowed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrafficAllowed(Z_Param_bAllowed);
		P_NATIVE_END;
	}
	void ASBZPedestrianTrafficNavLink::StaticRegisterNativesASBZPedestrianTrafficNavLink()
	{
		UClass* Class = ASBZPedestrianTrafficNavLink::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHeistStateChanged", &ASBZPedestrianTrafficNavLink::execOnHeistStateChanged },
			{ "SetTrafficAllowed", &ASBZPedestrianTrafficNavLink::execSetTrafficAllowed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics
	{
		struct SBZPedestrianTrafficNavLink_eventOnHeistStateChanged_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPedestrianTrafficNavLink_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPedestrianTrafficNavLink_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPedestrianTrafficNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPedestrianTrafficNavLink, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(SBZPedestrianTrafficNavLink_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_SetTrafficAllowed_Statics
	{
		struct SBZPedestrianTrafficNavLink_eventSetTrafficAllowed_Parms
		{
			bool bAllowed;
		};
		static void NewProp_bAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_SetTrafficAllowed_Statics::NewProp_bAllowed_SetBit(void* Obj)
	{
		((SBZPedestrianTrafficNavLink_eventSetTrafficAllowed_Parms*)Obj)->bAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_SetTrafficAllowed_Statics::NewProp_bAllowed = { "bAllowed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPedestrianTrafficNavLink_eventSetTrafficAllowed_Parms), &Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_SetTrafficAllowed_Statics::NewProp_bAllowed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_SetTrafficAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_SetTrafficAllowed_Statics::NewProp_bAllowed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_SetTrafficAllowed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPedestrianTrafficNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_SetTrafficAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPedestrianTrafficNavLink, nullptr, "SetTrafficAllowed", nullptr, nullptr, sizeof(SBZPedestrianTrafficNavLink_eventSetTrafficAllowed_Parms), Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_SetTrafficAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_SetTrafficAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_SetTrafficAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_SetTrafficAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_SetTrafficAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_SetTrafficAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPedestrianTrafficNavLink_NoRegister()
	{
		return ASBZPedestrianTrafficNavLink::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaitSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossingEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrossingEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfCrossingWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfCrossingWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaneCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LaneCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterDelayBeforePathing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterDelayBeforePathing;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LinkedTrafficVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkedTrafficVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinkedTrafficVolumes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrossingCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossingCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CrossingCharacters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZSmartNavLink,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_OnHeistStateChanged, "OnHeistStateChanged" }, // 3971558191
		{ &Z_Construct_UFunction_ASBZPedestrianTrafficNavLink_SetTrafficAllowed, "SetTrafficAllowed" }, // 1346949948
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPedestrianTrafficNavLink.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPedestrianTrafficNavLink.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_WaitSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPedestrianTrafficNavLink" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPedestrianTrafficNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_WaitSlots = { "WaitSlots", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPedestrianTrafficNavLink, WaitSlots), Z_Construct_UClass_USBZNavLinkWaitSlotRoot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_WaitSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_WaitSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CrossingEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPedestrianTrafficNavLink" },
		{ "ModuleRelativePath", "Public/SBZPedestrianTrafficNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CrossingEnd = { "CrossingEnd", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPedestrianTrafficNavLink, CrossingEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CrossingEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CrossingEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_HalfCrossingWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPedestrianTrafficNavLink" },
		{ "ModuleRelativePath", "Public/SBZPedestrianTrafficNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_HalfCrossingWidth = { "HalfCrossingWidth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPedestrianTrafficNavLink, HalfCrossingWidth), METADATA_PARAMS(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_HalfCrossingWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_HalfCrossingWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_LaneCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPedestrianTrafficNavLink" },
		{ "ModuleRelativePath", "Public/SBZPedestrianTrafficNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_LaneCount = { "LaneCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPedestrianTrafficNavLink, LaneCount), METADATA_PARAMS(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_LaneCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_LaneCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CharacterDelayBeforePathing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPedestrianTrafficNavLink" },
		{ "ModuleRelativePath", "Public/SBZPedestrianTrafficNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CharacterDelayBeforePathing = { "CharacterDelayBeforePathing", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPedestrianTrafficNavLink, CharacterDelayBeforePathing), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CharacterDelayBeforePathing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CharacterDelayBeforePathing_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_LinkedTrafficVolumes_Inner = { "LinkedTrafficVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZTrafficVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_LinkedTrafficVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPedestrianTrafficNavLink" },
		{ "ModuleRelativePath", "Public/SBZPedestrianTrafficNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_LinkedTrafficVolumes = { "LinkedTrafficVolumes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPedestrianTrafficNavLink, LinkedTrafficVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_LinkedTrafficVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_LinkedTrafficVolumes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CrossingCharacters_Inner = { "CrossingCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CrossingCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPedestrianTrafficNavLink" },
		{ "ModuleRelativePath", "Public/SBZPedestrianTrafficNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CrossingCharacters = { "CrossingCharacters", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPedestrianTrafficNavLink, CrossingCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CrossingCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CrossingCharacters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_WaitSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CrossingEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_HalfCrossingWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_LaneCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CharacterDelayBeforePathing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_LinkedTrafficVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_LinkedTrafficVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CrossingCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::NewProp_CrossingCharacters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPedestrianTrafficNavLink>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::ClassParams = {
		&ASBZPedestrianTrafficNavLink::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPedestrianTrafficNavLink()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPedestrianTrafficNavLink_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPedestrianTrafficNavLink, 220407243);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPedestrianTrafficNavLink>()
	{
		return ASBZPedestrianTrafficNavLink::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPedestrianTrafficNavLink(Z_Construct_UClass_ASBZPedestrianTrafficNavLink, &ASBZPedestrianTrafficNavLink::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPedestrianTrafficNavLink"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPedestrianTrafficNavLink);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
