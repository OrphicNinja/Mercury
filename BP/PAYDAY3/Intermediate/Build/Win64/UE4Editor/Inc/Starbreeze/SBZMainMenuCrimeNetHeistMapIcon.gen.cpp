// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuCrimeNetHeistMapIcon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuCrimeNetHeistMapIcon() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HeistDataAsset_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnMapIconButtonHovered__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnMapIconButtonClicked__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuCrimeNetHeistMapIcon::execGetHeistData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPD3HeistDataAsset**)Z_Param__Result=P_THIS->GetHeistData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNetHeistMapIcon::execInitializeHeistData)
	{
		P_GET_OBJECT(UPD3HeistDataAsset,Z_Param_InHeistData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeHeistData(Z_Param_InHeistData);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged = FName(TEXT("ButtonHoveredChanged"));
	void USBZMainMenuCrimeNetHeistMapIcon::ButtonHoveredChanged(bool bInIsHovered)
	{
		SBZMainMenuCrimeNetHeistMapIcon_eventButtonHoveredChanged_Parms Parms;
		Parms.bInIsHovered=bInIsHovered ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged),&Parms);
	}
	static FName NAME_USBZMainMenuCrimeNetHeistMapIcon_OnHeistDataInitialized = FName(TEXT("OnHeistDataInitialized"));
	void USBZMainMenuCrimeNetHeistMapIcon::OnHeistDataInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCrimeNetHeistMapIcon_OnHeistDataInitialized),NULL);
	}
	static FName NAME_USBZMainMenuCrimeNetHeistMapIcon_SetSelected = FName(TEXT("SetSelected"));
	void USBZMainMenuCrimeNetHeistMapIcon::SetSelected(bool bInIsSelected)
	{
		SBZMainMenuCrimeNetHeistMapIcon_eventSetSelected_Parms Parms;
		Parms.bInIsSelected=bInIsSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCrimeNetHeistMapIcon_SetSelected),&Parms);
	}
	void USBZMainMenuCrimeNetHeistMapIcon::StaticRegisterNativesUSBZMainMenuCrimeNetHeistMapIcon()
	{
		UClass* Class = USBZMainMenuCrimeNetHeistMapIcon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeistData", &USBZMainMenuCrimeNetHeistMapIcon::execGetHeistData },
			{ "InitializeHeistData", &USBZMainMenuCrimeNetHeistMapIcon::execInitializeHeistData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged_Statics
	{
		static void NewProp_bInIsHovered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsHovered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged_Statics::NewProp_bInIsHovered_SetBit(void* Obj)
	{
		((SBZMainMenuCrimeNetHeistMapIcon_eventButtonHoveredChanged_Parms*)Obj)->bInIsHovered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged_Statics::NewProp_bInIsHovered = { "bInIsHovered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCrimeNetHeistMapIcon_eventButtonHoveredChanged_Parms), &Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged_Statics::NewProp_bInIsHovered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged_Statics::NewProp_bInIsHovered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistMapIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon, nullptr, "ButtonHoveredChanged", nullptr, nullptr, sizeof(SBZMainMenuCrimeNetHeistMapIcon_eventButtonHoveredChanged_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_GetHeistData_Statics
	{
		struct SBZMainMenuCrimeNetHeistMapIcon_eventGetHeistData_Parms
		{
			UPD3HeistDataAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_GetHeistData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNetHeistMapIcon_eventGetHeistData_Parms, ReturnValue), Z_Construct_UClass_UPD3HeistDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_GetHeistData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_GetHeistData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_GetHeistData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistMapIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_GetHeistData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon, nullptr, "GetHeistData", nullptr, nullptr, sizeof(SBZMainMenuCrimeNetHeistMapIcon_eventGetHeistData_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_GetHeistData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_GetHeistData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_GetHeistData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_GetHeistData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_GetHeistData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_GetHeistData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData_Statics
	{
		struct SBZMainMenuCrimeNetHeistMapIcon_eventInitializeHeistData_Parms
		{
			const UPD3HeistDataAsset* InHeistData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InHeistData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InHeistData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData_Statics::NewProp_InHeistData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData_Statics::NewProp_InHeistData = { "InHeistData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNetHeistMapIcon_eventInitializeHeistData_Parms, InHeistData), Z_Construct_UClass_UPD3HeistDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData_Statics::NewProp_InHeistData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData_Statics::NewProp_InHeistData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData_Statics::NewProp_InHeistData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistMapIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon, nullptr, "InitializeHeistData", nullptr, nullptr, sizeof(SBZMainMenuCrimeNetHeistMapIcon_eventInitializeHeistData_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_OnHeistDataInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_OnHeistDataInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistMapIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_OnHeistDataInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon, nullptr, "OnHeistDataInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_OnHeistDataInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_OnHeistDataInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_OnHeistDataInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_OnHeistDataInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_SetSelected_Statics
	{
		static void NewProp_bInIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_SetSelected_Statics::NewProp_bInIsSelected_SetBit(void* Obj)
	{
		((SBZMainMenuCrimeNetHeistMapIcon_eventSetSelected_Parms*)Obj)->bInIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_SetSelected_Statics::NewProp_bInIsSelected = { "bInIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCrimeNetHeistMapIcon_eventSetSelected_Parms), &Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_SetSelected_Statics::NewProp_bInIsSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_SetSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_SetSelected_Statics::NewProp_bInIsSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_SetSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistMapIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon, nullptr, "SetSelected", nullptr, nullptr, sizeof(SBZMainMenuCrimeNetHeistMapIcon_eventSetSelected_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_SetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_SetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_SetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_NoRegister()
	{
		return USBZMainMenuCrimeNetHeistMapIcon::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnButtonHoveredChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonHoveredChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnButtonClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonClicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeistData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZHUDWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_ButtonHoveredChanged, "ButtonHoveredChanged" }, // 407099627
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_GetHeistData, "GetHeistData" }, // 629455804
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_InitializeHeistData, "InitializeHeistData" }, // 1989130696
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_OnHeistDataInitialized, "OnHeistDataInitialized" }, // 1542602
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetHeistMapIcon_SetSelected, "SetSelected" }, // 449689363
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuCrimeNetHeistMapIcon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistMapIcon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::NewProp_OnButtonHoveredChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetHeistMapIcon" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistMapIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::NewProp_OnButtonHoveredChanged = { "OnButtonHoveredChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNetHeistMapIcon, OnButtonHoveredChanged), Z_Construct_UDelegateFunction_Starbreeze_OnMapIconButtonHovered__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::NewProp_OnButtonHoveredChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::NewProp_OnButtonHoveredChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::NewProp_OnButtonClicked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetHeistMapIcon" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistMapIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::NewProp_OnButtonClicked = { "OnButtonClicked", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNetHeistMapIcon, OnButtonClicked), Z_Construct_UDelegateFunction_Starbreeze_OnMapIconButtonClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::NewProp_OnButtonClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::NewProp_OnButtonClicked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::NewProp_HeistData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetHeistMapIcon" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetHeistMapIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::NewProp_HeistData = { "HeistData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNetHeistMapIcon, HeistData), Z_Construct_UClass_UPD3HeistDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::NewProp_HeistData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::NewProp_HeistData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::NewProp_OnButtonHoveredChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::NewProp_OnButtonClicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::NewProp_HeistData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuCrimeNetHeistMapIcon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::ClassParams = {
		&USBZMainMenuCrimeNetHeistMapIcon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuCrimeNetHeistMapIcon, 3154521045);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuCrimeNetHeistMapIcon>()
	{
		return USBZMainMenuCrimeNetHeistMapIcon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuCrimeNetHeistMapIcon(Z_Construct_UClass_USBZMainMenuCrimeNetHeistMapIcon, &USBZMainMenuCrimeNetHeistMapIcon::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuCrimeNetHeistMapIcon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuCrimeNetHeistMapIcon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
