// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTutorialPopUpBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTutorialPopUpBody() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTutorialPopUpBody_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTutorialPopUpBody();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTutorialPopUpDataAsset_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlsReference();
// End Cross Module References
	DEFINE_FUNCTION(USBZTutorialPopUpBody::execInitializeTutorialPopUpBody)
	{
		P_GET_OBJECT(USBZTutorialPopUpDataAsset,Z_Param_InPopUpDataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTutorialPopUpBody(Z_Param_InPopUpDataAsset);
		P_NATIVE_END;
	}
	static FName NAME_USBZTutorialPopUpBody_OnTutorialPopUpInitialized = FName(TEXT("OnTutorialPopUpInitialized"));
	void USBZTutorialPopUpBody::OnTutorialPopUpInitialized(const USBZTutorialPopUpDataAsset* InPopUpDataAsset)
	{
		SBZTutorialPopUpBody_eventOnTutorialPopUpInitialized_Parms Parms;
		Parms.InPopUpDataAsset=InPopUpDataAsset;
		ProcessEvent(FindFunctionChecked(NAME_USBZTutorialPopUpBody_OnTutorialPopUpInitialized),&Parms);
	}
	void USBZTutorialPopUpBody::StaticRegisterNativesUSBZTutorialPopUpBody()
	{
		UClass* Class = USBZTutorialPopUpBody::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeTutorialPopUpBody", &USBZTutorialPopUpBody::execInitializeTutorialPopUpBody },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody_Statics
	{
		struct SBZTutorialPopUpBody_eventInitializeTutorialPopUpBody_Parms
		{
			const USBZTutorialPopUpDataAsset* InPopUpDataAsset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPopUpDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPopUpDataAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody_Statics::NewProp_InPopUpDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody_Statics::NewProp_InPopUpDataAsset = { "InPopUpDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTutorialPopUpBody_eventInitializeTutorialPopUpBody_Parms, InPopUpDataAsset), Z_Construct_UClass_USBZTutorialPopUpDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody_Statics::NewProp_InPopUpDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody_Statics::NewProp_InPopUpDataAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody_Statics::NewProp_InPopUpDataAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTutorialPopUpBody, nullptr, "InitializeTutorialPopUpBody", nullptr, nullptr, sizeof(SBZTutorialPopUpBody_eventInitializeTutorialPopUpBody_Parms), Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPopUpDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPopUpDataAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized_Statics::NewProp_InPopUpDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized_Statics::NewProp_InPopUpDataAsset = { "InPopUpDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTutorialPopUpBody_eventOnTutorialPopUpInitialized_Parms, InPopUpDataAsset), Z_Construct_UClass_USBZTutorialPopUpDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized_Statics::NewProp_InPopUpDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized_Statics::NewProp_InPopUpDataAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized_Statics::NewProp_InPopUpDataAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTutorialPopUpBody, nullptr, "OnTutorialPopUpInitialized", nullptr, nullptr, sizeof(SBZTutorialPopUpBody_eventOnTutorialPopUpInitialized_Parms), Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZTutorialPopUpBody_NoRegister()
	{
		return USBZTutorialPopUpBody::StaticClass();
	}
	struct Z_Construct_UClass_USBZTutorialPopUpBody_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopUpControlsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PopUpDataAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTutorialPopUpBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZTutorialPopUpBody_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZTutorialPopUpBody_InitializeTutorialPopUpBody, "InitializeTutorialPopUpBody" }, // 2780835730
		{ &Z_Construct_UFunction_USBZTutorialPopUpBody_OnTutorialPopUpInitialized, "OnTutorialPopUpInitialized" }, // 2662948062
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTutorialPopUpBody_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTutorialPopUpBody.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpBody.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTutorialPopUpBody_Statics::NewProp_PopUpControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTutorialPopUpBody" },
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTutorialPopUpBody_Statics::NewProp_PopUpControlsReference = { "PopUpControlsReference", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTutorialPopUpBody, PopUpControlsReference), Z_Construct_UScriptStruct_FSBZButtonControlsReference, METADATA_PARAMS(Z_Construct_UClass_USBZTutorialPopUpBody_Statics::NewProp_PopUpControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTutorialPopUpBody_Statics::NewProp_PopUpControlsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTutorialPopUpBody_Statics::NewProp_PopUpDataAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTutorialPopUpBody" },
		{ "ModuleRelativePath", "Public/SBZTutorialPopUpBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTutorialPopUpBody_Statics::NewProp_PopUpDataAsset = { "PopUpDataAsset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTutorialPopUpBody, PopUpDataAsset), Z_Construct_UClass_USBZTutorialPopUpDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTutorialPopUpBody_Statics::NewProp_PopUpDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTutorialPopUpBody_Statics::NewProp_PopUpDataAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZTutorialPopUpBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTutorialPopUpBody_Statics::NewProp_PopUpControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTutorialPopUpBody_Statics::NewProp_PopUpDataAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTutorialPopUpBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTutorialPopUpBody>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTutorialPopUpBody_Statics::ClassParams = {
		&USBZTutorialPopUpBody::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZTutorialPopUpBody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZTutorialPopUpBody_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTutorialPopUpBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTutorialPopUpBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTutorialPopUpBody()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTutorialPopUpBody_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTutorialPopUpBody, 3300228993);
	template<> STARBREEZE_API UClass* StaticClass<USBZTutorialPopUpBody>()
	{
		return USBZTutorialPopUpBody::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTutorialPopUpBody(Z_Construct_UClass_USBZTutorialPopUpBody, &USBZTutorialPopUpBody::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTutorialPopUpBody"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTutorialPopUpBody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
