// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeightTriggerVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeightTriggerVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWeightTriggerVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWeightTriggerVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZWeightTriggerDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZWeightTriggerVolume::execSetVolumeEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	void ASBZWeightTriggerVolume::StaticRegisterNativesASBZWeightTriggerVolume()
	{
		UClass* Class = ASBZWeightTriggerVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetVolumeEnabled", &ASBZWeightTriggerVolume::execSetVolumeEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZWeightTriggerVolume_SetVolumeEnabled_Statics
	{
		struct SBZWeightTriggerVolume_eventSetVolumeEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZWeightTriggerVolume_SetVolumeEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((SBZWeightTriggerVolume_eventSetVolumeEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZWeightTriggerVolume_SetVolumeEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZWeightTriggerVolume_eventSetVolumeEnabled_Parms), &Z_Construct_UFunction_ASBZWeightTriggerVolume_SetVolumeEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZWeightTriggerVolume_SetVolumeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZWeightTriggerVolume_SetVolumeEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWeightTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeightTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWeightTriggerVolume_SetVolumeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWeightTriggerVolume, nullptr, "SetVolumeEnabled", nullptr, nullptr, sizeof(SBZWeightTriggerVolume_eventSetVolumeEnabled_Parms), Z_Construct_UFunction_ASBZWeightTriggerVolume_SetVolumeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWeightTriggerVolume_SetVolumeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWeightTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWeightTriggerVolume_SetVolumeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWeightTriggerVolume_SetVolumeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWeightTriggerVolume_SetVolumeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZWeightTriggerVolume_NoRegister()
	{
		return ASBZWeightTriggerVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZWeightTriggerVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWeightLimitChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeightLimitChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartEnabled_MetaData[];
#endif
		static void NewProp_bStartEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeightLimit;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CarryCountMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarryCountMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarryCountMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CarryCountMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZWeightTriggerVolume_SetVolumeEnabled, "SetVolumeEnabled" }, // 277475852
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZWeightTriggerVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeightTriggerVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_OnWeightLimitChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeightTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZWeightTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_OnWeightLimitChanged = { "OnWeightLimitChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWeightTriggerVolume, OnWeightLimitChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZWeightTriggerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_OnWeightLimitChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_OnWeightLimitChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_bStartEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeightTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZWeightTriggerVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_bStartEnabled_SetBit(void* Obj)
	{
		((ASBZWeightTriggerVolume*)Obj)->bStartEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_bStartEnabled = { "bStartEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZWeightTriggerVolume), &Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_bStartEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_bStartEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_bStartEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_WeightLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeightTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZWeightTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_WeightLimit = { "WeightLimit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWeightTriggerVolume, WeightLimit), METADATA_PARAMS(Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_WeightLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_WeightLimit_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_CarryCountMap_ValueProp = { "CarryCountMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_CarryCountMap_Key_KeyProp = { "CarryCountMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_CarryCountMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeightTriggerVolume" },
		{ "ModuleRelativePath", "Public/SBZWeightTriggerVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_CarryCountMap = { "CarryCountMap", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWeightTriggerVolume, CarryCountMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_CarryCountMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_CarryCountMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_OnWeightLimitChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_bStartEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_WeightLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_CarryCountMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_CarryCountMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::NewProp_CarryCountMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZWeightTriggerVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::ClassParams = {
		&ASBZWeightTriggerVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZWeightTriggerVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZWeightTriggerVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZWeightTriggerVolume, 976780907);
	template<> STARBREEZE_API UClass* StaticClass<ASBZWeightTriggerVolume>()
	{
		return ASBZWeightTriggerVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZWeightTriggerVolume(Z_Construct_UClass_ASBZWeightTriggerVolume, &ASBZWeightTriggerVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZWeightTriggerVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZWeightTriggerVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
