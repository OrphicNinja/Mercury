// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3KeyItemContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3KeyItemContainer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3KeyItemContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3KeyItemContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStateWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDKeyItemWidget_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnKeyItemCountChangedDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UPD3KeyItemContainer::execOnKeyItemCountChanged)
	{
		P_GET_STRUCT_REF(FSBZKeyItemCountChangedEvent,Z_Param_Out_KeyItemCountChangedEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKeyItemCountChanged(Z_Param_Out_KeyItemCountChangedEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3KeyItemContainer::execOnSharedKeyItemCountChanged)
	{
		P_GET_STRUCT_REF(FSBZSharedKeyItemTagChangedEvent,Z_Param_Out_SharedKeyItemTagChangedEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSharedKeyItemCountChanged(Z_Param_Out_SharedKeyItemTagChangedEventData);
		P_NATIVE_END;
	}
	void UPD3KeyItemContainer::StaticRegisterNativesUPD3KeyItemContainer()
	{
		UClass* Class = UPD3KeyItemContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnKeyItemCountChanged", &UPD3KeyItemContainer::execOnKeyItemCountChanged },
			{ "OnSharedKeyItemCountChanged", &UPD3KeyItemContainer::execOnSharedKeyItemCountChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged_Statics
	{
		struct PD3KeyItemContainer_eventOnKeyItemCountChanged_Parms
		{
			FSBZKeyItemCountChangedEvent KeyItemCountChangedEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyItemCountChangedEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyItemCountChangedEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged_Statics::NewProp_KeyItemCountChangedEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged_Statics::NewProp_KeyItemCountChangedEventData = { "KeyItemCountChangedEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3KeyItemContainer_eventOnKeyItemCountChanged_Parms, KeyItemCountChangedEventData), Z_Construct_UScriptStruct_FSBZKeyItemCountChangedEvent, METADATA_PARAMS(Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged_Statics::NewProp_KeyItemCountChangedEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged_Statics::NewProp_KeyItemCountChangedEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged_Statics::NewProp_KeyItemCountChangedEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3KeyItemContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3KeyItemContainer, nullptr, "OnKeyItemCountChanged", nullptr, nullptr, sizeof(PD3KeyItemContainer_eventOnKeyItemCountChanged_Parms), Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged_Statics
	{
		struct PD3KeyItemContainer_eventOnSharedKeyItemCountChanged_Parms
		{
			FSBZSharedKeyItemTagChangedEvent SharedKeyItemTagChangedEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedKeyItemTagChangedEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedKeyItemTagChangedEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged_Statics::NewProp_SharedKeyItemTagChangedEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged_Statics::NewProp_SharedKeyItemTagChangedEventData = { "SharedKeyItemTagChangedEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3KeyItemContainer_eventOnSharedKeyItemCountChanged_Parms, SharedKeyItemTagChangedEventData), Z_Construct_UScriptStruct_FSBZSharedKeyItemTagChangedEvent, METADATA_PARAMS(Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged_Statics::NewProp_SharedKeyItemTagChangedEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged_Statics::NewProp_SharedKeyItemTagChangedEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged_Statics::NewProp_SharedKeyItemTagChangedEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3KeyItemContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3KeyItemContainer, nullptr, "OnSharedKeyItemCountChanged", nullptr, nullptr, sizeof(PD3KeyItemContainer_eventOnSharedKeyItemCountChanged_Parms), Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3KeyItemContainer_NoRegister()
	{
		return UPD3KeyItemContainer::StaticClass();
	}
	struct Z_Construct_UClass_UPD3KeyItemContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_KeyItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_KeyItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDisplayedKeyItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDisplayedKeyItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsShared_MetaData[];
#endif
		static void NewProp_bIsShared_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_KeyItemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKeyItemCountChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyItemCountChangedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyItemWidgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyItemWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyItemWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyItemWidgets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3KeyItemContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStateWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3KeyItemContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3KeyItemContainer_OnKeyItemCountChanged, "OnKeyItemCountChanged" }, // 1765398239
		{ &Z_Construct_UFunction_UPD3KeyItemContainer_OnSharedKeyItemCountChanged, "OnSharedKeyItemCountChanged" }, // 3325680856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3KeyItemContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3KeyItemContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3KeyItemContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_Panel_KeyItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3KeyItemContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3KeyItemContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_Panel_KeyItems = { "Panel_KeyItems", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3KeyItemContainer, Panel_KeyItems), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_Panel_KeyItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_Panel_KeyItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_MaxDisplayedKeyItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3KeyItemContainer" },
		{ "ModuleRelativePath", "Public/PD3KeyItemContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_MaxDisplayedKeyItems = { "MaxDisplayedKeyItems", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3KeyItemContainer, MaxDisplayedKeyItems), METADATA_PARAMS(Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_MaxDisplayedKeyItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_MaxDisplayedKeyItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_bIsShared_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3KeyItemContainer" },
		{ "ModuleRelativePath", "Public/PD3KeyItemContainer.h" },
	};
#endif
	void Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_bIsShared_SetBit(void* Obj)
	{
		((UPD3KeyItemContainer*)Obj)->bIsShared = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_bIsShared = { "bIsShared", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPD3KeyItemContainer), &Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_bIsShared_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_bIsShared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_bIsShared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_KeyItemWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3KeyItemContainer" },
		{ "ModuleRelativePath", "Public/PD3KeyItemContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_KeyItemWidgetClass = { "KeyItemWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3KeyItemContainer, KeyItemWidgetClass), Z_Construct_UClass_UPD3HUDKeyItemWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_KeyItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_KeyItemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_OnKeyItemCountChangedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3KeyItemContainer" },
		{ "ModuleRelativePath", "Public/PD3KeyItemContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_OnKeyItemCountChangedDelegate = { "OnKeyItemCountChangedDelegate", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3KeyItemContainer, OnKeyItemCountChangedDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZOnKeyItemCountChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_OnKeyItemCountChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_OnKeyItemCountChangedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_KeyItemWidgets_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3KeyItemContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3KeyItemContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_KeyItemWidgets_Inner = { "KeyItemWidgets", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPD3HUDKeyItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_KeyItemWidgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_KeyItemWidgets_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_KeyItemWidgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3KeyItemContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3KeyItemContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_KeyItemWidgets = { "KeyItemWidgets", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3KeyItemContainer, KeyItemWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_KeyItemWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_KeyItemWidgets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3KeyItemContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_Panel_KeyItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_MaxDisplayedKeyItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_bIsShared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_KeyItemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_OnKeyItemCountChangedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_KeyItemWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3KeyItemContainer_Statics::NewProp_KeyItemWidgets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3KeyItemContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3KeyItemContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3KeyItemContainer_Statics::ClassParams = {
		&UPD3KeyItemContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3KeyItemContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3KeyItemContainer_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3KeyItemContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3KeyItemContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3KeyItemContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3KeyItemContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3KeyItemContainer, 436358795);
	template<> STARBREEZE_API UClass* StaticClass<UPD3KeyItemContainer>()
	{
		return UPD3KeyItemContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3KeyItemContainer(Z_Construct_UClass_UPD3KeyItemContainer, &UPD3KeyItemContainer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3KeyItemContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3KeyItemContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
