// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUIEditableTextBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUIEditableTextBox() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIEditableTextBox_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIEditableTextBox();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnMaxInputLengthReached__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZUIEditableTextBox::execIsEmptyOrConsistsOfWhitespaces)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmptyOrConsistsOfWhitespaces(Z_Param_InString);
		P_NATIVE_END;
	}
	void USBZUIEditableTextBox::StaticRegisterNativesUSBZUIEditableTextBox()
	{
		UClass* Class = USBZUIEditableTextBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsEmptyOrConsistsOfWhitespaces", &USBZUIEditableTextBox::execIsEmptyOrConsistsOfWhitespaces },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics
	{
		struct SBZUIEditableTextBox_eventIsEmptyOrConsistsOfWhitespaces_Parms
		{
			FString InString;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIEditableTextBox_eventIsEmptyOrConsistsOfWhitespaces_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::NewProp_InString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::NewProp_InString_MetaData)) };
	void Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZUIEditableTextBox_eventIsEmptyOrConsistsOfWhitespaces_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIEditableTextBox_eventIsEmptyOrConsistsOfWhitespaces_Parms), &Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::NewProp_InString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIEditableTextBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIEditableTextBox, nullptr, "IsEmptyOrConsistsOfWhitespaces", nullptr, nullptr, sizeof(SBZUIEditableTextBox_eventIsEmptyOrConsistsOfWhitespaces_Parms), Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZUIEditableTextBox_NoRegister()
	{
		return USBZUIEditableTextBox::StaticClass();
	}
	struct Z_Construct_UClass_USBZUIEditableTextBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMaxInputLengthReachedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxInputLengthReachedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableUserTextLengthLimit_MetaData[];
#endif
		static void NewProp_bEnableUserTextLengthLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableUserTextLengthLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInputLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxInputLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZUIEditableTextBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditableTextBox,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZUIEditableTextBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZUIEditableTextBox_IsEmptyOrConsistsOfWhitespaces, "IsEmptyOrConsistsOfWhitespaces" }, // 2145938917
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIEditableTextBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZUIEditableTextBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZUIEditableTextBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_OnMaxInputLengthReachedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIEditableTextBox" },
		{ "ModuleRelativePath", "Public/SBZUIEditableTextBox.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_OnMaxInputLengthReachedEvent = { "OnMaxInputLengthReachedEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIEditableTextBox, OnMaxInputLengthReachedEvent), Z_Construct_UDelegateFunction_Starbreeze_OnMaxInputLengthReached__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_OnMaxInputLengthReachedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_OnMaxInputLengthReachedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_bEnableUserTextLengthLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIEditableTextBox" },
		{ "ModuleRelativePath", "Public/SBZUIEditableTextBox.h" },
	};
#endif
	void Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_bEnableUserTextLengthLimit_SetBit(void* Obj)
	{
		((USBZUIEditableTextBox*)Obj)->bEnableUserTextLengthLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_bEnableUserTextLengthLimit = { "bEnableUserTextLengthLimit", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZUIEditableTextBox), &Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_bEnableUserTextLengthLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_bEnableUserTextLengthLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_bEnableUserTextLengthLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_MaxInputLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIEditableTextBox" },
		{ "ModuleRelativePath", "Public/SBZUIEditableTextBox.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_MaxInputLength = { "MaxInputLength", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIEditableTextBox, MaxInputLength), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_MaxInputLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_MaxInputLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZUIEditableTextBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_OnMaxInputLengthReachedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_bEnableUserTextLengthLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIEditableTextBox_Statics::NewProp_MaxInputLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZUIEditableTextBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZUIEditableTextBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZUIEditableTextBox_Statics::ClassParams = {
		&USBZUIEditableTextBox::StaticClass,
		"StarbreezeUI",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZUIEditableTextBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIEditableTextBox_Statics::PropPointers),
		0,
		0x00B000A2u,
		METADATA_PARAMS(Z_Construct_UClass_USBZUIEditableTextBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIEditableTextBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZUIEditableTextBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZUIEditableTextBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZUIEditableTextBox, 362940456);
	template<> STARBREEZE_API UClass* StaticClass<USBZUIEditableTextBox>()
	{
		return USBZUIEditableTextBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZUIEditableTextBox(Z_Construct_UClass_USBZUIEditableTextBox, &USBZUIEditableTextBox::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZUIEditableTextBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZUIEditableTextBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
