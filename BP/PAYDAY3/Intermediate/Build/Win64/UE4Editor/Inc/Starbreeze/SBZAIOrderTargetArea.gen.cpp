// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrderTargetArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrderTargetArea() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIOrderTargetArea_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIOrderTargetArea();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquad_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCoverPoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCoverPointContainerInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAIOrderTargetArea::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIOrderTargetArea::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIOrderTargetArea::execUpdateCoverPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCoverPoints();
		P_NATIVE_END;
	}
	void ASBZAIOrderTargetArea::StaticRegisterNativesASBZAIOrderTargetArea()
	{
		UClass* Class = ASBZAIOrderTargetArea::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsEnabled", &ASBZAIOrderTargetArea::execIsEnabled },
			{ "SetEnabled", &ASBZAIOrderTargetArea::execSetEnabled },
			{ "UpdateCoverPoints", &ASBZAIOrderTargetArea::execUpdateCoverPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAIOrderTargetArea_IsEnabled_Statics
	{
		struct SBZAIOrderTargetArea_eventIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZAIOrderTargetArea_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIOrderTargetArea_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIOrderTargetArea_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIOrderTargetArea_eventIsEnabled_Parms), &Z_Construct_UFunction_ASBZAIOrderTargetArea_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIOrderTargetArea_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIOrderTargetArea_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIOrderTargetArea_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrderTargetArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIOrderTargetArea_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIOrderTargetArea, nullptr, "IsEnabled", nullptr, nullptr, sizeof(SBZAIOrderTargetArea_eventIsEnabled_Parms), Z_Construct_UFunction_ASBZAIOrderTargetArea_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIOrderTargetArea_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIOrderTargetArea_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIOrderTargetArea_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIOrderTargetArea_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIOrderTargetArea_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIOrderTargetArea_SetEnabled_Statics
	{
		struct SBZAIOrderTargetArea_eventSetEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZAIOrderTargetArea_SetEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZAIOrderTargetArea_eventSetEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIOrderTargetArea_SetEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIOrderTargetArea_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZAIOrderTargetArea_SetEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIOrderTargetArea_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIOrderTargetArea_SetEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIOrderTargetArea_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrderTargetArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIOrderTargetArea_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIOrderTargetArea, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZAIOrderTargetArea_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZAIOrderTargetArea_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIOrderTargetArea_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIOrderTargetArea_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIOrderTargetArea_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIOrderTargetArea_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIOrderTargetArea_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIOrderTargetArea_UpdateCoverPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIOrderTargetArea_UpdateCoverPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrderTargetArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIOrderTargetArea_UpdateCoverPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIOrderTargetArea, nullptr, "UpdateCoverPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIOrderTargetArea_UpdateCoverPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIOrderTargetArea_UpdateCoverPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIOrderTargetArea_UpdateCoverPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIOrderTargetArea_UpdateCoverPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAIOrderTargetArea_NoRegister()
	{
		return ASBZAIOrderTargetArea::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAIOrderTargetArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsiderCoversDirection_MetaData[];
#endif
		static void NewProp_bConsiderCoversDirection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsiderCoversDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArcAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArcAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomVolumes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssignedSquads_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssignedSquads_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssignedSquads;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedCoverPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedCoverPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedCoverPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAIOrderTargetArea_IsEnabled, "IsEnabled" }, // 1378978869
		{ &Z_Construct_UFunction_ASBZAIOrderTargetArea_SetEnabled, "SetEnabled" }, // 3819266444
		{ &Z_Construct_UFunction_ASBZAIOrderTargetArea_UpdateCoverPoints, "UpdateCoverPoints" }, // 2478160640
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrderTargetArea.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrderTargetArea.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrderTargetArea" },
		{ "ModuleRelativePath", "Public/SBZAIOrderTargetArea.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ASBZAIOrderTargetArea*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAIOrderTargetArea), &Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_bConsiderCoversDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrderTargetArea" },
		{ "ModuleRelativePath", "Public/SBZAIOrderTargetArea.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_bConsiderCoversDirection_SetBit(void* Obj)
	{
		((ASBZAIOrderTargetArea*)Obj)->bConsiderCoversDirection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_bConsiderCoversDirection = { "bConsiderCoversDirection", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAIOrderTargetArea), &Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_bConsiderCoversDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_bConsiderCoversDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_bConsiderCoversDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_ArcAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrderTargetArea" },
		{ "ModuleRelativePath", "Public/SBZAIOrderTargetArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_ArcAngle = { "ArcAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIOrderTargetArea, ArcAngle), METADATA_PARAMS(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_ArcAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_ArcAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrderTargetArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrderTargetArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIOrderTargetArea, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_BoxComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_RoomVolumes_Inner = { "RoomVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_RoomVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrderTargetArea" },
		{ "ModuleRelativePath", "Public/SBZAIOrderTargetArea.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_RoomVolumes = { "RoomVolumes", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIOrderTargetArea, RoomVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_RoomVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_RoomVolumes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_AssignedSquads_Inner = { "AssignedSquads", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAISquad_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_AssignedSquads_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrderTargetArea" },
		{ "ModuleRelativePath", "Public/SBZAIOrderTargetArea.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_AssignedSquads = { "AssignedSquads", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIOrderTargetArea, AssignedSquads), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_AssignedSquads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_AssignedSquads_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_CachedCoverPoints_Inner = { "CachedCoverPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZCoverPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_CachedCoverPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrderTargetArea" },
		{ "ModuleRelativePath", "Public/SBZAIOrderTargetArea.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_CachedCoverPoints = { "CachedCoverPoints", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIOrderTargetArea, CachedCoverPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_CachedCoverPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_CachedCoverPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_bConsiderCoversDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_ArcAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_RoomVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_RoomVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_AssignedSquads_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_AssignedSquads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_CachedCoverPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::NewProp_CachedCoverPoints,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZCoverPointContainerInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIOrderTargetArea, ISBZCoverPointContainerInterface), false },
			{ Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIOrderTargetArea, ISBZRoomVolumeInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAIOrderTargetArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::ClassParams = {
		&ASBZAIOrderTargetArea::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAIOrderTargetArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAIOrderTargetArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAIOrderTargetArea, 3822085078);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAIOrderTargetArea>()
	{
		return ASBZAIOrderTargetArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAIOrderTargetArea(Z_Construct_UClass_ASBZAIOrderTargetArea, &ASBZAIOrderTargetArea::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAIOrderTargetArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAIOrderTargetArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
