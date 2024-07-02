// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInputKeyWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInputKeyWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInputKeyWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInputKeyWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
	DEFINE_FUNCTION(USBZInputKeyWidget::execSetInverted)
	{
		P_GET_UBOOL(Z_Param_bInInverted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInverted_Implementation(Z_Param_bInInverted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInputKeyWidget::execSetKey)
	{
		P_GET_STRUCT(FKey,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	static FName NAME_USBZInputKeyWidget_OnKeyIconChanged = FName(TEXT("OnKeyIconChanged"));
	void USBZInputKeyWidget::OnKeyIconChanged(UPaperSprite* NewActionKeyIcon)
	{
		SBZInputKeyWidget_eventOnKeyIconChanged_Parms Parms;
		Parms.NewActionKeyIcon=NewActionKeyIcon;
		ProcessEvent(FindFunctionChecked(NAME_USBZInputKeyWidget_OnKeyIconChanged),&Parms);
	}
	static FName NAME_USBZInputKeyWidget_OnKeyNameChanged = FName(TEXT("OnKeyNameChanged"));
	void USBZInputKeyWidget::OnKeyNameChanged(const FString& NewActionKeyName)
	{
		SBZInputKeyWidget_eventOnKeyNameChanged_Parms Parms;
		Parms.NewActionKeyName=NewActionKeyName;
		ProcessEvent(FindFunctionChecked(NAME_USBZInputKeyWidget_OnKeyNameChanged),&Parms);
	}
	static FName NAME_USBZInputKeyWidget_SetInverted = FName(TEXT("SetInverted"));
	void USBZInputKeyWidget::SetInverted(bool bInInverted)
	{
		SBZInputKeyWidget_eventSetInverted_Parms Parms;
		Parms.bInInverted=bInInverted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZInputKeyWidget_SetInverted),&Parms);
	}
	void USBZInputKeyWidget::StaticRegisterNativesUSBZInputKeyWidget()
	{
		UClass* Class = USBZInputKeyWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInverted", &USBZInputKeyWidget::execSetInverted },
			{ "SetKey", &USBZInputKeyWidget::execSetKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZInputKeyWidget_OnKeyIconChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewActionKeyIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZInputKeyWidget_OnKeyIconChanged_Statics::NewProp_NewActionKeyIcon = { "NewActionKeyIcon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInputKeyWidget_eventOnKeyIconChanged_Parms, NewActionKeyIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInputKeyWidget_OnKeyIconChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInputKeyWidget_OnKeyIconChanged_Statics::NewProp_NewActionKeyIcon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInputKeyWidget_OnKeyIconChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInputKeyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInputKeyWidget_OnKeyIconChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInputKeyWidget, nullptr, "OnKeyIconChanged", nullptr, nullptr, sizeof(SBZInputKeyWidget_eventOnKeyIconChanged_Parms), Z_Construct_UFunction_USBZInputKeyWidget_OnKeyIconChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInputKeyWidget_OnKeyIconChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInputKeyWidget_OnKeyIconChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInputKeyWidget_OnKeyIconChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInputKeyWidget_OnKeyIconChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInputKeyWidget_OnKeyIconChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewActionKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewActionKeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged_Statics::NewProp_NewActionKeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged_Statics::NewProp_NewActionKeyName = { "NewActionKeyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInputKeyWidget_eventOnKeyNameChanged_Parms, NewActionKeyName), METADATA_PARAMS(Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged_Statics::NewProp_NewActionKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged_Statics::NewProp_NewActionKeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged_Statics::NewProp_NewActionKeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInputKeyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInputKeyWidget, nullptr, "OnKeyNameChanged", nullptr, nullptr, sizeof(SBZInputKeyWidget_eventOnKeyNameChanged_Parms), Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInputKeyWidget_SetInverted_Statics
	{
		static void NewProp_bInInverted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInInverted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZInputKeyWidget_SetInverted_Statics::NewProp_bInInverted_SetBit(void* Obj)
	{
		((SBZInputKeyWidget_eventSetInverted_Parms*)Obj)->bInInverted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZInputKeyWidget_SetInverted_Statics::NewProp_bInInverted = { "bInInverted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInputKeyWidget_eventSetInverted_Parms), &Z_Construct_UFunction_USBZInputKeyWidget_SetInverted_Statics::NewProp_bInInverted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInputKeyWidget_SetInverted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInputKeyWidget_SetInverted_Statics::NewProp_bInInverted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInputKeyWidget_SetInverted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInputKeyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInputKeyWidget_SetInverted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInputKeyWidget, nullptr, "SetInverted", nullptr, nullptr, sizeof(SBZInputKeyWidget_eventSetInverted_Parms), Z_Construct_UFunction_USBZInputKeyWidget_SetInverted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInputKeyWidget_SetInverted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInputKeyWidget_SetInverted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInputKeyWidget_SetInverted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInputKeyWidget_SetInverted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInputKeyWidget_SetInverted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInputKeyWidget_SetKey_Statics
	{
		struct SBZInputKeyWidget_eventSetKey_Parms
		{
			FKey InKey;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZInputKeyWidget_SetKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInputKeyWidget_eventSetKey_Parms, InKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInputKeyWidget_SetKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInputKeyWidget_SetKey_Statics::NewProp_InKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInputKeyWidget_SetKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInputKeyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInputKeyWidget_SetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInputKeyWidget, nullptr, "SetKey", nullptr, nullptr, sizeof(SBZInputKeyWidget_eventSetKey_Parms), Z_Construct_UFunction_USBZInputKeyWidget_SetKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInputKeyWidget_SetKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInputKeyWidget_SetKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInputKeyWidget_SetKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInputKeyWidget_SetKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInputKeyWidget_SetKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZInputKeyWidget_NoRegister()
	{
		return USBZInputKeyWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZInputKeyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInverted_MetaData[];
#endif
		static void NewProp_bInverted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInverted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInputKeyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZInputKeyWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZInputKeyWidget_OnKeyIconChanged, "OnKeyIconChanged" }, // 1054875744
		{ &Z_Construct_UFunction_USBZInputKeyWidget_OnKeyNameChanged, "OnKeyNameChanged" }, // 3801993045
		{ &Z_Construct_UFunction_USBZInputKeyWidget_SetInverted, "SetInverted" }, // 646842888
		{ &Z_Construct_UFunction_USBZInputKeyWidget_SetKey, "SetKey" }, // 2271203815
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInputKeyWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInputKeyWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInputKeyWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInputKeyWidget_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInputKeyWidget" },
		{ "ModuleRelativePath", "Public/SBZInputKeyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZInputKeyWidget_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInputKeyWidget, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_USBZInputKeyWidget_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInputKeyWidget_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInputKeyWidget_Statics::NewProp_bInverted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInputKeyWidget" },
		{ "ModuleRelativePath", "Public/SBZInputKeyWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZInputKeyWidget_Statics::NewProp_bInverted_SetBit(void* Obj)
	{
		((USBZInputKeyWidget*)Obj)->bInverted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZInputKeyWidget_Statics::NewProp_bInverted = { "bInverted", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZInputKeyWidget), &Z_Construct_UClass_USBZInputKeyWidget_Statics::NewProp_bInverted_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZInputKeyWidget_Statics::NewProp_bInverted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInputKeyWidget_Statics::NewProp_bInverted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZInputKeyWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInputKeyWidget_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInputKeyWidget_Statics::NewProp_bInverted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInputKeyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInputKeyWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInputKeyWidget_Statics::ClassParams = {
		&USBZInputKeyWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZInputKeyWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZInputKeyWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZInputKeyWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInputKeyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInputKeyWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInputKeyWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInputKeyWidget, 989415227);
	template<> STARBREEZE_API UClass* StaticClass<USBZInputKeyWidget>()
	{
		return USBZInputKeyWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInputKeyWidget(Z_Construct_UClass_USBZInputKeyWidget, &USBZInputKeyWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInputKeyWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInputKeyWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
