// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMarkerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMarkerComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMarkerState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMarkerComponent::execMulticast_SetMarkerState)
	{
		P_GET_ENUM(ESBZMarkerState,Z_Param_RepMarkerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetMarkerState_Implementation(ESBZMarkerState(Z_Param_RepMarkerState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMarkerComponent::execOnRep_MarkerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MarkerState();
		P_NATIVE_END;
	}
	static FName NAME_USBZMarkerComponent_Multicast_SetMarkerState = FName(TEXT("Multicast_SetMarkerState"));
	void USBZMarkerComponent::Multicast_SetMarkerState(ESBZMarkerState RepMarkerState)
	{
		SBZMarkerComponent_eventMulticast_SetMarkerState_Parms Parms;
		Parms.RepMarkerState=RepMarkerState;
		ProcessEvent(FindFunctionChecked(NAME_USBZMarkerComponent_Multicast_SetMarkerState),&Parms);
	}
	void USBZMarkerComponent::StaticRegisterNativesUSBZMarkerComponent()
	{
		UClass* Class = USBZMarkerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetMarkerState", &USBZMarkerComponent::execMulticast_SetMarkerState },
			{ "OnRep_MarkerState", &USBZMarkerComponent::execOnRep_MarkerState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMarkerComponent_Multicast_SetMarkerState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RepMarkerState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RepMarkerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMarkerComponent_Multicast_SetMarkerState_Statics::NewProp_RepMarkerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMarkerComponent_Multicast_SetMarkerState_Statics::NewProp_RepMarkerState = { "RepMarkerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerComponent_eventMulticast_SetMarkerState_Parms, RepMarkerState), Z_Construct_UEnum_Starbreeze_ESBZMarkerState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMarkerComponent_Multicast_SetMarkerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerComponent_Multicast_SetMarkerState_Statics::NewProp_RepMarkerState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerComponent_Multicast_SetMarkerState_Statics::NewProp_RepMarkerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMarkerComponent_Multicast_SetMarkerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMarkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMarkerComponent_Multicast_SetMarkerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMarkerComponent, nullptr, "Multicast_SetMarkerState", nullptr, nullptr, sizeof(SBZMarkerComponent_eventMulticast_SetMarkerState_Parms), Z_Construct_UFunction_USBZMarkerComponent_Multicast_SetMarkerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerComponent_Multicast_SetMarkerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMarkerComponent_Multicast_SetMarkerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerComponent_Multicast_SetMarkerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMarkerComponent_Multicast_SetMarkerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMarkerComponent_Multicast_SetMarkerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMarkerComponent_OnRep_MarkerState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMarkerComponent_OnRep_MarkerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMarkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMarkerComponent_OnRep_MarkerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMarkerComponent, nullptr, "OnRep_MarkerState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMarkerComponent_OnRep_MarkerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerComponent_OnRep_MarkerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMarkerComponent_OnRep_MarkerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMarkerComponent_OnRep_MarkerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMarkerComponent_NoRegister()
	{
		return USBZMarkerComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZMarkerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MarkerPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MarkerSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachComponentSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachComponentSelector;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MarkerState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MarkerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMarkerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMarkerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMarkerComponent_Multicast_SetMarkerState, "Multicast_SetMarkerState" }, // 528216716
		{ &Z_Construct_UFunction_USBZMarkerComponent_OnRep_MarkerState, "OnRep_MarkerState" }, // 4182688314
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZMarkerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMarkerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerComponent" },
		{ "ModuleRelativePath", "Public/SBZMarkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerAssets = { "MarkerAssets", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(MarkerAssets, USBZMarkerComponent), STRUCT_OFFSET(USBZMarkerComponent, MarkerAssets), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerComponent" },
		{ "ModuleRelativePath", "Public/SBZMarkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerPriority = { "MarkerPriority", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(MarkerPriority, USBZMarkerComponent), STRUCT_OFFSET(USBZMarkerComponent, MarkerPriority), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerComponent" },
		{ "ModuleRelativePath", "Public/SBZMarkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerOffset = { "MarkerOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerComponent, MarkerOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerComponent" },
		{ "ModuleRelativePath", "Public/SBZMarkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerSocketName = { "MarkerSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerComponent, MarkerSocketName), METADATA_PARAMS(Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_AttachComponentSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerComponent" },
		{ "ModuleRelativePath", "Public/SBZMarkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_AttachComponentSelector = { "AttachComponentSelector", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerComponent, AttachComponentSelector), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_AttachComponentSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_AttachComponentSelector_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerComponent" },
		{ "ModuleRelativePath", "Public/SBZMarkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerState = { "MarkerState", "OnRep_MarkerState", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerComponent, MarkerState), Z_Construct_UEnum_Starbreeze_ESBZMarkerState, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_AttachComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMarkerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_AttachComponent = { "AttachComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerComponent, AttachComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_AttachComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_AttachComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMarkerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_AttachComponentSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_MarkerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerComponent_Statics::NewProp_AttachComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMarkerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMarkerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMarkerComponent_Statics::ClassParams = {
		&USBZMarkerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMarkerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMarkerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMarkerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMarkerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMarkerComponent, 206413920);
	template<> STARBREEZE_API UClass* StaticClass<USBZMarkerComponent>()
	{
		return USBZMarkerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMarkerComponent(Z_Construct_UClass_USBZMarkerComponent, &USBZMarkerComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMarkerComponent"), false, nullptr, nullptr, nullptr);

	void USBZMarkerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MarkerState(TEXT("MarkerState"));

		const bool bIsValid = true
			&& Name_MarkerState == ClassReps[(int32)ENetFields_Private::MarkerState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZMarkerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMarkerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
