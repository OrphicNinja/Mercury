// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkCheckBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCheckBox() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCheckBox_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCheckBox();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkBoolPropertyToControl();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UAkCheckBox::execGetAkItemId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetAkItemId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execGetAkProperty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAkProperty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execGetCheckedState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECheckBoxState*)Z_Param__Result=P_THIS->GetCheckedState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execIsChecked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChecked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execIsPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execSetAkBoolProperty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAkBoolProperty(Z_Param_ItemProperty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execSetAkItemId)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAkItemId(Z_Param_Out_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execSetCheckedState)
	{
		P_GET_ENUM(ECheckBoxState,Z_Param_InCheckedState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCheckedState(ECheckBoxState(Z_Param_InCheckedState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkCheckBox::execSetIsChecked)
	{
		P_GET_UBOOL(Z_Param_InIsChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsChecked(Z_Param_InIsChecked);
		P_NATIVE_END;
	}
	void UAkCheckBox::StaticRegisterNativesUAkCheckBox()
	{
		UClass* Class = UAkCheckBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAkItemId", &UAkCheckBox::execGetAkItemId },
			{ "GetAkProperty", &UAkCheckBox::execGetAkProperty },
			{ "GetCheckedState", &UAkCheckBox::execGetCheckedState },
			{ "IsChecked", &UAkCheckBox::execIsChecked },
			{ "IsPressed", &UAkCheckBox::execIsPressed },
			{ "SetAkBoolProperty", &UAkCheckBox::execSetAkBoolProperty },
			{ "SetAkItemId", &UAkCheckBox::execSetAkItemId },
			{ "SetCheckedState", &UAkCheckBox::execSetCheckedState },
			{ "SetIsChecked", &UAkCheckBox::execSetIsChecked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics
	{
		struct AkCheckBox_eventGetAkItemId_Parms
		{
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkCheckBox_eventGetAkItemId_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "GetAkItemId", nullptr, nullptr, sizeof(AkCheckBox_eventGetAkItemId_Parms), Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_GetAkItemId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_GetAkItemId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics
	{
		struct AkCheckBox_eventGetAkProperty_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkCheckBox_eventGetAkProperty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "GetAkProperty", nullptr, nullptr, sizeof(AkCheckBox_eventGetAkProperty_Parms), Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_GetAkProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_GetAkProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics
	{
		struct AkCheckBox_eventGetCheckedState_Parms
		{
			ECheckBoxState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkCheckBox_eventGetCheckedState_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "GetCheckedState", nullptr, nullptr, sizeof(AkCheckBox_eventGetCheckedState_Parms), Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_GetCheckedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_GetCheckedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics
	{
		struct AkCheckBox_eventIsChecked_Parms
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
	void Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkCheckBox_eventIsChecked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkCheckBox_eventIsChecked_Parms), &Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "IsChecked", nullptr, nullptr, sizeof(AkCheckBox_eventIsChecked_Parms), Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_IsChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_IsChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics
	{
		struct AkCheckBox_eventIsPressed_Parms
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
	void Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkCheckBox_eventIsPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkCheckBox_eventIsPressed_Parms), &Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "IsPressed", nullptr, nullptr, sizeof(AkCheckBox_eventIsPressed_Parms), Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_IsPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_IsPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics
	{
		struct AkCheckBox_eventSetAkBoolProperty_Parms
		{
			FString ItemProperty;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::NewProp_ItemProperty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::NewProp_ItemProperty = { "ItemProperty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkCheckBox_eventSetAkBoolProperty_Parms, ItemProperty), METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::NewProp_ItemProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::NewProp_ItemProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::NewProp_ItemProperty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "SetAkBoolProperty", nullptr, nullptr, sizeof(AkCheckBox_eventSetAkBoolProperty_Parms), Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics
	{
		struct AkCheckBox_eventSetAkItemId_Parms
		{
			FGuid ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkCheckBox_eventSetAkItemId_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "SetAkItemId", nullptr, nullptr, sizeof(AkCheckBox_eventSetAkItemId_Parms), Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetAkItemId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_SetAkItemId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics
	{
		struct AkCheckBox_eventSetCheckedState_Parms
		{
			ECheckBoxState InCheckedState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCheckedState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InCheckedState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::NewProp_InCheckedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::NewProp_InCheckedState = { "InCheckedState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkCheckBox_eventSetCheckedState_Parms, InCheckedState), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::NewProp_InCheckedState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::NewProp_InCheckedState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "SetCheckedState", nullptr, nullptr, sizeof(AkCheckBox_eventSetCheckedState_Parms), Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetCheckedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_SetCheckedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics
	{
		struct AkCheckBox_eventSetIsChecked_Parms
		{
			bool InIsChecked;
		};
		static void NewProp_InIsChecked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsChecked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::NewProp_InIsChecked_SetBit(void* Obj)
	{
		((AkCheckBox_eventSetIsChecked_Parms*)Obj)->InIsChecked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::NewProp_InIsChecked = { "InIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkCheckBox_eventSetIsChecked_Parms), &Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::NewProp_InIsChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::NewProp_InIsChecked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkCheckBox, nullptr, "SetIsChecked", nullptr, nullptr, sizeof(AkCheckBox_eventSetIsChecked_Parms), Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkCheckBox_SetIsChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkCheckBox_SetIsChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkCheckBox_NoRegister()
	{
		return UAkCheckBox::StaticClass();
	}
	struct Z_Construct_UClass_UAkCheckBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CheckedState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CheckedState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedStateDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CheckedStateDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[];
#endif
		static void NewProp_IsFocusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFocusable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThePropertyToControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThePropertyToControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemToControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemToControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkOnCheckStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_AkOnCheckStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemDropped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPropertyDropped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPropertyDropped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkCheckBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkCheckBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkCheckBox_GetAkItemId, "GetAkItemId" }, // 2847397370
		{ &Z_Construct_UFunction_UAkCheckBox_GetAkProperty, "GetAkProperty" }, // 1442078744
		{ &Z_Construct_UFunction_UAkCheckBox_GetCheckedState, "GetCheckedState" }, // 1968720159
		{ &Z_Construct_UFunction_UAkCheckBox_IsChecked, "IsChecked" }, // 3987676512
		{ &Z_Construct_UFunction_UAkCheckBox_IsPressed, "IsPressed" }, // 3795246718
		{ &Z_Construct_UFunction_UAkCheckBox_SetAkBoolProperty, "SetAkBoolProperty" }, // 1219038510
		{ &Z_Construct_UFunction_UAkCheckBox_SetAkItemId, "SetAkItemId" }, // 2734541950
		{ &Z_Construct_UFunction_UAkCheckBox_SetCheckedState, "SetCheckedState" }, // 3173037812
		{ &Z_Construct_UFunction_UAkCheckBox_SetIsChecked, "SetIsChecked" }, // 1102850952
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkCheckBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState = { "CheckedState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, CheckedState), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedStateDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedStateDelegate = { "CheckedStateDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, CheckedStateDelegate), Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedStateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedStateDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, WidgetStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	void Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable_SetBit(void* Obj)
	{
		((UAkCheckBox*)Obj)->IsFocusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable = { "IsFocusable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkCheckBox), &Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ThePropertyToControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ThePropertyToControl = { "ThePropertyToControl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, ThePropertyToControl), Z_Construct_UScriptStruct_FAkBoolPropertyToControl, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ThePropertyToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ThePropertyToControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ItemToControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ItemToControl = { "ItemToControl", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, ItemToControl), Z_Construct_UScriptStruct_FAkWwiseItemToControl, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ItemToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ItemToControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_AkOnCheckStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_AkOnCheckStateChanged = { "AkOnCheckStateChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, AkOnCheckStateChanged), Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_AkOnCheckStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_AkOnCheckStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnItemDropped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnItemDropped = { "OnItemDropped", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, OnItemDropped), Z_Construct_UDelegateFunction_AkAudio_OnWwiseItemDropDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnItemDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnItemDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnPropertyDropped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCheckBox" },
		{ "ModuleRelativePath", "Public/AkCheckBox.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnPropertyDropped = { "OnPropertyDropped", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkCheckBox, OnPropertyDropped), Z_Construct_UDelegateFunction_AkAudio_OnBoolPropertyDropDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnPropertyDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnPropertyDropped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkCheckBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_CheckedStateDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_WidgetStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_IsFocusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ThePropertyToControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_ItemToControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_AkOnCheckStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnItemDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkCheckBox_Statics::NewProp_OnPropertyDropped,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkCheckBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkCheckBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkCheckBox_Statics::ClassParams = {
		&UAkCheckBox::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkCheckBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::PropPointers),
		0,
		0x00B000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkCheckBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkCheckBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkCheckBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkCheckBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkCheckBox, 3214750505);
	template<> AKAUDIO_API UClass* StaticClass<UAkCheckBox>()
	{
		return UAkCheckBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkCheckBox(Z_Construct_UClass_UAkCheckBox, &UAkCheckBox::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkCheckBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkCheckBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
