// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpatialAudioVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpatialAudioVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpatialAudioVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpatialAudioVolume();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(ASBZSpatialAudioVolume::execActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSpatialAudioVolume::execResetSpatialAudioVolumeArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSpatialAudioVolumeArray();
		P_NATIVE_END;
	}
	void ASBZSpatialAudioVolume::StaticRegisterNativesASBZSpatialAudioVolume()
	{
		UClass* Class = ASBZSpatialAudioVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &ASBZSpatialAudioVolume::execActivate },
			{ "ResetSpatialAudioVolumeArray", &ASBZSpatialAudioVolume::execResetSpatialAudioVolumeArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZSpatialAudioVolume_Activate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSpatialAudioVolume_Activate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpatialAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSpatialAudioVolume_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSpatialAudioVolume, nullptr, "Activate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSpatialAudioVolume_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpatialAudioVolume_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSpatialAudioVolume_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSpatialAudioVolume_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSpatialAudioVolume_ResetSpatialAudioVolumeArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSpatialAudioVolume_ResetSpatialAudioVolumeArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpatialAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSpatialAudioVolume_ResetSpatialAudioVolumeArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSpatialAudioVolume, nullptr, "ResetSpatialAudioVolumeArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSpatialAudioVolume_ResetSpatialAudioVolumeArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpatialAudioVolume_ResetSpatialAudioVolumeArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSpatialAudioVolume_ResetSpatialAudioVolumeArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSpatialAudioVolume_ResetSpatialAudioVolumeArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSpatialAudioVolume_NoRegister()
	{
		return ASBZSpatialAudioVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSpatialAudioVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcousticState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AcousticState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EchoState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EchoState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappingSpatialVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappingSpatialVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlappingSpatialVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullingDepthOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CullingDepthOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAkSpatialAudioVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSpatialAudioVolume_Activate, "Activate" }, // 3668432408
		{ &Z_Construct_UFunction_ASBZSpatialAudioVolume_ResetSpatialAudioVolumeArray, "ResetSpatialAudioVolumeArray" }, // 992059271
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZSpatialAudioVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSpatialAudioVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_AcousticState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpatialAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZSpatialAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_AcousticState = { "AcousticState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpatialAudioVolume, AcousticState), METADATA_PARAMS(Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_AcousticState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_AcousticState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_EchoState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpatialAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZSpatialAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_EchoState = { "EchoState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpatialAudioVolume, EchoState), METADATA_PARAMS(Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_EchoState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_EchoState_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_OverlappingSpatialVolumes_Inner = { "OverlappingSpatialVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpatialAudioVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_OverlappingSpatialVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpatialAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZSpatialAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_OverlappingSpatialVolumes = { "OverlappingSpatialVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpatialAudioVolume, OverlappingSpatialVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_OverlappingSpatialVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_OverlappingSpatialVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_CullingDepthOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpatialAudioVolume" },
		{ "ModuleRelativePath", "Public/SBZSpatialAudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_CullingDepthOverride = { "CullingDepthOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpatialAudioVolume, CullingDepthOverride), METADATA_PARAMS(Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_CullingDepthOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_CullingDepthOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_AcousticState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_EchoState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_OverlappingSpatialVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_OverlappingSpatialVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::NewProp_CullingDepthOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSpatialAudioVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::ClassParams = {
		&ASBZSpatialAudioVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSpatialAudioVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSpatialAudioVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSpatialAudioVolume, 111653729);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSpatialAudioVolume>()
	{
		return ASBZSpatialAudioVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSpatialAudioVolume(Z_Construct_UClass_ASBZSpatialAudioVolume, &ASBZSpatialAudioVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSpatialAudioVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSpatialAudioVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
