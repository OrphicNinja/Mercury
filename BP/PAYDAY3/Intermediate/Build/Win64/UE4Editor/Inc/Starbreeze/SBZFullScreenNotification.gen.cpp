// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFullScreenNotification.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFullScreenNotification() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFullScreenNotification_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFullScreenNotification();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZControlsReferenceWidget_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReference();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPopupWidgetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZFullScreenNotification::execDismissActiveNotification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DismissActiveNotification();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZFullScreenNotification::execOnControlsReferenceClicked)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnControlsReferenceClicked(Z_Param_InActionName);
		P_NATIVE_END;
	}
	static FName NAME_USBZFullScreenNotification_OnDisplayedNewActiveNotification = FName(TEXT("OnDisplayedNewActiveNotification"));
	void USBZFullScreenNotification::OnDisplayedNewActiveNotification(FSBZUIFullscreenNotificationData const& NewNotificationData)
	{
		SBZFullScreenNotification_eventOnDisplayedNewActiveNotification_Parms Parms;
		Parms.NewNotificationData=NewNotificationData;
		ProcessEvent(FindFunctionChecked(NAME_USBZFullScreenNotification_OnDisplayedNewActiveNotification),&Parms);
	}
	void USBZFullScreenNotification::StaticRegisterNativesUSBZFullScreenNotification()
	{
		UClass* Class = USBZFullScreenNotification::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DismissActiveNotification", &USBZFullScreenNotification::execDismissActiveNotification },
			{ "OnControlsReferenceClicked", &USBZFullScreenNotification::execOnControlsReferenceClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZFullScreenNotification_DismissActiveNotification_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFullScreenNotification_DismissActiveNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFullScreenNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFullScreenNotification_DismissActiveNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFullScreenNotification, nullptr, "DismissActiveNotification", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFullScreenNotification_DismissActiveNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFullScreenNotification_DismissActiveNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFullScreenNotification_DismissActiveNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFullScreenNotification_DismissActiveNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFullScreenNotification_OnControlsReferenceClicked_Statics
	{
		struct SBZFullScreenNotification_eventOnControlsReferenceClicked_Parms
		{
			FName InActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZFullScreenNotification_OnControlsReferenceClicked_Statics::NewProp_InActionName = { "InActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFullScreenNotification_eventOnControlsReferenceClicked_Parms, InActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFullScreenNotification_OnControlsReferenceClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFullScreenNotification_OnControlsReferenceClicked_Statics::NewProp_InActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFullScreenNotification_OnControlsReferenceClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFullScreenNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFullScreenNotification_OnControlsReferenceClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFullScreenNotification, nullptr, "OnControlsReferenceClicked", nullptr, nullptr, sizeof(SBZFullScreenNotification_eventOnControlsReferenceClicked_Parms), Z_Construct_UFunction_USBZFullScreenNotification_OnControlsReferenceClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFullScreenNotification_OnControlsReferenceClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFullScreenNotification_OnControlsReferenceClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFullScreenNotification_OnControlsReferenceClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFullScreenNotification_OnControlsReferenceClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFullScreenNotification_OnControlsReferenceClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewNotificationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewNotificationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification_Statics::NewProp_NewNotificationData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification_Statics::NewProp_NewNotificationData = { "NewNotificationData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFullScreenNotification_eventOnDisplayedNewActiveNotification_Parms, NewNotificationData), Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData, METADATA_PARAMS(Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification_Statics::NewProp_NewNotificationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification_Statics::NewProp_NewNotificationData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification_Statics::NewProp_NewNotificationData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFullScreenNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFullScreenNotification, nullptr, "OnDisplayedNewActiveNotification", nullptr, nullptr, sizeof(SBZFullScreenNotification_eventOnDisplayedNewActiveNotification_Parms), Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZFullScreenNotification_NoRegister()
	{
		return USBZFullScreenNotification::StaticClass();
	}
	struct Z_Construct_UClass_USBZFullScreenNotification_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_Header_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_Header;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_ControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_ControlsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DismissControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DismissControlsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsShowing_MetaData[];
#endif
		static void NewProp_bIsShowing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShowing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFullScreenNotification_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZFullScreenNotification_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZFullScreenNotification_DismissActiveNotification, "DismissActiveNotification" }, // 682411901
		{ &Z_Construct_UFunction_USBZFullScreenNotification_OnControlsReferenceClicked, "OnControlsReferenceClicked" }, // 357054627
		{ &Z_Construct_UFunction_USBZFullScreenNotification_OnDisplayedNewActiveNotification, "OnDisplayedNewActiveNotification" }, // 2331766612
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullScreenNotification_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFullScreenNotification.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFullScreenNotification.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Text_Header_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFullScreenNotification" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZFullScreenNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Text_Header = { "Text_Header", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFullScreenNotification, Text_Header), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Text_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Text_Header_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Text_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFullScreenNotification" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZFullScreenNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Text_Description = { "Text_Description", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFullScreenNotification, Text_Description), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Text_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Text_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Widget_ControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFullScreenNotification" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZFullScreenNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Widget_ControlsReference = { "Widget_ControlsReference", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFullScreenNotification, Widget_ControlsReference), Z_Construct_UClass_USBZControlsReferenceWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Widget_ControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Widget_ControlsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_DismissControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFullScreenNotification" },
		{ "ModuleRelativePath", "Public/SBZFullScreenNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_DismissControlsReference = { "DismissControlsReference", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFullScreenNotification, DismissControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_DismissControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_DismissControlsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_bIsShowing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFullScreenNotification" },
		{ "ModuleRelativePath", "Public/SBZFullScreenNotification.h" },
	};
#endif
	void Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_bIsShowing_SetBit(void* Obj)
	{
		((USBZFullScreenNotification*)Obj)->bIsShowing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_bIsShowing = { "bIsShowing", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZFullScreenNotification), &Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_bIsShowing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_bIsShowing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_bIsShowing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFullScreenNotification" },
		{ "ModuleRelativePath", "Public/SBZFullScreenNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFullScreenNotification, Data), Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData, METADATA_PARAMS(Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZFullScreenNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Text_Header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Text_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Widget_ControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_DismissControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_bIsShowing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFullScreenNotification_Statics::NewProp_Data,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZFullScreenNotification_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZPopupWidgetInterface_NoRegister, (int32)VTABLE_OFFSET(USBZFullScreenNotification, ISBZPopupWidgetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFullScreenNotification_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFullScreenNotification>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFullScreenNotification_Statics::ClassParams = {
		&USBZFullScreenNotification::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZFullScreenNotification_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullScreenNotification_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZFullScreenNotification_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFullScreenNotification_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFullScreenNotification()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFullScreenNotification_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFullScreenNotification, 1794261092);
	template<> STARBREEZE_API UClass* StaticClass<USBZFullScreenNotification>()
	{
		return USBZFullScreenNotification::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFullScreenNotification(Z_Construct_UClass_USBZFullScreenNotification, &USBZFullScreenNotification::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFullScreenNotification"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFullScreenNotification);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
