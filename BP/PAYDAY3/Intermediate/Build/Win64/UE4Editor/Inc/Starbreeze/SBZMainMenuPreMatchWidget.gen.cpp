// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuPreMatchWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuPreMatchWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuPreMatchWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuPreMatchWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuPreMatchWidget::execIsAsyncLoadingDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAsyncLoadingDone();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuPreMatchWidget_OnAsyncLoadingCancel = FName(TEXT("OnAsyncLoadingCancel"));
	void USBZMainMenuPreMatchWidget::OnAsyncLoadingCancel()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPreMatchWidget_OnAsyncLoadingCancel),NULL);
	}
	static FName NAME_USBZMainMenuPreMatchWidget_OnAsyncLoadingDone = FName(TEXT("OnAsyncLoadingDone"));
	void USBZMainMenuPreMatchWidget::OnAsyncLoadingDone()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPreMatchWidget_OnAsyncLoadingDone),NULL);
	}
	static FName NAME_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress = FName(TEXT("OnAsyncLoadingProgress"));
	void USBZMainMenuPreMatchWidget::OnAsyncLoadingProgress(FSBZAsyncLoadingProgress const& Progress)
	{
		SBZMainMenuPreMatchWidget_eventOnAsyncLoadingProgress_Parms Parms;
		Parms.Progress=Progress;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress),&Parms);
	}
	void USBZMainMenuPreMatchWidget::StaticRegisterNativesUSBZMainMenuPreMatchWidget()
	{
		UClass* Class = USBZMainMenuPreMatchWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsAsyncLoadingDone", &USBZMainMenuPreMatchWidget::execIsAsyncLoadingDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuPreMatchWidget_IsAsyncLoadingDone_Statics
	{
		struct SBZMainMenuPreMatchWidget_eventIsAsyncLoadingDone_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuPreMatchWidget_IsAsyncLoadingDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuPreMatchWidget_eventIsAsyncLoadingDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuPreMatchWidget_IsAsyncLoadingDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuPreMatchWidget_eventIsAsyncLoadingDone_Parms), &Z_Construct_UFunction_USBZMainMenuPreMatchWidget_IsAsyncLoadingDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPreMatchWidget_IsAsyncLoadingDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPreMatchWidget_IsAsyncLoadingDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPreMatchWidget_IsAsyncLoadingDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPreMatchWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPreMatchWidget_IsAsyncLoadingDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPreMatchWidget, nullptr, "IsAsyncLoadingDone", nullptr, nullptr, sizeof(SBZMainMenuPreMatchWidget_eventIsAsyncLoadingDone_Parms), Z_Construct_UFunction_USBZMainMenuPreMatchWidget_IsAsyncLoadingDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPreMatchWidget_IsAsyncLoadingDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPreMatchWidget_IsAsyncLoadingDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPreMatchWidget_IsAsyncLoadingDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPreMatchWidget_IsAsyncLoadingDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPreMatchWidget_IsAsyncLoadingDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPreMatchWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPreMatchWidget, nullptr, "OnAsyncLoadingCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPreMatchWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPreMatchWidget, nullptr, "OnAsyncLoadingDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress_Statics::NewProp_Progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPreMatchWidget_eventOnAsyncLoadingProgress_Parms, Progress), Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress_Statics::NewProp_Progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPreMatchWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPreMatchWidget, nullptr, "OnAsyncLoadingProgress", nullptr, nullptr, sizeof(SBZMainMenuPreMatchWidget_eventOnAsyncLoadingProgress_Parms), Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuPreMatchWidget_NoRegister()
	{
		return USBZMainMenuPreMatchWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuPreMatchWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuPreMatchWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuPreMatchWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuPreMatchWidget_IsAsyncLoadingDone, "IsAsyncLoadingDone" }, // 1605353806
		{ &Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingCancel, "OnAsyncLoadingCancel" }, // 67948121
		{ &Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingDone, "OnAsyncLoadingDone" }, // 2579752287
		{ &Z_Construct_UFunction_USBZMainMenuPreMatchWidget_OnAsyncLoadingProgress, "OnAsyncLoadingProgress" }, // 2736804782
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPreMatchWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuPreMatchWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPreMatchWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuPreMatchWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuPreMatchWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuPreMatchWidget_Statics::ClassParams = {
		&USBZMainMenuPreMatchWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPreMatchWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPreMatchWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuPreMatchWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuPreMatchWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuPreMatchWidget, 210548812);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuPreMatchWidget>()
	{
		return USBZMainMenuPreMatchWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuPreMatchWidget(Z_Construct_UClass_USBZMainMenuPreMatchWidget, &USBZMainMenuPreMatchWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuPreMatchWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuPreMatchWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
