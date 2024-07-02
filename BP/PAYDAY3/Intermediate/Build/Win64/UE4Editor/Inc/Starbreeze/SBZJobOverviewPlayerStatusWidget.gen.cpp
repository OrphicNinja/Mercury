// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZJobOverviewPlayerStatusWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZJobOverviewPlayerStatusWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerReadyInfo();
// End Cross Module References
	static FName NAME_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo = FName(TEXT("SetPlayerInfo"));
	void USBZJobOverviewPlayerStatusWidget::SetPlayerInfo(FSBZPlayerReadyInfo const& InPlayerReadyInfo)
	{
		SBZJobOverviewPlayerStatusWidget_eventSetPlayerInfo_Parms Parms;
		Parms.InPlayerReadyInfo=InPlayerReadyInfo;
		ProcessEvent(FindFunctionChecked(NAME_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo),&Parms);
	}
	void USBZJobOverviewPlayerStatusWidget::StaticRegisterNativesUSBZJobOverviewPlayerStatusWidget()
	{
	}
	struct Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerReadyInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerReadyInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo_Statics::NewProp_InPlayerReadyInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo_Statics::NewProp_InPlayerReadyInfo = { "InPlayerReadyInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZJobOverviewPlayerStatusWidget_eventSetPlayerInfo_Parms, InPlayerReadyInfo), Z_Construct_UScriptStruct_FSBZPlayerReadyInfo, METADATA_PARAMS(Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo_Statics::NewProp_InPlayerReadyInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo_Statics::NewProp_InPlayerReadyInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo_Statics::NewProp_InPlayerReadyInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZJobOverviewPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget, nullptr, "SetPlayerInfo", nullptr, nullptr, sizeof(SBZJobOverviewPlayerStatusWidget_eventSetPlayerInfo_Parms), Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget_NoRegister()
	{
		return USBZJobOverviewPlayerStatusWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZJobOverviewPlayerStatusWidget_SetPlayerInfo, "SetPlayerInfo" }, // 4196806477
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZJobOverviewPlayerStatusWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZJobOverviewPlayerStatusWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZJobOverviewPlayerStatusWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget_Statics::ClassParams = {
		&USBZJobOverviewPlayerStatusWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZJobOverviewPlayerStatusWidget, 113239725);
	template<> STARBREEZE_API UClass* StaticClass<USBZJobOverviewPlayerStatusWidget>()
	{
		return USBZJobOverviewPlayerStatusWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZJobOverviewPlayerStatusWidget(Z_Construct_UClass_USBZJobOverviewPlayerStatusWidget, &USBZJobOverviewPlayerStatusWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZJobOverviewPlayerStatusWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZJobOverviewPlayerStatusWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
