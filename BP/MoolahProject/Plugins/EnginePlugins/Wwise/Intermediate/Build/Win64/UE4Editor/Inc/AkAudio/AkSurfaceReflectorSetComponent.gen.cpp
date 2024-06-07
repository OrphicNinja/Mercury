// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSurfaceReflectorSetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfaceReflectorSetComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execRemoveSurfaceReflectorSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSurfaceReflectorSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSendSurfaceReflectorSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendSurfaceReflectorSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execUpdateSurfaceReflectorSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSurfaceReflectorSet();
		P_NATIVE_END;
	}
	void UAkSurfaceReflectorSetComponent::StaticRegisterNativesUAkSurfaceReflectorSetComponent()
	{
		UClass* Class = UAkSurfaceReflectorSetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execRemoveSurfaceReflectorSet },
			{ "SendSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execSendSurfaceReflectorSet },
			{ "UpdateSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execUpdateSurfaceReflectorSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "RemoveSurfaceReflectorSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SendSurfaceReflectorSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "UpdateSurfaceReflectorSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister()
	{
		return UAkSurfaceReflectorSetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSurfaceReflectors_MetaData[];
#endif
		static void NewProp_bEnableSurfaceReflectors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSurfaceReflectors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcousticPolys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcousticPolys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AcousticPolys;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAcousticTextureSetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet, "RemoveSurfaceReflectorSet" }, // 1884906255
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet, "SendSurfaceReflectorSet" }, // 4048909815
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet, "UpdateSurfaceReflectorSet" }, // 275325529
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkSurfaceReflectorSetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfaceReflectorSetComponent" },
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableSurfaceReflectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors = { "bEnableSurfaceReflectors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_Inner = { "AcousticPolys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkSurfacePoly, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfaceReflectorSetComponent" },
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys = { "AcousticPolys", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, AcousticPolys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfaceReflectorSetComponent" },
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction = { "bEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfaceReflectorSetComponent" },
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffractionOnBoundaryEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges = { "bEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfaceReflectorSetComponent" },
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom = { "AssociatedRoom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, AssociatedRoom), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSurfaceReflectorSetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::ClassParams = {
		&UAkSurfaceReflectorSetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSurfaceReflectorSetComponent, 1979795818);
	template<> AKAUDIO_API UClass* StaticClass<UAkSurfaceReflectorSetComponent>()
	{
		return UAkSurfaceReflectorSetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSurfaceReflectorSetComponent(Z_Construct_UClass_UAkSurfaceReflectorSetComponent, &UAkSurfaceReflectorSetComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSurfaceReflectorSetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSurfaceReflectorSetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
