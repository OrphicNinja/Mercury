// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuDamageFalloffWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuDamageFalloffWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuDamageFalloffWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerWeaponFireData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuDamageFalloffWidget::execSetFireData)
	{
		P_GET_OBJECT(USBZPlayerWeaponFireData,Z_Param_InFireData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFireData(Z_Param_InFireData);
		P_NATIVE_END;
	}
	void USBZMainMenuDamageFalloffWidget::StaticRegisterNativesUSBZMainMenuDamageFalloffWidget()
	{
		UClass* Class = USBZMainMenuDamageFalloffWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFireData", &USBZMainMenuDamageFalloffWidget::execSetFireData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData_Statics
	{
		struct SBZMainMenuDamageFalloffWidget_eventSetFireData_Parms
		{
			const USBZPlayerWeaponFireData* InFireData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFireData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InFireData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData_Statics::NewProp_InFireData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData_Statics::NewProp_InFireData = { "InFireData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuDamageFalloffWidget_eventSetFireData_Parms, InFireData), Z_Construct_UClass_USBZPlayerWeaponFireData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData_Statics::NewProp_InFireData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData_Statics::NewProp_InFireData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData_Statics::NewProp_InFireData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuDamageFalloffWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuDamageFalloffWidget, nullptr, "SetFireData", nullptr, nullptr, sizeof(SBZMainMenuDamageFalloffWidget_eventSetFireData_Parms), Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_NoRegister()
	{
		return USBZMainMenuDamageFalloffWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeCritDamage_MetaData[];
#endif
		static void NewProp_bIncludeCritDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeCritDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDisplayDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDisplayDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayStepDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplayStepDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedDamageArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedDamageArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedDamageArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuDamageFalloffWidget_SetFireData, "SetFireData" }, // 1316052371
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuDamageFalloffWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuDamageFalloffWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_bIncludeCritDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuDamageFalloffWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuDamageFalloffWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_bIncludeCritDamage_SetBit(void* Obj)
	{
		((USBZMainMenuDamageFalloffWidget*)Obj)->bIncludeCritDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_bIncludeCritDamage = { "bIncludeCritDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMainMenuDamageFalloffWidget), &Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_bIncludeCritDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_bIncludeCritDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_bIncludeCritDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_MaxDisplayDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuDamageFalloffWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuDamageFalloffWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_MaxDisplayDistance = { "MaxDisplayDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuDamageFalloffWidget, MaxDisplayDistance), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_MaxDisplayDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_MaxDisplayDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_DisplayStepDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuDamageFalloffWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuDamageFalloffWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_DisplayStepDistance = { "DisplayStepDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuDamageFalloffWidget, DisplayStepDistance), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_DisplayStepDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_DisplayStepDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_FireData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuDamageFalloffWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuDamageFalloffWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_FireData = { "FireData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuDamageFalloffWidget, FireData), Z_Construct_UClass_USBZPlayerWeaponFireData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_FireData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_FireData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_CachedDamageArray_Inner = { "CachedDamageArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_CachedDamageArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuDamageFalloffWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuDamageFalloffWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_CachedDamageArray = { "CachedDamageArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuDamageFalloffWidget, CachedDamageArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_CachedDamageArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_CachedDamageArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_bIncludeCritDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_MaxDisplayDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_DisplayStepDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_FireData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_CachedDamageArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::NewProp_CachedDamageArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuDamageFalloffWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::ClassParams = {
		&USBZMainMenuDamageFalloffWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuDamageFalloffWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuDamageFalloffWidget, 3160325795);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuDamageFalloffWidget>()
	{
		return USBZMainMenuDamageFalloffWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuDamageFalloffWidget(Z_Construct_UClass_USBZMainMenuDamageFalloffWidget, &USBZMainMenuDamageFalloffWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuDamageFalloffWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuDamageFalloffWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
