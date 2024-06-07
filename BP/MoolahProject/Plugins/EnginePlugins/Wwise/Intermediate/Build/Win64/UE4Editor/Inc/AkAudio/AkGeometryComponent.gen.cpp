// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkGeometryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGeometryComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMeshType();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData();
// End Cross Module References
	DEFINE_FUNCTION(UAkGeometryComponent::execConvertMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConvertMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGeometryComponent::execRemoveGeometry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGeometry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGeometryComponent::execSendGeometry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendGeometry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGeometryComponent::execUpdateGeometry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGeometry();
		P_NATIVE_END;
	}
	void UAkGeometryComponent::StaticRegisterNativesUAkGeometryComponent()
	{
		UClass* Class = UAkGeometryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertMesh", &UAkGeometryComponent::execConvertMesh },
			{ "RemoveGeometry", &UAkGeometryComponent::execRemoveGeometry },
			{ "SendGeometry", &UAkGeometryComponent::execSendGeometry },
			{ "UpdateGeometry", &UAkGeometryComponent::execUpdateGeometry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "ConvertMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "RemoveGeometry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "SendGeometry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGeometryComponent_SendGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "UpdateGeometry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkGeometryComponent_NoRegister()
	{
		return UAkGeometryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkGeometryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshSurfaceOverride_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshSurfaceOverride_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshSurfaceOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StaticMeshSurfaceOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMeshSurfaceOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionMeshSurfaceOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffraction_MetaData[];
#endif
		static void NewProp_bEnableDiffraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[];
#endif
		static void NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffractionOnBoundaryEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssociatedRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeometryData;
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_SurfaceAreas_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SurfaceAreas_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceAreas_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SurfaceAreas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkGeometryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAcousticTextureSetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkGeometryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh, "ConvertMesh" }, // 2996671039
		{ &Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry, "RemoveGeometry" }, // 3050121394
		{ &Z_Construct_UFunction_UAkGeometryComponent_SendGeometry, "SendGeometry" }, // 3988460862
		{ &Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry, "UpdateGeometry" }, // 480193848
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkGeometryComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGeometryComponent, MeshType), Z_Construct_UEnum_AkAudio_AkMeshType, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGeometryComponent, LOD), METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold = { "WeldingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGeometryComponent, WeldingThreshold), METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_ValueProp = { "StaticMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_Key_KeyProp = { "StaticMeshSurfaceOverride_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride = { "StaticMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGeometryComponent, StaticMeshSurfaceOverride), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride = { "CollisionMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGeometryComponent, CollisionMeshSurfaceOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_SetBit(void* Obj)
	{
		((UAkGeometryComponent*)Obj)->bEnableDiffraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction = { "bEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkGeometryComponent), &Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
	{
		((UAkGeometryComponent*)Obj)->bEnableDiffractionOnBoundaryEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges = { "bEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkGeometryComponent), &Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom = { "AssociatedRoom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGeometryComponent, AssociatedRoom), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData = { "GeometryData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGeometryComponent, GeometryData), Z_Construct_UScriptStruct_FAkGeometryData, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData_MetaData)) };
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_ValueProp = { "SurfaceAreas", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_Key_KeyProp = { "SurfaceAreas_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas = { "SurfaceAreas", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGeometryComponent, SurfaceAreas), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkGeometryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGeometryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkGeometryComponent_Statics::ClassParams = {
		&UAkGeometryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkGeometryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkGeometryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkGeometryComponent, 569879347);
	template<> AKAUDIO_API UClass* StaticClass<UAkGeometryComponent>()
	{
		return UAkGeometryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkGeometryComponent(Z_Construct_UClass_UAkGeometryComponent, &UAkGeometryComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkGeometryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGeometryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
