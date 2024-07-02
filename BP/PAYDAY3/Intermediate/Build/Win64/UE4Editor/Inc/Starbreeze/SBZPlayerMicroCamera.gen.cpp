// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerMicroCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerMicroCamera() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerMicroCamera_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerMicroCamera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolSkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCameraViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPlayerMicroCamera::execMulticast_BecomeViewTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_BecomeViewTarget_Implementation(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerMicroCamera::execMulticast_EndViewTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_EndViewTarget_Implementation(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerMicroCamera::execOnPlayerStateReplicated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerStateReplicated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerMicroCamera::execOnRep_CameraCurrentRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CameraCurrentRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerMicroCamera::execOnRep_CameraTargetRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CameraTargetRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerMicroCamera::execOnRep_ViewTargetPlayerStateIdArray)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_OldViewTargetPlayerStateIdArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ViewTargetPlayerStateIdArray(Z_Param_Out_OldViewTargetPlayerStateIdArray);
		P_NATIVE_END;
	}
	static FName NAME_ASBZPlayerMicroCamera_BP_OnViewTargetChanged = FName(TEXT("BP_OnViewTargetChanged"));
	void ASBZPlayerMicroCamera::BP_OnViewTargetChanged(bool bIsViewTarget)
	{
		SBZPlayerMicroCamera_eventBP_OnViewTargetChanged_Parms Parms;
		Parms.bIsViewTarget=bIsViewTarget ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerMicroCamera_BP_OnViewTargetChanged),&Parms);
	}
	static FName NAME_ASBZPlayerMicroCamera_Multicast_BecomeViewTarget = FName(TEXT("Multicast_BecomeViewTarget"));
	void ASBZPlayerMicroCamera::Multicast_BecomeViewTarget(int32 PlayerId)
	{
		SBZPlayerMicroCamera_eventMulticast_BecomeViewTarget_Parms Parms;
		Parms.PlayerId=PlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerMicroCamera_Multicast_BecomeViewTarget),&Parms);
	}
	static FName NAME_ASBZPlayerMicroCamera_Multicast_EndViewTarget = FName(TEXT("Multicast_EndViewTarget"));
	void ASBZPlayerMicroCamera::Multicast_EndViewTarget(int32 PlayerId)
	{
		SBZPlayerMicroCamera_eventMulticast_EndViewTarget_Parms Parms;
		Parms.PlayerId=PlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerMicroCamera_Multicast_EndViewTarget),&Parms);
	}
	void ASBZPlayerMicroCamera::StaticRegisterNativesASBZPlayerMicroCamera()
	{
		UClass* Class = ASBZPlayerMicroCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_BecomeViewTarget", &ASBZPlayerMicroCamera::execMulticast_BecomeViewTarget },
			{ "Multicast_EndViewTarget", &ASBZPlayerMicroCamera::execMulticast_EndViewTarget },
			{ "OnPlayerStateReplicated", &ASBZPlayerMicroCamera::execOnPlayerStateReplicated },
			{ "OnRep_CameraCurrentRotation", &ASBZPlayerMicroCamera::execOnRep_CameraCurrentRotation },
			{ "OnRep_CameraTargetRotation", &ASBZPlayerMicroCamera::execOnRep_CameraTargetRotation },
			{ "OnRep_ViewTargetPlayerStateIdArray", &ASBZPlayerMicroCamera::execOnRep_ViewTargetPlayerStateIdArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPlayerMicroCamera_BP_OnViewTargetChanged_Statics
	{
		static void NewProp_bIsViewTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsViewTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlayerMicroCamera_BP_OnViewTargetChanged_Statics::NewProp_bIsViewTarget_SetBit(void* Obj)
	{
		((SBZPlayerMicroCamera_eventBP_OnViewTargetChanged_Parms*)Obj)->bIsViewTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerMicroCamera_BP_OnViewTargetChanged_Statics::NewProp_bIsViewTarget = { "bIsViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerMicroCamera_eventBP_OnViewTargetChanged_Parms), &Z_Construct_UFunction_ASBZPlayerMicroCamera_BP_OnViewTargetChanged_Statics::NewProp_bIsViewTarget_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerMicroCamera_BP_OnViewTargetChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerMicroCamera_BP_OnViewTargetChanged_Statics::NewProp_bIsViewTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerMicroCamera_BP_OnViewTargetChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerMicroCamera_BP_OnViewTargetChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerMicroCamera, nullptr, "BP_OnViewTargetChanged", nullptr, nullptr, sizeof(SBZPlayerMicroCamera_eventBP_OnViewTargetChanged_Parms), Z_Construct_UFunction_ASBZPlayerMicroCamera_BP_OnViewTargetChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerMicroCamera_BP_OnViewTargetChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerMicroCamera_BP_OnViewTargetChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerMicroCamera_BP_OnViewTargetChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerMicroCamera_BP_OnViewTargetChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerMicroCamera_BP_OnViewTargetChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_BecomeViewTarget_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_BecomeViewTarget_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerMicroCamera_eventMulticast_BecomeViewTarget_Parms, PlayerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_BecomeViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_BecomeViewTarget_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_BecomeViewTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_BecomeViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerMicroCamera, nullptr, "Multicast_BecomeViewTarget", nullptr, nullptr, sizeof(SBZPlayerMicroCamera_eventMulticast_BecomeViewTarget_Parms), Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_BecomeViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_BecomeViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_BecomeViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_BecomeViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_BecomeViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_BecomeViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_EndViewTarget_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_EndViewTarget_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerMicroCamera_eventMulticast_EndViewTarget_Parms, PlayerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_EndViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_EndViewTarget_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_EndViewTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_EndViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerMicroCamera, nullptr, "Multicast_EndViewTarget", nullptr, nullptr, sizeof(SBZPlayerMicroCamera_eventMulticast_EndViewTarget_Parms), Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_EndViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_EndViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_EndViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_EndViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_EndViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_EndViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerMicroCamera_OnPlayerStateReplicated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerMicroCamera_OnPlayerStateReplicated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerMicroCamera_OnPlayerStateReplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerMicroCamera, nullptr, "OnPlayerStateReplicated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerMicroCamera_OnPlayerStateReplicated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerMicroCamera_OnPlayerStateReplicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerMicroCamera_OnPlayerStateReplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerMicroCamera_OnPlayerStateReplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraCurrentRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraCurrentRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraCurrentRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerMicroCamera, nullptr, "OnRep_CameraCurrentRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraCurrentRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraCurrentRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraCurrentRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraCurrentRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraTargetRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraTargetRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraTargetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerMicroCamera, nullptr, "OnRep_CameraTargetRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraTargetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraTargetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraTargetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraTargetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics
	{
		struct SBZPlayerMicroCamera_eventOnRep_ViewTargetPlayerStateIdArray_Parms
		{
			TArray<int32> OldViewTargetPlayerStateIdArray;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldViewTargetPlayerStateIdArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldViewTargetPlayerStateIdArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OldViewTargetPlayerStateIdArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::NewProp_OldViewTargetPlayerStateIdArray_Inner = { "OldViewTargetPlayerStateIdArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::NewProp_OldViewTargetPlayerStateIdArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::NewProp_OldViewTargetPlayerStateIdArray = { "OldViewTargetPlayerStateIdArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerMicroCamera_eventOnRep_ViewTargetPlayerStateIdArray_Parms, OldViewTargetPlayerStateIdArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::NewProp_OldViewTargetPlayerStateIdArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::NewProp_OldViewTargetPlayerStateIdArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::NewProp_OldViewTargetPlayerStateIdArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::NewProp_OldViewTargetPlayerStateIdArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerMicroCamera, nullptr, "OnRep_ViewTargetPlayerStateIdArray", nullptr, nullptr, sizeof(SBZPlayerMicroCamera_eventOnRep_ViewTargetPlayerStateIdArray_Parms), Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPlayerMicroCamera_NoRegister()
	{
		return ASBZPlayerMicroCamera::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlayerMicroCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedCameraTargetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedCameraTargetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedCameraCurrentRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedCameraCurrentRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YawLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ViewTargetPlayerStateIdArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewTargetPlayerStateIdArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ViewTargetPlayerStateIdArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPlayerMicroCamera_BP_OnViewTargetChanged, "BP_OnViewTargetChanged" }, // 3996038380
		{ &Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_BecomeViewTarget, "Multicast_BecomeViewTarget" }, // 790879831
		{ &Z_Construct_UFunction_ASBZPlayerMicroCamera_Multicast_EndViewTarget, "Multicast_EndViewTarget" }, // 3735041966
		{ &Z_Construct_UFunction_ASBZPlayerMicroCamera_OnPlayerStateReplicated, "OnPlayerStateReplicated" }, // 783482157
		{ &Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraCurrentRotation, "OnRep_CameraCurrentRotation" }, // 220573208
		{ &Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_CameraTargetRotation, "OnRep_CameraTargetRotation" }, // 968683674
		{ &Z_Construct_UFunction_ASBZPlayerMicroCamera_OnRep_ViewTargetPlayerStateIdArray, "OnRep_ViewTargetPlayerStateIdArray" }, // 689919071
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerMicroCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMicroCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerMicroCamera, SkeletalMesh), Z_Construct_UClass_USBZToolSkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ReplicatedCameraTargetRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ReplicatedCameraTargetRotation = { "ReplicatedCameraTargetRotation", "OnRep_CameraTargetRotation", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerMicroCamera, ReplicatedCameraTargetRotation), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ReplicatedCameraTargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ReplicatedCameraTargetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ReplicatedCameraCurrentRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ReplicatedCameraCurrentRotation = { "ReplicatedCameraCurrentRotation", "OnRep_CameraCurrentRotation", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerMicroCamera, ReplicatedCameraCurrentRotation), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ReplicatedCameraCurrentRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ReplicatedCameraCurrentRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_YawLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_YawLimit = { "YawLimit", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerMicroCamera, YawLimit), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_YawLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_YawLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_PitchLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_PitchLimit = { "PitchLimit", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerMicroCamera, PitchLimit), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_PitchLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_PitchLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerMicroCamera, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_InstigatorCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerMicroCamera, InstigatorCharacter), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_InstigatorCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_InstigatorCharacter_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ViewTargetPlayerStateIdArray_Inner = { "ViewTargetPlayerStateIdArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ViewTargetPlayerStateIdArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMicroCamera" },
		{ "ModuleRelativePath", "Public/SBZPlayerMicroCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ViewTargetPlayerStateIdArray = { "ViewTargetPlayerStateIdArray", "OnRep_ViewTargetPlayerStateIdArray", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerMicroCamera, ViewTargetPlayerStateIdArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ViewTargetPlayerStateIdArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ViewTargetPlayerStateIdArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ReplicatedCameraTargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ReplicatedCameraCurrentRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_YawLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_PitchLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_InstigatorCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ViewTargetPlayerStateIdArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::NewProp_ViewTargetPlayerStateIdArray,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZCameraViewInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZPlayerMicroCamera, ISBZCameraViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlayerMicroCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::ClassParams = {
		&ASBZPlayerMicroCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlayerMicroCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlayerMicroCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlayerMicroCamera, 808988571);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlayerMicroCamera>()
	{
		return ASBZPlayerMicroCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlayerMicroCamera(Z_Construct_UClass_ASBZPlayerMicroCamera, &ASBZPlayerMicroCamera::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlayerMicroCamera"), false, nullptr, nullptr, nullptr);

	void ASBZPlayerMicroCamera::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedCameraTargetRotation(TEXT("ReplicatedCameraTargetRotation"));
		static const FName Name_ReplicatedCameraCurrentRotation(TEXT("ReplicatedCameraCurrentRotation"));
		static const FName Name_ViewTargetPlayerStateIdArray(TEXT("ViewTargetPlayerStateIdArray"));

		const bool bIsValid = true
			&& Name_ReplicatedCameraTargetRotation == ClassReps[(int32)ENetFields_Private::ReplicatedCameraTargetRotation].Property->GetFName()
			&& Name_ReplicatedCameraCurrentRotation == ClassReps[(int32)ENetFields_Private::ReplicatedCameraCurrentRotation].Property->GetFName()
			&& Name_ViewTargetPlayerStateIdArray == ClassReps[(int32)ENetFields_Private::ViewTargetPlayerStateIdArray].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZPlayerMicroCamera"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlayerMicroCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
