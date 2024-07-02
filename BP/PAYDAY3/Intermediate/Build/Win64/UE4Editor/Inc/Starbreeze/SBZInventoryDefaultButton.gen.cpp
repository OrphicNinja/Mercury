// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInventoryDefaultButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInventoryDefaultButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryDefaultButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryDefaultButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZInventoryDefaultButton::execNativeDefaultEquipped)
	{
		P_GET_UBOOL(Z_Param_bEquipped);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeDefaultEquipped(Z_Param_bEquipped);
		P_NATIVE_END;
	}
	static FName NAME_USBZInventoryDefaultButton_DefaultEquipped = FName(TEXT("DefaultEquipped"));
	void USBZInventoryDefaultButton::DefaultEquipped(bool bEquipped)
	{
		SBZInventoryDefaultButton_eventDefaultEquipped_Parms Parms;
		Parms.bEquipped=bEquipped ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZInventoryDefaultButton_DefaultEquipped),&Parms);
	}
	void USBZInventoryDefaultButton::StaticRegisterNativesUSBZInventoryDefaultButton()
	{
		UClass* Class = USBZInventoryDefaultButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeDefaultEquipped", &USBZInventoryDefaultButton::execNativeDefaultEquipped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZInventoryDefaultButton_DefaultEquipped_Statics
	{
		static void NewProp_bEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEquipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZInventoryDefaultButton_DefaultEquipped_Statics::NewProp_bEquipped_SetBit(void* Obj)
	{
		((SBZInventoryDefaultButton_eventDefaultEquipped_Parms*)Obj)->bEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZInventoryDefaultButton_DefaultEquipped_Statics::NewProp_bEquipped = { "bEquipped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInventoryDefaultButton_eventDefaultEquipped_Parms), &Z_Construct_UFunction_USBZInventoryDefaultButton_DefaultEquipped_Statics::NewProp_bEquipped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInventoryDefaultButton_DefaultEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInventoryDefaultButton_DefaultEquipped_Statics::NewProp_bEquipped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInventoryDefaultButton_DefaultEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInventoryDefaultButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInventoryDefaultButton_DefaultEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInventoryDefaultButton, nullptr, "DefaultEquipped", nullptr, nullptr, sizeof(SBZInventoryDefaultButton_eventDefaultEquipped_Parms), Z_Construct_UFunction_USBZInventoryDefaultButton_DefaultEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInventoryDefaultButton_DefaultEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInventoryDefaultButton_DefaultEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInventoryDefaultButton_DefaultEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInventoryDefaultButton_DefaultEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInventoryDefaultButton_DefaultEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInventoryDefaultButton_NativeDefaultEquipped_Statics
	{
		struct SBZInventoryDefaultButton_eventNativeDefaultEquipped_Parms
		{
			bool bEquipped;
		};
		static void NewProp_bEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEquipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZInventoryDefaultButton_NativeDefaultEquipped_Statics::NewProp_bEquipped_SetBit(void* Obj)
	{
		((SBZInventoryDefaultButton_eventNativeDefaultEquipped_Parms*)Obj)->bEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZInventoryDefaultButton_NativeDefaultEquipped_Statics::NewProp_bEquipped = { "bEquipped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInventoryDefaultButton_eventNativeDefaultEquipped_Parms), &Z_Construct_UFunction_USBZInventoryDefaultButton_NativeDefaultEquipped_Statics::NewProp_bEquipped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInventoryDefaultButton_NativeDefaultEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInventoryDefaultButton_NativeDefaultEquipped_Statics::NewProp_bEquipped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInventoryDefaultButton_NativeDefaultEquipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInventoryDefaultButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInventoryDefaultButton_NativeDefaultEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInventoryDefaultButton, nullptr, "NativeDefaultEquipped", nullptr, nullptr, sizeof(SBZInventoryDefaultButton_eventNativeDefaultEquipped_Parms), Z_Construct_UFunction_USBZInventoryDefaultButton_NativeDefaultEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInventoryDefaultButton_NativeDefaultEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInventoryDefaultButton_NativeDefaultEquipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInventoryDefaultButton_NativeDefaultEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInventoryDefaultButton_NativeDefaultEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInventoryDefaultButton_NativeDefaultEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZInventoryDefaultButton_NoRegister()
	{
		return USBZInventoryDefaultButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZInventoryDefaultButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEquipped_MetaData[];
#endif
		static void NewProp_bIsEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEquipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInventoryDefaultButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZInventoryDefaultButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZInventoryDefaultButton_DefaultEquipped, "DefaultEquipped" }, // 3809917923
		{ &Z_Construct_UFunction_USBZInventoryDefaultButton_NativeDefaultEquipped, "NativeDefaultEquipped" }, // 3124549667
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryDefaultButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInventoryDefaultButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInventoryDefaultButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInventoryDefaultButton_Statics::NewProp_bIsEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventoryDefaultButton" },
		{ "ModuleRelativePath", "Public/SBZInventoryDefaultButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZInventoryDefaultButton_Statics::NewProp_bIsEquipped_SetBit(void* Obj)
	{
		((USBZInventoryDefaultButton*)Obj)->bIsEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInventoryDefaultButton_Statics::NewProp_bIsEquipped = { "bIsEquipped", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZInventoryDefaultButton), &Z_Construct_UClass_USBZInventoryDefaultButton_Statics::NewProp_bIsEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInventoryDefaultButton_Statics::NewProp_bIsEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryDefaultButton_Statics::NewProp_bIsEquipped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZInventoryDefaultButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInventoryDefaultButton_Statics::NewProp_bIsEquipped,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInventoryDefaultButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInventoryDefaultButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInventoryDefaultButton_Statics::ClassParams = {
		&USBZInventoryDefaultButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZInventoryDefaultButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryDefaultButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZInventoryDefaultButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInventoryDefaultButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInventoryDefaultButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInventoryDefaultButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInventoryDefaultButton, 3901075867);
	template<> STARBREEZE_API UClass* StaticClass<USBZInventoryDefaultButton>()
	{
		return USBZInventoryDefaultButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInventoryDefaultButton(Z_Construct_UClass_USBZInventoryDefaultButton, &USBZInventoryDefaultButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInventoryDefaultButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInventoryDefaultButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
