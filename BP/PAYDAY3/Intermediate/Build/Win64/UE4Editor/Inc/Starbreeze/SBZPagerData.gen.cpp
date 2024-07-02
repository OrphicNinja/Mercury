// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPagerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPagerData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPagerData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPagerData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister();
// End Cross Module References
	void USBZPagerData::StaticRegisterNativesUSBZPagerData()
	{
	}
	UClass* Z_Construct_UClass_USBZPagerData_NoRegister()
	{
		return USBZPagerData::StaticClass();
	}
	struct Z_Construct_UClass_USBZPagerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDelayInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartDelayInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanRestart_MetaData[];
#endif
		static void NewProp_bCanRestart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanRestart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartDelayInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RestartDelayInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimoutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimoutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Marker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Marker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MarkerSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RestartAudioEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnswerDialogArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnswerDialogArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnswerDialogArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeoutAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeoutAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeoutFailAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeoutFailAudioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPagerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPagerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPagerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPagerData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPagerData_Statics::NewProp_StartDelayInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPagerData" },
		{ "ModuleRelativePath", "Public/SBZPagerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPagerData_Statics::NewProp_StartDelayInterval = { "StartDelayInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPagerData, StartDelayInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZPagerData_Statics::NewProp_StartDelayInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPagerData_Statics::NewProp_StartDelayInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPagerData_Statics::NewProp_bCanRestart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPagerData" },
		{ "ModuleRelativePath", "Public/SBZPagerData.h" },
	};
#endif
	void Z_Construct_UClass_USBZPagerData_Statics::NewProp_bCanRestart_SetBit(void* Obj)
	{
		((USBZPagerData*)Obj)->bCanRestart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPagerData_Statics::NewProp_bCanRestart = { "bCanRestart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPagerData), &Z_Construct_UClass_USBZPagerData_Statics::NewProp_bCanRestart_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPagerData_Statics::NewProp_bCanRestart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPagerData_Statics::NewProp_bCanRestart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPagerData_Statics::NewProp_RestartDelayInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPagerData" },
		{ "ModuleRelativePath", "Public/SBZPagerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPagerData_Statics::NewProp_RestartDelayInterval = { "RestartDelayInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPagerData, RestartDelayInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZPagerData_Statics::NewProp_RestartDelayInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPagerData_Statics::NewProp_RestartDelayInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPagerData_Statics::NewProp_TimoutDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPagerData" },
		{ "ModuleRelativePath", "Public/SBZPagerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPagerData_Statics::NewProp_TimoutDuration = { "TimoutDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPagerData, TimoutDuration), METADATA_PARAMS(Z_Construct_UClass_USBZPagerData_Statics::NewProp_TimoutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPagerData_Statics::NewProp_TimoutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPagerData_Statics::NewProp_Marker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPagerData" },
		{ "ModuleRelativePath", "Public/SBZPagerData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPagerData_Statics::NewProp_Marker = { "Marker", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPagerData, Marker), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPagerData_Statics::NewProp_Marker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPagerData_Statics::NewProp_Marker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPagerData_Statics::NewProp_Outline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPagerData" },
		{ "ModuleRelativePath", "Public/SBZPagerData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPagerData_Statics::NewProp_Outline = { "Outline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPagerData, Outline), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPagerData_Statics::NewProp_Outline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPagerData_Statics::NewProp_Outline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPagerData_Statics::NewProp_MarkerSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPagerData" },
		{ "ModuleRelativePath", "Public/SBZPagerData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZPagerData_Statics::NewProp_MarkerSocket = { "MarkerSocket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPagerData, MarkerSocket), METADATA_PARAMS(Z_Construct_UClass_USBZPagerData_Statics::NewProp_MarkerSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPagerData_Statics::NewProp_MarkerSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPagerData_Statics::NewProp_StartAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPagerData" },
		{ "ModuleRelativePath", "Public/SBZPagerData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPagerData_Statics::NewProp_StartAudioEvent = { "StartAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPagerData, StartAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPagerData_Statics::NewProp_StartAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPagerData_Statics::NewProp_StartAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPagerData_Statics::NewProp_RestartAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPagerData" },
		{ "ModuleRelativePath", "Public/SBZPagerData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPagerData_Statics::NewProp_RestartAudioEvent = { "RestartAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPagerData, RestartAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPagerData_Statics::NewProp_RestartAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPagerData_Statics::NewProp_RestartAudioEvent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPagerData_Statics::NewProp_AnswerDialogArray_Inner = { "AnswerDialogArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPagerData_Statics::NewProp_AnswerDialogArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPagerData" },
		{ "ModuleRelativePath", "Public/SBZPagerData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZPagerData_Statics::NewProp_AnswerDialogArray = { "AnswerDialogArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPagerData, AnswerDialogArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPagerData_Statics::NewProp_AnswerDialogArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPagerData_Statics::NewProp_AnswerDialogArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPagerData_Statics::NewProp_StopAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPagerData" },
		{ "ModuleRelativePath", "Public/SBZPagerData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPagerData_Statics::NewProp_StopAudioEvent = { "StopAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPagerData, StopAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPagerData_Statics::NewProp_StopAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPagerData_Statics::NewProp_StopAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPagerData_Statics::NewProp_TimeoutAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPagerData" },
		{ "ModuleRelativePath", "Public/SBZPagerData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPagerData_Statics::NewProp_TimeoutAudioEvent = { "TimeoutAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPagerData, TimeoutAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPagerData_Statics::NewProp_TimeoutAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPagerData_Statics::NewProp_TimeoutAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPagerData_Statics::NewProp_TimeoutFailAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPagerData" },
		{ "ModuleRelativePath", "Public/SBZPagerData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPagerData_Statics::NewProp_TimeoutFailAudioEvent = { "TimeoutFailAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPagerData, TimeoutFailAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPagerData_Statics::NewProp_TimeoutFailAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPagerData_Statics::NewProp_TimeoutFailAudioEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPagerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPagerData_Statics::NewProp_StartDelayInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPagerData_Statics::NewProp_bCanRestart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPagerData_Statics::NewProp_RestartDelayInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPagerData_Statics::NewProp_TimoutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPagerData_Statics::NewProp_Marker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPagerData_Statics::NewProp_Outline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPagerData_Statics::NewProp_MarkerSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPagerData_Statics::NewProp_StartAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPagerData_Statics::NewProp_RestartAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPagerData_Statics::NewProp_AnswerDialogArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPagerData_Statics::NewProp_AnswerDialogArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPagerData_Statics::NewProp_StopAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPagerData_Statics::NewProp_TimeoutAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPagerData_Statics::NewProp_TimeoutFailAudioEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPagerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPagerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPagerData_Statics::ClassParams = {
		&USBZPagerData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPagerData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPagerData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPagerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPagerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPagerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPagerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPagerData, 333064651);
	template<> STARBREEZE_API UClass* StaticClass<USBZPagerData>()
	{
		return USBZPagerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPagerData(Z_Construct_UClass_USBZPagerData, &USBZPagerData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPagerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPagerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
