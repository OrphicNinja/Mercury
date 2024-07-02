// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCosmeticsDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCosmeticsDataAsset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRarity();
// End Cross Module References
	DEFINE_FUNCTION(USBZCosmeticsDataAsset::execGetRarity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZRarity*)Z_Param__Result=P_THIS->GetRarity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCosmeticsDataAsset::execIsConsumable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConsumable();
		P_NATIVE_END;
	}
	void USBZCosmeticsDataAsset::StaticRegisterNativesUSBZCosmeticsDataAsset()
	{
		UClass* Class = USBZCosmeticsDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRarity", &USBZCosmeticsDataAsset::execGetRarity },
			{ "IsConsumable", &USBZCosmeticsDataAsset::execIsConsumable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCosmeticsDataAsset_GetRarity_Statics
	{
		struct SBZCosmeticsDataAsset_eventGetRarity_Parms
		{
			ESBZRarity ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCosmeticsDataAsset_GetRarity_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCosmeticsDataAsset_GetRarity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCosmeticsDataAsset_eventGetRarity_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCosmeticsDataAsset_GetRarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCosmeticsDataAsset_GetRarity_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCosmeticsDataAsset_GetRarity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCosmeticsDataAsset_GetRarity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCosmeticsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCosmeticsDataAsset_GetRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCosmeticsDataAsset, nullptr, "GetRarity", nullptr, nullptr, sizeof(SBZCosmeticsDataAsset_eventGetRarity_Parms), Z_Construct_UFunction_USBZCosmeticsDataAsset_GetRarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCosmeticsDataAsset_GetRarity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCosmeticsDataAsset_GetRarity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCosmeticsDataAsset_GetRarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCosmeticsDataAsset_GetRarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCosmeticsDataAsset_GetRarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCosmeticsDataAsset_IsConsumable_Statics
	{
		struct SBZCosmeticsDataAsset_eventIsConsumable_Parms
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
	void Z_Construct_UFunction_USBZCosmeticsDataAsset_IsConsumable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCosmeticsDataAsset_eventIsConsumable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCosmeticsDataAsset_IsConsumable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCosmeticsDataAsset_eventIsConsumable_Parms), &Z_Construct_UFunction_USBZCosmeticsDataAsset_IsConsumable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCosmeticsDataAsset_IsConsumable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCosmeticsDataAsset_IsConsumable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCosmeticsDataAsset_IsConsumable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCosmeticsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCosmeticsDataAsset_IsConsumable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCosmeticsDataAsset, nullptr, "IsConsumable", nullptr, nullptr, sizeof(SBZCosmeticsDataAsset_eventIsConsumable_Parms), Z_Construct_UFunction_USBZCosmeticsDataAsset_IsConsumable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCosmeticsDataAsset_IsConsumable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCosmeticsDataAsset_IsConsumable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCosmeticsDataAsset_IsConsumable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCosmeticsDataAsset_IsConsumable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCosmeticsDataAsset_IsConsumable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister()
	{
		return USBZCosmeticsDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USBZCosmeticsDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippablePartDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCosmeticsDataAsset_GetRarity, "GetRarity" }, // 1165249987
		{ &Z_Construct_UFunction_USBZCosmeticsDataAsset_IsConsumable, "IsConsumable" }, // 3412649222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCosmeticsDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCosmeticsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::NewProp_Rarity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticsDataAsset" },
		{ "ModuleRelativePath", "Public/SBZCosmeticsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCosmeticsDataAsset, Rarity), Z_Construct_UEnum_Starbreeze_ESBZRarity, METADATA_PARAMS(Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::NewProp_Rarity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCosmeticsDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::ClassParams = {
		&USBZCosmeticsDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCosmeticsDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCosmeticsDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCosmeticsDataAsset, 612035334);
	template<> STARBREEZE_API UClass* StaticClass<USBZCosmeticsDataAsset>()
	{
		return USBZCosmeticsDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCosmeticsDataAsset(Z_Construct_UClass_USBZCosmeticsDataAsset, &USBZCosmeticsDataAsset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCosmeticsDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCosmeticsDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
