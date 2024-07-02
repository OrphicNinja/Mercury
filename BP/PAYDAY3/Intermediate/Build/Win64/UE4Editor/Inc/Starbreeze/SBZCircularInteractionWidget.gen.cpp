// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCircularInteractionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCircularInteractionWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCircularInteractionWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCircularInteractionWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnCircularWidgetSelected__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZCircularInteractionWidget::execActivateCircularWidget)
	{
		P_GET_UBOOL(Z_Param_bShouldActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateCircularWidget(Z_Param_bShouldActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCircularInteractionWidget::execSelectCurrentIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectCurrentIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCircularInteractionWidget::execUpdateNumSlices)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumSlices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateNumSlices(Z_Param_InNumSlices);
		P_NATIVE_END;
	}
	static FName NAME_USBZCircularInteractionWidget_OnIndexChanged = FName(TEXT("OnIndexChanged"));
	void USBZCircularInteractionWidget::OnIndexChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZCircularInteractionWidget_OnIndexChanged),NULL);
	}
	static FName NAME_USBZCircularInteractionWidget_OnNumSectionsChanged = FName(TEXT("OnNumSectionsChanged"));
	void USBZCircularInteractionWidget::OnNumSectionsChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZCircularInteractionWidget_OnNumSectionsChanged),NULL);
	}
	void USBZCircularInteractionWidget::StaticRegisterNativesUSBZCircularInteractionWidget()
	{
		UClass* Class = USBZCircularInteractionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateCircularWidget", &USBZCircularInteractionWidget::execActivateCircularWidget },
			{ "SelectCurrentIndex", &USBZCircularInteractionWidget::execSelectCurrentIndex },
			{ "UpdateNumSlices", &USBZCircularInteractionWidget::execUpdateNumSlices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCircularInteractionWidget_ActivateCircularWidget_Statics
	{
		struct SBZCircularInteractionWidget_eventActivateCircularWidget_Parms
		{
			bool bShouldActive;
		};
		static void NewProp_bShouldActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCircularInteractionWidget_ActivateCircularWidget_Statics::NewProp_bShouldActive_SetBit(void* Obj)
	{
		((SBZCircularInteractionWidget_eventActivateCircularWidget_Parms*)Obj)->bShouldActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCircularInteractionWidget_ActivateCircularWidget_Statics::NewProp_bShouldActive = { "bShouldActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCircularInteractionWidget_eventActivateCircularWidget_Parms), &Z_Construct_UFunction_USBZCircularInteractionWidget_ActivateCircularWidget_Statics::NewProp_bShouldActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCircularInteractionWidget_ActivateCircularWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCircularInteractionWidget_ActivateCircularWidget_Statics::NewProp_bShouldActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCircularInteractionWidget_ActivateCircularWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCircularInteractionWidget_ActivateCircularWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCircularInteractionWidget, nullptr, "ActivateCircularWidget", nullptr, nullptr, sizeof(SBZCircularInteractionWidget_eventActivateCircularWidget_Parms), Z_Construct_UFunction_USBZCircularInteractionWidget_ActivateCircularWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCircularInteractionWidget_ActivateCircularWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCircularInteractionWidget_ActivateCircularWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCircularInteractionWidget_ActivateCircularWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCircularInteractionWidget_ActivateCircularWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCircularInteractionWidget_ActivateCircularWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCircularInteractionWidget_OnIndexChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCircularInteractionWidget_OnIndexChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCircularInteractionWidget_OnIndexChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCircularInteractionWidget, nullptr, "OnIndexChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCircularInteractionWidget_OnIndexChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCircularInteractionWidget_OnIndexChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCircularInteractionWidget_OnIndexChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCircularInteractionWidget_OnIndexChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCircularInteractionWidget_OnNumSectionsChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCircularInteractionWidget_OnNumSectionsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCircularInteractionWidget_OnNumSectionsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCircularInteractionWidget, nullptr, "OnNumSectionsChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCircularInteractionWidget_OnNumSectionsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCircularInteractionWidget_OnNumSectionsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCircularInteractionWidget_OnNumSectionsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCircularInteractionWidget_OnNumSectionsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCircularInteractionWidget_SelectCurrentIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCircularInteractionWidget_SelectCurrentIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCircularInteractionWidget_SelectCurrentIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCircularInteractionWidget, nullptr, "SelectCurrentIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCircularInteractionWidget_SelectCurrentIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCircularInteractionWidget_SelectCurrentIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCircularInteractionWidget_SelectCurrentIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCircularInteractionWidget_SelectCurrentIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCircularInteractionWidget_UpdateNumSlices_Statics
	{
		struct SBZCircularInteractionWidget_eventUpdateNumSlices_Parms
		{
			int32 InNumSlices;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNumSlices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCircularInteractionWidget_UpdateNumSlices_Statics::NewProp_InNumSlices = { "InNumSlices", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCircularInteractionWidget_eventUpdateNumSlices_Parms, InNumSlices), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCircularInteractionWidget_UpdateNumSlices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCircularInteractionWidget_UpdateNumSlices_Statics::NewProp_InNumSlices,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCircularInteractionWidget_UpdateNumSlices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCircularInteractionWidget_UpdateNumSlices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCircularInteractionWidget, nullptr, "UpdateNumSlices", nullptr, nullptr, sizeof(SBZCircularInteractionWidget_eventUpdateNumSlices_Parms), Z_Construct_UFunction_USBZCircularInteractionWidget_UpdateNumSlices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCircularInteractionWidget_UpdateNumSlices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCircularInteractionWidget_UpdateNumSlices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCircularInteractionWidget_UpdateNumSlices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCircularInteractionWidget_UpdateNumSlices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCircularInteractionWidget_UpdateNumSlices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCircularInteractionWidget_NoRegister()
	{
		return USBZCircularInteractionWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZCircularInteractionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_XAxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_YAxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deadzone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Deadzone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelectOnClose_MetaData[];
#endif
		static void NewProp_bSelectOnClose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelectOnClose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSlices_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSlices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleRad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleRad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliceAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SliceAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingController_MetaData[];
#endif
		static void NewProp_bIsUsingController_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCircularWidgetSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCircularWidgetSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToRememberActiveIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToRememberActiveIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCircularInteractionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCircularInteractionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCircularInteractionWidget_ActivateCircularWidget, "ActivateCircularWidget" }, // 1827356016
		{ &Z_Construct_UFunction_USBZCircularInteractionWidget_OnIndexChanged, "OnIndexChanged" }, // 70305931
		{ &Z_Construct_UFunction_USBZCircularInteractionWidget_OnNumSectionsChanged, "OnNumSectionsChanged" }, // 3899845077
		{ &Z_Construct_UFunction_USBZCircularInteractionWidget_SelectCurrentIndex, "SelectCurrentIndex" }, // 1369010887
		{ &Z_Construct_UFunction_USBZCircularInteractionWidget_UpdateNumSlices, "UpdateNumSlices" }, // 368272152
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCircularInteractionWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_XAxisName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularInteractionWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_XAxisName = { "XAxisName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCircularInteractionWidget, XAxisName), METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_XAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_XAxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_YAxisName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularInteractionWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_YAxisName = { "YAxisName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCircularInteractionWidget, YAxisName), METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_YAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_YAxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_MouseSensitivity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularInteractionWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCircularInteractionWidget, MouseSensitivity), METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_MouseSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_MouseSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_Deadzone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularInteractionWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_Deadzone = { "Deadzone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCircularInteractionWidget, Deadzone), METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_Deadzone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_Deadzone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bSelectOnClose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularInteractionWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bSelectOnClose_SetBit(void* Obj)
	{
		((USBZCircularInteractionWidget*)Obj)->bSelectOnClose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bSelectOnClose = { "bSelectOnClose", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCircularInteractionWidget), &Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bSelectOnClose_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bSelectOnClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bSelectOnClose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_NumSlices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularInteractionWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_NumSlices = { "NumSlices", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCircularInteractionWidget, NumSlices), METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_NumSlices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_NumSlices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_CurrentAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularInteractionWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_CurrentAxis = { "CurrentAxis", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCircularInteractionWidget, CurrentAxis), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_CurrentAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_CurrentAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_Angle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularInteractionWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCircularInteractionWidget, Angle), METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_AngleRad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularInteractionWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_AngleRad = { "AngleRad", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCircularInteractionWidget, AngleRad), METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_AngleRad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_AngleRad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_SliceAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularInteractionWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_SliceAngle = { "SliceAngle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCircularInteractionWidget, SliceAngle), METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_SliceAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_SliceAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_ActiveIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularInteractionWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_ActiveIndex = { "ActiveIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCircularInteractionWidget, ActiveIndex), METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_ActiveIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_ActiveIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bIsActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularInteractionWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((USBZCircularInteractionWidget*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCircularInteractionWidget), &Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bIsUsingController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularInteractionWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bIsUsingController_SetBit(void* Obj)
	{
		((USBZCircularInteractionWidget*)Obj)->bIsUsingController = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bIsUsingController = { "bIsUsingController", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCircularInteractionWidget), &Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bIsUsingController_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bIsUsingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bIsUsingController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_OnCircularWidgetSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularInteractionWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_OnCircularWidgetSelected = { "OnCircularWidgetSelected", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCircularInteractionWidget, OnCircularWidgetSelected), Z_Construct_UDelegateFunction_Starbreeze_OnCircularWidgetSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_OnCircularWidgetSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_OnCircularWidgetSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_TimeToRememberActiveIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCircularInteractionWidget" },
		{ "ModuleRelativePath", "Public/SBZCircularInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_TimeToRememberActiveIndex = { "TimeToRememberActiveIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCircularInteractionWidget, TimeToRememberActiveIndex), METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_TimeToRememberActiveIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_TimeToRememberActiveIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCircularInteractionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_XAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_YAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_MouseSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_Deadzone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bSelectOnClose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_NumSlices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_CurrentAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_AngleRad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_SliceAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_ActiveIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_bIsUsingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_OnCircularWidgetSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCircularInteractionWidget_Statics::NewProp_TimeToRememberActiveIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCircularInteractionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCircularInteractionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCircularInteractionWidget_Statics::ClassParams = {
		&USBZCircularInteractionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCircularInteractionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCircularInteractionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCircularInteractionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCircularInteractionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCircularInteractionWidget, 1131783434);
	template<> STARBREEZE_API UClass* StaticClass<USBZCircularInteractionWidget>()
	{
		return USBZCircularInteractionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCircularInteractionWidget(Z_Construct_UClass_USBZCircularInteractionWidget, &USBZCircularInteractionWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCircularInteractionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCircularInteractionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
