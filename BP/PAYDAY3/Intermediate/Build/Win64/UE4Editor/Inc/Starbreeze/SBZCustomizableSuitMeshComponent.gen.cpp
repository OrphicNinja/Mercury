// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCustomizableSuitMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCustomizableSuitMeshComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCustomizableSuitMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCustomizableSuitMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitConfig();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPlayerCharacterSizeCategory();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCapsuleShadowingData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZCustomizableSuitMeshComponent::execNativeOnSkeletalMeshLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnSkeletalMeshLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCustomizableSuitMeshComponent::execSetSuitConfig)
	{
		P_GET_STRUCT_REF(FSBZSuitConfig,Z_Param_Out_Config);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSuitConfig(Z_Param_Out_Config);
		P_NATIVE_END;
	}
	void USBZCustomizableSuitMeshComponent::StaticRegisterNativesUSBZCustomizableSuitMeshComponent()
	{
		UClass* Class = USBZCustomizableSuitMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeOnSkeletalMeshLoaded", &USBZCustomizableSuitMeshComponent::execNativeOnSkeletalMeshLoaded },
			{ "SetSuitConfig", &USBZCustomizableSuitMeshComponent::execSetSuitConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_NativeOnSkeletalMeshLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_NativeOnSkeletalMeshLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizableSuitMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_NativeOnSkeletalMeshLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizableSuitMeshComponent, nullptr, "NativeOnSkeletalMeshLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_NativeOnSkeletalMeshLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_NativeOnSkeletalMeshLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_NativeOnSkeletalMeshLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_NativeOnSkeletalMeshLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig_Statics
	{
		struct SBZCustomizableSuitMeshComponent_eventSetSuitConfig_Parms
		{
			FSBZSuitConfig Config;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Config;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig_Statics::NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizableSuitMeshComponent_eventSetSuitConfig_Parms, Config), Z_Construct_UScriptStruct_FSBZSuitConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig_Statics::NewProp_Config_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig_Statics::NewProp_Config,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizableSuitMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCustomizableSuitMeshComponent, nullptr, "SetSuitConfig", nullptr, nullptr, sizeof(SBZCustomizableSuitMeshComponent_eventSetSuitConfig_Parms), Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCustomizableSuitMeshComponent_NoRegister()
	{
		return USBZCustomizableSuitMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMeshComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SizeCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SizeCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleShadowingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleShadowingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_NativeOnSkeletalMeshLoaded, "NativeOnSkeletalMeshLoaded" }, // 3612292690
		{ &Z_Construct_UFunction_USBZCustomizableSuitMeshComponent_SetSuitConfig, "SetSuitConfig" }, // 1618794331
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "SBZCustomizableSuitMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCustomizableSuitMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_SuitConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizableSuitMeshComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizableSuitMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_SuitConfig = { "SuitConfig", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCustomizableSuitMeshComponent, SuitConfig), Z_Construct_UScriptStruct_FSBZSuitConfig, METADATA_PARAMS(Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_SuitConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_SuitConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_BodyMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizableSuitMeshComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCustomizableSuitMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_BodyMeshComponent = { "BodyMeshComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCustomizableSuitMeshComponent, BodyMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_BodyMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_BodyMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_SizeCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_SizeCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizableSuitMeshComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizableSuitMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_SizeCategory = { "SizeCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCustomizableSuitMeshComponent, SizeCategory), Z_Construct_UEnum_Starbreeze_EPlayerCharacterSizeCategory, METADATA_PARAMS(Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_SizeCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_SizeCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_CapsuleShadowingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizableSuitMeshComponent" },
		{ "ModuleRelativePath", "Public/SBZCustomizableSuitMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_CapsuleShadowingData = { "CapsuleShadowingData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCustomizableSuitMeshComponent, CapsuleShadowingData), Z_Construct_UClass_USBZCapsuleShadowingData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_CapsuleShadowingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_CapsuleShadowingData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_SuitConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_BodyMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_SizeCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_SizeCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::NewProp_CapsuleShadowingData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCustomizableSuitMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::ClassParams = {
		&USBZCustomizableSuitMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCustomizableSuitMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCustomizableSuitMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCustomizableSuitMeshComponent, 382810614);
	template<> STARBREEZE_API UClass* StaticClass<USBZCustomizableSuitMeshComponent>()
	{
		return USBZCustomizableSuitMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCustomizableSuitMeshComponent(Z_Construct_UClass_USBZCustomizableSuitMeshComponent, &USBZCustomizableSuitMeshComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCustomizableSuitMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCustomizableSuitMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
