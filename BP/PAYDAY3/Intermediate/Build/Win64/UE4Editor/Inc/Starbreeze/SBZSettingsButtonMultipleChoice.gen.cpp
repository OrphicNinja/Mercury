// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsButtonMultipleChoice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsButtonMultipleChoice() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonMultipleChoice_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonMultipleChoice();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsButtonMultipleChoice::execSetChoiceIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InChoiceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChoiceIndex(Z_Param_InChoiceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsButtonMultipleChoice::execSetOptionNames)
	{
		P_GET_TARRAY_REF(FText,Z_Param_Out_InOptionNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOptionNames(Z_Param_Out_InOptionNames);
		P_NATIVE_END;
	}
	static FName NAME_USBZSettingsButtonMultipleChoice_OptionNamesChanged = FName(TEXT("OptionNamesChanged"));
	void USBZSettingsButtonMultipleChoice::OptionNamesChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsButtonMultipleChoice_OptionNamesChanged),NULL);
	}
	void USBZSettingsButtonMultipleChoice::StaticRegisterNativesUSBZSettingsButtonMultipleChoice()
	{
		UClass* Class = USBZSettingsButtonMultipleChoice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetChoiceIndex", &USBZSettingsButtonMultipleChoice::execSetChoiceIndex },
			{ "SetOptionNames", &USBZSettingsButtonMultipleChoice::execSetOptionNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_OptionNamesChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_OptionNamesChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonMultipleChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_OptionNamesChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonMultipleChoice, nullptr, "OptionNamesChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_OptionNamesChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_OptionNamesChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_OptionNamesChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_OptionNamesChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetChoiceIndex_Statics
	{
		struct SBZSettingsButtonMultipleChoice_eventSetChoiceIndex_Parms
		{
			int32 InChoiceIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InChoiceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetChoiceIndex_Statics::NewProp_InChoiceIndex = { "InChoiceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonMultipleChoice_eventSetChoiceIndex_Parms, InChoiceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetChoiceIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetChoiceIndex_Statics::NewProp_InChoiceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetChoiceIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonMultipleChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetChoiceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonMultipleChoice, nullptr, "SetChoiceIndex", nullptr, nullptr, sizeof(SBZSettingsButtonMultipleChoice_eventSetChoiceIndex_Parms), Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetChoiceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetChoiceIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetChoiceIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetChoiceIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetChoiceIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetChoiceIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics
	{
		struct SBZSettingsButtonMultipleChoice_eventSetOptionNames_Parms
		{
			TArray<FText> InOptionNames;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InOptionNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOptionNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InOptionNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics::NewProp_InOptionNames_Inner = { "InOptionNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics::NewProp_InOptionNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics::NewProp_InOptionNames = { "InOptionNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonMultipleChoice_eventSetOptionNames_Parms, InOptionNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics::NewProp_InOptionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics::NewProp_InOptionNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics::NewProp_InOptionNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics::NewProp_InOptionNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonMultipleChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonMultipleChoice, nullptr, "SetOptionNames", nullptr, nullptr, sizeof(SBZSettingsButtonMultipleChoice_eventSetOptionNames_Parms), Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsButtonMultipleChoice_NoRegister()
	{
		return USBZSettingsButtonMultipleChoice::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OptionNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OptionNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChoiceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChoiceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSettingsButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_OptionNamesChanged, "OptionNamesChanged" }, // 2914374517
		{ &Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetChoiceIndex, "SetChoiceIndex" }, // 101101323
		{ &Z_Construct_UFunction_USBZSettingsButtonMultipleChoice_SetOptionNames, "SetOptionNames" }, // 197028342
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsButtonMultipleChoice.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonMultipleChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::NewProp_OptionNames_Inner = { "OptionNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::NewProp_OptionNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonMultipleChoice" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonMultipleChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::NewProp_OptionNames = { "OptionNames", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonMultipleChoice, OptionNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::NewProp_OptionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::NewProp_OptionNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::NewProp_ChoiceIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonMultipleChoice" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonMultipleChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::NewProp_ChoiceIndex = { "ChoiceIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonMultipleChoice, ChoiceIndex), METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::NewProp_ChoiceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::NewProp_ChoiceIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::NewProp_OptionNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::NewProp_OptionNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::NewProp_ChoiceIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsButtonMultipleChoice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::ClassParams = {
		&USBZSettingsButtonMultipleChoice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsButtonMultipleChoice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsButtonMultipleChoice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsButtonMultipleChoice, 1562608666);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsButtonMultipleChoice>()
	{
		return USBZSettingsButtonMultipleChoice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsButtonMultipleChoice(Z_Construct_UClass_USBZSettingsButtonMultipleChoice, &USBZSettingsButtonMultipleChoice::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsButtonMultipleChoice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsButtonMultipleChoice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
