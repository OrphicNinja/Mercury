// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWindEmitterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWindEmitterComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindEmitterComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindEmitterComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWindVolumeType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZWindEmitterType();
// End Cross Module References
	DEFINE_FUNCTION(USBZWindEmitterComponent::execSetExtent)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InExtent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExtent(Z_Param_Out_InExtent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZWindEmitterComponent::execSetSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWindSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpeed(Z_Param_InWindSpeed);
		P_NATIVE_END;
	}
	void USBZWindEmitterComponent::StaticRegisterNativesUSBZWindEmitterComponent()
	{
		UClass* Class = USBZWindEmitterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetExtent", &USBZWindEmitterComponent::execSetExtent },
			{ "SetSpeed", &USBZWindEmitterComponent::execSetSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent_Statics
	{
		struct SBZWindEmitterComponent_eventSetExtent_Parms
		{
			FVector InExtent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InExtent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent_Statics::NewProp_InExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent_Statics::NewProp_InExtent = { "InExtent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWindEmitterComponent_eventSetExtent_Parms, InExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent_Statics::NewProp_InExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent_Statics::NewProp_InExtent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent_Statics::NewProp_InExtent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWindEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWindEmitterComponent, nullptr, "SetExtent", nullptr, nullptr, sizeof(SBZWindEmitterComponent_eventSetExtent_Parms), Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZWindEmitterComponent_SetSpeed_Statics
	{
		struct SBZWindEmitterComponent_eventSetSpeed_Parms
		{
			float InWindSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWindSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZWindEmitterComponent_SetSpeed_Statics::NewProp_InWindSpeed = { "InWindSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWindEmitterComponent_eventSetSpeed_Parms, InWindSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWindEmitterComponent_SetSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWindEmitterComponent_SetSpeed_Statics::NewProp_InWindSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWindEmitterComponent_SetSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWindEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWindEmitterComponent_SetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWindEmitterComponent, nullptr, "SetSpeed", nullptr, nullptr, sizeof(SBZWindEmitterComponent_eventSetSpeed_Parms), Z_Construct_UFunction_USBZWindEmitterComponent_SetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWindEmitterComponent_SetSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWindEmitterComponent_SetSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWindEmitterComponent_SetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWindEmitterComponent_SetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWindEmitterComponent_SetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZWindEmitterComponent_NoRegister()
	{
		return USBZWindEmitterComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZWindEmitterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VolumeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VolumeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmitterType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EmitterType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasInfiniteExtent_MetaData[];
#endif
		static void NewProp_bHasInfiniteExtent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasInfiniteExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinGustAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinGustAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGustAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGustAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GustFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GustFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWindEmitterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZWindEmitterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZWindEmitterComponent_SetExtent, "SetExtent" }, // 4152699248
		{ &Z_Construct_UFunction_USBZWindEmitterComponent_SetSpeed, "SetSpeed" }, // 1965878160
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindEmitterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SBZWindEmitterComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWindEmitterComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_VolumeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_VolumeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindEmitterComponent" },
		{ "ModuleRelativePath", "Public/SBZWindEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_VolumeType = { "VolumeType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindEmitterComponent, VolumeType), Z_Construct_UEnum_Starbreeze_ESBZWindVolumeType, METADATA_PARAMS(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_VolumeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_VolumeType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_EmitterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_EmitterType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindEmitterComponent" },
		{ "ModuleRelativePath", "Public/SBZWindEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_EmitterType = { "EmitterType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindEmitterComponent, EmitterType), Z_Construct_UEnum_Starbreeze_ESBZWindEmitterType, METADATA_PARAMS(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_EmitterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_EmitterType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_bHasInfiniteExtent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindEmitterComponent" },
		{ "ModuleRelativePath", "Public/SBZWindEmitterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_bHasInfiniteExtent_SetBit(void* Obj)
	{
		((USBZWindEmitterComponent*)Obj)->bHasInfiniteExtent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_bHasInfiniteExtent = { "bHasInfiniteExtent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZWindEmitterComponent), &Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_bHasInfiniteExtent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_bHasInfiniteExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_bHasInfiniteExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_Extent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindEmitterComponent" },
		{ "ModuleRelativePath", "Public/SBZWindEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindEmitterComponent, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_Extent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindEmitterComponent" },
		{ "ModuleRelativePath", "Public/SBZWindEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindEmitterComponent, Speed), METADATA_PARAMS(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_MinGustAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindEmitterComponent" },
		{ "ModuleRelativePath", "Public/SBZWindEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_MinGustAmount = { "MinGustAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindEmitterComponent, MinGustAmount), METADATA_PARAMS(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_MinGustAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_MinGustAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_MaxGustAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindEmitterComponent" },
		{ "ModuleRelativePath", "Public/SBZWindEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_MaxGustAmount = { "MaxGustAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindEmitterComponent, MaxGustAmount), METADATA_PARAMS(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_MaxGustAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_MaxGustAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_GustFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindEmitterComponent" },
		{ "ModuleRelativePath", "Public/SBZWindEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_GustFrequency = { "GustFrequency", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindEmitterComponent, GustFrequency), METADATA_PARAMS(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_GustFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_GustFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_Strength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindEmitterComponent" },
		{ "ModuleRelativePath", "Public/SBZWindEmitterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindEmitterComponent, Strength), METADATA_PARAMS(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_Strength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWindEmitterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_VolumeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_VolumeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_EmitterType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_EmitterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_bHasInfiniteExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_Extent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_MinGustAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_MaxGustAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_GustFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindEmitterComponent_Statics::NewProp_Strength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWindEmitterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWindEmitterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWindEmitterComponent_Statics::ClassParams = {
		&USBZWindEmitterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZWindEmitterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindEmitterComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWindEmitterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindEmitterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWindEmitterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWindEmitterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWindEmitterComponent, 123336880);
	template<> STARBREEZE_API UClass* StaticClass<USBZWindEmitterComponent>()
	{
		return USBZWindEmitterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWindEmitterComponent(Z_Construct_UClass_USBZWindEmitterComponent, &USBZWindEmitterComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWindEmitterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWindEmitterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
