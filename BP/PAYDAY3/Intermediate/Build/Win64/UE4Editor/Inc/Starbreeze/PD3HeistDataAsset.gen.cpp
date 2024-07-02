// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3HeistDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3HeistDataAsset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HeistDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HeistDataAsset();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHeistComplexity();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStorymodeStruct();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStatisticCriteriaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPersonalStatisticCriteriaData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPD3HeistDataAsset::execGetEstimatedPayout)
	{
		P_GET_ENUM(ESBZDifficulty,Z_Param_Diffculty);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMin);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEstimatedPayout(ESBZDifficulty(Z_Param_Diffculty),Z_Param_Out_OutMin,Z_Param_Out_OutMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3HeistDataAsset::execGetHeistReferenceText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetHeistReferenceText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3HeistDataAsset::execGetHeistTimeShort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetHeistTimeShort();
		P_NATIVE_END;
	}
	void UPD3HeistDataAsset::StaticRegisterNativesUPD3HeistDataAsset()
	{
		UClass* Class = UPD3HeistDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEstimatedPayout", &UPD3HeistDataAsset::execGetEstimatedPayout },
			{ "GetHeistReferenceText", &UPD3HeistDataAsset::execGetHeistReferenceText },
			{ "GetHeistTimeShort", &UPD3HeistDataAsset::execGetHeistTimeShort },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics
	{
		struct PD3HeistDataAsset_eventGetEstimatedPayout_Parms
		{
			ESBZDifficulty Diffculty;
			int32 OutMin;
			int32 OutMax;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Diffculty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Diffculty;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutMin;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::NewProp_Diffculty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::NewProp_Diffculty = { "Diffculty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistDataAsset_eventGetEstimatedPayout_Parms, Diffculty), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::NewProp_OutMin = { "OutMin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistDataAsset_eventGetEstimatedPayout_Parms, OutMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::NewProp_OutMax = { "OutMax", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistDataAsset_eventGetEstimatedPayout_Parms, OutMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::NewProp_Diffculty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::NewProp_Diffculty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::NewProp_OutMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::NewProp_OutMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HeistDataAsset, nullptr, "GetEstimatedPayout", nullptr, nullptr, sizeof(PD3HeistDataAsset_eventGetEstimatedPayout_Parms), Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistReferenceText_Statics
	{
		struct PD3HeistDataAsset_eventGetHeistReferenceText_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistReferenceText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistDataAsset_eventGetHeistReferenceText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistReferenceText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistReferenceText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistReferenceText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistReferenceText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HeistDataAsset, nullptr, "GetHeistReferenceText", nullptr, nullptr, sizeof(PD3HeistDataAsset_eventGetHeistReferenceText_Parms), Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistReferenceText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistReferenceText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistReferenceText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistReferenceText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistReferenceText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistReferenceText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistTimeShort_Statics
	{
		struct PD3HeistDataAsset_eventGetHeistTimeShort_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistTimeShort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HeistDataAsset_eventGetHeistTimeShort_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistTimeShort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistTimeShort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistTimeShort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistTimeShort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HeistDataAsset, nullptr, "GetHeistTimeShort", nullptr, nullptr, sizeof(PD3HeistDataAsset_eventGetHeistTimeShort_Parms), Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistTimeShort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistTimeShort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistTimeShort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistTimeShort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistTimeShort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistTimeShort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3HeistDataAsset_NoRegister()
	{
		return UPD3HeistDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPD3HeistDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeistDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeistLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hour_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minute_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Minute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EstimatedPayoutArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EstimatedPayoutArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HeistComplexity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistComplexity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HeistComplexity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasIntroSequence_MetaData[];
#endif
		static void NewProp_bHasIntroSequence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasIntroSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasOutroSequence_MetaData[];
#endif
		static void NewProp_bHasOutroSequence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasOutroSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoloIntroVideo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoloIntroVideo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoloSuccessOutroVideo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoloSuccessOutroVideo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoloFailOutroVideo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoloFailOutroVideo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessResultBackgroundVideoURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuccessResultBackgroundVideoURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailResultBackgroundVideoURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FailResultBackgroundVideoURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeistReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeistDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistDisplayIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HeistDisplayIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistBannerImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HeistBannerImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistContractorIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HeistContractorIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistContractorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeistContractorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapCoordinates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapCoordinates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTutorialLevel_MetaData[];
#endif
		static void NewProp_bIsTutorialLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTutorialLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistButtonHoverPlayEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeistButtonHoverPlayEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistDescriptionPlayEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeistDescriptionPlayEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistDescriptionStopEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeistDescriptionStopEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistResultSuccessStealthPlayEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeistResultSuccessStealthPlayEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistResultSuccessLoudPlayEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeistResultSuccessLoudPlayEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistResultFailurePlayEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeistResultFailurePlayEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrePlanningTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrePlanningTagContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatisticCriteriaDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticCriteriaDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatisticCriteriaDataArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PersonalStatisticCriteriaDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersonalStatisticCriteriaDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PersonalStatisticCriteriaDataArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockedCharacterArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedCharacterArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LockedCharacterArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3HeistDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3HeistDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3HeistDataAsset_GetEstimatedPayout, "GetEstimatedPayout" }, // 1899909172
		{ &Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistReferenceText, "GetHeistReferenceText" }, // 4245307255
		{ &Z_Construct_UFunction_UPD3HeistDataAsset_GetHeistTimeShort, "GetHeistTimeShort" }, // 3694274547
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3HeistDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDisplayName = { "HeistDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, HeistDisplayName), METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistLocation = { "HeistLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, HeistLocation), METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_Hour_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_Hour = { "Hour", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, Hour), METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_Hour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_Hour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_Minute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_Minute = { "Minute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, Minute), METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_Minute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_Minute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_EstimatedPayoutArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_EstimatedPayoutArray = { "EstimatedPayoutArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(EstimatedPayoutArray, UPD3HeistDataAsset), STRUCT_OFFSET(UPD3HeistDataAsset, EstimatedPayoutArray), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_EstimatedPayoutArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_EstimatedPayoutArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistComplexity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistComplexity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistComplexity = { "HeistComplexity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, HeistComplexity), Z_Construct_UEnum_Starbreeze_ESBZHeistComplexity, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistComplexity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistComplexity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bHasIntroSequence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bHasIntroSequence_SetBit(void* Obj)
	{
		((UPD3HeistDataAsset*)Obj)->bHasIntroSequence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bHasIntroSequence = { "bHasIntroSequence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPD3HeistDataAsset), &Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bHasIntroSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bHasIntroSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bHasIntroSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bHasOutroSequence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bHasOutroSequence_SetBit(void* Obj)
	{
		((UPD3HeistDataAsset*)Obj)->bHasOutroSequence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bHasOutroSequence = { "bHasOutroSequence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPD3HeistDataAsset), &Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bHasOutroSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bHasOutroSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bHasOutroSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SoloIntroVideo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SoloIntroVideo = { "SoloIntroVideo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, SoloIntroVideo), Z_Construct_UScriptStruct_FSBZStorymodeStruct, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SoloIntroVideo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SoloIntroVideo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SoloSuccessOutroVideo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SoloSuccessOutroVideo = { "SoloSuccessOutroVideo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, SoloSuccessOutroVideo), Z_Construct_UScriptStruct_FSBZStorymodeStruct, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SoloSuccessOutroVideo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SoloSuccessOutroVideo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SoloFailOutroVideo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SoloFailOutroVideo = { "SoloFailOutroVideo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, SoloFailOutroVideo), Z_Construct_UScriptStruct_FSBZStorymodeStruct, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SoloFailOutroVideo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SoloFailOutroVideo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SuccessResultBackgroundVideoURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SuccessResultBackgroundVideoURL = { "SuccessResultBackgroundVideoURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, SuccessResultBackgroundVideoURL), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SuccessResultBackgroundVideoURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SuccessResultBackgroundVideoURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_FailResultBackgroundVideoURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_FailResultBackgroundVideoURL = { "FailResultBackgroundVideoURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, FailResultBackgroundVideoURL), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_FailResultBackgroundVideoURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_FailResultBackgroundVideoURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistReference = { "HeistReference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, HeistReference), METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDescription = { "HeistDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, HeistDescription), METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDisplayIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDisplayIcon = { "HeistDisplayIcon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, HeistDisplayIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDisplayIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDisplayIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistBannerImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistBannerImage = { "HeistBannerImage", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, HeistBannerImage), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistBannerImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistBannerImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistContractorIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistContractorIcon = { "HeistContractorIcon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, HeistContractorIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistContractorIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistContractorIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistContractorName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistContractorName = { "HeistContractorName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, HeistContractorName), METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistContractorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistContractorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_LevelPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_LevelPath = { "LevelPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, LevelPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_LevelPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_LevelPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_MapCoordinates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_MapCoordinates = { "MapCoordinates", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, MapCoordinates), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_MapCoordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_MapCoordinates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bIsTutorialLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bIsTutorialLevel_SetBit(void* Obj)
	{
		((UPD3HeistDataAsset*)Obj)->bIsTutorialLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bIsTutorialLevel = { "bIsTutorialLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPD3HeistDataAsset), &Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bIsTutorialLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bIsTutorialLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bIsTutorialLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistButtonHoverPlayEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistButtonHoverPlayEvent = { "HeistButtonHoverPlayEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, HeistButtonHoverPlayEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistButtonHoverPlayEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistButtonHoverPlayEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDescriptionPlayEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDescriptionPlayEvent = { "HeistDescriptionPlayEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, HeistDescriptionPlayEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDescriptionPlayEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDescriptionPlayEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDescriptionStopEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDescriptionStopEvent = { "HeistDescriptionStopEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, HeistDescriptionStopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDescriptionStopEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDescriptionStopEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistResultSuccessStealthPlayEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistResultSuccessStealthPlayEvent = { "HeistResultSuccessStealthPlayEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, HeistResultSuccessStealthPlayEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistResultSuccessStealthPlayEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistResultSuccessStealthPlayEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistResultSuccessLoudPlayEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistResultSuccessLoudPlayEvent = { "HeistResultSuccessLoudPlayEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, HeistResultSuccessLoudPlayEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistResultSuccessLoudPlayEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistResultSuccessLoudPlayEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistResultFailurePlayEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistResultFailurePlayEvent = { "HeistResultFailurePlayEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, HeistResultFailurePlayEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistResultFailurePlayEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistResultFailurePlayEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_PrePlanningTagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_PrePlanningTagContainer = { "PrePlanningTagContainer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, PrePlanningTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_PrePlanningTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_PrePlanningTagContainer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_StatisticCriteriaDataArray_Inner = { "StatisticCriteriaDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZStatisticCriteriaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_StatisticCriteriaDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_StatisticCriteriaDataArray = { "StatisticCriteriaDataArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, StatisticCriteriaDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_StatisticCriteriaDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_StatisticCriteriaDataArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_PersonalStatisticCriteriaDataArray_Inner = { "PersonalStatisticCriteriaDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZPersonalStatisticCriteriaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_PersonalStatisticCriteriaDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_PersonalStatisticCriteriaDataArray = { "PersonalStatisticCriteriaDataArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, PersonalStatisticCriteriaDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_PersonalStatisticCriteriaDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_PersonalStatisticCriteriaDataArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_LockedCharacterArray_Inner = { "LockedCharacterArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_LockedCharacterArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HeistDataAsset" },
		{ "ModuleRelativePath", "Public/PD3HeistDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_LockedCharacterArray = { "LockedCharacterArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HeistDataAsset, LockedCharacterArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_LockedCharacterArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_LockedCharacterArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3HeistDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_Hour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_Minute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_EstimatedPayoutArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistComplexity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistComplexity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bHasIntroSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bHasOutroSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SoloIntroVideo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SoloSuccessOutroVideo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SoloFailOutroVideo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_SuccessResultBackgroundVideoURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_FailResultBackgroundVideoURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDisplayIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistBannerImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistContractorIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistContractorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_LevelPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_MapCoordinates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_bIsTutorialLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistButtonHoverPlayEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDescriptionPlayEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistDescriptionStopEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistResultSuccessStealthPlayEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistResultSuccessLoudPlayEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_HeistResultFailurePlayEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_PrePlanningTagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_StatisticCriteriaDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_StatisticCriteriaDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_PersonalStatisticCriteriaDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_PersonalStatisticCriteriaDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_LockedCharacterArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HeistDataAsset_Statics::NewProp_LockedCharacterArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3HeistDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3HeistDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3HeistDataAsset_Statics::ClassParams = {
		&UPD3HeistDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3HeistDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3HeistDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HeistDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3HeistDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3HeistDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3HeistDataAsset, 3088469453);
	template<> STARBREEZE_API UClass* StaticClass<UPD3HeistDataAsset>()
	{
		return UPD3HeistDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3HeistDataAsset(Z_Construct_UClass_UPD3HeistDataAsset, &UPD3HeistDataAsset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3HeistDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3HeistDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
