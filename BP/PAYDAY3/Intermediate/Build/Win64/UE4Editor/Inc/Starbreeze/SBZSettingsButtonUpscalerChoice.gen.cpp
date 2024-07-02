// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsButtonUpscalerChoice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsButtonUpscalerChoice() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonUpscalerChoice();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonMultipleChoice();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsButtonUpscalerChoice::execSetOptionUpscalers)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InOptionUpscalers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOptionUpscalers(Z_Param_InOptionUpscalers);
		P_NATIVE_END;
	}
	void USBZSettingsButtonUpscalerChoice::StaticRegisterNativesUSBZSettingsButtonUpscalerChoice()
	{
		UClass* Class = USBZSettingsButtonUpscalerChoice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetOptionUpscalers", &USBZSettingsButtonUpscalerChoice::execSetOptionUpscalers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsButtonUpscalerChoice_SetOptionUpscalers_Statics
	{
		struct SBZSettingsButtonUpscalerChoice_eventSetOptionUpscalers_Parms
		{
			int32 InOptionUpscalers;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InOptionUpscalers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSettingsButtonUpscalerChoice_SetOptionUpscalers_Statics::NewProp_InOptionUpscalers = { "InOptionUpscalers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonUpscalerChoice_eventSetOptionUpscalers_Parms, InOptionUpscalers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonUpscalerChoice_SetOptionUpscalers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonUpscalerChoice_SetOptionUpscalers_Statics::NewProp_InOptionUpscalers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonUpscalerChoice_SetOptionUpscalers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonUpscalerChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonUpscalerChoice_SetOptionUpscalers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonUpscalerChoice, nullptr, "SetOptionUpscalers", nullptr, nullptr, sizeof(SBZSettingsButtonUpscalerChoice_eventSetOptionUpscalers_Parms), Z_Construct_UFunction_USBZSettingsButtonUpscalerChoice_SetOptionUpscalers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonUpscalerChoice_SetOptionUpscalers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonUpscalerChoice_SetOptionUpscalers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonUpscalerChoice_SetOptionUpscalers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonUpscalerChoice_SetOptionUpscalers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonUpscalerChoice_SetOptionUpscalers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_NoRegister()
	{
		return USBZSettingsButtonUpscalerChoice::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionUpscalers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionUpscalers;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChoiceIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChoiceIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChoiceIndices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSettingsButtonMultipleChoice,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsButtonUpscalerChoice_SetOptionUpscalers, "SetOptionUpscalers" }, // 1932231139
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsButtonUpscalerChoice.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonUpscalerChoice.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::NewProp_OptionUpscalers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonUpscalerChoice" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonUpscalerChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::NewProp_OptionUpscalers = { "OptionUpscalers", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonUpscalerChoice, OptionUpscalers), METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::NewProp_OptionUpscalers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::NewProp_OptionUpscalers_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::NewProp_ChoiceIndices_Inner = { "ChoiceIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::NewProp_ChoiceIndices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonUpscalerChoice" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonUpscalerChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::NewProp_ChoiceIndices = { "ChoiceIndices", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonUpscalerChoice, ChoiceIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::NewProp_ChoiceIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::NewProp_ChoiceIndices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::NewProp_OptionUpscalers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::NewProp_ChoiceIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::NewProp_ChoiceIndices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsButtonUpscalerChoice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::ClassParams = {
		&USBZSettingsButtonUpscalerChoice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsButtonUpscalerChoice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsButtonUpscalerChoice, 3768031841);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsButtonUpscalerChoice>()
	{
		return USBZSettingsButtonUpscalerChoice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsButtonUpscalerChoice(Z_Construct_UClass_USBZSettingsButtonUpscalerChoice, &USBZSettingsButtonUpscalerChoice::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsButtonUpscalerChoice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsButtonUpscalerChoice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
