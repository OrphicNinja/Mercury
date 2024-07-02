// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWidgetBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static FName NAME_USBZWidgetBase_OnWidgetPreRemovedFromParent = FName(TEXT("OnWidgetPreRemovedFromParent"));
	void USBZWidgetBase::OnWidgetPreRemovedFromParent()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZWidgetBase_OnWidgetPreRemovedFromParent),NULL);
	}
	void USBZWidgetBase::StaticRegisterNativesUSBZWidgetBase()
	{
	}
	struct Z_Construct_UFunction_USBZWidgetBase_OnWidgetPreRemovedFromParent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWidgetBase_OnWidgetPreRemovedFromParent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWidgetBase_OnWidgetPreRemovedFromParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWidgetBase, nullptr, "OnWidgetPreRemovedFromParent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWidgetBase_OnWidgetPreRemovedFromParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWidgetBase_OnWidgetPreRemovedFromParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWidgetBase_OnWidgetPreRemovedFromParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWidgetBase_OnWidgetPreRemovedFromParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZWidgetBase_NoRegister()
	{
		return USBZWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZWidgetBase_OnWidgetPreRemovedFromParent, "OnWidgetPreRemovedFromParent" }, // 413429153
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWidgetBase_Statics::ClassParams = {
		&USBZWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWidgetBase, 3758664657);
	template<> STARBREEZE_API UClass* StaticClass<USBZWidgetBase>()
	{
		return USBZWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWidgetBase(Z_Construct_UClass_USBZWidgetBase, &USBZWidgetBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
