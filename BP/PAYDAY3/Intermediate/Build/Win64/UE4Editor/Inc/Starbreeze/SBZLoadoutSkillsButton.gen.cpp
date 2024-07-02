// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLoadoutSkillsButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLoadoutSkillsButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutSkillsButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutSkillsButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSkillLineCountData();
// End Cross Module References
	DEFINE_FUNCTION(USBZLoadoutSkillsButton::execNativeInitializeSkills)
	{
		P_GET_TARRAY_REF(USBZSkillData*,Z_Param_Out_SkillList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeInitializeSkills(Z_Param_Out_SkillList);
		P_NATIVE_END;
	}
	static FName NAME_USBZLoadoutSkillsButton_InitializeSkills = FName(TEXT("InitializeSkills"));
	void USBZLoadoutSkillsButton::InitializeSkills(int32 EquippedSkillCount)
	{
		SBZLoadoutSkillsButton_eventInitializeSkills_Parms Parms;
		Parms.EquippedSkillCount=EquippedSkillCount;
		ProcessEvent(FindFunctionChecked(NAME_USBZLoadoutSkillsButton_InitializeSkills),&Parms);
	}
	void USBZLoadoutSkillsButton::StaticRegisterNativesUSBZLoadoutSkillsButton()
	{
		UClass* Class = USBZLoadoutSkillsButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeInitializeSkills", &USBZLoadoutSkillsButton::execNativeInitializeSkills },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZLoadoutSkillsButton_InitializeSkills_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquippedSkillCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLoadoutSkillsButton_InitializeSkills_Statics::NewProp_EquippedSkillCount = { "EquippedSkillCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutSkillsButton_eventInitializeSkills_Parms, EquippedSkillCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutSkillsButton_InitializeSkills_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutSkillsButton_InitializeSkills_Statics::NewProp_EquippedSkillCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutSkillsButton_InitializeSkills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutSkillsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutSkillsButton_InitializeSkills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutSkillsButton, nullptr, "InitializeSkills", nullptr, nullptr, sizeof(SBZLoadoutSkillsButton_eventInitializeSkills_Parms), Z_Construct_UFunction_USBZLoadoutSkillsButton_InitializeSkills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutSkillsButton_InitializeSkills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutSkillsButton_InitializeSkills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutSkillsButton_InitializeSkills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutSkillsButton_InitializeSkills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutSkillsButton_InitializeSkills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics
	{
		struct SBZLoadoutSkillsButton_eventNativeInitializeSkills_Parms
		{
			TArray<USBZSkillData*> SkillList;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkillList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics::NewProp_SkillList_Inner = { "SkillList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSkillData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics::NewProp_SkillList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics::NewProp_SkillList = { "SkillList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutSkillsButton_eventNativeInitializeSkills_Parms, SkillList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics::NewProp_SkillList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics::NewProp_SkillList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics::NewProp_SkillList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics::NewProp_SkillList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutSkillsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutSkillsButton, nullptr, "NativeInitializeSkills", nullptr, nullptr, sizeof(SBZLoadoutSkillsButton_eventNativeInitializeSkills_Parms), Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLoadoutSkillsButton_NoRegister()
	{
		return USBZLoadoutSkillsButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZLoadoutSkillsButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillLineCountDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLineCountDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkillLineCountDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLoadoutSkillsButton_InitializeSkills, "InitializeSkills" }, // 3983641976
		{ &Z_Construct_UFunction_USBZLoadoutSkillsButton_NativeInitializeSkills, "NativeInitializeSkills" }, // 4163852237
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLoadoutSkillsButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLoadoutSkillsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::NewProp_SkillLineCountDataArray_Inner = { "SkillLineCountDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSkillLineCountData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::NewProp_SkillLineCountDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoadoutSkillsButton" },
		{ "ModuleRelativePath", "Public/SBZLoadoutSkillsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::NewProp_SkillLineCountDataArray = { "SkillLineCountDataArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoadoutSkillsButton, SkillLineCountDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::NewProp_SkillLineCountDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::NewProp_SkillLineCountDataArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::NewProp_SkillLineCountDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::NewProp_SkillLineCountDataArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLoadoutSkillsButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::ClassParams = {
		&USBZLoadoutSkillsButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLoadoutSkillsButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLoadoutSkillsButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLoadoutSkillsButton, 468445071);
	template<> STARBREEZE_API UClass* StaticClass<USBZLoadoutSkillsButton>()
	{
		return USBZLoadoutSkillsButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLoadoutSkillsButton(Z_Construct_UClass_USBZLoadoutSkillsButton, &USBZLoadoutSkillsButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLoadoutSkillsButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLoadoutSkillsButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
