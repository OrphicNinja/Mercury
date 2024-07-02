// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCableComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCableComponent();
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCablePointAttachment();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCableCollisionPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWindData();
// End Cross Module References
	DEFINE_FUNCTION(USBZCableComponent::execAddAttachmentPoint)
	{
		P_GET_STRUCT_REF(FSBZCablePointAttachment,Z_Param_Out_CablePointAttachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAttachmentPoint(Z_Param_Out_CablePointAttachment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCableComponent::execAddCollisionPlane)
	{
		P_GET_STRUCT_REF(FSBZCableCollisionPlane,Z_Param_Out_CollisionPlane);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCollisionPlane(Z_Param_Out_CollisionPlane);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCableComponent::execAddDisplacementForce)
	{
		P_GET_STRUCT(FVector,Z_Param_DisplacementForceLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DisplacementForce);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DisplacementForceRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDisplacementForce(Z_Param_DisplacementForceLocation,Z_Param_DisplacementForce,Z_Param_DisplacementForceRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCableComponent::execDeleteAttachmentPoint)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteAttachmentPoint(Z_Param_Component,Z_Param_Out_SocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCableComponent::execResetAttachPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAttachPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCableComponent::execResetCable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCableComponent::execResetCollisionPlanes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCollisionPlanes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCableComponent::execSetStartAttachmentPointRewindSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_WindingSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartAttachmentPointRewindSpeed(Z_Param_WindingSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCableComponent::execSetWindData)
	{
		P_GET_STRUCT_REF(FSBZWindData,Z_Param_Out_WindData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWindData(Z_Param_Out_WindData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCableComponent::execUpdateSegmentCount)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InCableLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SegmentLength);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxSegmentCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSegmentCount(Z_Param_InCableLength,Z_Param_SegmentLength,Z_Param_MaxSegmentCount);
		P_NATIVE_END;
	}
	void USBZCableComponent::StaticRegisterNativesUSBZCableComponent()
	{
		UClass* Class = USBZCableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAttachmentPoint", &USBZCableComponent::execAddAttachmentPoint },
			{ "AddCollisionPlane", &USBZCableComponent::execAddCollisionPlane },
			{ "AddDisplacementForce", &USBZCableComponent::execAddDisplacementForce },
			{ "DeleteAttachmentPoint", &USBZCableComponent::execDeleteAttachmentPoint },
			{ "ResetAttachPoints", &USBZCableComponent::execResetAttachPoints },
			{ "ResetCable", &USBZCableComponent::execResetCable },
			{ "ResetCollisionPlanes", &USBZCableComponent::execResetCollisionPlanes },
			{ "SetStartAttachmentPointRewindSpeed", &USBZCableComponent::execSetStartAttachmentPointRewindSpeed },
			{ "SetWindData", &USBZCableComponent::execSetWindData },
			{ "UpdateSegmentCount", &USBZCableComponent::execUpdateSegmentCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCableComponent_AddAttachmentPoint_Statics
	{
		struct SBZCableComponent_eventAddAttachmentPoint_Parms
		{
			FSBZCablePointAttachment CablePointAttachment;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CablePointAttachment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCableComponent_AddAttachmentPoint_Statics::NewProp_CablePointAttachment = { "CablePointAttachment", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCableComponent_eventAddAttachmentPoint_Parms, CablePointAttachment), Z_Construct_UScriptStruct_FSBZCablePointAttachment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCableComponent_AddAttachmentPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCableComponent_AddAttachmentPoint_Statics::NewProp_CablePointAttachment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_AddAttachmentPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCableComponent_AddAttachmentPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCableComponent, nullptr, "AddAttachmentPoint", nullptr, nullptr, sizeof(SBZCableComponent_eventAddAttachmentPoint_Parms), Z_Construct_UFunction_USBZCableComponent_AddAttachmentPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_AddAttachmentPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_AddAttachmentPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_AddAttachmentPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCableComponent_AddAttachmentPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCableComponent_AddAttachmentPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane_Statics
	{
		struct SBZCableComponent_eventAddCollisionPlane_Parms
		{
			FSBZCableCollisionPlane CollisionPlane;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionPlane;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane_Statics::NewProp_CollisionPlane_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane_Statics::NewProp_CollisionPlane = { "CollisionPlane", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCableComponent_eventAddCollisionPlane_Parms, CollisionPlane), Z_Construct_UScriptStruct_FSBZCableCollisionPlane, METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane_Statics::NewProp_CollisionPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane_Statics::NewProp_CollisionPlane_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane_Statics::NewProp_CollisionPlane,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCableComponent, nullptr, "AddCollisionPlane", nullptr, nullptr, sizeof(SBZCableComponent_eventAddCollisionPlane_Parms), Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce_Statics
	{
		struct SBZCableComponent_eventAddDisplacementForce_Parms
		{
			FVector DisplacementForceLocation;
			float DisplacementForce;
			float DisplacementForceRadius;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplacementForceLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplacementForce;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplacementForceRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce_Statics::NewProp_DisplacementForceLocation = { "DisplacementForceLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCableComponent_eventAddDisplacementForce_Parms, DisplacementForceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce_Statics::NewProp_DisplacementForce = { "DisplacementForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCableComponent_eventAddDisplacementForce_Parms, DisplacementForce), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce_Statics::NewProp_DisplacementForceRadius = { "DisplacementForceRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCableComponent_eventAddDisplacementForce_Parms, DisplacementForceRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce_Statics::NewProp_DisplacementForceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce_Statics::NewProp_DisplacementForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce_Statics::NewProp_DisplacementForceRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCableComponent, nullptr, "AddDisplacementForce", nullptr, nullptr, sizeof(SBZCableComponent_eventAddDisplacementForce_Parms), Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics
	{
		struct SBZCableComponent_eventDeleteAttachmentPoint_Parms
		{
			const USceneComponent* Component;
			FName SocketName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCableComponent_eventDeleteAttachmentPoint_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCableComponent_eventDeleteAttachmentPoint_Parms, SocketName), METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::NewProp_SocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::NewProp_SocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCableComponent, nullptr, "DeleteAttachmentPoint", nullptr, nullptr, sizeof(SBZCableComponent_eventDeleteAttachmentPoint_Parms), Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCableComponent_ResetAttachPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_ResetAttachPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCableComponent_ResetAttachPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCableComponent, nullptr, "ResetAttachPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_ResetAttachPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_ResetAttachPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCableComponent_ResetAttachPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCableComponent_ResetAttachPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCableComponent_ResetCable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_ResetCable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCableComponent_ResetCable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCableComponent, nullptr, "ResetCable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_ResetCable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_ResetCable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCableComponent_ResetCable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCableComponent_ResetCable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCableComponent_ResetCollisionPlanes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_ResetCollisionPlanes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCableComponent_ResetCollisionPlanes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCableComponent, nullptr, "ResetCollisionPlanes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_ResetCollisionPlanes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_ResetCollisionPlanes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCableComponent_ResetCollisionPlanes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCableComponent_ResetCollisionPlanes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCableComponent_SetStartAttachmentPointRewindSpeed_Statics
	{
		struct SBZCableComponent_eventSetStartAttachmentPointRewindSpeed_Parms
		{
			float WindingSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindingSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCableComponent_SetStartAttachmentPointRewindSpeed_Statics::NewProp_WindingSpeed = { "WindingSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCableComponent_eventSetStartAttachmentPointRewindSpeed_Parms, WindingSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCableComponent_SetStartAttachmentPointRewindSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCableComponent_SetStartAttachmentPointRewindSpeed_Statics::NewProp_WindingSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_SetStartAttachmentPointRewindSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCableComponent_SetStartAttachmentPointRewindSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCableComponent, nullptr, "SetStartAttachmentPointRewindSpeed", nullptr, nullptr, sizeof(SBZCableComponent_eventSetStartAttachmentPointRewindSpeed_Parms), Z_Construct_UFunction_USBZCableComponent_SetStartAttachmentPointRewindSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_SetStartAttachmentPointRewindSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_SetStartAttachmentPointRewindSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_SetStartAttachmentPointRewindSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCableComponent_SetStartAttachmentPointRewindSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCableComponent_SetStartAttachmentPointRewindSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCableComponent_SetWindData_Statics
	{
		struct SBZCableComponent_eventSetWindData_Parms
		{
			FSBZWindData WindData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WindData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_SetWindData_Statics::NewProp_WindData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCableComponent_SetWindData_Statics::NewProp_WindData = { "WindData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCableComponent_eventSetWindData_Parms, WindData), Z_Construct_UScriptStruct_FSBZWindData, METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_SetWindData_Statics::NewProp_WindData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_SetWindData_Statics::NewProp_WindData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCableComponent_SetWindData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCableComponent_SetWindData_Statics::NewProp_WindData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_SetWindData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCableComponent_SetWindData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCableComponent, nullptr, "SetWindData", nullptr, nullptr, sizeof(SBZCableComponent_eventSetWindData_Parms), Z_Construct_UFunction_USBZCableComponent_SetWindData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_SetWindData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_SetWindData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_SetWindData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCableComponent_SetWindData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCableComponent_SetWindData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics
	{
		struct SBZCableComponent_eventUpdateSegmentCount_Parms
		{
			float InCableLength;
			float SegmentLength;
			int32 MaxSegmentCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCableLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InCableLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SegmentLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSegmentCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSegmentCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::NewProp_InCableLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::NewProp_InCableLength = { "InCableLength", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCableComponent_eventUpdateSegmentCount_Parms, InCableLength), METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::NewProp_InCableLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::NewProp_InCableLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::NewProp_SegmentLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::NewProp_SegmentLength = { "SegmentLength", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCableComponent_eventUpdateSegmentCount_Parms, SegmentLength), METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::NewProp_SegmentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::NewProp_SegmentLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::NewProp_MaxSegmentCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::NewProp_MaxSegmentCount = { "MaxSegmentCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCableComponent_eventUpdateSegmentCount_Parms, MaxSegmentCount), METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::NewProp_MaxSegmentCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::NewProp_MaxSegmentCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::NewProp_InCableLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::NewProp_SegmentLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::NewProp_MaxSegmentCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCableComponent, nullptr, "UpdateSegmentCount", nullptr, nullptr, sizeof(SBZCableComponent_eventUpdateSegmentCount_Parms), Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCableComponent_NoRegister()
	{
		return USBZCableComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZCableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectedByWind_MetaData[];
#endif
		static void NewProp_bAffectedByWind_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectedByWind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindGustFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindGustFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartCablePointAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartCablePointAttachment;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CablePointAttachments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CablePointAttachments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CablePointAttachments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollisionPlane_MetaData[];
#endif
		static void NewProp_bEnableCollisionPlane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollisionPlane;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionPlanes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionPlanes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionPlanes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoComputeCableLength_MetaData[];
#endif
		static void NewProp_bAutoComputeCableLength_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoComputeCableLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCableComponent_AddAttachmentPoint, "AddAttachmentPoint" }, // 1333378423
		{ &Z_Construct_UFunction_USBZCableComponent_AddCollisionPlane, "AddCollisionPlane" }, // 1894325996
		{ &Z_Construct_UFunction_USBZCableComponent_AddDisplacementForce, "AddDisplacementForce" }, // 623078369
		{ &Z_Construct_UFunction_USBZCableComponent_DeleteAttachmentPoint, "DeleteAttachmentPoint" }, // 2302564902
		{ &Z_Construct_UFunction_USBZCableComponent_ResetAttachPoints, "ResetAttachPoints" }, // 3228222233
		{ &Z_Construct_UFunction_USBZCableComponent_ResetCable, "ResetCable" }, // 2266331875
		{ &Z_Construct_UFunction_USBZCableComponent_ResetCollisionPlanes, "ResetCollisionPlanes" }, // 2270070565
		{ &Z_Construct_UFunction_USBZCableComponent_SetStartAttachmentPointRewindSpeed, "SetStartAttachmentPointRewindSpeed" }, // 1303471151
		{ &Z_Construct_UFunction_USBZCableComponent_SetWindData, "SetWindData" }, // 674806943
		{ &Z_Construct_UFunction_USBZCableComponent_UpdateSegmentCount, "UpdateSegmentCount" }, // 1448761867
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Physics Activation Components|Activation Mobility Trigger" },
		{ "IncludePath", "SBZCableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bAffectedByWind_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCableComponent" },
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bAffectedByWind_SetBit(void* Obj)
	{
		((USBZCableComponent*)Obj)->bAffectedByWind = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bAffectedByWind = { "bAffectedByWind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCableComponent), &Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bAffectedByWind_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bAffectedByWind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bAffectedByWind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCableComponent_Statics::NewProp_WindScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCableComponent" },
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCableComponent_Statics::NewProp_WindScale = { "WindScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCableComponent, WindScale), METADATA_PARAMS(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_WindScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_WindScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCableComponent_Statics::NewProp_WindGustFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCableComponent" },
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCableComponent_Statics::NewProp_WindGustFrequency = { "WindGustFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCableComponent, WindGustFrequency), METADATA_PARAMS(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_WindGustFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_WindGustFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCableComponent_Statics::NewProp_StartCablePointAttachment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCableComponent" },
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCableComponent_Statics::NewProp_StartCablePointAttachment = { "StartCablePointAttachment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCableComponent, StartCablePointAttachment), Z_Construct_UScriptStruct_FSBZCablePointAttachment, METADATA_PARAMS(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_StartCablePointAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_StartCablePointAttachment_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCableComponent_Statics::NewProp_CablePointAttachments_Inner = { "CablePointAttachments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCablePointAttachment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCableComponent_Statics::NewProp_CablePointAttachments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCableComponent" },
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZCableComponent_Statics::NewProp_CablePointAttachments = { "CablePointAttachments", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCableComponent, CablePointAttachments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_CablePointAttachments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_CablePointAttachments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bEnableCollisionPlane_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCableComponent" },
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bEnableCollisionPlane_SetBit(void* Obj)
	{
		((USBZCableComponent*)Obj)->bEnableCollisionPlane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bEnableCollisionPlane = { "bEnableCollisionPlane", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCableComponent), &Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bEnableCollisionPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bEnableCollisionPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bEnableCollisionPlane_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCableComponent_Statics::NewProp_CollisionPlanes_Inner = { "CollisionPlanes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCableCollisionPlane, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCableComponent_Statics::NewProp_CollisionPlanes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCableComponent" },
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZCableComponent_Statics::NewProp_CollisionPlanes = { "CollisionPlanes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCableComponent, CollisionPlanes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_CollisionPlanes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_CollisionPlanes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bAutoComputeCableLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCableComponent" },
		{ "ModuleRelativePath", "Public/SBZCableComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bAutoComputeCableLength_SetBit(void* Obj)
	{
		((USBZCableComponent*)Obj)->bAutoComputeCableLength = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bAutoComputeCableLength = { "bAutoComputeCableLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCableComponent), &Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bAutoComputeCableLength_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bAutoComputeCableLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bAutoComputeCableLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bAffectedByWind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCableComponent_Statics::NewProp_WindScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCableComponent_Statics::NewProp_WindGustFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCableComponent_Statics::NewProp_StartCablePointAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCableComponent_Statics::NewProp_CablePointAttachments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCableComponent_Statics::NewProp_CablePointAttachments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bEnableCollisionPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCableComponent_Statics::NewProp_CollisionPlanes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCableComponent_Statics::NewProp_CollisionPlanes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCableComponent_Statics::NewProp_bAutoComputeCableLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCableComponent_Statics::ClassParams = {
		&USBZCableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCableComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCableComponent, 3844743896);
	template<> STARBREEZE_API UClass* StaticClass<USBZCableComponent>()
	{
		return USBZCableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCableComponent(Z_Construct_UClass_USBZCableComponent, &USBZCableComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
