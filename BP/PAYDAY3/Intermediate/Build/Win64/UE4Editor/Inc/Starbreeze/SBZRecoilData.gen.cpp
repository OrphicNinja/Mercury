// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRecoilData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRecoilData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRecoilData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRecoilData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponViewKickData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponGunKickData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData();
// End Cross Module References
	DEFINE_FUNCTION(USBZRecoilData::execGetGunKickHorizontalLeft)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMin);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGunKickHorizontalLeft(Z_Param_Out_OutMin,Z_Param_Out_OutMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZRecoilData::execGetGunKickHorizontalRight)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMin);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGunKickHorizontalRight(Z_Param_Out_OutMin,Z_Param_Out_OutMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZRecoilData::execGetGunKickVerticalBottom)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMin);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGunKickVerticalBottom(Z_Param_Out_OutMin,Z_Param_Out_OutMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZRecoilData::execGetGunKickVerticalTop)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMin);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGunKickVerticalTop(Z_Param_Out_OutMin,Z_Param_Out_OutMax);
		P_NATIVE_END;
	}
	void USBZRecoilData::StaticRegisterNativesUSBZRecoilData()
	{
		UClass* Class = USBZRecoilData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGunKickHorizontalLeft", &USBZRecoilData::execGetGunKickHorizontalLeft },
			{ "GetGunKickHorizontalRight", &USBZRecoilData::execGetGunKickHorizontalRight },
			{ "GetGunKickVerticalBottom", &USBZRecoilData::execGetGunKickVerticalBottom },
			{ "GetGunKickVerticalTop", &USBZRecoilData::execGetGunKickVerticalTop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalLeft_Statics
	{
		struct SBZRecoilData_eventGetGunKickHorizontalLeft_Parms
		{
			float OutMin;
			float OutMax;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutMin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalLeft_Statics::NewProp_OutMin = { "OutMin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRecoilData_eventGetGunKickHorizontalLeft_Parms, OutMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalLeft_Statics::NewProp_OutMax = { "OutMax", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRecoilData_eventGetGunKickHorizontalLeft_Parms, OutMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalLeft_Statics::NewProp_OutMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalLeft_Statics::NewProp_OutMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRecoilData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRecoilData, nullptr, "GetGunKickHorizontalLeft", nullptr, nullptr, sizeof(SBZRecoilData_eventGetGunKickHorizontalLeft_Parms), Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalRight_Statics
	{
		struct SBZRecoilData_eventGetGunKickHorizontalRight_Parms
		{
			float OutMin;
			float OutMax;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutMin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalRight_Statics::NewProp_OutMin = { "OutMin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRecoilData_eventGetGunKickHorizontalRight_Parms, OutMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalRight_Statics::NewProp_OutMax = { "OutMax", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRecoilData_eventGetGunKickHorizontalRight_Parms, OutMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalRight_Statics::NewProp_OutMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalRight_Statics::NewProp_OutMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRecoilData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRecoilData, nullptr, "GetGunKickHorizontalRight", nullptr, nullptr, sizeof(SBZRecoilData_eventGetGunKickHorizontalRight_Parms), Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalBottom_Statics
	{
		struct SBZRecoilData_eventGetGunKickVerticalBottom_Parms
		{
			float OutMin;
			float OutMax;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutMin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalBottom_Statics::NewProp_OutMin = { "OutMin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRecoilData_eventGetGunKickVerticalBottom_Parms, OutMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalBottom_Statics::NewProp_OutMax = { "OutMax", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRecoilData_eventGetGunKickVerticalBottom_Parms, OutMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalBottom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalBottom_Statics::NewProp_OutMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalBottom_Statics::NewProp_OutMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalBottom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRecoilData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalBottom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRecoilData, nullptr, "GetGunKickVerticalBottom", nullptr, nullptr, sizeof(SBZRecoilData_eventGetGunKickVerticalBottom_Parms), Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalBottom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalBottom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalBottom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalBottom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalBottom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalBottom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalTop_Statics
	{
		struct SBZRecoilData_eventGetGunKickVerticalTop_Parms
		{
			float OutMin;
			float OutMax;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutMin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalTop_Statics::NewProp_OutMin = { "OutMin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRecoilData_eventGetGunKickVerticalTop_Parms, OutMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalTop_Statics::NewProp_OutMax = { "OutMax", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRecoilData_eventGetGunKickVerticalTop_Parms, OutMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalTop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalTop_Statics::NewProp_OutMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalTop_Statics::NewProp_OutMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalTop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRecoilData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRecoilData, nullptr, "GetGunKickVerticalTop", nullptr, nullptr, sizeof(SBZRecoilData_eventGetGunKickVerticalTop_Parms), Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalTop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalTop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZRecoilData_NoRegister()
	{
		return USBZRecoilData::StaticClass();
	}
	struct Z_Construct_UClass_USBZRecoilData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplacementListMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplacementListMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewKick_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewKick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewKickBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewKickBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewKickBackTargeting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewKickBackTargeting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunKickXY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunKickXY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunKickBackAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GunKickBackAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunKickBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunKickBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunKickBackTargeting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunKickBackTargeting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRecoilData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZRecoilData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalLeft, "GetGunKickHorizontalLeft" }, // 1626574460
		{ &Z_Construct_UFunction_USBZRecoilData_GetGunKickHorizontalRight, "GetGunKickHorizontalRight" }, // 2710686551
		{ &Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalBottom, "GetGunKickVerticalBottom" }, // 2334696807
		{ &Z_Construct_UFunction_USBZRecoilData_GetGunKickVerticalTop, "GetGunKickVerticalTop" }, // 2925906968
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRecoilData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZRecoilData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRecoilData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRecoilData_Statics::NewProp_DisplacementListMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecoilData" },
		{ "ModuleRelativePath", "Public/SBZRecoilData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZRecoilData_Statics::NewProp_DisplacementListMultiplier = { "DisplacementListMultiplier", nullptr, (EPropertyFlags)0x0010000000002015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRecoilData, DisplacementListMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_DisplacementListMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_DisplacementListMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRecoilData_Statics::NewProp_ViewKick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecoilData" },
		{ "ModuleRelativePath", "Public/SBZRecoilData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZRecoilData_Statics::NewProp_ViewKick = { "ViewKick", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRecoilData, ViewKick), Z_Construct_UScriptStruct_FSBZWeaponViewKickData, METADATA_PARAMS(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_ViewKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_ViewKick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRecoilData_Statics::NewProp_ViewKickBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecoilData" },
		{ "ModuleRelativePath", "Public/SBZRecoilData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZRecoilData_Statics::NewProp_ViewKickBack = { "ViewKickBack", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRecoilData, ViewKickBack), Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData, METADATA_PARAMS(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_ViewKickBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_ViewKickBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRecoilData_Statics::NewProp_ViewKickBackTargeting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecoilData" },
		{ "ModuleRelativePath", "Public/SBZRecoilData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZRecoilData_Statics::NewProp_ViewKickBackTargeting = { "ViewKickBackTargeting", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRecoilData, ViewKickBackTargeting), Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData, METADATA_PARAMS(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_ViewKickBackTargeting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_ViewKickBackTargeting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickXY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecoilData" },
		{ "ModuleRelativePath", "Public/SBZRecoilData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickXY = { "GunKickXY", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRecoilData, GunKickXY), Z_Construct_UScriptStruct_FSBZWeaponGunKickData, METADATA_PARAMS(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickXY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickBackAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecoilData" },
		{ "ModuleRelativePath", "Public/SBZRecoilData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickBackAlpha = { "GunKickBackAlpha", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRecoilData, GunKickBackAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickBackAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickBackAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecoilData" },
		{ "ModuleRelativePath", "Public/SBZRecoilData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickBack = { "GunKickBack", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRecoilData, GunKickBack), Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData, METADATA_PARAMS(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickBackTargeting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecoilData" },
		{ "ModuleRelativePath", "Public/SBZRecoilData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickBackTargeting = { "GunKickBackTargeting", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRecoilData, GunKickBackTargeting), Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData, METADATA_PARAMS(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickBackTargeting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickBackTargeting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZRecoilData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRecoilData_Statics::NewProp_DisplacementListMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRecoilData_Statics::NewProp_ViewKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRecoilData_Statics::NewProp_ViewKickBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRecoilData_Statics::NewProp_ViewKickBackTargeting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickXY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickBackAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRecoilData_Statics::NewProp_GunKickBackTargeting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRecoilData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRecoilData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRecoilData_Statics::ClassParams = {
		&USBZRecoilData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZRecoilData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecoilData_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZRecoilData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecoilData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRecoilData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRecoilData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRecoilData, 1621920937);
	template<> STARBREEZE_API UClass* StaticClass<USBZRecoilData>()
	{
		return USBZRecoilData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRecoilData(Z_Construct_UClass_USBZRecoilData, &USBZRecoilData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRecoilData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRecoilData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
