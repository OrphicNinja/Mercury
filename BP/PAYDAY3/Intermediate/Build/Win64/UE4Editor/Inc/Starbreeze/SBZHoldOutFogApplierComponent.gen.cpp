// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutFogApplierComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutFogApplierComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutFogApplierComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutFogApplierComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings();
	ENGINE_API UClass* Z_Construct_UClass_AExponentialHeightFog_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZHoldOutFogApplierComponent::execMultiCast_ReplicateFogSettings)
	{
		P_GET_STRUCT(FSBZHoldOutDroneFogSettings,Z_Param_FogSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MultiCast_ReplicateFogSettings_Implementation(Z_Param_FogSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHoldOutFogApplierComponent::execOnRep_FogSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_FogSettings();
		P_NATIVE_END;
	}
	static FName NAME_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings = FName(TEXT("MultiCast_ReplicateFogSettings"));
	void USBZHoldOutFogApplierComponent::MultiCast_ReplicateFogSettings(FSBZHoldOutDroneFogSettings const& FogSettings)
	{
		SBZHoldOutFogApplierComponent_eventMultiCast_ReplicateFogSettings_Parms Parms;
		Parms.FogSettings=FogSettings;
		ProcessEvent(FindFunctionChecked(NAME_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings),&Parms);
	}
	void USBZHoldOutFogApplierComponent::StaticRegisterNativesUSBZHoldOutFogApplierComponent()
	{
		UClass* Class = USBZHoldOutFogApplierComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MultiCast_ReplicateFogSettings", &USBZHoldOutFogApplierComponent::execMultiCast_ReplicateFogSettings },
			{ "OnRep_FogSettings", &USBZHoldOutFogApplierComponent::execOnRep_FogSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FogSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings_Statics::NewProp_FogSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings_Statics::NewProp_FogSettings = { "FogSettings", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutFogApplierComponent_eventMultiCast_ReplicateFogSettings_Parms, FogSettings), Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings_Statics::NewProp_FogSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings_Statics::NewProp_FogSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings_Statics::NewProp_FogSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutFogApplierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutFogApplierComponent, nullptr, "MultiCast_ReplicateFogSettings", nullptr, nullptr, sizeof(SBZHoldOutFogApplierComponent_eventMultiCast_ReplicateFogSettings_Parms), Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHoldOutFogApplierComponent_OnRep_FogSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutFogApplierComponent_OnRep_FogSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutFogApplierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutFogApplierComponent_OnRep_FogSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutFogApplierComponent, nullptr, "OnRep_FogSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutFogApplierComponent_OnRep_FogSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutFogApplierComponent_OnRep_FogSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutFogApplierComponent_OnRep_FogSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutFogApplierComponent_OnRep_FogSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHoldOutFogApplierComponent_NoRegister()
	{
		return USBZHoldOutFogApplierComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalFogSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalFogSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedFogSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedFogSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFogSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultFogSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FogActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHoldOutFogApplierComponent_MultiCast_ReplicateFogSettings, "MultiCast_ReplicateFogSettings" }, // 1241854344
		{ &Z_Construct_UFunction_USBZHoldOutFogApplierComponent_OnRep_FogSettings, "OnRep_FogSettings" }, // 835589725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZHoldOutFogApplierComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutFogApplierComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_LocalFogSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutFogApplierComponent" },
		{ "ModuleRelativePath", "Public/SBZHoldOutFogApplierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_LocalFogSettings = { "LocalFogSettings", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutFogApplierComponent, LocalFogSettings), Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_LocalFogSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_LocalFogSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_ReplicatedFogSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutFogApplierComponent" },
		{ "ModuleRelativePath", "Public/SBZHoldOutFogApplierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_ReplicatedFogSettings = { "ReplicatedFogSettings", "OnRep_FogSettings", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutFogApplierComponent, ReplicatedFogSettings), Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_ReplicatedFogSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_ReplicatedFogSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_DefaultFogSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutFogApplierComponent" },
		{ "ModuleRelativePath", "Public/SBZHoldOutFogApplierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_DefaultFogSettings = { "DefaultFogSettings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutFogApplierComponent, DefaultFogSettings), Z_Construct_UScriptStruct_FSBZHoldOutDroneFogSettings, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_DefaultFogSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_DefaultFogSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_FogActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutFogApplierComponent" },
		{ "ModuleRelativePath", "Public/SBZHoldOutFogApplierComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_FogActor = { "FogActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutFogApplierComponent, FogActor), Z_Construct_UClass_AExponentialHeightFog_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_FogActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_FogActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_LocalFogSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_ReplicatedFogSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_DefaultFogSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::NewProp_FogActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHoldOutFogApplierComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::ClassParams = {
		&USBZHoldOutFogApplierComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHoldOutFogApplierComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHoldOutFogApplierComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHoldOutFogApplierComponent, 4060803892);
	template<> STARBREEZE_API UClass* StaticClass<USBZHoldOutFogApplierComponent>()
	{
		return USBZHoldOutFogApplierComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHoldOutFogApplierComponent(Z_Construct_UClass_USBZHoldOutFogApplierComponent, &USBZHoldOutFogApplierComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHoldOutFogApplierComponent"), false, nullptr, nullptr, nullptr);

	void USBZHoldOutFogApplierComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedFogSettings(TEXT("ReplicatedFogSettings"));

		const bool bIsValid = true
			&& Name_ReplicatedFogSettings == ClassReps[(int32)ENetFields_Private::ReplicatedFogSettings].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZHoldOutFogApplierComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHoldOutFogApplierComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
