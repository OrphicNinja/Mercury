// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameplayAbilityQueryLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameplayAbilityQueryLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbilityQueryLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbilityQueryLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbilityQuery_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison();
// End Cross Module References
	DEFINE_FUNCTION(USBZGameplayAbilityQueryLibrary::execQueryGameplayAbilityFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(USBZGameplayAbilityQuery,Z_Param_AbilityQuery);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_FailedReason);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_FailedIcon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZGameplayAbilityQueryLibrary::QueryGameplayAbilityFromActor(Z_Param_Actor,Z_Param_AbilityQuery,Z_Param_Out_FailedReason,Z_Param_Out_FailedIcon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameplayAbilityQueryLibrary::execQueryGameplayAbilitySystemComponent)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
		P_GET_OBJECT(USBZGameplayAbilityQuery,Z_Param_AbilityQuery);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_FailedReason);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_FailedIcon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZGameplayAbilityQueryLibrary::QueryGameplayAbilitySystemComponent(Z_Param_AbilitySystem,Z_Param_AbilityQuery,Z_Param_Out_FailedReason,Z_Param_Out_FailedIcon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameplayAbilityQueryLibrary::execQueryGameplayTagContainerFromAbilitySystemComponent)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
		P_GET_STRUCT_REF(FSBZGameplayTagContainerComparison,Z_Param_Out_Comparison);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZGameplayAbilityQueryLibrary::QueryGameplayTagContainerFromAbilitySystemComponent(Z_Param_AbilitySystem,Z_Param_Out_Comparison);
		P_NATIVE_END;
	}
	void USBZGameplayAbilityQueryLibrary::StaticRegisterNativesUSBZGameplayAbilityQueryLibrary()
	{
		UClass* Class = USBZGameplayAbilityQueryLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryGameplayAbilityFromActor", &USBZGameplayAbilityQueryLibrary::execQueryGameplayAbilityFromActor },
			{ "QueryGameplayAbilitySystemComponent", &USBZGameplayAbilityQueryLibrary::execQueryGameplayAbilitySystemComponent },
			{ "QueryGameplayTagContainerFromAbilitySystemComponent", &USBZGameplayAbilityQueryLibrary::execQueryGameplayTagContainerFromAbilitySystemComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics
	{
		struct SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilityFromActor_Parms
		{
			AActor* Actor;
			const USBZGameplayAbilityQuery* AbilityQuery;
			FText FailedReason;
			UTexture2D* FailedIcon;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityQuery;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FailedIcon;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilityFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::NewProp_AbilityQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::NewProp_AbilityQuery = { "AbilityQuery", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilityFromActor_Parms, AbilityQuery), Z_Construct_UClass_USBZGameplayAbilityQuery_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::NewProp_AbilityQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::NewProp_AbilityQuery_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::NewProp_FailedReason = { "FailedReason", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilityFromActor_Parms, FailedReason), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::NewProp_FailedIcon = { "FailedIcon", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilityFromActor_Parms, FailedIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilityFromActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilityFromActor_Parms), &Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::NewProp_AbilityQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::NewProp_FailedReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::NewProp_FailedIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameplayAbilityQueryLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameplayAbilityQueryLibrary, nullptr, "QueryGameplayAbilityFromActor", nullptr, nullptr, sizeof(SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilityFromActor_Parms), Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics
	{
		struct SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilitySystemComponent_Parms
		{
			UAbilitySystemComponent* AbilitySystem;
			const USBZGameplayAbilityQuery* AbilityQuery;
			FText FailedReason;
			UTexture2D* FailedIcon;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityQuery;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FailedIcon;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilitySystemComponent_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_AbilitySystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_AbilitySystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_AbilityQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_AbilityQuery = { "AbilityQuery", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilitySystemComponent_Parms, AbilityQuery), Z_Construct_UClass_USBZGameplayAbilityQuery_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_AbilityQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_AbilityQuery_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_FailedReason = { "FailedReason", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilitySystemComponent_Parms, FailedReason), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_FailedIcon = { "FailedIcon", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilitySystemComponent_Parms, FailedIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilitySystemComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilitySystemComponent_Parms), &Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_AbilitySystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_AbilityQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_FailedReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_FailedIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameplayAbilityQueryLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameplayAbilityQueryLibrary, nullptr, "QueryGameplayAbilitySystemComponent", nullptr, nullptr, sizeof(SBZGameplayAbilityQueryLibrary_eventQueryGameplayAbilitySystemComponent_Parms), Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics
	{
		struct SBZGameplayAbilityQueryLibrary_eventQueryGameplayTagContainerFromAbilitySystemComponent_Parms
		{
			UAbilitySystemComponent* AbilitySystem;
			FSBZGameplayTagContainerComparison Comparison;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Comparison;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameplayAbilityQueryLibrary_eventQueryGameplayTagContainerFromAbilitySystemComponent_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::NewProp_AbilitySystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::NewProp_AbilitySystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::NewProp_Comparison_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameplayAbilityQueryLibrary_eventQueryGameplayTagContainerFromAbilitySystemComponent_Parms, Comparison), Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::NewProp_Comparison_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::NewProp_Comparison_MetaData)) };
	void Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameplayAbilityQueryLibrary_eventQueryGameplayTagContainerFromAbilitySystemComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameplayAbilityQueryLibrary_eventQueryGameplayTagContainerFromAbilitySystemComponent_Parms), &Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::NewProp_AbilitySystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::NewProp_Comparison,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameplayAbilityQueryLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameplayAbilityQueryLibrary, nullptr, "QueryGameplayTagContainerFromAbilitySystemComponent", nullptr, nullptr, sizeof(SBZGameplayAbilityQueryLibrary_eventQueryGameplayTagContainerFromAbilitySystemComponent_Parms), Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGameplayAbilityQueryLibrary_NoRegister()
	{
		return USBZGameplayAbilityQueryLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameplayAbilityQueryLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameplayAbilityQueryLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGameplayAbilityQueryLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilityFromActor, "QueryGameplayAbilityFromActor" }, // 1117173697
		{ &Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayAbilitySystemComponent, "QueryGameplayAbilitySystemComponent" }, // 3338565136
		{ &Z_Construct_UFunction_USBZGameplayAbilityQueryLibrary_QueryGameplayTagContainerFromAbilitySystemComponent, "QueryGameplayTagContainerFromAbilitySystemComponent" }, // 260559987
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbilityQueryLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameplayAbilityQueryLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbilityQueryLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameplayAbilityQueryLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameplayAbilityQueryLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameplayAbilityQueryLibrary_Statics::ClassParams = {
		&USBZGameplayAbilityQueryLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbilityQueryLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbilityQueryLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameplayAbilityQueryLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameplayAbilityQueryLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameplayAbilityQueryLibrary, 3109921897);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameplayAbilityQueryLibrary>()
	{
		return USBZGameplayAbilityQueryLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameplayAbilityQueryLibrary(Z_Construct_UClass_USBZGameplayAbilityQueryLibrary, &USBZGameplayAbilityQueryLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameplayAbilityQueryLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameplayAbilityQueryLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
