// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuPreplanningPlayerStatusWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuPreplanningPlayerStatusWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuPreplanningPlayerStatusWidget::execCanOpenPlayerProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanOpenPlayerProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPreplanningPlayerStatusWidget::execOnLoadoutChanged)
	{
		P_GET_TARRAY_REF(FSBZLobbyCharacterInfoUi,Z_Param_Out_LobbyInfoArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadoutChanged(Z_Param_Out_LobbyInfoArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPreplanningPlayerStatusWidget::execOpenPlayerProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenPlayerProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuPreplanningPlayerStatusWidget::execSetEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmpty();
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuPreplanningPlayerStatusWidget_OnLobbyPlayerStatusUpdated = FName(TEXT("OnLobbyPlayerStatusUpdated"));
	void USBZMainMenuPreplanningPlayerStatusWidget::OnLobbyPlayerStatusUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuPreplanningPlayerStatusWidget_OnLobbyPlayerStatusUpdated),NULL);
	}
	void USBZMainMenuPreplanningPlayerStatusWidget::StaticRegisterNativesUSBZMainMenuPreplanningPlayerStatusWidget()
	{
		UClass* Class = USBZMainMenuPreplanningPlayerStatusWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanOpenPlayerProfile", &USBZMainMenuPreplanningPlayerStatusWidget::execCanOpenPlayerProfile },
			{ "OnLoadoutChanged", &USBZMainMenuPreplanningPlayerStatusWidget::execOnLoadoutChanged },
			{ "OpenPlayerProfile", &USBZMainMenuPreplanningPlayerStatusWidget::execOpenPlayerProfile },
			{ "SetEmpty", &USBZMainMenuPreplanningPlayerStatusWidget::execSetEmpty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_CanOpenPlayerProfile_Statics
	{
		struct SBZMainMenuPreplanningPlayerStatusWidget_eventCanOpenPlayerProfile_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_CanOpenPlayerProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMainMenuPreplanningPlayerStatusWidget_eventCanOpenPlayerProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_CanOpenPlayerProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuPreplanningPlayerStatusWidget_eventCanOpenPlayerProfile_Parms), &Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_CanOpenPlayerProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_CanOpenPlayerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_CanOpenPlayerProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_CanOpenPlayerProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_CanOpenPlayerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget, nullptr, "CanOpenPlayerProfile", nullptr, nullptr, sizeof(SBZMainMenuPreplanningPlayerStatusWidget_eventCanOpenPlayerProfile_Parms), Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_CanOpenPlayerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_CanOpenPlayerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_CanOpenPlayerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_CanOpenPlayerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_CanOpenPlayerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_CanOpenPlayerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics
	{
		struct SBZMainMenuPreplanningPlayerStatusWidget_eventOnLoadoutChanged_Parms
		{
			TArray<FSBZLobbyCharacterInfoUi> LobbyInfoArray;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LobbyInfoArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyInfoArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LobbyInfoArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics::NewProp_LobbyInfoArray_Inner = { "LobbyInfoArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics::NewProp_LobbyInfoArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics::NewProp_LobbyInfoArray = { "LobbyInfoArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuPreplanningPlayerStatusWidget_eventOnLoadoutChanged_Parms, LobbyInfoArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics::NewProp_LobbyInfoArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics::NewProp_LobbyInfoArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics::NewProp_LobbyInfoArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics::NewProp_LobbyInfoArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget, nullptr, "OnLoadoutChanged", nullptr, nullptr, sizeof(SBZMainMenuPreplanningPlayerStatusWidget_eventOnLoadoutChanged_Parms), Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLobbyPlayerStatusUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLobbyPlayerStatusUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLobbyPlayerStatusUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget, nullptr, "OnLobbyPlayerStatusUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLobbyPlayerStatusUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLobbyPlayerStatusUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLobbyPlayerStatusUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLobbyPlayerStatusUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OpenPlayerProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OpenPlayerProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OpenPlayerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget, nullptr, "OpenPlayerProfile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OpenPlayerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OpenPlayerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OpenPlayerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OpenPlayerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_SetEmpty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_SetEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_SetEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget, nullptr, "SetEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_SetEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_SetEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_SetEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_SetEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_NoRegister()
	{
		return USBZMainMenuPreplanningPlayerStatusWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_PrimaryWeaponVisuals_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_PrimaryWeaponVisuals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_SecondaryWeaponVisuals_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_SecondaryWeaponVisuals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_ThrowableVisuals_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_ThrowableVisuals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_PlaceableVisuals_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_PlaceableVisuals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_ToolVisuals_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_ToolVisuals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimaryWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Placeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Placeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Throwable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Throwable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_CanOpenPlayerProfile, "CanOpenPlayerProfile" }, // 1172750144
		{ &Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLoadoutChanged, "OnLoadoutChanged" }, // 964808832
		{ &Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OnLobbyPlayerStatusUpdated, "OnLobbyPlayerStatusUpdated" }, // 4006762796
		{ &Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_OpenPlayerProfile, "OpenPlayerProfile" }, // 3431131912
		{ &Z_Construct_UFunction_USBZMainMenuPreplanningPlayerStatusWidget_SetEmpty, "SetEmpty" }, // 1821804179
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuPreplanningPlayerStatusWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPreplanningPlayerStatusWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, PlayerIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_PlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_PrimaryWeaponVisuals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPreplanningPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_PrimaryWeaponVisuals = { "Widget_PrimaryWeaponVisuals", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Widget_PrimaryWeaponVisuals), Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_PrimaryWeaponVisuals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_PrimaryWeaponVisuals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_SecondaryWeaponVisuals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPreplanningPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_SecondaryWeaponVisuals = { "Widget_SecondaryWeaponVisuals", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Widget_SecondaryWeaponVisuals), Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_SecondaryWeaponVisuals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_SecondaryWeaponVisuals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_ThrowableVisuals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPreplanningPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_ThrowableVisuals = { "Widget_ThrowableVisuals", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Widget_ThrowableVisuals), Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_ThrowableVisuals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_ThrowableVisuals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_PlaceableVisuals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPreplanningPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_PlaceableVisuals = { "Widget_PlaceableVisuals", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Widget_PlaceableVisuals), Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_PlaceableVisuals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_PlaceableVisuals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_ToolVisuals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPreplanningPlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_ToolVisuals = { "Widget_ToolVisuals", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Widget_ToolVisuals), Z_Construct_UClass_USBZBaseInventoryItemVisualsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_ToolVisuals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_ToolVisuals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_PrimaryWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPreplanningPlayerStatusWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_PrimaryWeapon = { "PrimaryWeapon", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, PrimaryWeapon), Z_Construct_UClass_USBZEquippableData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_PrimaryWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_PrimaryWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_SecondaryWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPreplanningPlayerStatusWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_SecondaryWeapon = { "SecondaryWeapon", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, SecondaryWeapon), Z_Construct_UClass_USBZEquippableData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_SecondaryWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_SecondaryWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Tool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPreplanningPlayerStatusWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Tool), Z_Construct_UClass_USBZToolData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Tool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Tool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Placeable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPreplanningPlayerStatusWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Placeable = { "Placeable", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Placeable), Z_Construct_UClass_USBZEquippableData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Placeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Placeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Throwable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuPreplanningPlayerStatusWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuPreplanningPlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Throwable = { "Throwable", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuPreplanningPlayerStatusWidget, Throwable), Z_Construct_UClass_USBZThrowableData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Throwable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Throwable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_PrimaryWeaponVisuals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_SecondaryWeaponVisuals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_ThrowableVisuals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_PlaceableVisuals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Widget_ToolVisuals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_PrimaryWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_SecondaryWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Tool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Placeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::NewProp_Throwable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuPreplanningPlayerStatusWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::ClassParams = {
		&USBZMainMenuPreplanningPlayerStatusWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuPreplanningPlayerStatusWidget, 2045044148);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuPreplanningPlayerStatusWidget>()
	{
		return USBZMainMenuPreplanningPlayerStatusWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuPreplanningPlayerStatusWidget(Z_Construct_UClass_USBZMainMenuPreplanningPlayerStatusWidget, &USBZMainMenuPreplanningPlayerStatusWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuPreplanningPlayerStatusWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuPreplanningPlayerStatusWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
