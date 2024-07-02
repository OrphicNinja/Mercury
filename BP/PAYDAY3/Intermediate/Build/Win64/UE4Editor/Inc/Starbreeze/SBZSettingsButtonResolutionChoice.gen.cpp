// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsButtonResolutionChoice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsButtonResolutionChoice() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonResolutionChoice_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonResolutionChoice();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonMultipleChoice();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsButtonResolutionChoice::execSetOptionResolutions)
	{
		P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_InOptionResolutions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOptionResolutions(Z_Param_Out_InOptionResolutions);
		P_NATIVE_END;
	}
	void USBZSettingsButtonResolutionChoice::StaticRegisterNativesUSBZSettingsButtonResolutionChoice()
	{
		UClass* Class = USBZSettingsButtonResolutionChoice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetOptionResolutions", &USBZSettingsButtonResolutionChoice::execSetOptionResolutions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics
	{
		struct SBZSettingsButtonResolutionChoice_eventSetOptionResolutions_Parms
		{
			TArray<FIntPoint> InOptionResolutions;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOptionResolutions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOptionResolutions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InOptionResolutions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics::NewProp_InOptionResolutions_Inner = { "InOptionResolutions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics::NewProp_InOptionResolutions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics::NewProp_InOptionResolutions = { "InOptionResolutions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonResolutionChoice_eventSetOptionResolutions_Parms, InOptionResolutions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics::NewProp_InOptionResolutions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics::NewProp_InOptionResolutions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics::NewProp_InOptionResolutions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics::NewProp_InOptionResolutions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonResolutionChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonResolutionChoice, nullptr, "SetOptionResolutions", nullptr, nullptr, sizeof(SBZSettingsButtonResolutionChoice_eventSetOptionResolutions_Parms), Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsButtonResolutionChoice_NoRegister()
	{
		return USBZSettingsButtonResolutionChoice::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionResolutions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionResolutions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OptionResolutions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSettingsButtonMultipleChoice,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsButtonResolutionChoice_SetOptionResolutions, "SetOptionResolutions" }, // 3281426818
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsButtonResolutionChoice.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonResolutionChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::NewProp_OptionResolutions_Inner = { "OptionResolutions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::NewProp_OptionResolutions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonResolutionChoice" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonResolutionChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::NewProp_OptionResolutions = { "OptionResolutions", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonResolutionChoice, OptionResolutions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::NewProp_OptionResolutions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::NewProp_OptionResolutions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::NewProp_OptionResolutions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::NewProp_OptionResolutions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsButtonResolutionChoice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::ClassParams = {
		&USBZSettingsButtonResolutionChoice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsButtonResolutionChoice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsButtonResolutionChoice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsButtonResolutionChoice, 2972971633);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsButtonResolutionChoice>()
	{
		return USBZSettingsButtonResolutionChoice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsButtonResolutionChoice(Z_Construct_UClass_USBZSettingsButtonResolutionChoice, &USBZSettingsButtonResolutionChoice::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsButtonResolutionChoice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsButtonResolutionChoice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
