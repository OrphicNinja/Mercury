// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutFindLootObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutFindLootObjective() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutFindLootObjective_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutFindLootObjective();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutObjectiveBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagTriggerVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagItem_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutLootContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagType_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZHoldOutFindLootObjective::execOnBagEntered)
	{
		P_GET_OBJECT(ASBZBagTriggerVolume,Z_Param_Volume);
		P_GET_OBJECT(ASBZBagItem,Z_Param_BagItem);
		P_GET_STRUCT(FSBZBagHandle,Z_Param_BagHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBagEntered(Z_Param_Volume,Z_Param_BagItem,Z_Param_BagHandle);
		P_NATIVE_END;
	}
	void USBZHoldOutFindLootObjective::StaticRegisterNativesUSBZHoldOutFindLootObjective()
	{
		UClass* Class = USBZHoldOutFindLootObjective::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBagEntered", &USBZHoldOutFindLootObjective::execOnBagEntered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered_Statics
	{
		struct SBZHoldOutFindLootObjective_eventOnBagEntered_Parms
		{
			ASBZBagTriggerVolume* Volume;
			ASBZBagItem* BagItem;
			FSBZBagHandle BagHandle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagItem;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutFindLootObjective_eventOnBagEntered_Parms, Volume), Z_Construct_UClass_ASBZBagTriggerVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered_Statics::NewProp_BagItem = { "BagItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutFindLootObjective_eventOnBagEntered_Parms, BagItem), Z_Construct_UClass_ASBZBagItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered_Statics::NewProp_BagHandle = { "BagHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutFindLootObjective_eventOnBagEntered_Parms, BagHandle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered_Statics::NewProp_BagItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered_Statics::NewProp_BagHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutFindLootObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutFindLootObjective, nullptr, "OnBagEntered", nullptr, nullptr, sizeof(SBZHoldOutFindLootObjective_eventOnBagEntered_Parms), Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHoldOutFindLootObjective_NoRegister()
	{
		return USBZHoldOutFindLootObjective::StaticClass();
	}
	struct Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LootContainers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LootContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LootContainers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagTriggerVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagTriggerVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredBagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequiredBagType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumLootToCollect_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLootToCollect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumActiveLootContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumActiveLootContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZHoldOutObjectiveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHoldOutFindLootObjective_OnBagEntered, "OnBagEntered" }, // 2748159400
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHoldOutFindLootObjective.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutFindLootObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_LootContainers_Inner = { "LootContainers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZHoldOutLootContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_LootContainers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutFindLootObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutFindLootObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_LootContainers = { "LootContainers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutFindLootObjective, LootContainers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_LootContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_LootContainers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_BagTriggerVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutFindLootObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutFindLootObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_BagTriggerVolume = { "BagTriggerVolume", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutFindLootObjective, BagTriggerVolume), Z_Construct_UClass_ASBZBagTriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_BagTriggerVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_BagTriggerVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_RequiredBagType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutFindLootObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutFindLootObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_RequiredBagType = { "RequiredBagType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutFindLootObjective, RequiredBagType), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_RequiredBagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_RequiredBagType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_NumLootToCollect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutFindLootObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutFindLootObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_NumLootToCollect = { "NumLootToCollect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutFindLootObjective, NumLootToCollect), METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_NumLootToCollect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_NumLootToCollect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_NumActiveLootContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutFindLootObjective" },
		{ "ModuleRelativePath", "Public/SBZHoldOutFindLootObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_NumActiveLootContainer = { "NumActiveLootContainer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutFindLootObjective, NumActiveLootContainer), METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_NumActiveLootContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_NumActiveLootContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_LootContainers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_LootContainers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_BagTriggerVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_RequiredBagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_NumLootToCollect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::NewProp_NumActiveLootContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHoldOutFindLootObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::ClassParams = {
		&USBZHoldOutFindLootObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHoldOutFindLootObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHoldOutFindLootObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHoldOutFindLootObjective, 1601514169);
	template<> STARBREEZE_API UClass* StaticClass<USBZHoldOutFindLootObjective>()
	{
		return USBZHoldOutFindLootObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHoldOutFindLootObjective(Z_Construct_UClass_USBZHoldOutFindLootObjective, &USBZHoldOutFindLootObjective::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHoldOutFindLootObjective"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHoldOutFindLootObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
