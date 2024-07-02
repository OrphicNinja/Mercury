// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLoadoutConfirmationPopupBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLoadoutConfirmationPopupBody() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutConfirmationPopupBody();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent();
// End Cross Module References
	static FName NAME_USBZLoadoutConfirmationPopupBody_OnItemDataInitialized = FName(TEXT("OnItemDataInitialized"));
	void USBZLoadoutConfirmationPopupBody::OnItemDataInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZLoadoutConfirmationPopupBody_OnItemDataInitialized),NULL);
	}
	void USBZLoadoutConfirmationPopupBody::StaticRegisterNativesUSBZLoadoutConfirmationPopupBody()
	{
	}
	struct Z_Construct_UFunction_USBZLoadoutConfirmationPopupBody_OnItemDataInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutConfirmationPopupBody_OnItemDataInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutConfirmationPopupBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutConfirmationPopupBody_OnItemDataInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutConfirmationPopupBody, nullptr, "OnItemDataInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutConfirmationPopupBody_OnItemDataInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutConfirmationPopupBody_OnItemDataInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutConfirmationPopupBody_OnItemDataInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutConfirmationPopupBody_OnItemDataInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_NoRegister()
	{
		return USBZLoadoutConfirmationPopupBody::StaticClass();
	}
	struct Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionItemUIData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressionItemUIData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLoadoutConfirmationPopupBody_OnItemDataInitialized, "OnItemDataInitialized" }, // 2641253153
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLoadoutConfirmationPopupBody.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLoadoutConfirmationPopupBody.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::NewProp_ProgressionItemUIData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoadoutConfirmationPopupBody" },
		{ "ModuleRelativePath", "Public/SBZLoadoutConfirmationPopupBody.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::NewProp_ProgressionItemUIData = { "ProgressionItemUIData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoadoutConfirmationPopupBody, ProgressionItemUIData), Z_Construct_UScriptStruct_FSBZWeaponPartProgressionCurrent, METADATA_PARAMS(Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::NewProp_ProgressionItemUIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::NewProp_ProgressionItemUIData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::NewProp_ProgressionItemUIData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLoadoutConfirmationPopupBody>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::ClassParams = {
		&USBZLoadoutConfirmationPopupBody::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLoadoutConfirmationPopupBody()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLoadoutConfirmationPopupBody_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLoadoutConfirmationPopupBody, 4240485056);
	template<> STARBREEZE_API UClass* StaticClass<USBZLoadoutConfirmationPopupBody>()
	{
		return USBZLoadoutConfirmationPopupBody::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLoadoutConfirmationPopupBody(Z_Construct_UClass_USBZLoadoutConfirmationPopupBody, &USBZLoadoutConfirmationPopupBody::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLoadoutConfirmationPopupBody"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLoadoutConfirmationPopupBody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
