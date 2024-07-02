// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCodeNote.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCodeNote() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCodeNote_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCodeNote();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCodeViewerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZCodeNote::execOnRep_CodeToShow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CodeToShow();
		P_NATIVE_END;
	}
	void ASBZCodeNote::StaticRegisterNativesASBZCodeNote()
	{
		UClass* Class = ASBZCodeNote::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_CodeToShow", &ASBZCodeNote::execOnRep_CodeToShow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZCodeNote_OnRep_CodeToShow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCodeNote_OnRep_CodeToShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCodeNote.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCodeNote_OnRep_CodeToShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCodeNote, nullptr, "OnRep_CodeToShow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCodeNote_OnRep_CodeToShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCodeNote_OnRep_CodeToShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCodeNote_OnRep_CodeToShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCodeNote_OnRep_CodeToShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZCodeNote_NoRegister()
	{
		return ASBZCodeNote::StaticClass();
	}
	struct Z_Construct_UClass_ASBZCodeNote_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CodeToShow_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CodeToShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CodeWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CodeWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceShowTrueCode_MetaData[];
#endif
		static void NewProp_bForceShowTrueCode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceShowTrueCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZCodeNote_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZCodeNote_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZCodeNote_OnRep_CodeToShow, "OnRep_CodeToShow" }, // 526262250
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCodeNote_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCodeNote.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCodeNote.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_CodeToShow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCodeNote" },
		{ "ModuleRelativePath", "Public/SBZCodeNote.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_CodeToShow = { "CodeToShow", "OnRep_CodeToShow", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCodeNote, CodeToShow), METADATA_PARAMS(Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_CodeToShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_CodeToShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_CodeWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCodeNote" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCodeNote.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_CodeWidget = { "CodeWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCodeNote, CodeWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_CodeWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_CodeWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_bForceShowTrueCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCodeNote" },
		{ "ModuleRelativePath", "Public/SBZCodeNote.h" },
	};
#endif
	void Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_bForceShowTrueCode_SetBit(void* Obj)
	{
		((ASBZCodeNote*)Obj)->bForceShowTrueCode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_bForceShowTrueCode = { "bForceShowTrueCode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZCodeNote), &Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_bForceShowTrueCode_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_bForceShowTrueCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_bForceShowTrueCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZCodeNote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_CodeToShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_CodeWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCodeNote_Statics::NewProp_bForceShowTrueCode,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZCodeNote_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZCodeViewerInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZCodeNote, ISBZCodeViewerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZCodeNote_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZCodeNote>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZCodeNote_Statics::ClassParams = {
		&ASBZCodeNote::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZCodeNote_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCodeNote_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZCodeNote_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCodeNote_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZCodeNote()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZCodeNote_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZCodeNote, 1414687135);
	template<> STARBREEZE_API UClass* StaticClass<ASBZCodeNote>()
	{
		return ASBZCodeNote::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZCodeNote(Z_Construct_UClass_ASBZCodeNote, &ASBZCodeNote::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZCodeNote"), false, nullptr, nullptr, nullptr);

	void ASBZCodeNote::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CodeToShow(TEXT("CodeToShow"));

		const bool bIsValid = true
			&& Name_CodeToShow == ClassReps[(int32)ENetFields_Private::CodeToShow].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZCodeNote"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZCodeNote);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
