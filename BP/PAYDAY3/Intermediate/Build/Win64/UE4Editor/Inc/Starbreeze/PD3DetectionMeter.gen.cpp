// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3DetectionMeter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3DetectionMeter() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3DetectionMeter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3DetectionMeter();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_UPD3DetectionMeter_OnDetectionValueUpdated = FName(TEXT("OnDetectionValueUpdated"));
	void UPD3DetectionMeter::OnDetectionValueUpdated(float InDetectionValue)
	{
		PD3DetectionMeter_eventOnDetectionValueUpdated_Parms Parms;
		Parms.InDetectionValue=InDetectionValue;
		ProcessEvent(FindFunctionChecked(NAME_UPD3DetectionMeter_OnDetectionValueUpdated),&Parms);
	}
	static FName NAME_UPD3DetectionMeter_OnNewDetector = FName(TEXT("OnNewDetector"));
	void UPD3DetectionMeter::OnNewDetector(AActor* InDetectingActor, float InDetectionValue)
	{
		PD3DetectionMeter_eventOnNewDetector_Parms Parms;
		Parms.InDetectingActor=InDetectingActor;
		Parms.InDetectionValue=InDetectionValue;
		ProcessEvent(FindFunctionChecked(NAME_UPD3DetectionMeter_OnNewDetector),&Parms);
	}
	static FName NAME_UPD3DetectionMeter_OnPlayerDetected = FName(TEXT("OnPlayerDetected"));
	void UPD3DetectionMeter::OnPlayerDetected()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPD3DetectionMeter_OnPlayerDetected),NULL);
	}
	static FName NAME_UPD3DetectionMeter_OnStoppedBeingDetected = FName(TEXT("OnStoppedBeingDetected"));
	void UPD3DetectionMeter::OnStoppedBeingDetected()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPD3DetectionMeter_OnStoppedBeingDetected),NULL);
	}
	void UPD3DetectionMeter::StaticRegisterNativesUPD3DetectionMeter()
	{
	}
	struct Z_Construct_UFunction_UPD3DetectionMeter_OnDetectionValueUpdated_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDetectionValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3DetectionMeter_OnDetectionValueUpdated_Statics::NewProp_InDetectionValue = { "InDetectionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3DetectionMeter_eventOnDetectionValueUpdated_Parms, InDetectionValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3DetectionMeter_OnDetectionValueUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3DetectionMeter_OnDetectionValueUpdated_Statics::NewProp_InDetectionValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3DetectionMeter_OnDetectionValueUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3DetectionMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3DetectionMeter_OnDetectionValueUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3DetectionMeter, nullptr, "OnDetectionValueUpdated", nullptr, nullptr, sizeof(PD3DetectionMeter_eventOnDetectionValueUpdated_Parms), Z_Construct_UFunction_UPD3DetectionMeter_OnDetectionValueUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3DetectionMeter_OnDetectionValueUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3DetectionMeter_OnDetectionValueUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3DetectionMeter_OnDetectionValueUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3DetectionMeter_OnDetectionValueUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3DetectionMeter_OnDetectionValueUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3DetectionMeter_OnNewDetector_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InDetectingActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDetectionValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3DetectionMeter_OnNewDetector_Statics::NewProp_InDetectingActor = { "InDetectingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3DetectionMeter_eventOnNewDetector_Parms, InDetectingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3DetectionMeter_OnNewDetector_Statics::NewProp_InDetectionValue = { "InDetectionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3DetectionMeter_eventOnNewDetector_Parms, InDetectionValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3DetectionMeter_OnNewDetector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3DetectionMeter_OnNewDetector_Statics::NewProp_InDetectingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3DetectionMeter_OnNewDetector_Statics::NewProp_InDetectionValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3DetectionMeter_OnNewDetector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3DetectionMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3DetectionMeter_OnNewDetector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3DetectionMeter, nullptr, "OnNewDetector", nullptr, nullptr, sizeof(PD3DetectionMeter_eventOnNewDetector_Parms), Z_Construct_UFunction_UPD3DetectionMeter_OnNewDetector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3DetectionMeter_OnNewDetector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3DetectionMeter_OnNewDetector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3DetectionMeter_OnNewDetector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3DetectionMeter_OnNewDetector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3DetectionMeter_OnNewDetector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3DetectionMeter_OnPlayerDetected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3DetectionMeter_OnPlayerDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3DetectionMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3DetectionMeter_OnPlayerDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3DetectionMeter, nullptr, "OnPlayerDetected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3DetectionMeter_OnPlayerDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3DetectionMeter_OnPlayerDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3DetectionMeter_OnPlayerDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3DetectionMeter_OnPlayerDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3DetectionMeter_OnStoppedBeingDetected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3DetectionMeter_OnStoppedBeingDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3DetectionMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3DetectionMeter_OnStoppedBeingDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3DetectionMeter, nullptr, "OnStoppedBeingDetected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3DetectionMeter_OnStoppedBeingDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3DetectionMeter_OnStoppedBeingDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3DetectionMeter_OnStoppedBeingDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3DetectionMeter_OnStoppedBeingDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3DetectionMeter_NoRegister()
	{
		return UPD3DetectionMeter::StaticClass();
	}
	struct Z_Construct_UClass_UPD3DetectionMeter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectingActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3DetectionMeter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3DetectionMeter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3DetectionMeter_OnDetectionValueUpdated, "OnDetectionValueUpdated" }, // 4213066643
		{ &Z_Construct_UFunction_UPD3DetectionMeter_OnNewDetector, "OnNewDetector" }, // 347142594
		{ &Z_Construct_UFunction_UPD3DetectionMeter_OnPlayerDetected, "OnPlayerDetected" }, // 30409070
		{ &Z_Construct_UFunction_UPD3DetectionMeter_OnStoppedBeingDetected, "OnStoppedBeingDetected" }, // 1588003159
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3DetectionMeter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3DetectionMeter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3DetectionMeter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3DetectionMeter_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DetectionMeter" },
		{ "ModuleRelativePath", "Public/PD3DetectionMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3DetectionMeter_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3DetectionMeter, CurrentValue), METADATA_PARAMS(Z_Construct_UClass_UPD3DetectionMeter_Statics::NewProp_CurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3DetectionMeter_Statics::NewProp_CurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3DetectionMeter_Statics::NewProp_DetectingActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3DetectionMeter" },
		{ "ModuleRelativePath", "Public/PD3DetectionMeter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3DetectionMeter_Statics::NewProp_DetectingActor = { "DetectingActor", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3DetectionMeter, DetectingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3DetectionMeter_Statics::NewProp_DetectingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3DetectionMeter_Statics::NewProp_DetectingActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3DetectionMeter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3DetectionMeter_Statics::NewProp_CurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3DetectionMeter_Statics::NewProp_DetectingActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3DetectionMeter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3DetectionMeter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3DetectionMeter_Statics::ClassParams = {
		&UPD3DetectionMeter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3DetectionMeter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3DetectionMeter_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3DetectionMeter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3DetectionMeter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3DetectionMeter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3DetectionMeter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3DetectionMeter, 873096200);
	template<> STARBREEZE_API UClass* StaticClass<UPD3DetectionMeter>()
	{
		return UPD3DetectionMeter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3DetectionMeter(Z_Construct_UClass_UPD3DetectionMeter, &UPD3DetectionMeter::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3DetectionMeter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3DetectionMeter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
