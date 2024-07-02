// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSideBarNotifications.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSideBarNotifications() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSideBarNotifications_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSideBarNotifications();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSideBarNotificationData();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZSideBarNotifications::execAddNewNotification)
	{
		P_GET_STRUCT_REF(FSBZSideBarNotificationData,Z_Param_Out_InSideBarNotificationData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNewNotification(Z_Param_Out_InSideBarNotificationData);
		P_NATIVE_END;
	}
	static FName NAME_USBZSideBarNotifications_OnNotificationDisplayed = FName(TEXT("OnNotificationDisplayed"));
	void USBZSideBarNotifications::OnNotificationDisplayed(FSBZSideBarNotificationData InNotificationToDisplay)
	{
		SBZSideBarNotifications_eventOnNotificationDisplayed_Parms Parms;
		Parms.InNotificationToDisplay=InNotificationToDisplay;
		ProcessEvent(FindFunctionChecked(NAME_USBZSideBarNotifications_OnNotificationDisplayed),&Parms);
	}
	void USBZSideBarNotifications::StaticRegisterNativesUSBZSideBarNotifications()
	{
		UClass* Class = USBZSideBarNotifications::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewNotification", &USBZSideBarNotifications::execAddNewNotification },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification_Statics
	{
		struct SBZSideBarNotifications_eventAddNewNotification_Parms
		{
			FSBZSideBarNotificationData InSideBarNotificationData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSideBarNotificationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSideBarNotificationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification_Statics::NewProp_InSideBarNotificationData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification_Statics::NewProp_InSideBarNotificationData = { "InSideBarNotificationData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSideBarNotifications_eventAddNewNotification_Parms, InSideBarNotificationData), Z_Construct_UScriptStruct_FSBZSideBarNotificationData, METADATA_PARAMS(Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification_Statics::NewProp_InSideBarNotificationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification_Statics::NewProp_InSideBarNotificationData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification_Statics::NewProp_InSideBarNotificationData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSideBarNotifications.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSideBarNotifications, nullptr, "AddNewNotification", nullptr, nullptr, sizeof(SBZSideBarNotifications_eventAddNewNotification_Parms), Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSideBarNotifications_OnNotificationDisplayed_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InNotificationToDisplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSideBarNotifications_OnNotificationDisplayed_Statics::NewProp_InNotificationToDisplay = { "InNotificationToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSideBarNotifications_eventOnNotificationDisplayed_Parms, InNotificationToDisplay), Z_Construct_UScriptStruct_FSBZSideBarNotificationData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSideBarNotifications_OnNotificationDisplayed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSideBarNotifications_OnNotificationDisplayed_Statics::NewProp_InNotificationToDisplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSideBarNotifications_OnNotificationDisplayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSideBarNotifications.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSideBarNotifications_OnNotificationDisplayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSideBarNotifications, nullptr, "OnNotificationDisplayed", nullptr, nullptr, sizeof(SBZSideBarNotifications_eventOnNotificationDisplayed_Parms), Z_Construct_UFunction_USBZSideBarNotifications_OnNotificationDisplayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSideBarNotifications_OnNotificationDisplayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSideBarNotifications_OnNotificationDisplayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSideBarNotifications_OnNotificationDisplayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSideBarNotifications_OnNotificationDisplayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSideBarNotifications_OnNotificationDisplayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSideBarNotifications_NoRegister()
	{
		return USBZSideBarNotifications::StaticClass();
	}
	struct Z_Construct_UClass_USBZSideBarNotifications_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDisplaying_MetaData[];
#endif
		static void NewProp_bIsDisplaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDisplaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_OpenWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation_OpenWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTimeLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplayTimeLeft;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SideBarNotifications_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideBarNotifications_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SideBarNotifications;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSideBarNotifications_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSideBarNotifications_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSideBarNotifications_AddNewNotification, "AddNewNotification" }, // 3685259798
		{ &Z_Construct_UFunction_USBZSideBarNotifications_OnNotificationDisplayed, "OnNotificationDisplayed" }, // 3811411070
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSideBarNotifications_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSideBarNotifications.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSideBarNotifications.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_bIsDisplaying_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSideBarNotifications" },
		{ "ModuleRelativePath", "Public/SBZSideBarNotifications.h" },
	};
#endif
	void Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_bIsDisplaying_SetBit(void* Obj)
	{
		((USBZSideBarNotifications*)Obj)->bIsDisplaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_bIsDisplaying = { "bIsDisplaying", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSideBarNotifications), &Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_bIsDisplaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_bIsDisplaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_bIsDisplaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_Animation_OpenWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSideBarNotifications" },
		{ "ModuleRelativePath", "Public/SBZSideBarNotifications.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_Animation_OpenWidget = { "Animation_OpenWidget", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSideBarNotifications, Animation_OpenWidget), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_Animation_OpenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_Animation_OpenWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_DisplayTimeLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSideBarNotifications" },
		{ "ModuleRelativePath", "Public/SBZSideBarNotifications.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_DisplayTimeLeft = { "DisplayTimeLeft", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSideBarNotifications, DisplayTimeLeft), METADATA_PARAMS(Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_DisplayTimeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_DisplayTimeLeft_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_SideBarNotifications_Inner = { "SideBarNotifications", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSideBarNotificationData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_SideBarNotifications_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSideBarNotifications" },
		{ "ModuleRelativePath", "Public/SBZSideBarNotifications.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_SideBarNotifications = { "SideBarNotifications", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSideBarNotifications, SideBarNotifications), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_SideBarNotifications_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_SideBarNotifications_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSideBarNotifications_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_bIsDisplaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_Animation_OpenWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_DisplayTimeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_SideBarNotifications_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSideBarNotifications_Statics::NewProp_SideBarNotifications,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSideBarNotifications_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSideBarNotifications>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSideBarNotifications_Statics::ClassParams = {
		&USBZSideBarNotifications::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSideBarNotifications_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSideBarNotifications_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSideBarNotifications_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSideBarNotifications_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSideBarNotifications()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSideBarNotifications_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSideBarNotifications, 3066781626);
	template<> STARBREEZE_API UClass* StaticClass<USBZSideBarNotifications>()
	{
		return USBZSideBarNotifications::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSideBarNotifications(Z_Construct_UClass_USBZSideBarNotifications, &USBZSideBarNotifications::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSideBarNotifications"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSideBarNotifications);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
