// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsButtonUpscalingModeChoice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsButtonUpscalingModeChoice() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonMultipleChoice();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsButtonUpscalingModeChoice::execSetOptionUpscalingModes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InOptionUpscalingModes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOptionUpscalingModes(Z_Param_InOptionUpscalingModes);
		P_NATIVE_END;
	}
	void USBZSettingsButtonUpscalingModeChoice::StaticRegisterNativesUSBZSettingsButtonUpscalingModeChoice()
	{
		UClass* Class = USBZSettingsButtonUpscalingModeChoice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetOptionUpscalingModes", &USBZSettingsButtonUpscalingModeChoice::execSetOptionUpscalingModes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsButtonUpscalingModeChoice_SetOptionUpscalingModes_Statics
	{
		struct SBZSettingsButtonUpscalingModeChoice_eventSetOptionUpscalingModes_Parms
		{
			int32 InOptionUpscalingModes;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InOptionUpscalingModes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSettingsButtonUpscalingModeChoice_SetOptionUpscalingModes_Statics::NewProp_InOptionUpscalingModes = { "InOptionUpscalingModes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonUpscalingModeChoice_eventSetOptionUpscalingModes_Parms, InOptionUpscalingModes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonUpscalingModeChoice_SetOptionUpscalingModes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonUpscalingModeChoice_SetOptionUpscalingModes_Statics::NewProp_InOptionUpscalingModes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonUpscalingModeChoice_SetOptionUpscalingModes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonUpscalingModeChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonUpscalingModeChoice_SetOptionUpscalingModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice, nullptr, "SetOptionUpscalingModes", nullptr, nullptr, sizeof(SBZSettingsButtonUpscalingModeChoice_eventSetOptionUpscalingModes_Parms), Z_Construct_UFunction_USBZSettingsButtonUpscalingModeChoice_SetOptionUpscalingModes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonUpscalingModeChoice_SetOptionUpscalingModes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonUpscalingModeChoice_SetOptionUpscalingModes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonUpscalingModeChoice_SetOptionUpscalingModes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonUpscalingModeChoice_SetOptionUpscalingModes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonUpscalingModeChoice_SetOptionUpscalingModes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_NoRegister()
	{
		return USBZSettingsButtonUpscalingModeChoice::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionUpscalingModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionUpscalingModes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChoiceIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChoiceIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChoiceIndices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSettingsButtonMultipleChoice,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsButtonUpscalingModeChoice_SetOptionUpscalingModes, "SetOptionUpscalingModes" }, // 1192673235
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsButtonUpscalingModeChoice.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonUpscalingModeChoice.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::NewProp_OptionUpscalingModes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonUpscalingModeChoice" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonUpscalingModeChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::NewProp_OptionUpscalingModes = { "OptionUpscalingModes", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonUpscalingModeChoice, OptionUpscalingModes), METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::NewProp_OptionUpscalingModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::NewProp_OptionUpscalingModes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::NewProp_ChoiceIndices_Inner = { "ChoiceIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::NewProp_ChoiceIndices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonUpscalingModeChoice" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonUpscalingModeChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::NewProp_ChoiceIndices = { "ChoiceIndices", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonUpscalingModeChoice, ChoiceIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::NewProp_ChoiceIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::NewProp_ChoiceIndices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::NewProp_OptionUpscalingModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::NewProp_ChoiceIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::NewProp_ChoiceIndices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsButtonUpscalingModeChoice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::ClassParams = {
		&USBZSettingsButtonUpscalingModeChoice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsButtonUpscalingModeChoice, 1249144173);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsButtonUpscalingModeChoice>()
	{
		return USBZSettingsButtonUpscalingModeChoice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsButtonUpscalingModeChoice(Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice, &USBZSettingsButtonUpscalingModeChoice::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsButtonUpscalingModeChoice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsButtonUpscalingModeChoice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
