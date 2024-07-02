// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3HUDRoomStatusWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3HUDRoomStatusWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDRoomStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDRoomStatusWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatePawnWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRoomType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPD3HUDRoomStatusWidget::execHandleHeistGoneLoud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleHeistGoneLoud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3HUDRoomStatusWidget::execRoomTypeChanged)
	{
		P_GET_ENUM(ESBZRoomType,Z_Param_NewRoomType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RoomTypeChanged(ESBZRoomType(Z_Param_NewRoomType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3HUDRoomStatusWidget::execRoomVolumeChanged)
	{
		P_GET_OBJECT(ASBZRoomVolume,Z_Param_InRoomVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RoomVolumeChanged(Z_Param_InRoomVolume);
		P_NATIVE_END;
	}
	static FName NAME_UPD3HUDRoomStatusWidget_OnHeistGoneLoud = FName(TEXT("OnHeistGoneLoud"));
	void UPD3HUDRoomStatusWidget::OnHeistGoneLoud()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDRoomStatusWidget_OnHeistGoneLoud),NULL);
	}
	static FName NAME_UPD3HUDRoomStatusWidget_OnNoRoomData = FName(TEXT("OnNoRoomData"));
	void UPD3HUDRoomStatusWidget::OnNoRoomData()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDRoomStatusWidget_OnNoRoomData),NULL);
	}
	static FName NAME_UPD3HUDRoomStatusWidget_OnRoomChanged = FName(TEXT("OnRoomChanged"));
	void UPD3HUDRoomStatusWidget::OnRoomChanged(ASBZRoomVolume* RoomVolume)
	{
		PD3HUDRoomStatusWidget_eventOnRoomChanged_Parms Parms;
		Parms.RoomVolume=RoomVolume;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDRoomStatusWidget_OnRoomChanged),&Parms);
	}
	static FName NAME_UPD3HUDRoomStatusWidget_OnRoomTypeChanged = FName(TEXT("OnRoomTypeChanged"));
	void UPD3HUDRoomStatusWidget::OnRoomTypeChanged(ESBZRoomType InRoomType)
	{
		PD3HUDRoomStatusWidget_eventOnRoomTypeChanged_Parms Parms;
		Parms.InRoomType=InRoomType;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDRoomStatusWidget_OnRoomTypeChanged),&Parms);
	}
	void UPD3HUDRoomStatusWidget::StaticRegisterNativesUPD3HUDRoomStatusWidget()
	{
		UClass* Class = UPD3HUDRoomStatusWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleHeistGoneLoud", &UPD3HUDRoomStatusWidget::execHandleHeistGoneLoud },
			{ "RoomTypeChanged", &UPD3HUDRoomStatusWidget::execRoomTypeChanged },
			{ "RoomVolumeChanged", &UPD3HUDRoomStatusWidget::execRoomVolumeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPD3HUDRoomStatusWidget_HandleHeistGoneLoud_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDRoomStatusWidget_HandleHeistGoneLoud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDRoomStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDRoomStatusWidget_HandleHeistGoneLoud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDRoomStatusWidget, nullptr, "HandleHeistGoneLoud", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_HandleHeistGoneLoud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_HandleHeistGoneLoud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDRoomStatusWidget_HandleHeistGoneLoud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDRoomStatusWidget_HandleHeistGoneLoud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnHeistGoneLoud_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnHeistGoneLoud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDRoomStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnHeistGoneLoud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDRoomStatusWidget, nullptr, "OnHeistGoneLoud", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnHeistGoneLoud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnHeistGoneLoud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnHeistGoneLoud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnHeistGoneLoud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnNoRoomData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnNoRoomData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDRoomStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnNoRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDRoomStatusWidget, nullptr, "OnNoRoomData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnNoRoomData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnNoRoomData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnNoRoomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnNoRoomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomChanged_Statics::NewProp_RoomVolume = { "RoomVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDRoomStatusWidget_eventOnRoomChanged_Parms, RoomVolume), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomChanged_Statics::NewProp_RoomVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDRoomStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDRoomStatusWidget, nullptr, "OnRoomChanged", nullptr, nullptr, sizeof(PD3HUDRoomStatusWidget_eventOnRoomChanged_Parms), Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomTypeChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InRoomType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InRoomType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomTypeChanged_Statics::NewProp_InRoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomTypeChanged_Statics::NewProp_InRoomType = { "InRoomType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDRoomStatusWidget_eventOnRoomTypeChanged_Parms, InRoomType), Z_Construct_UEnum_Starbreeze_ESBZRoomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomTypeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomTypeChanged_Statics::NewProp_InRoomType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomTypeChanged_Statics::NewProp_InRoomType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomTypeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDRoomStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDRoomStatusWidget, nullptr, "OnRoomTypeChanged", nullptr, nullptr, sizeof(PD3HUDRoomStatusWidget_eventOnRoomTypeChanged_Parms), Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomTypeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomTypeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomTypeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomTypeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomTypeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomTypeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomTypeChanged_Statics
	{
		struct PD3HUDRoomStatusWidget_eventRoomTypeChanged_Parms
		{
			ESBZRoomType NewRoomType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewRoomType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewRoomType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomTypeChanged_Statics::NewProp_NewRoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomTypeChanged_Statics::NewProp_NewRoomType = { "NewRoomType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDRoomStatusWidget_eventRoomTypeChanged_Parms, NewRoomType), Z_Construct_UEnum_Starbreeze_ESBZRoomType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomTypeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomTypeChanged_Statics::NewProp_NewRoomType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomTypeChanged_Statics::NewProp_NewRoomType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomTypeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDRoomStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDRoomStatusWidget, nullptr, "RoomTypeChanged", nullptr, nullptr, sizeof(PD3HUDRoomStatusWidget_eventRoomTypeChanged_Parms), Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomTypeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomTypeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomTypeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomTypeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomTypeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomTypeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomVolumeChanged_Statics
	{
		struct PD3HUDRoomStatusWidget_eventRoomVolumeChanged_Parms
		{
			ASBZRoomVolume* InRoomVolume;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRoomVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomVolumeChanged_Statics::NewProp_InRoomVolume = { "InRoomVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDRoomStatusWidget_eventRoomVolumeChanged_Parms, InRoomVolume), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomVolumeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomVolumeChanged_Statics::NewProp_InRoomVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomVolumeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDRoomStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomVolumeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDRoomStatusWidget, nullptr, "RoomVolumeChanged", nullptr, nullptr, sizeof(PD3HUDRoomStatusWidget_eventRoomVolumeChanged_Parms), Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomVolumeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomVolumeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomVolumeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomVolumeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomVolumeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomVolumeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3HUDRoomStatusWidget_NoRegister()
	{
		return UPD3HUDRoomStatusWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoomType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RoomType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFeedbackClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InFeedbackClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasGoneLoud_MetaData[];
#endif
		static void NewProp_bHasGoneLoud_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasGoneLoud;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStatePawnWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3HUDRoomStatusWidget_HandleHeistGoneLoud, "HandleHeistGoneLoud" }, // 158177766
		{ &Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnHeistGoneLoud, "OnHeistGoneLoud" }, // 67047384
		{ &Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnNoRoomData, "OnNoRoomData" }, // 3025570275
		{ &Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomChanged, "OnRoomChanged" }, // 3147615731
		{ &Z_Construct_UFunction_UPD3HUDRoomStatusWidget_OnRoomTypeChanged, "OnRoomTypeChanged" }, // 3504062179
		{ &Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomTypeChanged, "RoomTypeChanged" }, // 1471569103
		{ &Z_Construct_UFunction_UPD3HUDRoomStatusWidget_RoomVolumeChanged, "RoomVolumeChanged" }, // 2443006027
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3HUDRoomStatusWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDRoomStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_RoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_RoomType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDRoomStatusWidget" },
		{ "ModuleRelativePath", "Public/PD3HUDRoomStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDRoomStatusWidget, RoomType), Z_Construct_UEnum_Starbreeze_ESBZRoomType, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_RoomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_RoomType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_InFeedbackClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDRoomStatusWidget" },
		{ "ModuleRelativePath", "Public/PD3HUDRoomStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_InFeedbackClass = { "InFeedbackClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDRoomStatusWidget, InFeedbackClass), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_InFeedbackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_InFeedbackClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_bHasGoneLoud_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDRoomStatusWidget" },
		{ "ModuleRelativePath", "Public/PD3HUDRoomStatusWidget.h" },
	};
#endif
	void Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_bHasGoneLoud_SetBit(void* Obj)
	{
		((UPD3HUDRoomStatusWidget*)Obj)->bHasGoneLoud = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_bHasGoneLoud = { "bHasGoneLoud", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPD3HUDRoomStatusWidget), &Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_bHasGoneLoud_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_bHasGoneLoud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_bHasGoneLoud_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_RoomType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_RoomType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_InFeedbackClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::NewProp_bHasGoneLoud,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3HUDRoomStatusWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::ClassParams = {
		&UPD3HUDRoomStatusWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3HUDRoomStatusWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3HUDRoomStatusWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3HUDRoomStatusWidget, 1355268198);
	template<> STARBREEZE_API UClass* StaticClass<UPD3HUDRoomStatusWidget>()
	{
		return UPD3HUDRoomStatusWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3HUDRoomStatusWidget(Z_Construct_UClass_UPD3HUDRoomStatusWidget, &UPD3HUDRoomStatusWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3HUDRoomStatusWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3HUDRoomStatusWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
