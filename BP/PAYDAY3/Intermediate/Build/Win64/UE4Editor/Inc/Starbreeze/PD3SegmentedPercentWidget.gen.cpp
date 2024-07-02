// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3SegmentedPercentWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3SegmentedPercentWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3SegmentedPercentWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3SegmentedPercentWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3AttributePercentWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static FName NAME_UPD3SegmentedPercentWidget_BuildChunks = FName(TEXT("BuildChunks"));
	void UPD3SegmentedPercentWidget::BuildChunks()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPD3SegmentedPercentWidget_BuildChunks),NULL);
	}
	static FName NAME_UPD3SegmentedPercentWidget_OnArmorColorChanged = FName(TEXT("OnArmorColorChanged"));
	void UPD3SegmentedPercentWidget::OnArmorColorChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPD3SegmentedPercentWidget_OnArmorColorChanged),NULL);
	}
	static FName NAME_UPD3SegmentedPercentWidget_OnDamageChanged = FName(TEXT("OnDamageChanged"));
	void UPD3SegmentedPercentWidget::OnDamageChanged(float StartOffset, float EndOffset)
	{
		PD3SegmentedPercentWidget_eventOnDamageChanged_Parms Parms;
		Parms.StartOffset=StartOffset;
		Parms.EndOffset=EndOffset;
		ProcessEvent(FindFunctionChecked(NAME_UPD3SegmentedPercentWidget_OnDamageChanged),&Parms);
	}
	static FName NAME_UPD3SegmentedPercentWidget_OnTraumaRatioChanged = FName(TEXT("OnTraumaRatioChanged"));
	void UPD3SegmentedPercentWidget::OnTraumaRatioChanged(float StartOffset, float EndOffset)
	{
		PD3SegmentedPercentWidget_eventOnTraumaRatioChanged_Parms Parms;
		Parms.StartOffset=StartOffset;
		Parms.EndOffset=EndOffset;
		ProcessEvent(FindFunctionChecked(NAME_UPD3SegmentedPercentWidget_OnTraumaRatioChanged),&Parms);
	}
	void UPD3SegmentedPercentWidget::StaticRegisterNativesUPD3SegmentedPercentWidget()
	{
	}
	struct Z_Construct_UFunction_UPD3SegmentedPercentWidget_BuildChunks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3SegmentedPercentWidget_BuildChunks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3SegmentedPercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3SegmentedPercentWidget_BuildChunks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3SegmentedPercentWidget, nullptr, "BuildChunks", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3SegmentedPercentWidget_BuildChunks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3SegmentedPercentWidget_BuildChunks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3SegmentedPercentWidget_BuildChunks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3SegmentedPercentWidget_BuildChunks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnArmorColorChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnArmorColorChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3SegmentedPercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnArmorColorChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3SegmentedPercentWidget, nullptr, "OnArmorColorChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnArmorColorChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnArmorColorChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnArmorColorChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnArmorColorChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnDamageChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnDamageChanged_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3SegmentedPercentWidget_eventOnDamageChanged_Parms, StartOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnDamageChanged_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3SegmentedPercentWidget_eventOnDamageChanged_Parms, EndOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnDamageChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnDamageChanged_Statics::NewProp_StartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnDamageChanged_Statics::NewProp_EndOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnDamageChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3SegmentedPercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnDamageChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3SegmentedPercentWidget, nullptr, "OnDamageChanged", nullptr, nullptr, sizeof(PD3SegmentedPercentWidget_eventOnDamageChanged_Parms), Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnDamageChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnDamageChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnDamageChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnDamageChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnDamageChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnDamageChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnTraumaRatioChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnTraumaRatioChanged_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3SegmentedPercentWidget_eventOnTraumaRatioChanged_Parms, StartOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnTraumaRatioChanged_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3SegmentedPercentWidget_eventOnTraumaRatioChanged_Parms, EndOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnTraumaRatioChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnTraumaRatioChanged_Statics::NewProp_StartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnTraumaRatioChanged_Statics::NewProp_EndOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnTraumaRatioChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3SegmentedPercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnTraumaRatioChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3SegmentedPercentWidget, nullptr, "OnTraumaRatioChanged", nullptr, nullptr, sizeof(PD3SegmentedPercentWidget_eventOnTraumaRatioChanged_Parms), Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnTraumaRatioChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnTraumaRatioChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnTraumaRatioChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnTraumaRatioChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnTraumaRatioChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnTraumaRatioChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3SegmentedPercentWidget_NoRegister()
	{
		return UPD3SegmentedPercentWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkCountGameplayAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChunkCountGameplayAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkGameplayAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChunkGameplayAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraumaGameplayAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraumaGameplayAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfChunks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfChunks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHealthBar_MetaData[];
#endif
		static void NewProp_bIsHealthBar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHealthBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverridenBackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenMainColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverridenMainColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenLaggingColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverridenLaggingColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenTraumaColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverridenTraumaColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsArmorColorOverriden_MetaData[];
#endif
		static void NewProp_bIsArmorColorOverriden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsArmorColorOverriden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPD3AttributePercentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3SegmentedPercentWidget_BuildChunks, "BuildChunks" }, // 795820202
		{ &Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnArmorColorChanged, "OnArmorColorChanged" }, // 3129394970
		{ &Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnDamageChanged, "OnDamageChanged" }, // 1794456055
		{ &Z_Construct_UFunction_UPD3SegmentedPercentWidget_OnTraumaRatioChanged, "OnTraumaRatioChanged" }, // 888710123
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3SegmentedPercentWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3SegmentedPercentWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_ChunkCountGameplayAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SegmentedPercentWidget" },
		{ "ModuleRelativePath", "Public/PD3SegmentedPercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_ChunkCountGameplayAttribute = { "ChunkCountGameplayAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3SegmentedPercentWidget, ChunkCountGameplayAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_ChunkCountGameplayAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_ChunkCountGameplayAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_ChunkGameplayAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SegmentedPercentWidget" },
		{ "ModuleRelativePath", "Public/PD3SegmentedPercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_ChunkGameplayAttribute = { "ChunkGameplayAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3SegmentedPercentWidget, ChunkGameplayAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_ChunkGameplayAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_ChunkGameplayAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_TraumaGameplayAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SegmentedPercentWidget" },
		{ "ModuleRelativePath", "Public/PD3SegmentedPercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_TraumaGameplayAttribute = { "TraumaGameplayAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3SegmentedPercentWidget, TraumaGameplayAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_TraumaGameplayAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_TraumaGameplayAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_NumberOfChunks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SegmentedPercentWidget" },
		{ "ModuleRelativePath", "Public/PD3SegmentedPercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_NumberOfChunks = { "NumberOfChunks", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3SegmentedPercentWidget, NumberOfChunks), METADATA_PARAMS(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_NumberOfChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_NumberOfChunks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_bIsHealthBar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SegmentedPercentWidget" },
		{ "ModuleRelativePath", "Public/PD3SegmentedPercentWidget.h" },
	};
#endif
	void Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_bIsHealthBar_SetBit(void* Obj)
	{
		((UPD3SegmentedPercentWidget*)Obj)->bIsHealthBar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_bIsHealthBar = { "bIsHealthBar", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPD3SegmentedPercentWidget), &Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_bIsHealthBar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_bIsHealthBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_bIsHealthBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenBackgroundColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SegmentedPercentWidget" },
		{ "ModuleRelativePath", "Public/PD3SegmentedPercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenBackgroundColor = { "OverridenBackgroundColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3SegmentedPercentWidget, OverridenBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenMainColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SegmentedPercentWidget" },
		{ "ModuleRelativePath", "Public/PD3SegmentedPercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenMainColor = { "OverridenMainColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3SegmentedPercentWidget, OverridenMainColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenMainColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenMainColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenLaggingColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SegmentedPercentWidget" },
		{ "ModuleRelativePath", "Public/PD3SegmentedPercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenLaggingColor = { "OverridenLaggingColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3SegmentedPercentWidget, OverridenLaggingColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenLaggingColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenLaggingColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenTraumaColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SegmentedPercentWidget" },
		{ "ModuleRelativePath", "Public/PD3SegmentedPercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenTraumaColor = { "OverridenTraumaColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3SegmentedPercentWidget, OverridenTraumaColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenTraumaColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenTraumaColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_bIsArmorColorOverriden_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SegmentedPercentWidget" },
		{ "ModuleRelativePath", "Public/PD3SegmentedPercentWidget.h" },
	};
#endif
	void Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_bIsArmorColorOverriden_SetBit(void* Obj)
	{
		((UPD3SegmentedPercentWidget*)Obj)->bIsArmorColorOverriden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_bIsArmorColorOverriden = { "bIsArmorColorOverriden", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPD3SegmentedPercentWidget), &Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_bIsArmorColorOverriden_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_bIsArmorColorOverriden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_bIsArmorColorOverriden_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_ChunkCountGameplayAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_ChunkGameplayAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_TraumaGameplayAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_NumberOfChunks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_bIsHealthBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenBackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenMainColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenLaggingColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_OverridenTraumaColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::NewProp_bIsArmorColorOverriden,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3SegmentedPercentWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::ClassParams = {
		&UPD3SegmentedPercentWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3SegmentedPercentWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3SegmentedPercentWidget, 1927256269);
	template<> STARBREEZE_API UClass* StaticClass<UPD3SegmentedPercentWidget>()
	{
		return UPD3SegmentedPercentWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3SegmentedPercentWidget(Z_Construct_UClass_UPD3SegmentedPercentWidget, &UPD3SegmentedPercentWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3SegmentedPercentWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3SegmentedPercentWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
