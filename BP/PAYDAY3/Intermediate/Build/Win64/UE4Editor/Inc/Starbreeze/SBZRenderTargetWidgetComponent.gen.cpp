// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRenderTargetWidgetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRenderTargetWidgetComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRenderTargetWidgetComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRenderTargetWidgetComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZRenderTargetWidgetComponent::execGetUserWidgetInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetUserWidgetInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZRenderTargetWidgetComponent::execSetWidgetAsTextureParameter)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Target);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetAsTextureParameter(Z_Param_Target,Z_Param_Out_ParameterName);
		P_NATIVE_END;
	}
	void USBZRenderTargetWidgetComponent::StaticRegisterNativesUSBZRenderTargetWidgetComponent()
	{
		UClass* Class = USBZRenderTargetWidgetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUserWidgetInitialized", &USBZRenderTargetWidgetComponent::execGetUserWidgetInitialized },
			{ "SetWidgetAsTextureParameter", &USBZRenderTargetWidgetComponent::execSetWidgetAsTextureParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized_Statics
	{
		struct SBZRenderTargetWidgetComponent_eventGetUserWidgetInitialized_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRenderTargetWidgetComponent_eventGetUserWidgetInitialized_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRenderTargetWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRenderTargetWidgetComponent, nullptr, "GetUserWidgetInitialized", nullptr, nullptr, sizeof(SBZRenderTargetWidgetComponent_eventGetUserWidgetInitialized_Parms), Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics
	{
		struct SBZRenderTargetWidgetComponent_eventSetWidgetAsTextureParameter_Parms
		{
			UMaterialInstanceDynamic* Target;
			FName ParameterName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRenderTargetWidgetComponent_eventSetWidgetAsTextureParameter_Parms, Target), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRenderTargetWidgetComponent_eventSetWidgetAsTextureParameter_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRenderTargetWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRenderTargetWidgetComponent, nullptr, "SetWidgetAsTextureParameter", nullptr, nullptr, sizeof(SBZRenderTargetWidgetComponent_eventSetWidgetAsTextureParameter_Parms), Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZRenderTargetWidgetComponent_NoRegister()
	{
		return USBZRenderTargetWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZRenderTargetWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRenderTargetWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZRenderTargetWidgetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZRenderTargetWidgetComponent_GetUserWidgetInitialized, "GetUserWidgetInitialized" }, // 1387755029
		{ &Z_Construct_UFunction_USBZRenderTargetWidgetComponent_SetWidgetAsTextureParameter, "SetWidgetAsTextureParameter" }, // 1157174989
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRenderTargetWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "SBZRenderTargetWidgetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRenderTargetWidgetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRenderTargetWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRenderTargetWidgetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRenderTargetWidgetComponent_Statics::ClassParams = {
		&USBZRenderTargetWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZRenderTargetWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRenderTargetWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRenderTargetWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRenderTargetWidgetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRenderTargetWidgetComponent, 435498549);
	template<> STARBREEZE_API UClass* StaticClass<USBZRenderTargetWidgetComponent>()
	{
		return USBZRenderTargetWidgetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRenderTargetWidgetComponent(Z_Construct_UClass_USBZRenderTargetWidgetComponent, &USBZRenderTargetWidgetComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRenderTargetWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRenderTargetWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
