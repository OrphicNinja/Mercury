// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsButtonGamepadBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsButtonGamepadBinding() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonGamepadBinding_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonGamepadBinding();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsButtonGamepadBinding::execSetPrimaryBinding)
	{
		P_GET_STRUCT(FInputChord,Z_Param_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrimaryBinding(Z_Param_InBinding);
		P_NATIVE_END;
	}
	void USBZSettingsButtonGamepadBinding::StaticRegisterNativesUSBZSettingsButtonGamepadBinding()
	{
		UClass* Class = USBZSettingsButtonGamepadBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPrimaryBinding", &USBZSettingsButtonGamepadBinding::execSetPrimaryBinding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsButtonGamepadBinding_SetPrimaryBinding_Statics
	{
		struct SBZSettingsButtonGamepadBinding_eventSetPrimaryBinding_Parms
		{
			FInputChord InBinding;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBinding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSettingsButtonGamepadBinding_SetPrimaryBinding_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonGamepadBinding_eventSetPrimaryBinding_Parms, InBinding), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonGamepadBinding_SetPrimaryBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonGamepadBinding_SetPrimaryBinding_Statics::NewProp_InBinding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonGamepadBinding_SetPrimaryBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonGamepadBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonGamepadBinding_SetPrimaryBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonGamepadBinding, nullptr, "SetPrimaryBinding", nullptr, nullptr, sizeof(SBZSettingsButtonGamepadBinding_eventSetPrimaryBinding_Parms), Z_Construct_UFunction_USBZSettingsButtonGamepadBinding_SetPrimaryBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonGamepadBinding_SetPrimaryBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonGamepadBinding_SetPrimaryBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonGamepadBinding_SetPrimaryBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonGamepadBinding_SetPrimaryBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonGamepadBinding_SetPrimaryBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsButtonGamepadBinding_NoRegister()
	{
		return USBZSettingsButtonGamepadBinding::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryBinding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSettingsButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsButtonGamepadBinding_SetPrimaryBinding, "SetPrimaryBinding" }, // 3281057448
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsButtonGamepadBinding.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonGamepadBinding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::NewProp_PrimaryBinding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonGamepadBinding" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonGamepadBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::NewProp_PrimaryBinding = { "PrimaryBinding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonGamepadBinding, PrimaryBinding), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::NewProp_PrimaryBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::NewProp_PrimaryBinding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::NewProp_PrimaryBinding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsButtonGamepadBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::ClassParams = {
		&USBZSettingsButtonGamepadBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsButtonGamepadBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsButtonGamepadBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsButtonGamepadBinding, 1238844262);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsButtonGamepadBinding>()
	{
		return USBZSettingsButtonGamepadBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsButtonGamepadBinding(Z_Construct_UClass_USBZSettingsButtonGamepadBinding, &USBZSettingsButtonGamepadBinding::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsButtonGamepadBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsButtonGamepadBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
