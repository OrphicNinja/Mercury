// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAlertnessDataComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAlertnessDataComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	DEFINE_FUNCTION(UDEPRECATED_SBZAlertnessDataComponent::execMulticast_SetAlertState)
	{
		P_GET_PROPERTY(FInt8Property,Z_Param_RepAlertState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetAlertState_Implementation(Z_Param_RepAlertState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_SBZAlertnessDataComponent::execOnRep_AlertState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AlertState();
		P_NATIVE_END;
	}
	static FName NAME_UDEPRECATED_SBZAlertnessDataComponent_Multicast_SetAlertState = FName(TEXT("Multicast_SetAlertState"));
	void UDEPRECATED_SBZAlertnessDataComponent::Multicast_SetAlertState(int8 RepAlertState)
	{
		SBZAlertnessDataComponent_eventMulticast_SetAlertState_Parms Parms;
		Parms.RepAlertState=RepAlertState;
		ProcessEvent(FindFunctionChecked(NAME_UDEPRECATED_SBZAlertnessDataComponent_Multicast_SetAlertState),&Parms);
	}
	void UDEPRECATED_SBZAlertnessDataComponent::StaticRegisterNativesUDEPRECATED_SBZAlertnessDataComponent()
	{
		UClass* Class = UDEPRECATED_SBZAlertnessDataComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetAlertState", &UDEPRECATED_SBZAlertnessDataComponent::execMulticast_SetAlertState },
			{ "OnRep_AlertState", &UDEPRECATED_SBZAlertnessDataComponent::execOnRep_AlertState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_Multicast_SetAlertState_Statics
	{
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_RepAlertState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_Multicast_SetAlertState_Statics::NewProp_RepAlertState = { "RepAlertState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAlertnessDataComponent_eventMulticast_SetAlertState_Parms, RepAlertState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_Multicast_SetAlertState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_Multicast_SetAlertState_Statics::NewProp_RepAlertState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_Multicast_SetAlertState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAlertnessDataComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_Multicast_SetAlertState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent, nullptr, "Multicast_SetAlertState", nullptr, nullptr, sizeof(SBZAlertnessDataComponent_eventMulticast_SetAlertState_Parms), Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_Multicast_SetAlertState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_Multicast_SetAlertState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_Multicast_SetAlertState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_Multicast_SetAlertState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_Multicast_SetAlertState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_Multicast_SetAlertState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_OnRep_AlertState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_OnRep_AlertState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAlertnessDataComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_OnRep_AlertState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent, nullptr, "OnRep_AlertState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_OnRep_AlertState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_OnRep_AlertState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_OnRep_AlertState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_OnRep_AlertState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_NoRegister()
	{
		return UDEPRECATED_SBZAlertnessDataComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlertState_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_AlertState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlertMarkerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlertMarkerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MarkerSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightDetectionCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SightDetectionCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_Multicast_SetAlertState, "Multicast_SetAlertState" }, // 1521007700
		{ &Z_Construct_UFunction_UDEPRECATED_SBZAlertnessDataComponent_OnRep_AlertState, "OnRep_AlertState" }, // 1129512405
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAlertnessDataComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAlertnessDataComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_AlertState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAlertnessDataComponent" },
		{ "ModuleRelativePath", "Public/SBZAlertnessDataComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_AlertState = { "AlertState", "OnRep_AlertState", (EPropertyFlags)0x0040000100002021, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_SBZAlertnessDataComponent, AlertState), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_AlertState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_AlertState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_AlertMarkerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAlertnessDataComponent" },
		{ "ModuleRelativePath", "Public/SBZAlertnessDataComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_AlertMarkerAsset = { "AlertMarkerAsset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_SBZAlertnessDataComponent, AlertMarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_AlertMarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_AlertMarkerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_MarkerOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAlertnessDataComponent" },
		{ "ModuleRelativePath", "Public/SBZAlertnessDataComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_MarkerOffset = { "MarkerOffset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_SBZAlertnessDataComponent, MarkerOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_MarkerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_MarkerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_MarkerSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAlertnessDataComponent" },
		{ "ModuleRelativePath", "Public/SBZAlertnessDataComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_MarkerSocketName = { "MarkerSocketName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_SBZAlertnessDataComponent, MarkerSocketName), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_MarkerSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_MarkerSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_Component_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAlertnessDataComponent" },
		{ "ModuleRelativePath", "Public/SBZAlertnessDataComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0040008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_SBZAlertnessDataComponent, Component), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_SightDetectionCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAlertnessDataComponent" },
		{ "ModuleRelativePath", "Public/SBZAlertnessDataComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_SightDetectionCurve = { "SightDetectionCurve", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_SBZAlertnessDataComponent, SightDetectionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_SightDetectionCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_SightDetectionCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_AlertState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_AlertMarkerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_MarkerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_MarkerSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::NewProp_SightDetectionCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_SBZAlertnessDataComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::ClassParams = {
		&UDEPRECATED_SBZAlertnessDataComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::PropPointers),
		0,
		0x02A002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_SBZAlertnessDataComponent, 3928657306);
	template<> STARBREEZE_API UClass* StaticClass<UDEPRECATED_SBZAlertnessDataComponent>()
	{
		return UDEPRECATED_SBZAlertnessDataComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_SBZAlertnessDataComponent(Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent, &UDEPRECATED_SBZAlertnessDataComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UDEPRECATED_SBZAlertnessDataComponent"), false, nullptr, nullptr, nullptr);

	void UDEPRECATED_SBZAlertnessDataComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AlertState(TEXT("AlertState"));

		const bool bIsValid = true
			&& Name_AlertState == ClassReps[(int32)ENetFields_Private::AlertState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDEPRECATED_SBZAlertnessDataComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_SBZAlertnessDataComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
