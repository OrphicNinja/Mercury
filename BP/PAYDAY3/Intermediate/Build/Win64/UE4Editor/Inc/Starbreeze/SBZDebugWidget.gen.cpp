// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDebugWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDebugWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDebugWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDebugWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	static FName NAME_USBZDebugWidget_OnCinematicMode = FName(TEXT("OnCinematicMode"));
	void USBZDebugWidget::OnCinematicMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZDebugWidget_OnCinematicMode),NULL);
	}
	static FName NAME_USBZDebugWidget_OnFullscreenMode = FName(TEXT("OnFullscreenMode"));
	void USBZDebugWidget::OnFullscreenMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZDebugWidget_OnFullscreenMode),NULL);
	}
	static FName NAME_USBZDebugWidget_OnMissionSeedSet = FName(TEXT("OnMissionSeedSet"));
	void USBZDebugWidget::OnMissionSeedSet(int32 MissionSeed)
	{
		SBZDebugWidget_eventOnMissionSeedSet_Parms Parms;
		Parms.MissionSeed=MissionSeed;
		ProcessEvent(FindFunctionChecked(NAME_USBZDebugWidget_OnMissionSeedSet),&Parms);
	}
	static FName NAME_USBZDebugWidget_OnWatermarkMode = FName(TEXT("OnWatermarkMode"));
	void USBZDebugWidget::OnWatermarkMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZDebugWidget_OnWatermarkMode),NULL);
	}
	void USBZDebugWidget::StaticRegisterNativesUSBZDebugWidget()
	{
	}
	struct Z_Construct_UFunction_USBZDebugWidget_OnCinematicMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDebugWidget_OnCinematicMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDebugWidget_OnCinematicMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDebugWidget, nullptr, "OnCinematicMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDebugWidget_OnCinematicMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDebugWidget_OnCinematicMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDebugWidget_OnCinematicMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDebugWidget_OnCinematicMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDebugWidget_OnFullscreenMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDebugWidget_OnFullscreenMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDebugWidget_OnFullscreenMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDebugWidget, nullptr, "OnFullscreenMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDebugWidget_OnFullscreenMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDebugWidget_OnFullscreenMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDebugWidget_OnFullscreenMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDebugWidget_OnFullscreenMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDebugWidget_OnMissionSeedSet_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MissionSeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZDebugWidget_OnMissionSeedSet_Statics::NewProp_MissionSeed = { "MissionSeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDebugWidget_eventOnMissionSeedSet_Parms, MissionSeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDebugWidget_OnMissionSeedSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDebugWidget_OnMissionSeedSet_Statics::NewProp_MissionSeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDebugWidget_OnMissionSeedSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDebugWidget_OnMissionSeedSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDebugWidget, nullptr, "OnMissionSeedSet", nullptr, nullptr, sizeof(SBZDebugWidget_eventOnMissionSeedSet_Parms), Z_Construct_UFunction_USBZDebugWidget_OnMissionSeedSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDebugWidget_OnMissionSeedSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDebugWidget_OnMissionSeedSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDebugWidget_OnMissionSeedSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDebugWidget_OnMissionSeedSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDebugWidget_OnMissionSeedSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDebugWidget_OnWatermarkMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDebugWidget_OnWatermarkMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDebugWidget_OnWatermarkMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDebugWidget, nullptr, "OnWatermarkMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDebugWidget_OnWatermarkMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDebugWidget_OnWatermarkMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDebugWidget_OnWatermarkMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDebugWidget_OnWatermarkMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZDebugWidget_NoRegister()
	{
		return USBZDebugWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZDebugWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_SubtitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_SubtitleText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDebugWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZDebugWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZDebugWidget_OnCinematicMode, "OnCinematicMode" }, // 529169270
		{ &Z_Construct_UFunction_USBZDebugWidget_OnFullscreenMode, "OnFullscreenMode" }, // 1400957929
		{ &Z_Construct_UFunction_USBZDebugWidget_OnMissionSeedSet, "OnMissionSeedSet" }, // 3184130624
		{ &Z_Construct_UFunction_USBZDebugWidget_OnWatermarkMode, "OnWatermarkMode" }, // 3415339622
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDebugWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDebugWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugWidget_Statics::NewProp_Text_SubtitleText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDebugWidget_Statics::NewProp_Text_SubtitleText = { "Text_SubtitleText", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDebugWidget, Text_SubtitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDebugWidget_Statics::NewProp_Text_SubtitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugWidget_Statics::NewProp_Text_SubtitleText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDebugWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugWidget_Statics::NewProp_Text_SubtitleText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDebugWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDebugWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDebugWidget_Statics::ClassParams = {
		&USBZDebugWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZDebugWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDebugWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDebugWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDebugWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDebugWidget, 3872450305);
	template<> STARBREEZE_API UClass* StaticClass<USBZDebugWidget>()
	{
		return USBZDebugWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDebugWidget(Z_Construct_UClass_USBZDebugWidget, &USBZDebugWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDebugWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDebugWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
