// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMultiCodeKeypad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMultiCodeKeypad() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMultiCodeKeypad_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMultiCodeKeypad();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZKeypadBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZMultiCodeDelegate__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCodeAndIdentifier();
// End Cross Module References
	DEFINE_FUNCTION(ASBZMultiCodeKeypad::execOnRep_CurrentCodeIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentCodeIndex();
		P_NATIVE_END;
	}
	static FName NAME_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged = FName(TEXT("BP_OnCodeIndexChanged"));
	void ASBZMultiCodeKeypad::BP_OnCodeIndexChanged(int32 CurrentIndex, FText const& Identifier)
	{
		SBZMultiCodeKeypad_eventBP_OnCodeIndexChanged_Parms Parms;
		Parms.CurrentIndex=CurrentIndex;
		Parms.Identifier=Identifier;
		ProcessEvent(FindFunctionChecked(NAME_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged),&Parms);
	}
	void ASBZMultiCodeKeypad::StaticRegisterNativesASBZMultiCodeKeypad()
	{
		UClass* Class = ASBZMultiCodeKeypad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_CurrentCodeIndex", &ASBZMultiCodeKeypad::execOnRep_CurrentCodeIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMultiCodeKeypad_eventBP_OnCodeIndexChanged_Parms, CurrentIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMultiCodeKeypad_eventBP_OnCodeIndexChanged_Parms, Identifier), METADATA_PARAMS(Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics::NewProp_Identifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics::NewProp_CurrentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMultiCodeKeypad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMultiCodeKeypad, nullptr, "BP_OnCodeIndexChanged", nullptr, nullptr, sizeof(SBZMultiCodeKeypad_eventBP_OnCodeIndexChanged_Parms), Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMultiCodeKeypad_OnRep_CurrentCodeIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMultiCodeKeypad_OnRep_CurrentCodeIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMultiCodeKeypad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMultiCodeKeypad_OnRep_CurrentCodeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMultiCodeKeypad, nullptr, "OnRep_CurrentCodeIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMultiCodeKeypad_OnRep_CurrentCodeIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMultiCodeKeypad_OnRep_CurrentCodeIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMultiCodeKeypad_OnRep_CurrentCodeIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMultiCodeKeypad_OnRep_CurrentCodeIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZMultiCodeKeypad_NoRegister()
	{
		return ASBZMultiCodeKeypad::StaticClass();
	}
	struct Z_Construct_UClass_ASBZMultiCodeKeypad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfCodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfCodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentCodeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCorrectCodeEntered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCorrectCodeEntered;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CodeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CodeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CodeArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CodeIdentifierArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CodeIdentifierArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CodeIdentifierArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZKeypadBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZMultiCodeKeypad_BP_OnCodeIndexChanged, "BP_OnCodeIndexChanged" }, // 4093829490
		{ &Z_Construct_UFunction_ASBZMultiCodeKeypad_OnRep_CurrentCodeIndex, "OnRep_CurrentCodeIndex" }, // 3846546477
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMultiCodeKeypad.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMultiCodeKeypad.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_NumberOfCodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMultiCodeKeypad" },
		{ "ModuleRelativePath", "Public/SBZMultiCodeKeypad.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_NumberOfCodes = { "NumberOfCodes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMultiCodeKeypad, NumberOfCodes), METADATA_PARAMS(Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_NumberOfCodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_NumberOfCodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CurrentCodeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMultiCodeKeypad" },
		{ "ModuleRelativePath", "Public/SBZMultiCodeKeypad.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CurrentCodeIndex = { "CurrentCodeIndex", "OnRep_CurrentCodeIndex", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMultiCodeKeypad, CurrentCodeIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CurrentCodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CurrentCodeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_OnCorrectCodeEntered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMultiCodeKeypad" },
		{ "ModuleRelativePath", "Public/SBZMultiCodeKeypad.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_OnCorrectCodeEntered = { "OnCorrectCodeEntered", nullptr, (EPropertyFlags)0x0020280010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMultiCodeKeypad, OnCorrectCodeEntered), Z_Construct_UDelegateFunction_Starbreeze_SBZMultiCodeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_OnCorrectCodeEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_OnCorrectCodeEntered_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CodeArray_Inner = { "CodeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CodeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMultiCodeKeypad" },
		{ "ModuleRelativePath", "Public/SBZMultiCodeKeypad.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CodeArray = { "CodeArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMultiCodeKeypad, CodeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CodeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CodeArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CodeIdentifierArray_Inner = { "CodeIdentifierArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCodeAndIdentifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CodeIdentifierArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMultiCodeKeypad" },
		{ "ModuleRelativePath", "Public/SBZMultiCodeKeypad.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CodeIdentifierArray = { "CodeIdentifierArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMultiCodeKeypad, CodeIdentifierArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CodeIdentifierArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CodeIdentifierArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_NumberOfCodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CurrentCodeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_OnCorrectCodeEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CodeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CodeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CodeIdentifierArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::NewProp_CodeIdentifierArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZMultiCodeKeypad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::ClassParams = {
		&ASBZMultiCodeKeypad::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZMultiCodeKeypad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZMultiCodeKeypad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZMultiCodeKeypad, 808513066);
	template<> STARBREEZE_API UClass* StaticClass<ASBZMultiCodeKeypad>()
	{
		return ASBZMultiCodeKeypad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZMultiCodeKeypad(Z_Construct_UClass_ASBZMultiCodeKeypad, &ASBZMultiCodeKeypad::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZMultiCodeKeypad"), false, nullptr, nullptr, nullptr);

	void ASBZMultiCodeKeypad::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentCodeIndex(TEXT("CurrentCodeIndex"));

		const bool bIsValid = true
			&& Name_CurrentCodeIndex == ClassReps[(int32)ENetFields_Private::CurrentCodeIndex].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZMultiCodeKeypad"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZMultiCodeKeypad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
