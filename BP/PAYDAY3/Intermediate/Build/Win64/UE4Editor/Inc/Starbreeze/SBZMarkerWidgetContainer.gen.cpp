// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMarkerWidgetContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMarkerWidgetContainer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerWidgetContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerWidgetContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMarkerRuntime();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMarkerWidgetContainer::execOnMarkerAdded)
	{
		P_GET_STRUCT_REF(FSBZMarkerRuntime,Z_Param_Out_MarkerRuntime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMarkerAdded(Z_Param_Out_MarkerRuntime);
		P_NATIVE_END;
	}
	void USBZMarkerWidgetContainer::StaticRegisterNativesUSBZMarkerWidgetContainer()
	{
		UClass* Class = USBZMarkerWidgetContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMarkerAdded", &USBZMarkerWidgetContainer::execOnMarkerAdded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMarkerWidgetContainer_OnMarkerAdded_Statics
	{
		struct SBZMarkerWidgetContainer_eventOnMarkerAdded_Parms
		{
			FSBZMarkerRuntime MarkerRuntime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkerRuntime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMarkerWidgetContainer_OnMarkerAdded_Statics::NewProp_MarkerRuntime = { "MarkerRuntime", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerWidgetContainer_eventOnMarkerAdded_Parms, MarkerRuntime), Z_Construct_UScriptStruct_FSBZMarkerRuntime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMarkerWidgetContainer_OnMarkerAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerWidgetContainer_OnMarkerAdded_Statics::NewProp_MarkerRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMarkerWidgetContainer_OnMarkerAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMarkerWidgetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMarkerWidgetContainer_OnMarkerAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMarkerWidgetContainer, nullptr, "OnMarkerAdded", nullptr, nullptr, sizeof(SBZMarkerWidgetContainer_eventOnMarkerAdded_Parms), Z_Construct_UFunction_USBZMarkerWidgetContainer_OnMarkerAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerWidgetContainer_OnMarkerAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMarkerWidgetContainer_OnMarkerAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerWidgetContainer_OnMarkerAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMarkerWidgetContainer_OnMarkerAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMarkerWidgetContainer_OnMarkerAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMarkerWidgetContainer_NoRegister()
	{
		return USBZMarkerWidgetContainer::StaticClass();
	}
	struct Z_Construct_UClass_USBZMarkerWidgetContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_Canvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root_Canvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MarkerWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffScreenRadiusPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffScreenRadiusPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffScreenTransitionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffScreenTransitionTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMarkerWidgetContainer_OnMarkerAdded, "OnMarkerAdded" }, // 1813843841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMarkerWidgetContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMarkerWidgetContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_Root_Canvas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerWidgetContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMarkerWidgetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_Root_Canvas = { "Root_Canvas", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerWidgetContainer, Root_Canvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_Root_Canvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_Root_Canvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_MarkerWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerWidgetContainer" },
		{ "ModuleRelativePath", "Public/SBZMarkerWidgetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_MarkerWidgetClass = { "MarkerWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerWidgetContainer, MarkerWidgetClass), Z_Construct_UClass_USBZMarkerWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_MarkerWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_MarkerWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_OffScreenRadiusPercentage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerWidgetContainer" },
		{ "ModuleRelativePath", "Public/SBZMarkerWidgetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_OffScreenRadiusPercentage = { "OffScreenRadiusPercentage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerWidgetContainer, OffScreenRadiusPercentage), METADATA_PARAMS(Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_OffScreenRadiusPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_OffScreenRadiusPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_OffScreenTransitionTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerWidgetContainer" },
		{ "ModuleRelativePath", "Public/SBZMarkerWidgetContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_OffScreenTransitionTime = { "OffScreenTransitionTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerWidgetContainer, OffScreenTransitionTime), METADATA_PARAMS(Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_OffScreenTransitionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_OffScreenTransitionTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_Root_Canvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_MarkerWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_OffScreenRadiusPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::NewProp_OffScreenTransitionTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMarkerWidgetContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::ClassParams = {
		&USBZMarkerWidgetContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMarkerWidgetContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMarkerWidgetContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMarkerWidgetContainer, 720046218);
	template<> STARBREEZE_API UClass* StaticClass<USBZMarkerWidgetContainer>()
	{
		return USBZMarkerWidgetContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMarkerWidgetContainer(Z_Construct_UClass_USBZMarkerWidgetContainer, &USBZMarkerWidgetContainer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMarkerWidgetContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMarkerWidgetContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
