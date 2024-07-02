// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularCharacterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularCharacterComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularCharacterComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularCharacterComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCustomizableSuitMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCapsuleShadowingData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZModularCharacterComponent::execAddToOutline)
	{
		P_GET_OBJECT(USBZOutlineComponent,Z_Param_OutlineComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToOutline(Z_Param_OutlineComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModularCharacterComponent::execGetBodyMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetBodyMeshComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModularCharacterComponent::execGetGlovesMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetGlovesMeshComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModularCharacterComponent::execGetSuitMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZCustomizableSuitMeshComponent**)Z_Param__Result=P_THIS->GetSuitMeshComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModularCharacterComponent::execSetBodyMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_BodySkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBodyMesh(Z_Param_BodySkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModularCharacterComponent::execSetGlovesMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_GlovesSkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGlovesMesh(Z_Param_GlovesSkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModularCharacterComponent::execSetSuitMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SuitSkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSuitMesh(Z_Param_SuitSkeletalMesh);
		P_NATIVE_END;
	}
	void USBZModularCharacterComponent::StaticRegisterNativesUSBZModularCharacterComponent()
	{
		UClass* Class = USBZModularCharacterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToOutline", &USBZModularCharacterComponent::execAddToOutline },
			{ "GetBodyMeshComponent", &USBZModularCharacterComponent::execGetBodyMeshComponent },
			{ "GetGlovesMeshComponent", &USBZModularCharacterComponent::execGetGlovesMeshComponent },
			{ "GetSuitMeshComponent", &USBZModularCharacterComponent::execGetSuitMeshComponent },
			{ "SetBodyMesh", &USBZModularCharacterComponent::execSetBodyMesh },
			{ "SetGlovesMesh", &USBZModularCharacterComponent::execSetGlovesMesh },
			{ "SetSuitMesh", &USBZModularCharacterComponent::execSetSuitMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline_Statics
	{
		struct SBZModularCharacterComponent_eventAddToOutline_Parms
		{
			USBZOutlineComponent* OutlineComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline_Statics::NewProp_OutlineComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularCharacterComponent_eventAddToOutline_Parms, OutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline_Statics::NewProp_OutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline_Statics::NewProp_OutlineComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline_Statics::NewProp_OutlineComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModularCharacterComponent, nullptr, "AddToOutline", nullptr, nullptr, sizeof(SBZModularCharacterComponent_eventAddToOutline_Parms), Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent_Statics
	{
		struct SBZModularCharacterComponent_eventGetBodyMeshComponent_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularCharacterComponent_eventGetBodyMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModularCharacterComponent, nullptr, "GetBodyMeshComponent", nullptr, nullptr, sizeof(SBZModularCharacterComponent_eventGetBodyMeshComponent_Parms), Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent_Statics
	{
		struct SBZModularCharacterComponent_eventGetGlovesMeshComponent_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularCharacterComponent_eventGetGlovesMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModularCharacterComponent, nullptr, "GetGlovesMeshComponent", nullptr, nullptr, sizeof(SBZModularCharacterComponent_eventGetGlovesMeshComponent_Parms), Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent_Statics
	{
		struct SBZModularCharacterComponent_eventGetSuitMeshComponent_Parms
		{
			USBZCustomizableSuitMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularCharacterComponent_eventGetSuitMeshComponent_Parms, ReturnValue), Z_Construct_UClass_USBZCustomizableSuitMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModularCharacterComponent, nullptr, "GetSuitMeshComponent", nullptr, nullptr, sizeof(SBZModularCharacterComponent_eventGetSuitMeshComponent_Parms), Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModularCharacterComponent_SetBodyMesh_Statics
	{
		struct SBZModularCharacterComponent_eventSetBodyMesh_Parms
		{
			USkeletalMesh* BodySkeletalMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZModularCharacterComponent_SetBodyMesh_Statics::NewProp_BodySkeletalMesh = { "BodySkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularCharacterComponent_eventSetBodyMesh_Parms, BodySkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModularCharacterComponent_SetBodyMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularCharacterComponent_SetBodyMesh_Statics::NewProp_BodySkeletalMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularCharacterComponent_SetBodyMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModularCharacterComponent_SetBodyMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModularCharacterComponent, nullptr, "SetBodyMesh", nullptr, nullptr, sizeof(SBZModularCharacterComponent_eventSetBodyMesh_Parms), Z_Construct_UFunction_USBZModularCharacterComponent_SetBodyMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_SetBodyMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModularCharacterComponent_SetBodyMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_SetBodyMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModularCharacterComponent_SetBodyMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModularCharacterComponent_SetBodyMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModularCharacterComponent_SetGlovesMesh_Statics
	{
		struct SBZModularCharacterComponent_eventSetGlovesMesh_Parms
		{
			USkeletalMesh* GlovesSkeletalMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlovesSkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZModularCharacterComponent_SetGlovesMesh_Statics::NewProp_GlovesSkeletalMesh = { "GlovesSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularCharacterComponent_eventSetGlovesMesh_Parms, GlovesSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModularCharacterComponent_SetGlovesMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularCharacterComponent_SetGlovesMesh_Statics::NewProp_GlovesSkeletalMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularCharacterComponent_SetGlovesMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModularCharacterComponent_SetGlovesMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModularCharacterComponent, nullptr, "SetGlovesMesh", nullptr, nullptr, sizeof(SBZModularCharacterComponent_eventSetGlovesMesh_Parms), Z_Construct_UFunction_USBZModularCharacterComponent_SetGlovesMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_SetGlovesMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModularCharacterComponent_SetGlovesMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_SetGlovesMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModularCharacterComponent_SetGlovesMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModularCharacterComponent_SetGlovesMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModularCharacterComponent_SetSuitMesh_Statics
	{
		struct SBZModularCharacterComponent_eventSetSuitMesh_Parms
		{
			USkeletalMesh* SuitSkeletalMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuitSkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZModularCharacterComponent_SetSuitMesh_Statics::NewProp_SuitSkeletalMesh = { "SuitSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularCharacterComponent_eventSetSuitMesh_Parms, SuitSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModularCharacterComponent_SetSuitMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularCharacterComponent_SetSuitMesh_Statics::NewProp_SuitSkeletalMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularCharacterComponent_SetSuitMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModularCharacterComponent_SetSuitMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModularCharacterComponent, nullptr, "SetSuitMesh", nullptr, nullptr, sizeof(SBZModularCharacterComponent_eventSetSuitMesh_Parms), Z_Construct_UFunction_USBZModularCharacterComponent_SetSuitMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_SetSuitMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModularCharacterComponent_SetSuitMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularCharacterComponent_SetSuitMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModularCharacterComponent_SetSuitMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModularCharacterComponent_SetSuitMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZModularCharacterComponent_NoRegister()
	{
		return USBZModularCharacterComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZModularCharacterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitCapsuleShadowingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuitCapsuleShadowingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuitMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlovesMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlovesMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZModularCharacterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkeletalMeshComponentBudgeted,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZModularCharacterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZModularCharacterComponent_AddToOutline, "AddToOutline" }, // 799864162
		{ &Z_Construct_UFunction_USBZModularCharacterComponent_GetBodyMeshComponent, "GetBodyMeshComponent" }, // 2100125237
		{ &Z_Construct_UFunction_USBZModularCharacterComponent_GetGlovesMeshComponent, "GetGlovesMeshComponent" }, // 3611153716
		{ &Z_Construct_UFunction_USBZModularCharacterComponent_GetSuitMeshComponent, "GetSuitMeshComponent" }, // 1436584902
		{ &Z_Construct_UFunction_USBZModularCharacterComponent_SetBodyMesh, "SetBodyMesh" }, // 3299850110
		{ &Z_Construct_UFunction_USBZModularCharacterComponent_SetGlovesMesh, "SetGlovesMesh" }, // 954464751
		{ &Z_Construct_UFunction_USBZModularCharacterComponent_SetSuitMesh, "SetSuitMesh" }, // 3112784437
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularCharacterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "SBZModularCharacterComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModularCharacterComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_SuitCapsuleShadowingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularCharacterComponent" },
		{ "ModuleRelativePath", "Public/SBZModularCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_SuitCapsuleShadowingData = { "SuitCapsuleShadowingData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModularCharacterComponent, SuitCapsuleShadowingData), Z_Construct_UClass_USBZCapsuleShadowingData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_SuitCapsuleShadowingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_SuitCapsuleShadowingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_SuitMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularCharacterComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZModularCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_SuitMeshComponent = { "SuitMeshComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModularCharacterComponent, SuitMeshComponent), Z_Construct_UClass_USBZCustomizableSuitMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_SuitMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_SuitMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_GlovesMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularCharacterComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZModularCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_GlovesMeshComponent = { "GlovesMeshComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModularCharacterComponent, GlovesMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_GlovesMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_GlovesMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_BodyMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularCharacterComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZModularCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_BodyMeshComponent = { "BodyMeshComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZModularCharacterComponent, BodyMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_BodyMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_BodyMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZModularCharacterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_SuitCapsuleShadowingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_SuitMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_GlovesMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZModularCharacterComponent_Statics::NewProp_BodyMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZModularCharacterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZModularCharacterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZModularCharacterComponent_Statics::ClassParams = {
		&USBZModularCharacterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZModularCharacterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularCharacterComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZModularCharacterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularCharacterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZModularCharacterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZModularCharacterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZModularCharacterComponent, 966330111);
	template<> STARBREEZE_API UClass* StaticClass<USBZModularCharacterComponent>()
	{
		return USBZModularCharacterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZModularCharacterComponent(Z_Construct_UClass_USBZModularCharacterComponent, &USBZModularCharacterComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZModularCharacterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZModularCharacterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
