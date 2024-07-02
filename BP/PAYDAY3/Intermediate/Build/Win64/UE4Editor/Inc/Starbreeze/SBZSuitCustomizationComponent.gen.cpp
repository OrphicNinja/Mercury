// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitCustomizationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitCustomizationComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitCustomizationComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitCustomizationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitConfig();
// End Cross Module References
	DEFINE_FUNCTION(USBZSuitCustomizationComponent::execNativeOnSkeletalMeshLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnSkeletalMeshLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSuitCustomizationComponent::execSetMeshComponent)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InMeshCompoenent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshComponent(Z_Param_InMeshCompoenent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSuitCustomizationComponent::execSetSuitConfig)
	{
		P_GET_STRUCT_REF(FSBZSuitConfig,Z_Param_Out_Config);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSuitConfig(Z_Param_Out_Config);
		P_NATIVE_END;
	}
	void USBZSuitCustomizationComponent::StaticRegisterNativesUSBZSuitCustomizationComponent()
	{
		UClass* Class = USBZSuitCustomizationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeOnSkeletalMeshLoaded", &USBZSuitCustomizationComponent::execNativeOnSkeletalMeshLoaded },
			{ "SetMeshComponent", &USBZSuitCustomizationComponent::execSetMeshComponent },
			{ "SetSuitConfig", &USBZSuitCustomizationComponent::execSetSuitConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSuitCustomizationComponent_NativeOnSkeletalMeshLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSuitCustomizationComponent_NativeOnSkeletalMeshLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSuitCustomizationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSuitCustomizationComponent_NativeOnSkeletalMeshLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSuitCustomizationComponent, nullptr, "NativeOnSkeletalMeshLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSuitCustomizationComponent_NativeOnSkeletalMeshLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSuitCustomizationComponent_NativeOnSkeletalMeshLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSuitCustomizationComponent_NativeOnSkeletalMeshLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSuitCustomizationComponent_NativeOnSkeletalMeshLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent_Statics
	{
		struct SBZSuitCustomizationComponent_eventSetMeshComponent_Parms
		{
			USkeletalMeshComponent* InMeshCompoenent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMeshCompoenent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMeshCompoenent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent_Statics::NewProp_InMeshCompoenent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent_Statics::NewProp_InMeshCompoenent = { "InMeshCompoenent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSuitCustomizationComponent_eventSetMeshComponent_Parms, InMeshCompoenent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent_Statics::NewProp_InMeshCompoenent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent_Statics::NewProp_InMeshCompoenent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent_Statics::NewProp_InMeshCompoenent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSuitCustomizationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSuitCustomizationComponent, nullptr, "SetMeshComponent", nullptr, nullptr, sizeof(SBZSuitCustomizationComponent_eventSetMeshComponent_Parms), Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig_Statics
	{
		struct SBZSuitCustomizationComponent_eventSetSuitConfig_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig_Statics::NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSuitCustomizationComponent_eventSetSuitConfig_Parms, Config), Z_Construct_UScriptStruct_FSBZSuitConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig_Statics::NewProp_Config_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig_Statics::NewProp_Config,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSuitCustomizationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSuitCustomizationComponent, nullptr, "SetSuitConfig", nullptr, nullptr, sizeof(SBZSuitCustomizationComponent_eventSetSuitConfig_Parms), Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSuitCustomizationComponent_NoRegister()
	{
		return USBZSuitCustomizationComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZSuitCustomizationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSuitCustomizationComponent_NativeOnSkeletalMeshLoaded, "NativeOnSkeletalMeshLoaded" }, // 1147536421
		{ &Z_Construct_UFunction_USBZSuitCustomizationComponent_SetMeshComponent, "SetMeshComponent" }, // 4066243767
		{ &Z_Construct_UFunction_USBZSuitCustomizationComponent_SetSuitConfig, "SetSuitConfig" }, // 4114735568
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZSuitCustomizationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitCustomizationComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitCustomizationComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitCustomizationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSuitCustomizationComponent, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::NewProp_SuitConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitCustomizationComponent" },
		{ "ModuleRelativePath", "Public/SBZSuitCustomizationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::NewProp_SuitConfig = { "SuitConfig", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSuitCustomizationComponent, SuitConfig), Z_Construct_UScriptStruct_FSBZSuitConfig, METADATA_PARAMS(Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::NewProp_SuitConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::NewProp_SuitConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::NewProp_SuitConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSuitCustomizationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::ClassParams = {
		&USBZSuitCustomizationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSuitCustomizationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSuitCustomizationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSuitCustomizationComponent, 4259430676);
	template<> STARBREEZE_API UClass* StaticClass<USBZSuitCustomizationComponent>()
	{
		return USBZSuitCustomizationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSuitCustomizationComponent(Z_Construct_UClass_USBZSuitCustomizationComponent, &USBZSuitCustomizationComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSuitCustomizationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSuitCustomizationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
