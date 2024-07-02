// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuChallengeStatDisplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuChallengeStatDisplay() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengeStatDisplay();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeProgressItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeProgressStat();
// End Cross Module References
	static FName NAME_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized = FName(TEXT("ChallengeIdInitialized"));
	void USBZMainMenuChallengeStatDisplay::ChallengeIdInitialized(const FString& InChallengeId)
	{
		SBZMainMenuChallengeStatDisplay_eventChallengeIdInitialized_Parms Parms;
		Parms.InChallengeId=InChallengeId;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized),&Parms);
	}
	static FName NAME_USBZMainMenuChallengeStatDisplay_ChallengeInitialized = FName(TEXT("ChallengeInitialized"));
	void USBZMainMenuChallengeStatDisplay::ChallengeInitialized(FSBZChallengeData const& InChallenge)
	{
		SBZMainMenuChallengeStatDisplay_eventChallengeInitialized_Parms Parms;
		Parms.InChallenge=InChallenge;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuChallengeStatDisplay_ChallengeInitialized),&Parms);
	}
	static FName NAME_USBZMainMenuChallengeStatDisplay_ItemInitialized = FName(TEXT("ItemInitialized"));
	void USBZMainMenuChallengeStatDisplay::ItemInitialized(FSBZChallengeProgressItem const& InProgressItem)
	{
		SBZMainMenuChallengeStatDisplay_eventItemInitialized_Parms Parms;
		Parms.InProgressItem=InProgressItem;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuChallengeStatDisplay_ItemInitialized),&Parms);
	}
	static FName NAME_USBZMainMenuChallengeStatDisplay_StatInitialized = FName(TEXT("StatInitialized"));
	void USBZMainMenuChallengeStatDisplay::StatInitialized(FSBZChallengeData const& InChallenge, FSBZChallengeProgressStat const& InProgressStat)
	{
		SBZMainMenuChallengeStatDisplay_eventStatInitialized_Parms Parms;
		Parms.InChallenge=InChallenge;
		Parms.InProgressStat=InProgressStat;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuChallengeStatDisplay_StatInitialized),&Parms);
	}
	void USBZMainMenuChallengeStatDisplay::StaticRegisterNativesUSBZMainMenuChallengeStatDisplay()
	{
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InChallengeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InChallengeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized_Statics::NewProp_InChallengeId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized_Statics::NewProp_InChallengeId = { "InChallengeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengeStatDisplay_eventChallengeIdInitialized_Parms, InChallengeId), METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized_Statics::NewProp_InChallengeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized_Statics::NewProp_InChallengeId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized_Statics::NewProp_InChallengeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeStatDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengeStatDisplay, nullptr, "ChallengeIdInitialized", nullptr, nullptr, sizeof(SBZMainMenuChallengeStatDisplay_eventChallengeIdInitialized_Parms), Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InChallenge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InChallenge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized_Statics::NewProp_InChallenge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized_Statics::NewProp_InChallenge = { "InChallenge", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengeStatDisplay_eventChallengeInitialized_Parms, InChallenge), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized_Statics::NewProp_InChallenge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized_Statics::NewProp_InChallenge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized_Statics::NewProp_InChallenge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeStatDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengeStatDisplay, nullptr, "ChallengeInitialized", nullptr, nullptr, sizeof(SBZMainMenuChallengeStatDisplay_eventChallengeInitialized_Parms), Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InProgressItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InProgressItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized_Statics::NewProp_InProgressItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized_Statics::NewProp_InProgressItem = { "InProgressItem", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengeStatDisplay_eventItemInitialized_Parms, InProgressItem), Z_Construct_UScriptStruct_FSBZChallengeProgressItem, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized_Statics::NewProp_InProgressItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized_Statics::NewProp_InProgressItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized_Statics::NewProp_InProgressItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeStatDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengeStatDisplay, nullptr, "ItemInitialized", nullptr, nullptr, sizeof(SBZMainMenuChallengeStatDisplay_eventItemInitialized_Parms), Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InChallenge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InChallenge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InProgressStat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InProgressStat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::NewProp_InChallenge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::NewProp_InChallenge = { "InChallenge", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengeStatDisplay_eventStatInitialized_Parms, InChallenge), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::NewProp_InChallenge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::NewProp_InChallenge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::NewProp_InProgressStat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::NewProp_InProgressStat = { "InProgressStat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengeStatDisplay_eventStatInitialized_Parms, InProgressStat), Z_Construct_UScriptStruct_FSBZChallengeProgressStat, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::NewProp_InProgressStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::NewProp_InProgressStat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::NewProp_InChallenge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::NewProp_InProgressStat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeStatDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengeStatDisplay, nullptr, "StatInitialized", nullptr, nullptr, sizeof(SBZMainMenuChallengeStatDisplay_eventStatInitialized_Parms), Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_NoRegister()
	{
		return USBZMainMenuChallengeStatDisplay::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeIdInitialized, "ChallengeIdInitialized" }, // 23536644
		{ &Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ChallengeInitialized, "ChallengeInitialized" }, // 77005987
		{ &Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_ItemInitialized, "ItemInitialized" }, // 2988474268
		{ &Z_Construct_UFunction_USBZMainMenuChallengeStatDisplay_StatInitialized, "StatInitialized" }, // 2793565900
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuChallengeStatDisplay.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengeStatDisplay.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuChallengeStatDisplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_Statics::ClassParams = {
		&USBZMainMenuChallengeStatDisplay::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuChallengeStatDisplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuChallengeStatDisplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuChallengeStatDisplay, 369378552);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuChallengeStatDisplay>()
	{
		return USBZMainMenuChallengeStatDisplay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuChallengeStatDisplay(Z_Construct_UClass_USBZMainMenuChallengeStatDisplay, &USBZMainMenuChallengeStatDisplay::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuChallengeStatDisplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuChallengeStatDisplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
