// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCustomizationRotateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCustomizationRotateComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCustomizationRotateComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCustomizationRotateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	void USBZCustomizationRotateComponent::StaticRegisterNativesUSBZCustomizationRotateComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZCustomizationRotateComponent_NoRegister()
	{
		return USBZCustomizationRotateComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZCustomizationRotateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanRotateYaw_MetaData[];
#endif
		static void NewProp_CanRotateYaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanRotateYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanRotatePitch_MetaData[];
#endif
		static void NewProp_CanRotatePitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanRotatePitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationYawSpeedRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationYawSpeedRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationYawMaxDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationYawMaxDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationYawSpeedRateKeyboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationYawSpeedRateKeyboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationYawSpeedRateStick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationYawSpeedRateStick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRollSpeedRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRollSpeedRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRollMaxDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRollMaxDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRollSpeedRateKeyboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRollSpeedRateKeyboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRollSpeedRateStick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRollSpeedRateStick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRollLimitMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRollLimitMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRollLimitMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRollLimitMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoundController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoundController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZCustomizationRotateComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCustomizationRotateComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_CanRotateYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationRotateComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizationRotateComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_CanRotateYaw_SetBit(void* Obj)
	{
		((USBZCustomizationRotateComponent*)Obj)->CanRotateYaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_CanRotateYaw = { "CanRotateYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCustomizationRotateComponent), &Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_CanRotateYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_CanRotateYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_CanRotateYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_CanRotatePitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationRotateComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizationRotateComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_CanRotatePitch_SetBit(void* Obj)
	{
		((USBZCustomizationRotateComponent*)Obj)->CanRotatePitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_CanRotatePitch = { "CanRotatePitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCustomizationRotateComponent), &Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_CanRotatePitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_CanRotatePitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_CanRotatePitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawSpeedRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationRotateComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizationRotateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawSpeedRate = { "RotationYawSpeedRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCustomizationRotateComponent, RotationYawSpeedRate), METADATA_PARAMS(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawSpeedRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawSpeedRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawMaxDelta_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationRotateComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizationRotateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawMaxDelta = { "RotationYawMaxDelta", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCustomizationRotateComponent, RotationYawMaxDelta), METADATA_PARAMS(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawMaxDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawMaxDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawSpeedRateKeyboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationRotateComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizationRotateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawSpeedRateKeyboard = { "RotationYawSpeedRateKeyboard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCustomizationRotateComponent, RotationYawSpeedRateKeyboard), METADATA_PARAMS(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawSpeedRateKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawSpeedRateKeyboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawSpeedRateStick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationRotateComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizationRotateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawSpeedRateStick = { "RotationYawSpeedRateStick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCustomizationRotateComponent, RotationYawSpeedRateStick), METADATA_PARAMS(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawSpeedRateStick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawSpeedRateStick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollSpeedRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationRotateComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizationRotateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollSpeedRate = { "RotationRollSpeedRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCustomizationRotateComponent, RotationRollSpeedRate), METADATA_PARAMS(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollSpeedRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollSpeedRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollMaxDelta_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationRotateComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizationRotateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollMaxDelta = { "RotationRollMaxDelta", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCustomizationRotateComponent, RotationRollMaxDelta), METADATA_PARAMS(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollMaxDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollMaxDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollSpeedRateKeyboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationRotateComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizationRotateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollSpeedRateKeyboard = { "RotationRollSpeedRateKeyboard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCustomizationRotateComponent, RotationRollSpeedRateKeyboard), METADATA_PARAMS(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollSpeedRateKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollSpeedRateKeyboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollSpeedRateStick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationRotateComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizationRotateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollSpeedRateStick = { "RotationRollSpeedRateStick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCustomizationRotateComponent, RotationRollSpeedRateStick), METADATA_PARAMS(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollSpeedRateStick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollSpeedRateStick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollLimitMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationRotateComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizationRotateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollLimitMin = { "RotationRollLimitMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCustomizationRotateComponent, RotationRollLimitMin), METADATA_PARAMS(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollLimitMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollLimitMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollLimitMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationRotateComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizationRotateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollLimitMax = { "RotationRollLimitMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCustomizationRotateComponent, RotationRollLimitMax), METADATA_PARAMS(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollLimitMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollLimitMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_FoundController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationRotateComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizationRotateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_FoundController = { "FoundController", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCustomizationRotateComponent, FoundController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_FoundController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_FoundController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_CanRotateYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_CanRotatePitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawSpeedRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawMaxDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawSpeedRateKeyboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationYawSpeedRateStick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollSpeedRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollMaxDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollSpeedRateKeyboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollSpeedRateStick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollLimitMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_RotationRollLimitMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::NewProp_FoundController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCustomizationRotateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::ClassParams = {
		&USBZCustomizationRotateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCustomizationRotateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCustomizationRotateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCustomizationRotateComponent, 668860788);
	template<> STARBREEZE_API UClass* StaticClass<USBZCustomizationRotateComponent>()
	{
		return USBZCustomizationRotateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCustomizationRotateComponent(Z_Construct_UClass_USBZCustomizationRotateComponent, &USBZCustomizationRotateComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCustomizationRotateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCustomizationRotateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
