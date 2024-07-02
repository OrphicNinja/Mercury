// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBlackMarketConfirmationPopupBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBlackMarketConfirmationPopupBody() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreItemUIData();
// End Cross Module References
	static FName NAME_USBZBlackMarketConfirmationPopupBody_OnItemDataInitialized = FName(TEXT("OnItemDataInitialized"));
	void USBZBlackMarketConfirmationPopupBody::OnItemDataInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZBlackMarketConfirmationPopupBody_OnItemDataInitialized),NULL);
	}
	void USBZBlackMarketConfirmationPopupBody::StaticRegisterNativesUSBZBlackMarketConfirmationPopupBody()
	{
	}
	struct Z_Construct_UFunction_USBZBlackMarketConfirmationPopupBody_OnItemDataInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBlackMarketConfirmationPopupBody_OnItemDataInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBlackMarketConfirmationPopupBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBlackMarketConfirmationPopupBody_OnItemDataInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody, nullptr, "OnItemDataInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBlackMarketConfirmationPopupBody_OnItemDataInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBlackMarketConfirmationPopupBody_OnItemDataInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBlackMarketConfirmationPopupBody_OnItemDataInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBlackMarketConfirmationPopupBody_OnItemDataInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_NoRegister()
	{
		return USBZBlackMarketConfirmationPopupBody::StaticClass();
	}
	struct Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreItemUIData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoreItemUIData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBlackMarketConfirmationPopupBody_OnItemDataInitialized, "OnItemDataInitialized" }, // 487364102
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBlackMarketConfirmationPopupBody.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketConfirmationPopupBody.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::NewProp_StoreItemUIData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBlackMarketConfirmationPopupBody" },
		{ "ModuleRelativePath", "Public/SBZBlackMarketConfirmationPopupBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::NewProp_StoreItemUIData = { "StoreItemUIData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBlackMarketConfirmationPopupBody, StoreItemUIData), Z_Construct_UScriptStruct_FSBZStoreItemUIData, METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::NewProp_StoreItemUIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::NewProp_StoreItemUIData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::NewProp_StoreItemUIData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBlackMarketConfirmationPopupBody>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::ClassParams = {
		&USBZBlackMarketConfirmationPopupBody::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBlackMarketConfirmationPopupBody, 4090801027);
	template<> STARBREEZE_API UClass* StaticClass<USBZBlackMarketConfirmationPopupBody>()
	{
		return USBZBlackMarketConfirmationPopupBody::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBlackMarketConfirmationPopupBody(Z_Construct_UClass_USBZBlackMarketConfirmationPopupBody, &USBZBlackMarketConfirmationPopupBody::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBlackMarketConfirmationPopupBody"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBlackMarketConfirmationPopupBody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
