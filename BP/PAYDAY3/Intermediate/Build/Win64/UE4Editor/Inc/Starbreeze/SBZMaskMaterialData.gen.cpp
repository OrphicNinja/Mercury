// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskMaterialData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskMaterialData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskMaterialData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskMaterialData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMaskMaterialState();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMaskMaterialData::execGetMaterialState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZMaskMaterialState*)Z_Param__Result=P_THIS->GetMaterialState();
		P_NATIVE_END;
	}
	void USBZMaskMaterialData::StaticRegisterNativesUSBZMaskMaterialData()
	{
		UClass* Class = USBZMaskMaterialData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaterialState", &USBZMaskMaterialData::execGetMaterialState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMaskMaterialData_GetMaterialState_Statics
	{
		struct SBZMaskMaterialData_eventGetMaterialState_Parms
		{
			ESBZMaskMaterialState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMaskMaterialData_GetMaterialState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMaskMaterialData_GetMaterialState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMaskMaterialData_eventGetMaterialState_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZMaskMaterialState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMaskMaterialData_GetMaterialState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskMaterialData_GetMaterialState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMaskMaterialData_GetMaterialState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMaskMaterialData_GetMaterialState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMaskMaterialData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMaskMaterialData_GetMaterialState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMaskMaterialData, nullptr, "GetMaterialState", nullptr, nullptr, sizeof(SBZMaskMaterialData_eventGetMaterialState_Parms), Z_Construct_UFunction_USBZMaskMaterialData_GetMaterialState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskMaterialData_GetMaterialState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMaskMaterialData_GetMaterialState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMaskMaterialData_GetMaterialState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMaskMaterialData_GetMaterialState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMaskMaterialData_GetMaterialState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMaskMaterialData_NoRegister()
	{
		return USBZMaskMaterialData::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaskMaterialData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseNormalTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseNormalTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgedNormalTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgedNormalTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgedAlbedoTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgedAlbedoTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metallic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Metallic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailTiling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetailTiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadingModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAlbedo_MetaData[];
#endif
		static void NewProp_UseAlbedo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAlbedo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaskMaterialData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCosmeticsDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMaskMaterialData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMaskMaterialData_GetMaterialState, "GetMaterialState" }, // 2079808994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskMaterialData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMaskMaterialData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskMaterialData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_MaterialState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_MaterialState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskMaterialData" },
		{ "ModuleRelativePath", "Public/SBZMaskMaterialData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_MaterialState = { "MaterialState", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskMaterialData, MaterialState), Z_Construct_UEnum_Starbreeze_ESBZMaskMaterialState, METADATA_PARAMS(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_MaterialState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_MaterialState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_BaseNormalTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskMaterialData" },
		{ "ModuleRelativePath", "Public/SBZMaskMaterialData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_BaseNormalTexture = { "BaseNormalTexture", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskMaterialData, BaseNormalTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_BaseNormalTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_BaseNormalTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_AgedNormalTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskMaterialData" },
		{ "ModuleRelativePath", "Public/SBZMaskMaterialData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_AgedNormalTexture = { "AgedNormalTexture", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskMaterialData, AgedNormalTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_AgedNormalTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_AgedNormalTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_AgedAlbedoTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskMaterialData" },
		{ "ModuleRelativePath", "Public/SBZMaskMaterialData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_AgedAlbedoTexture = { "AgedAlbedoTexture", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskMaterialData, AgedAlbedoTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_AgedAlbedoTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_AgedAlbedoTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_Metallic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskMaterialData" },
		{ "ModuleRelativePath", "Public/SBZMaskMaterialData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_Metallic = { "Metallic", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskMaterialData, Metallic), METADATA_PARAMS(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_Metallic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_Metallic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_Roughness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskMaterialData" },
		{ "ModuleRelativePath", "Public/SBZMaskMaterialData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_Roughness = { "Roughness", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskMaterialData, Roughness), METADATA_PARAMS(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_Roughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_Roughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_DetailTiling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskMaterialData" },
		{ "ModuleRelativePath", "Public/SBZMaskMaterialData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_DetailTiling = { "DetailTiling", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskMaterialData, DetailTiling), METADATA_PARAMS(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_DetailTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_DetailTiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_ShadingModel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskMaterialData" },
		{ "ModuleRelativePath", "Public/SBZMaskMaterialData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskMaterialData, ShadingModel), METADATA_PARAMS(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_ShadingModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_ShadingModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_UseAlbedo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskMaterialData" },
		{ "ModuleRelativePath", "Public/SBZMaskMaterialData.h" },
	};
#endif
	void Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_UseAlbedo_SetBit(void* Obj)
	{
		((USBZMaskMaterialData*)Obj)->UseAlbedo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_UseAlbedo = { "UseAlbedo", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMaskMaterialData), &Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_UseAlbedo_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_UseAlbedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_UseAlbedo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMaskMaterialData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_MaterialState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_MaterialState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_BaseNormalTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_AgedNormalTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_AgedAlbedoTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_Metallic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_Roughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_DetailTiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_ShadingModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskMaterialData_Statics::NewProp_UseAlbedo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaskMaterialData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMaskMaterialData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaskMaterialData_Statics::ClassParams = {
		&USBZMaskMaterialData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMaskMaterialData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskMaterialData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMaskMaterialData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskMaterialData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaskMaterialData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaskMaterialData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaskMaterialData, 2028509917);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaskMaterialData>()
	{
		return USBZMaskMaterialData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaskMaterialData(Z_Construct_UClass_USBZMaskMaterialData, &USBZMaskMaterialData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaskMaterialData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaskMaterialData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
