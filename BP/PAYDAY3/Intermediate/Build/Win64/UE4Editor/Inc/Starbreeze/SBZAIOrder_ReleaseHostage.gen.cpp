// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_ReleaseHostage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_ReleaseHostage() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_ReleaseHostage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_ReleaseHostage();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIOrder_ReleaseHostage::execOnTargetHostageStateChanged)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewHostageState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetHostageStateChanged(Z_Param_NewHostageState);
		P_NATIVE_END;
	}
	void USBZAIOrder_ReleaseHostage::StaticRegisterNativesUSBZAIOrder_ReleaseHostage()
	{
		UClass* Class = USBZAIOrder_ReleaseHostage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTargetHostageStateChanged", &USBZAIOrder_ReleaseHostage::execOnTargetHostageStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIOrder_ReleaseHostage_OnTargetHostageStateChanged_Statics
	{
		struct SBZAIOrder_ReleaseHostage_eventOnTargetHostageStateChanged_Parms
		{
			uint8 NewHostageState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewHostageState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIOrder_ReleaseHostage_OnTargetHostageStateChanged_Statics::NewProp_NewHostageState = { "NewHostageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_ReleaseHostage_eventOnTargetHostageStateChanged_Parms, NewHostageState), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_ReleaseHostage_OnTargetHostageStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_ReleaseHostage_OnTargetHostageStateChanged_Statics::NewProp_NewHostageState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_ReleaseHostage_OnTargetHostageStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_ReleaseHostage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_ReleaseHostage_OnTargetHostageStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_ReleaseHostage, nullptr, "OnTargetHostageStateChanged", nullptr, nullptr, sizeof(SBZAIOrder_ReleaseHostage_eventOnTargetHostageStateChanged_Parms), Z_Construct_UFunction_USBZAIOrder_ReleaseHostage_OnTargetHostageStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_ReleaseHostage_OnTargetHostageStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_ReleaseHostage_OnTargetHostageStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_ReleaseHostage_OnTargetHostageStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_ReleaseHostage_OnTargetHostageStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_ReleaseHostage_OnTargetHostageStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIOrder_ReleaseHostage_NoRegister()
	{
		return USBZAIOrder_ReleaseHostage::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DespawnTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DespawnTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasTraded_MetaData[];
#endif
		static void NewProp_bWasTraded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasTraded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIOrder_ReleaseHostage_OnTargetHostageStateChanged, "OnTargetHostageStateChanged" }, // 2612559951
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_ReleaseHostage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_ReleaseHostage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::NewProp_DespawnTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_ReleaseHostage" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_ReleaseHostage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::NewProp_DespawnTag = { "DespawnTag", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_ReleaseHostage, DespawnTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::NewProp_DespawnTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::NewProp_DespawnTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::NewProp_bWasTraded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_ReleaseHostage" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_ReleaseHostage.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::NewProp_bWasTraded_SetBit(void* Obj)
	{
		((USBZAIOrder_ReleaseHostage*)Obj)->bWasTraded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::NewProp_bWasTraded = { "bWasTraded", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIOrder_ReleaseHostage), &Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::NewProp_bWasTraded_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::NewProp_bWasTraded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::NewProp_bWasTraded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::NewProp_DespawnTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::NewProp_bWasTraded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_ReleaseHostage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::ClassParams = {
		&USBZAIOrder_ReleaseHostage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_ReleaseHostage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_ReleaseHostage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_ReleaseHostage, 2842497431);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_ReleaseHostage>()
	{
		return USBZAIOrder_ReleaseHostage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_ReleaseHostage(Z_Construct_UClass_USBZAIOrder_ReleaseHostage, &USBZAIOrder_ReleaseHostage::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_ReleaseHostage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_ReleaseHostage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
