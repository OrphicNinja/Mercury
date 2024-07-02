// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLaserSightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLaserSightComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLaserSightComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLaserSightComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnTelegraphAttackComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZLaserSightComponent::execModifyWeaponRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InOutRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->ModifyWeaponRotation(Z_Param_Out_InOutRotation);
		P_NATIVE_END;
	}
	void USBZLaserSightComponent::StaticRegisterNativesUSBZLaserSightComponent()
	{
		UClass* Class = USBZLaserSightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ModifyWeaponRotation", &USBZLaserSightComponent::execModifyWeaponRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics
	{
		struct SBZLaserSightComponent_eventModifyWeaponRotation_Parms
		{
			FRotator InOutRotation;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOutRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOutRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics::NewProp_InOutRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics::NewProp_InOutRotation = { "InOutRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLaserSightComponent_eventModifyWeaponRotation_Parms, InOutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics::NewProp_InOutRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics::NewProp_InOutRotation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLaserSightComponent_eventModifyWeaponRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics::NewProp_InOutRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLaserSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLaserSightComponent, nullptr, "ModifyWeaponRotation", nullptr, nullptr, sizeof(SBZLaserSightComponent_eventModifyWeaponRotation_Parms), Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLaserSightComponent_NoRegister()
	{
		return USBZLaserSightComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZLaserSightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserEffectComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserEffectComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHorizontalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHorizontalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVerticalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxVerticalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhaseShift_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PhaseShift;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLaserSightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZOnTelegraphAttackComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLaserSightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLaserSightComponent_ModifyWeaponRotation, "ModifyWeaponRotation" }, // 3833839262
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLaserSightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZLaserSightComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLaserSightComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_LaserEffectComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserSightComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLaserSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_LaserEffectComponent = { "LaserEffectComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLaserSightComponent, LaserEffectComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_LaserEffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_LaserEffectComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_FocusTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserSightComponent" },
		{ "ModuleRelativePath", "Public/SBZLaserSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_FocusTime = { "FocusTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLaserSightComponent, FocusTime), METADATA_PARAMS(Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_FocusTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_FocusTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_MaxHorizontalOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserSightComponent" },
		{ "ModuleRelativePath", "Public/SBZLaserSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_MaxHorizontalOffset = { "MaxHorizontalOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLaserSightComponent, MaxHorizontalOffset), METADATA_PARAMS(Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_MaxHorizontalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_MaxHorizontalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_MaxVerticalOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserSightComponent" },
		{ "ModuleRelativePath", "Public/SBZLaserSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_MaxVerticalOffset = { "MaxVerticalOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLaserSightComponent, MaxVerticalOffset), METADATA_PARAMS(Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_MaxVerticalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_MaxVerticalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_HorizontalFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserSightComponent" },
		{ "ModuleRelativePath", "Public/SBZLaserSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_HorizontalFrequency = { "HorizontalFrequency", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLaserSightComponent, HorizontalFrequency), METADATA_PARAMS(Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_HorizontalFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_HorizontalFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_VerticalFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserSightComponent" },
		{ "ModuleRelativePath", "Public/SBZLaserSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_VerticalFrequency = { "VerticalFrequency", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLaserSightComponent, VerticalFrequency), METADATA_PARAMS(Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_VerticalFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_VerticalFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_PhaseShift_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserSightComponent" },
		{ "ModuleRelativePath", "Public/SBZLaserSightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_PhaseShift = { "PhaseShift", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLaserSightComponent, PhaseShift), METADATA_PARAMS(Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_PhaseShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_PhaseShift_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLaserSightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_LaserEffectComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_FocusTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_MaxHorizontalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_MaxVerticalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_HorizontalFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_VerticalFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLaserSightComponent_Statics::NewProp_PhaseShift,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLaserSightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLaserSightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLaserSightComponent_Statics::ClassParams = {
		&USBZLaserSightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZLaserSightComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLaserSightComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLaserSightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLaserSightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLaserSightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLaserSightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLaserSightComponent, 2174478616);
	template<> STARBREEZE_API UClass* StaticClass<USBZLaserSightComponent>()
	{
		return USBZLaserSightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLaserSightComponent(Z_Construct_UClass_USBZLaserSightComponent, &USBZLaserSightComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLaserSightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLaserSightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
