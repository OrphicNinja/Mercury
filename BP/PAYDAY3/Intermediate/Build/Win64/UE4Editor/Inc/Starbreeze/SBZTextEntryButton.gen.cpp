// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTextEntryButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTextEntryButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTextEntryButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTextEntryButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UMG_API UClass* Z_Construct_UClass_UEditableText_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnTextButtonSubmittedText__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZTextEntryButton::execGetCurrentText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetCurrentText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTextEntryButton::execOnTextCommited)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTextCommited(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZTextEntryButton::execSetInputText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputText(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	static FName NAME_USBZTextEntryButton_EditingText = FName(TEXT("EditingText"));
	void USBZTextEntryButton::EditingText(bool bInIsEditingText)
	{
		SBZTextEntryButton_eventEditingText_Parms Parms;
		Parms.bInIsEditingText=bInIsEditingText ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZTextEntryButton_EditingText),&Parms);
	}
	void USBZTextEntryButton::StaticRegisterNativesUSBZTextEntryButton()
	{
		UClass* Class = USBZTextEntryButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentText", &USBZTextEntryButton::execGetCurrentText },
			{ "OnTextCommited", &USBZTextEntryButton::execOnTextCommited },
			{ "SetInputText", &USBZTextEntryButton::execSetInputText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZTextEntryButton_EditingText_Statics
	{
		static void NewProp_bInIsEditingText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsEditingText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZTextEntryButton_EditingText_Statics::NewProp_bInIsEditingText_SetBit(void* Obj)
	{
		((SBZTextEntryButton_eventEditingText_Parms*)Obj)->bInIsEditingText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZTextEntryButton_EditingText_Statics::NewProp_bInIsEditingText = { "bInIsEditingText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZTextEntryButton_eventEditingText_Parms), &Z_Construct_UFunction_USBZTextEntryButton_EditingText_Statics::NewProp_bInIsEditingText_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTextEntryButton_EditingText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTextEntryButton_EditingText_Statics::NewProp_bInIsEditingText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTextEntryButton_EditingText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTextEntryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTextEntryButton_EditingText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTextEntryButton, nullptr, "EditingText", nullptr, nullptr, sizeof(SBZTextEntryButton_eventEditingText_Parms), Z_Construct_UFunction_USBZTextEntryButton_EditingText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTextEntryButton_EditingText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTextEntryButton_EditingText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTextEntryButton_EditingText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTextEntryButton_EditingText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTextEntryButton_EditingText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTextEntryButton_GetCurrentText_Statics
	{
		struct SBZTextEntryButton_eventGetCurrentText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZTextEntryButton_GetCurrentText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTextEntryButton_eventGetCurrentText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTextEntryButton_GetCurrentText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTextEntryButton_GetCurrentText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTextEntryButton_GetCurrentText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTextEntryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTextEntryButton_GetCurrentText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTextEntryButton, nullptr, "GetCurrentText", nullptr, nullptr, sizeof(SBZTextEntryButton_eventGetCurrentText_Parms), Z_Construct_UFunction_USBZTextEntryButton_GetCurrentText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTextEntryButton_GetCurrentText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTextEntryButton_GetCurrentText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTextEntryButton_GetCurrentText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTextEntryButton_GetCurrentText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTextEntryButton_GetCurrentText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics
	{
		struct SBZTextEntryButton_eventOnTextCommited_Parms
		{
			FText Text;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTextEntryButton_eventOnTextCommited_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTextEntryButton_eventOnTextCommited_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics::NewProp_CommitMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTextEntryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTextEntryButton, nullptr, "OnTextCommited", nullptr, nullptr, sizeof(SBZTextEntryButton_eventOnTextCommited_Parms), Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTextEntryButton_SetInputText_Statics
	{
		struct SBZTextEntryButton_eventSetInputText_Parms
		{
			FText InText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTextEntryButton_SetInputText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZTextEntryButton_SetInputText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTextEntryButton_eventSetInputText_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_USBZTextEntryButton_SetInputText_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTextEntryButton_SetInputText_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTextEntryButton_SetInputText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTextEntryButton_SetInputText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTextEntryButton_SetInputText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTextEntryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTextEntryButton_SetInputText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTextEntryButton, nullptr, "SetInputText", nullptr, nullptr, sizeof(SBZTextEntryButton_eventSetInputText_Parms), Z_Construct_UFunction_USBZTextEntryButton_SetInputText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTextEntryButton_SetInputText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTextEntryButton_SetInputText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTextEntryButton_SetInputText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTextEntryButton_SetInputText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTextEntryButton_SetInputText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZTextEntryButton_NoRegister()
	{
		return USBZTextEntryButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZTextEntryButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditableText_TextInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditableText_TextInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSanitizeInputText_MetaData[];
#endif
		static void NewProp_bSanitizeInputText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSanitizeInputText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTextSubmitted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextSubmitted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTextEntryButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZTextEntryButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZTextEntryButton_EditingText, "EditingText" }, // 3905391896
		{ &Z_Construct_UFunction_USBZTextEntryButton_GetCurrentText, "GetCurrentText" }, // 715862755
		{ &Z_Construct_UFunction_USBZTextEntryButton_OnTextCommited, "OnTextCommited" }, // 1201692847
		{ &Z_Construct_UFunction_USBZTextEntryButton_SetInputText, "SetInputText" }, // 1524629134
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTextEntryButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTextEntryButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTextEntryButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_EditableText_TextInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTextEntryButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTextEntryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_EditableText_TextInput = { "EditableText_TextInput", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTextEntryButton, EditableText_TextInput), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_EditableText_TextInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_EditableText_TextInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_bSanitizeInputText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTextEntryButton" },
		{ "ModuleRelativePath", "Public/SBZTextEntryButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_bSanitizeInputText_SetBit(void* Obj)
	{
		((USBZTextEntryButton*)Obj)->bSanitizeInputText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_bSanitizeInputText = { "bSanitizeInputText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZTextEntryButton), &Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_bSanitizeInputText_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_bSanitizeInputText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_bSanitizeInputText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_OnTextSubmitted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTextEntryButton" },
		{ "ModuleRelativePath", "Public/SBZTextEntryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_OnTextSubmitted = { "OnTextSubmitted", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTextEntryButton, OnTextSubmitted), Z_Construct_UDelegateFunction_Starbreeze_OnTextButtonSubmittedText__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_OnTextSubmitted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_OnTextSubmitted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZTextEntryButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_EditableText_TextInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_bSanitizeInputText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTextEntryButton_Statics::NewProp_OnTextSubmitted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTextEntryButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTextEntryButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTextEntryButton_Statics::ClassParams = {
		&USBZTextEntryButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZTextEntryButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZTextEntryButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTextEntryButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTextEntryButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTextEntryButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTextEntryButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTextEntryButton, 2684154459);
	template<> STARBREEZE_API UClass* StaticClass<USBZTextEntryButton>()
	{
		return USBZTextEntryButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTextEntryButton(Z_Construct_UClass_USBZTextEntryButton, &USBZTextEntryButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTextEntryButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTextEntryButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
