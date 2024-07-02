// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRoomConnectorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRoomConnectorComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomConnectorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomConnectorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZRoomConnectorComponent::execAllowSoundToPassUnmodified)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AllowSoundToPassUnmodified();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZRoomConnectorComponent::execBlockSoundCompletly)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlockSoundCompletly();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZRoomConnectorComponent::execSetRoomConnectorEnabled)
	{
		P_GET_UBOOL(Z_Param_bInIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoomConnectorEnabled(Z_Param_bInIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZRoomConnectorComponent::execSetSoundModifier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSoundModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundModifier(Z_Param_InSoundModifier);
		P_NATIVE_END;
	}
	static FName NAME_USBZRoomConnectorComponent_GetRoomALocation = FName(TEXT("GetRoomALocation"));
	FVector USBZRoomConnectorComponent::GetRoomALocation() const
	{
		SBZRoomConnectorComponent_eventGetRoomALocation_Parms Parms;
		const_cast<USBZRoomConnectorComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_USBZRoomConnectorComponent_GetRoomALocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_USBZRoomConnectorComponent_GetRoomBLocation = FName(TEXT("GetRoomBLocation"));
	FVector USBZRoomConnectorComponent::GetRoomBLocation() const
	{
		SBZRoomConnectorComponent_eventGetRoomBLocation_Parms Parms;
		const_cast<USBZRoomConnectorComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_USBZRoomConnectorComponent_GetRoomBLocation),&Parms);
		return Parms.ReturnValue;
	}
	void USBZRoomConnectorComponent::StaticRegisterNativesUSBZRoomConnectorComponent()
	{
		UClass* Class = USBZRoomConnectorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllowSoundToPassUnmodified", &USBZRoomConnectorComponent::execAllowSoundToPassUnmodified },
			{ "BlockSoundCompletly", &USBZRoomConnectorComponent::execBlockSoundCompletly },
			{ "SetRoomConnectorEnabled", &USBZRoomConnectorComponent::execSetRoomConnectorEnabled },
			{ "SetSoundModifier", &USBZRoomConnectorComponent::execSetSoundModifier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZRoomConnectorComponent_AllowSoundToPassUnmodified_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRoomConnectorComponent_AllowSoundToPassUnmodified_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRoomConnectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRoomConnectorComponent_AllowSoundToPassUnmodified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRoomConnectorComponent, nullptr, "AllowSoundToPassUnmodified", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRoomConnectorComponent_AllowSoundToPassUnmodified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomConnectorComponent_AllowSoundToPassUnmodified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRoomConnectorComponent_AllowSoundToPassUnmodified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRoomConnectorComponent_AllowSoundToPassUnmodified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZRoomConnectorComponent_BlockSoundCompletly_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRoomConnectorComponent_BlockSoundCompletly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRoomConnectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRoomConnectorComponent_BlockSoundCompletly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRoomConnectorComponent, nullptr, "BlockSoundCompletly", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRoomConnectorComponent_BlockSoundCompletly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomConnectorComponent_BlockSoundCompletly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRoomConnectorComponent_BlockSoundCompletly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRoomConnectorComponent_BlockSoundCompletly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomALocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomALocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRoomConnectorComponent_eventGetRoomALocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomALocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomALocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomALocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRoomConnectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomALocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRoomConnectorComponent, nullptr, "GetRoomALocation", nullptr, nullptr, sizeof(SBZRoomConnectorComponent_eventGetRoomALocation_Parms), Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomALocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomALocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomALocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomALocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomALocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomALocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomBLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomBLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRoomConnectorComponent_eventGetRoomBLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomBLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomBLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomBLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRoomConnectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomBLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRoomConnectorComponent, nullptr, "GetRoomBLocation", nullptr, nullptr, sizeof(SBZRoomConnectorComponent_eventGetRoomBLocation_Parms), Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomBLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomBLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomBLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomBLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomBLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomBLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZRoomConnectorComponent_SetRoomConnectorEnabled_Statics
	{
		struct SBZRoomConnectorComponent_eventSetRoomConnectorEnabled_Parms
		{
			bool bInIsEnabled;
		};
		static void NewProp_bInIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZRoomConnectorComponent_SetRoomConnectorEnabled_Statics::NewProp_bInIsEnabled_SetBit(void* Obj)
	{
		((SBZRoomConnectorComponent_eventSetRoomConnectorEnabled_Parms*)Obj)->bInIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZRoomConnectorComponent_SetRoomConnectorEnabled_Statics::NewProp_bInIsEnabled = { "bInIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZRoomConnectorComponent_eventSetRoomConnectorEnabled_Parms), &Z_Construct_UFunction_USBZRoomConnectorComponent_SetRoomConnectorEnabled_Statics::NewProp_bInIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRoomConnectorComponent_SetRoomConnectorEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRoomConnectorComponent_SetRoomConnectorEnabled_Statics::NewProp_bInIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRoomConnectorComponent_SetRoomConnectorEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRoomConnectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRoomConnectorComponent_SetRoomConnectorEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRoomConnectorComponent, nullptr, "SetRoomConnectorEnabled", nullptr, nullptr, sizeof(SBZRoomConnectorComponent_eventSetRoomConnectorEnabled_Parms), Z_Construct_UFunction_USBZRoomConnectorComponent_SetRoomConnectorEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomConnectorComponent_SetRoomConnectorEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRoomConnectorComponent_SetRoomConnectorEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomConnectorComponent_SetRoomConnectorEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRoomConnectorComponent_SetRoomConnectorEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRoomConnectorComponent_SetRoomConnectorEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZRoomConnectorComponent_SetSoundModifier_Statics
	{
		struct SBZRoomConnectorComponent_eventSetSoundModifier_Parms
		{
			float InSoundModifier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSoundModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZRoomConnectorComponent_SetSoundModifier_Statics::NewProp_InSoundModifier = { "InSoundModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRoomConnectorComponent_eventSetSoundModifier_Parms, InSoundModifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRoomConnectorComponent_SetSoundModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRoomConnectorComponent_SetSoundModifier_Statics::NewProp_InSoundModifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRoomConnectorComponent_SetSoundModifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRoomConnectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRoomConnectorComponent_SetSoundModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRoomConnectorComponent, nullptr, "SetSoundModifier", nullptr, nullptr, sizeof(SBZRoomConnectorComponent_eventSetSoundModifier_Parms), Z_Construct_UFunction_USBZRoomConnectorComponent_SetSoundModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomConnectorComponent_SetSoundModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRoomConnectorComponent_SetSoundModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRoomConnectorComponent_SetSoundModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRoomConnectorComponent_SetSoundModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRoomConnectorComponent_SetSoundModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZRoomConnectorComponent_NoRegister()
	{
		return USBZRoomConnectorComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZRoomConnectorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAIBreachable_MetaData[];
#endif
		static void NewProp_bIsAIBreachable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAIBreachable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSoundModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialSoundModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomCheckDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoomCheckDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsedForRoomPathing_MetaData[];
#endif
		static void NewProp_bIsUsedForRoomPathing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsedForRoomPathing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRoomConnectorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZRoomConnectorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZRoomConnectorComponent_AllowSoundToPassUnmodified, "AllowSoundToPassUnmodified" }, // 4265347546
		{ &Z_Construct_UFunction_USBZRoomConnectorComponent_BlockSoundCompletly, "BlockSoundCompletly" }, // 254810939
		{ &Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomALocation, "GetRoomALocation" }, // 1211497585
		{ &Z_Construct_UFunction_USBZRoomConnectorComponent_GetRoomBLocation, "GetRoomBLocation" }, // 4277201006
		{ &Z_Construct_UFunction_USBZRoomConnectorComponent_SetRoomConnectorEnabled, "SetRoomConnectorEnabled" }, // 838436015
		{ &Z_Construct_UFunction_USBZRoomConnectorComponent_SetSoundModifier, "SetSoundModifier" }, // 290374659
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRoomConnectorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZRoomConnectorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRoomConnectorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_bIsAIBreachable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomConnectorComponent" },
		{ "ModuleRelativePath", "Public/SBZRoomConnectorComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_bIsAIBreachable_SetBit(void* Obj)
	{
		((USBZRoomConnectorComponent*)Obj)->bIsAIBreachable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_bIsAIBreachable = { "bIsAIBreachable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZRoomConnectorComponent), &Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_bIsAIBreachable_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_bIsAIBreachable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_bIsAIBreachable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_InitialSoundModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomConnectorComponent" },
		{ "ModuleRelativePath", "Public/SBZRoomConnectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_InitialSoundModifier = { "InitialSoundModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRoomConnectorComponent, InitialSoundModifier), METADATA_PARAMS(Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_InitialSoundModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_InitialSoundModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_RoomA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomConnectorComponent" },
		{ "ModuleRelativePath", "Public/SBZRoomConnectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_RoomA = { "RoomA", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRoomConnectorComponent, RoomA), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_RoomA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_RoomA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_RoomB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomConnectorComponent" },
		{ "ModuleRelativePath", "Public/SBZRoomConnectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_RoomB = { "RoomB", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRoomConnectorComponent, RoomB), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_RoomB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_RoomB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_RoomCheckDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomConnectorComponent" },
		{ "ModuleRelativePath", "Public/SBZRoomConnectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_RoomCheckDistance = { "RoomCheckDistance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRoomConnectorComponent, RoomCheckDistance), METADATA_PARAMS(Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_RoomCheckDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_RoomCheckDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_bIsUsedForRoomPathing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomConnectorComponent" },
		{ "ModuleRelativePath", "Public/SBZRoomConnectorComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_bIsUsedForRoomPathing_SetBit(void* Obj)
	{
		((USBZRoomConnectorComponent*)Obj)->bIsUsedForRoomPathing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_bIsUsedForRoomPathing = { "bIsUsedForRoomPathing", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZRoomConnectorComponent), &Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_bIsUsedForRoomPathing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_bIsUsedForRoomPathing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_bIsUsedForRoomPathing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZRoomConnectorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_bIsAIBreachable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_InitialSoundModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_RoomA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_RoomB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_RoomCheckDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRoomConnectorComponent_Statics::NewProp_bIsUsedForRoomPathing,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZRoomConnectorComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister, (int32)VTABLE_OFFSET(USBZRoomConnectorComponent, ISBZRoomConnectorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRoomConnectorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRoomConnectorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRoomConnectorComponent_Statics::ClassParams = {
		&USBZRoomConnectorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZRoomConnectorComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZRoomConnectorComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZRoomConnectorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRoomConnectorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRoomConnectorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRoomConnectorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRoomConnectorComponent, 945853053);
	template<> STARBREEZE_API UClass* StaticClass<USBZRoomConnectorComponent>()
	{
		return USBZRoomConnectorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRoomConnectorComponent(Z_Construct_UClass_USBZRoomConnectorComponent, &USBZRoomConnectorComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRoomConnectorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRoomConnectorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
