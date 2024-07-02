// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsButtonAntiAliasingModeChoice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsButtonAntiAliasingModeChoice() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonMultipleChoice();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsButtonAntiAliasingModeChoice::execSetOptionAntiAliasingModes)
	{
		P_GET_TARRAY_REF(int64,Z_Param_Out_InOptionAntiAliasingModes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOptionAntiAliasingModes(Z_Param_Out_InOptionAntiAliasingModes);
		P_NATIVE_END;
	}
	void USBZSettingsButtonAntiAliasingModeChoice::StaticRegisterNativesUSBZSettingsButtonAntiAliasingModeChoice()
	{
		UClass* Class = USBZSettingsButtonAntiAliasingModeChoice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetOptionAntiAliasingModes", &USBZSettingsButtonAntiAliasingModeChoice::execSetOptionAntiAliasingModes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics
	{
		struct SBZSettingsButtonAntiAliasingModeChoice_eventSetOptionAntiAliasingModes_Parms
		{
			TArray<int64> InOptionAntiAliasingModes;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_InOptionAntiAliasingModes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOptionAntiAliasingModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InOptionAntiAliasingModes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics::NewProp_InOptionAntiAliasingModes_Inner = { "InOptionAntiAliasingModes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics::NewProp_InOptionAntiAliasingModes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics::NewProp_InOptionAntiAliasingModes = { "InOptionAntiAliasingModes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButtonAntiAliasingModeChoice_eventSetOptionAntiAliasingModes_Parms, InOptionAntiAliasingModes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics::NewProp_InOptionAntiAliasingModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics::NewProp_InOptionAntiAliasingModes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics::NewProp_InOptionAntiAliasingModes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics::NewProp_InOptionAntiAliasingModes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButtonAntiAliasingModeChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice, nullptr, "SetOptionAntiAliasingModes", nullptr, nullptr, sizeof(SBZSettingsButtonAntiAliasingModeChoice_eventSetOptionAntiAliasingModes_Parms), Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_NoRegister()
	{
		return USBZSettingsButtonAntiAliasingModeChoice::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_OptionAntiAliasingModes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionAntiAliasingModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OptionAntiAliasingModes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSettingsButtonMultipleChoice,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsButtonAntiAliasingModeChoice_SetOptionAntiAliasingModes, "SetOptionAntiAliasingModes" }, // 3504539402
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsButtonAntiAliasingModeChoice.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonAntiAliasingModeChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::NewProp_OptionAntiAliasingModes_Inner = { "OptionAntiAliasingModes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::NewProp_OptionAntiAliasingModes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButtonAntiAliasingModeChoice" },
		{ "ModuleRelativePath", "Public/SBZSettingsButtonAntiAliasingModeChoice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::NewProp_OptionAntiAliasingModes = { "OptionAntiAliasingModes", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButtonAntiAliasingModeChoice, OptionAntiAliasingModes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::NewProp_OptionAntiAliasingModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::NewProp_OptionAntiAliasingModes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::NewProp_OptionAntiAliasingModes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::NewProp_OptionAntiAliasingModes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsButtonAntiAliasingModeChoice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::ClassParams = {
		&USBZSettingsButtonAntiAliasingModeChoice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsButtonAntiAliasingModeChoice, 1609533354);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsButtonAntiAliasingModeChoice>()
	{
		return USBZSettingsButtonAntiAliasingModeChoice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsButtonAntiAliasingModeChoice(Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice, &USBZSettingsButtonAntiAliasingModeChoice::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsButtonAntiAliasingModeChoice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsButtonAntiAliasingModeChoice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
