// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsButtonKeyboardBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsButtonKeyboardBinding() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonKeyboardBinding();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsButtonKeyboardBinding::execSetPrimaryBinding)
	{
		P_GET_STRUCT(FInputChord,Z_Param_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrimaryBinding(Z_Param_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsButtonKeyboardBinding::execSetSecondaryBinding)
	{
		P_GET_STRUCT(FInputChord,Z_Param_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSecondaryBinding(Z_Param_InBinding);
		P_NATIVE_END;
	}
	void USBZSettingsButtonKeyboardBinding::StaticRegisterNativesUSBZSettingsButtonKeyboardBinding()
	{
		UClass* Class = USBZSettingsButtonKeyboardBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPrimaryBinding", &USBZSettingsButtonKeyboardBinding::execSetPrimaryBinding },
			{ "SetSecondaryBinding", &USBZSettingsButtonKeyboardBinding::execSetSecondaryBinding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetPrimaryBinding_Statics
	{
		struct SBZSettingsButtonKeyboardBinding_eventSetPrimaryBinding_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetPrimaryBinding_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonKeyboardBinding_eventSetPrimaryBinding_Parms, InBinding), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetPrimaryBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetPrimaryBinding_Statics::NewProp_InBinding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetPrimaryBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonKeyboardBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetPrimaryBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonKeyboardBinding, nullptr, "SetPrimaryBinding", nullptr, nullptr, sizeof(SBZSettingsButtonKeyboardBinding_eventSetPrimaryBinding_Parms), Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetPrimaryBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetPrimaryBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetPrimaryBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetPrimaryBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetPrimaryBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetPrimaryBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetSecondaryBinding_Statics
	{
		struct SBZSettingsButtonKeyboardBinding_eventSetSecondaryBinding_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetSecondaryBinding_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonKeyboardBinding_eventSetSecondaryBinding_Parms, InBinding), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetSecondaryBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetSecondaryBinding_Statics::NewProp_InBinding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetSecondaryBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonKeyboardBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetSecondaryBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonKeyboardBinding, nullptr, "SetSecondaryBinding", nullptr, nullptr, sizeof(SBZSettingsButtonKeyboardBinding_eventSetSecondaryBinding_Parms), Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetSecondaryBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetSecondaryBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetSecondaryBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetSecondaryBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetSecondaryBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetSecondaryBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_NoRegister()
	{
		return USBZSettingsButtonKeyboardBinding::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryBinding;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PrimaryBindingConflictsNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryBindingConflictsNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryBindingConflictsNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SecondaryBindingConflictsNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryBindingConflictsNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecondaryBindingConflictsNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSettingsButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetPrimaryBinding, "SetPrimaryBinding" }, // 2666369887
		{ &Z_Construct_UFunction_USBZSettingsButtonKeyboardBinding_SetSecondaryBinding, "SetSecondaryBinding" }, // 1890225630
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsButtonKeyboardBinding.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonKeyboardBinding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_PrimaryBinding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonKeyboardBinding" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonKeyboardBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_PrimaryBinding = { "PrimaryBinding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonKeyboardBinding, PrimaryBinding), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_PrimaryBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_PrimaryBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_SecondaryBinding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonKeyboardBinding" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonKeyboardBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_SecondaryBinding = { "SecondaryBinding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonKeyboardBinding, SecondaryBinding), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_SecondaryBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_SecondaryBinding_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_PrimaryBindingConflictsNames_Inner = { "PrimaryBindingConflictsNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_PrimaryBindingConflictsNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonKeyboardBinding" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonKeyboardBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_PrimaryBindingConflictsNames = { "PrimaryBindingConflictsNames", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonKeyboardBinding, PrimaryBindingConflictsNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_PrimaryBindingConflictsNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_PrimaryBindingConflictsNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_SecondaryBindingConflictsNames_Inner = { "SecondaryBindingConflictsNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_SecondaryBindingConflictsNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonKeyboardBinding" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonKeyboardBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_SecondaryBindingConflictsNames = { "SecondaryBindingConflictsNames", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonKeyboardBinding, SecondaryBindingConflictsNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_SecondaryBindingConflictsNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_SecondaryBindingConflictsNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_PrimaryBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_SecondaryBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_PrimaryBindingConflictsNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_PrimaryBindingConflictsNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_SecondaryBindingConflictsNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::NewProp_SecondaryBindingConflictsNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsButtonKeyboardBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::ClassParams = {
		&USBZSettingsButtonKeyboardBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsButtonKeyboardBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsButtonKeyboardBinding, 4070934105);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsButtonKeyboardBinding>()
	{
		return USBZSettingsButtonKeyboardBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsButtonKeyboardBinding(Z_Construct_UClass_USBZSettingsButtonKeyboardBinding, &USBZSettingsButtonKeyboardBinding::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsButtonKeyboardBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsButtonKeyboardBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
