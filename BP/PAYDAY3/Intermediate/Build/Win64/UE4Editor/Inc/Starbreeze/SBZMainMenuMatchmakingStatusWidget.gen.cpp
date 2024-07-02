// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuMatchmakingStatusWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuMatchmakingStatusWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress();
// End Cross Module References
	static FName NAME_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingCancel = FName(TEXT("OnAsyncLoadingCancel"));
	void USBZMainMenuMatchmakingStatusWidget::OnAsyncLoadingCancel()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingCancel),NULL);
	}
	static FName NAME_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingDone = FName(TEXT("OnAsyncLoadingDone"));
	void USBZMainMenuMatchmakingStatusWidget::OnAsyncLoadingDone()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingDone),NULL);
	}
	static FName NAME_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress = FName(TEXT("OnAsyncLoadingProgress"));
	void USBZMainMenuMatchmakingStatusWidget::OnAsyncLoadingProgress(FSBZAsyncLoadingProgress const& Progress)
	{
		SBZMainMenuMatchmakingStatusWidget_eventOnAsyncLoadingProgress_Parms Parms;
		Parms.Progress=Progress;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress),&Parms);
	}
	static FName NAME_USBZMainMenuMatchmakingStatusWidget_OnEnteredMatchmaking = FName(TEXT("OnEnteredMatchmaking"));
	void USBZMainMenuMatchmakingStatusWidget::OnEnteredMatchmaking()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuMatchmakingStatusWidget_OnEnteredMatchmaking),NULL);
	}
	static FName NAME_USBZMainMenuMatchmakingStatusWidget_OnExitedMatchmaking = FName(TEXT("OnExitedMatchmaking"));
	void USBZMainMenuMatchmakingStatusWidget::OnExitedMatchmaking()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuMatchmakingStatusWidget_OnExitedMatchmaking),NULL);
	}
	static FName NAME_USBZMainMenuMatchmakingStatusWidget_OnPlayerReady = FName(TEXT("OnPlayerReady"));
	void USBZMainMenuMatchmakingStatusWidget::OnPlayerReady()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuMatchmakingStatusWidget_OnPlayerReady),NULL);
	}
	static FName NAME_USBZMainMenuMatchmakingStatusWidget_OnTravelToGameStarted = FName(TEXT("OnTravelToGameStarted"));
	void USBZMainMenuMatchmakingStatusWidget::OnTravelToGameStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuMatchmakingStatusWidget_OnTravelToGameStarted),NULL);
	}
	void USBZMainMenuMatchmakingStatusWidget::StaticRegisterNativesUSBZMainMenuMatchmakingStatusWidget()
	{
	}
	struct Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMatchmakingStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget, nullptr, "OnAsyncLoadingCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMatchmakingStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget, nullptr, "OnAsyncLoadingDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress_Statics::NewProp_Progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuMatchmakingStatusWidget_eventOnAsyncLoadingProgress_Parms, Progress), Z_Construct_UScriptStruct_FSBZAsyncLoadingProgress, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress_Statics::NewProp_Progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMatchmakingStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget, nullptr, "OnAsyncLoadingProgress", nullptr, nullptr, sizeof(SBZMainMenuMatchmakingStatusWidget_eventOnAsyncLoadingProgress_Parms), Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnEnteredMatchmaking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnEnteredMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMatchmakingStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnEnteredMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget, nullptr, "OnEnteredMatchmaking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnEnteredMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnEnteredMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnEnteredMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnEnteredMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnExitedMatchmaking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnExitedMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMatchmakingStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnExitedMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget, nullptr, "OnExitedMatchmaking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnExitedMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnExitedMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnExitedMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnExitedMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnPlayerReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnPlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMatchmakingStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnPlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget, nullptr, "OnPlayerReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnPlayerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnPlayerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnPlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnPlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnTravelToGameStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnTravelToGameStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuMatchmakingStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnTravelToGameStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget, nullptr, "OnTravelToGameStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnTravelToGameStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnTravelToGameStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnTravelToGameStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnTravelToGameStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget_NoRegister()
	{
		return USBZMainMenuMatchmakingStatusWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingCancel, "OnAsyncLoadingCancel" }, // 9818604
		{ &Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingDone, "OnAsyncLoadingDone" }, // 1344638874
		{ &Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnAsyncLoadingProgress, "OnAsyncLoadingProgress" }, // 1706850420
		{ &Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnEnteredMatchmaking, "OnEnteredMatchmaking" }, // 1996939630
		{ &Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnExitedMatchmaking, "OnExitedMatchmaking" }, // 3543934524
		{ &Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnPlayerReady, "OnPlayerReady" }, // 3358905756
		{ &Z_Construct_UFunction_USBZMainMenuMatchmakingStatusWidget_OnTravelToGameStarted, "OnTravelToGameStarted" }, // 2470584636
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuMatchmakingStatusWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuMatchmakingStatusWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuMatchmakingStatusWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget_Statics::ClassParams = {
		&USBZMainMenuMatchmakingStatusWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuMatchmakingStatusWidget, 2850370892);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuMatchmakingStatusWidget>()
	{
		return USBZMainMenuMatchmakingStatusWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuMatchmakingStatusWidget(Z_Construct_UClass_USBZMainMenuMatchmakingStatusWidget, &USBZMainMenuMatchmakingStatusWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuMatchmakingStatusWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuMatchmakingStatusWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
