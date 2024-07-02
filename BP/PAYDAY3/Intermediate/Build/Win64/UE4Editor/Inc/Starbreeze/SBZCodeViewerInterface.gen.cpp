// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCodeViewerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCodeViewerInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCodeViewerInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCodeViewerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISBZCodeViewerInterface::execGetNumberOfCodeWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfCodeWidgets_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZCodeViewerInterface::execInitializeWidget)
	{
		P_GET_OBJECT(UWidgetComponent,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeWidget_Implementation(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZCodeViewerInterface::execUpdateCodeViewer)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_GeneratedCodes);
		P_GET_PROPERTY(FIntProperty,Z_Param_TrueCodeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCodeViewer_Implementation(Z_Param_Out_GeneratedCodes,Z_Param_TrueCodeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZCodeViewerInterface::execUpdateIdentifier)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateIdentifier_Implementation(Z_Param_Out_InIdentifier);
		P_NATIVE_END;
	}
	void ISBZCodeViewerInterface::BP_SetCode(UWidgetComponent* Widget, int32 CodeToShow)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_SetCode instead.");
	}
	int32 ISBZCodeViewerInterface::GetNumberOfCodeWidgets() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetNumberOfCodeWidgets instead.");
		SBZCodeViewerInterface_eventGetNumberOfCodeWidgets_Parms Parms;
		return Parms.ReturnValue;
	}
	void ISBZCodeViewerInterface::InitializeWidget(UWidgetComponent* Widget)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitializeWidget instead.");
	}
	void ISBZCodeViewerInterface::UpdateCodeViewer(TArray<int32> const& GeneratedCodes, const int32 TrueCodeIndex)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateCodeViewer instead.");
	}
	void ISBZCodeViewerInterface::UpdateIdentifier(FText const& InIdentifier)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateIdentifier instead.");
	}
	void USBZCodeViewerInterface::StaticRegisterNativesUSBZCodeViewerInterface()
	{
		UClass* Class = USBZCodeViewerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumberOfCodeWidgets", &ISBZCodeViewerInterface::execGetNumberOfCodeWidgets },
			{ "InitializeWidget", &ISBZCodeViewerInterface::execInitializeWidget },
			{ "UpdateCodeViewer", &ISBZCodeViewerInterface::execUpdateCodeViewer },
			{ "UpdateIdentifier", &ISBZCodeViewerInterface::execUpdateIdentifier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CodeToShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCodeViewerInterface_eventBP_SetCode_Parms, Widget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics::NewProp_CodeToShow = { "CodeToShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCodeViewerInterface_eventBP_SetCode_Parms, CodeToShow), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics::NewProp_CodeToShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCodeViewerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCodeViewerInterface, nullptr, "BP_SetCode", nullptr, nullptr, sizeof(SBZCodeViewerInterface_eventBP_SetCode_Parms), Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCodeViewerInterface_GetNumberOfCodeWidgets_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCodeViewerInterface_GetNumberOfCodeWidgets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCodeViewerInterface_eventGetNumberOfCodeWidgets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCodeViewerInterface_GetNumberOfCodeWidgets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCodeViewerInterface_GetNumberOfCodeWidgets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCodeViewerInterface_GetNumberOfCodeWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCodeViewerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCodeViewerInterface_GetNumberOfCodeWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCodeViewerInterface, nullptr, "GetNumberOfCodeWidgets", nullptr, nullptr, sizeof(SBZCodeViewerInterface_eventGetNumberOfCodeWidgets_Parms), Z_Construct_UFunction_USBZCodeViewerInterface_GetNumberOfCodeWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCodeViewerInterface_GetNumberOfCodeWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCodeViewerInterface_GetNumberOfCodeWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCodeViewerInterface_GetNumberOfCodeWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCodeViewerInterface_GetNumberOfCodeWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCodeViewerInterface_GetNumberOfCodeWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCodeViewerInterface_eventInitializeWidget_Parms, Widget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCodeViewerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCodeViewerInterface, nullptr, "InitializeWidget", nullptr, nullptr, sizeof(SBZCodeViewerInterface_eventInitializeWidget_Parms), Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GeneratedCodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedCodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GeneratedCodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueCodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrueCodeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::NewProp_GeneratedCodes_Inner = { "GeneratedCodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::NewProp_GeneratedCodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::NewProp_GeneratedCodes = { "GeneratedCodes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCodeViewerInterface_eventUpdateCodeViewer_Parms, GeneratedCodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::NewProp_GeneratedCodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::NewProp_GeneratedCodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::NewProp_TrueCodeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::NewProp_TrueCodeIndex = { "TrueCodeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCodeViewerInterface_eventUpdateCodeViewer_Parms, TrueCodeIndex), METADATA_PARAMS(Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::NewProp_TrueCodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::NewProp_TrueCodeIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::NewProp_GeneratedCodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::NewProp_GeneratedCodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::NewProp_TrueCodeIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCodeViewerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCodeViewerInterface, nullptr, "UpdateCodeViewer", nullptr, nullptr, sizeof(SBZCodeViewerInterface_eventUpdateCodeViewer_Parms), Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InIdentifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier_Statics::NewProp_InIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier_Statics::NewProp_InIdentifier = { "InIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCodeViewerInterface_eventUpdateIdentifier_Parms, InIdentifier), METADATA_PARAMS(Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier_Statics::NewProp_InIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier_Statics::NewProp_InIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier_Statics::NewProp_InIdentifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCodeViewerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCodeViewerInterface, nullptr, "UpdateIdentifier", nullptr, nullptr, sizeof(SBZCodeViewerInterface_eventUpdateIdentifier_Parms), Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCodeViewerInterface_NoRegister()
	{
		return USBZCodeViewerInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZCodeViewerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCodeViewerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCodeViewerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCodeViewerInterface_BP_SetCode, "BP_SetCode" }, // 4142850177
		{ &Z_Construct_UFunction_USBZCodeViewerInterface_GetNumberOfCodeWidgets, "GetNumberOfCodeWidgets" }, // 1999150170
		{ &Z_Construct_UFunction_USBZCodeViewerInterface_InitializeWidget, "InitializeWidget" }, // 157120704
		{ &Z_Construct_UFunction_USBZCodeViewerInterface_UpdateCodeViewer, "UpdateCodeViewer" }, // 984994580
		{ &Z_Construct_UFunction_USBZCodeViewerInterface_UpdateIdentifier, "UpdateIdentifier" }, // 1490927417
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCodeViewerInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCodeViewerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCodeViewerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZCodeViewerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCodeViewerInterface_Statics::ClassParams = {
		&USBZCodeViewerInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCodeViewerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCodeViewerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCodeViewerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCodeViewerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCodeViewerInterface, 3718399329);
	template<> STARBREEZE_API UClass* StaticClass<USBZCodeViewerInterface>()
	{
		return USBZCodeViewerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCodeViewerInterface(Z_Construct_UClass_USBZCodeViewerInterface, &USBZCodeViewerInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCodeViewerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCodeViewerInterface);
	static FName NAME_USBZCodeViewerInterface_BP_SetCode = FName(TEXT("BP_SetCode"));
	void ISBZCodeViewerInterface::Execute_BP_SetCode(UObject* O, UWidgetComponent* Widget, int32 CodeToShow)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZCodeViewerInterface::StaticClass()));
		SBZCodeViewerInterface_eventBP_SetCode_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZCodeViewerInterface_BP_SetCode);
		if (Func)
		{
			Parms.Widget=Widget;
			Parms.CodeToShow=CodeToShow;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_USBZCodeViewerInterface_GetNumberOfCodeWidgets = FName(TEXT("GetNumberOfCodeWidgets"));
	int32 ISBZCodeViewerInterface::Execute_GetNumberOfCodeWidgets(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZCodeViewerInterface::StaticClass()));
		SBZCodeViewerInterface_eventGetNumberOfCodeWidgets_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZCodeViewerInterface_GetNumberOfCodeWidgets);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZCodeViewerInterface*)(O->GetNativeInterfaceAddress(USBZCodeViewerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetNumberOfCodeWidgets_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZCodeViewerInterface_InitializeWidget = FName(TEXT("InitializeWidget"));
	void ISBZCodeViewerInterface::Execute_InitializeWidget(UObject* O, UWidgetComponent* Widget)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZCodeViewerInterface::StaticClass()));
		SBZCodeViewerInterface_eventInitializeWidget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZCodeViewerInterface_InitializeWidget);
		if (Func)
		{
			Parms.Widget=Widget;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZCodeViewerInterface*)(O->GetNativeInterfaceAddress(USBZCodeViewerInterface::StaticClass())))
		{
			I->InitializeWidget_Implementation(Widget);
		}
	}
	static FName NAME_USBZCodeViewerInterface_UpdateCodeViewer = FName(TEXT("UpdateCodeViewer"));
	void ISBZCodeViewerInterface::Execute_UpdateCodeViewer(UObject* O, TArray<int32> const& GeneratedCodes, const int32 TrueCodeIndex)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZCodeViewerInterface::StaticClass()));
		SBZCodeViewerInterface_eventUpdateCodeViewer_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZCodeViewerInterface_UpdateCodeViewer);
		if (Func)
		{
			Parms.GeneratedCodes=GeneratedCodes;
			Parms.TrueCodeIndex=TrueCodeIndex;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZCodeViewerInterface*)(O->GetNativeInterfaceAddress(USBZCodeViewerInterface::StaticClass())))
		{
			I->UpdateCodeViewer_Implementation(GeneratedCodes,TrueCodeIndex);
		}
	}
	static FName NAME_USBZCodeViewerInterface_UpdateIdentifier = FName(TEXT("UpdateIdentifier"));
	void ISBZCodeViewerInterface::Execute_UpdateIdentifier(UObject* O, FText const& InIdentifier)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZCodeViewerInterface::StaticClass()));
		SBZCodeViewerInterface_eventUpdateIdentifier_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZCodeViewerInterface_UpdateIdentifier);
		if (Func)
		{
			Parms.InIdentifier=InIdentifier;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZCodeViewerInterface*)(O->GetNativeInterfaceAddress(USBZCodeViewerInterface::StaticClass())))
		{
			I->UpdateIdentifier_Implementation(InIdentifier);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
