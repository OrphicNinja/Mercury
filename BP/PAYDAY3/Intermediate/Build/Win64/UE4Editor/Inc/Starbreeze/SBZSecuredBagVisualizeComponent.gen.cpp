// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSecuredBagVisualizeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSecuredBagVisualizeComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSecuredBagVisualizeComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSecuredBagVisualizeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagType_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZSecuredBagVisualizeBagAddedSignature__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
// End Cross Module References
	DEFINE_FUNCTION(USBZSecuredBagVisualizeComponent::execAddBagHandle)
	{
		P_GET_STRUCT(FSBZBagHandle,Z_Param_BagHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBagHandle(Z_Param_BagHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecuredBagVisualizeComponent::execMulticast_AddBagType)
	{
		P_GET_OBJECT(USBZBagType,Z_Param_BagType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_AddBagType_Implementation(Z_Param_BagType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSecuredBagVisualizeComponent::execOnRep_BagTypes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BagTypes();
		P_NATIVE_END;
	}
	static FName NAME_USBZSecuredBagVisualizeComponent_Multicast_AddBagType = FName(TEXT("Multicast_AddBagType"));
	void USBZSecuredBagVisualizeComponent::Multicast_AddBagType(const USBZBagType* BagType)
	{
		SBZSecuredBagVisualizeComponent_eventMulticast_AddBagType_Parms Parms;
		Parms.BagType=BagType;
		ProcessEvent(FindFunctionChecked(NAME_USBZSecuredBagVisualizeComponent_Multicast_AddBagType),&Parms);
	}
	void USBZSecuredBagVisualizeComponent::StaticRegisterNativesUSBZSecuredBagVisualizeComponent()
	{
		UClass* Class = USBZSecuredBagVisualizeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBagHandle", &USBZSecuredBagVisualizeComponent::execAddBagHandle },
			{ "Multicast_AddBagType", &USBZSecuredBagVisualizeComponent::execMulticast_AddBagType },
			{ "OnRep_BagTypes", &USBZSecuredBagVisualizeComponent::execOnRep_BagTypes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_AddBagHandle_Statics
	{
		struct SBZSecuredBagVisualizeComponent_eventAddBagHandle_Parms
		{
			FSBZBagHandle BagHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_AddBagHandle_Statics::NewProp_BagHandle = { "BagHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecuredBagVisualizeComponent_eventAddBagHandle_Parms, BagHandle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_AddBagHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_AddBagHandle_Statics::NewProp_BagHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_AddBagHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecuredBagVisualizeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_AddBagHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecuredBagVisualizeComponent, nullptr, "AddBagHandle", nullptr, nullptr, sizeof(SBZSecuredBagVisualizeComponent_eventAddBagHandle_Parms), Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_AddBagHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_AddBagHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_AddBagHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_AddBagHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_AddBagHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_AddBagHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType_Statics::NewProp_BagType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType_Statics::NewProp_BagType = { "BagType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecuredBagVisualizeComponent_eventMulticast_AddBagType_Parms, BagType), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType_Statics::NewProp_BagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType_Statics::NewProp_BagType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType_Statics::NewProp_BagType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecuredBagVisualizeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecuredBagVisualizeComponent, nullptr, "Multicast_AddBagType", nullptr, nullptr, sizeof(SBZSecuredBagVisualizeComponent_eventMulticast_AddBagType_Parms), Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_OnRep_BagTypes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_OnRep_BagTypes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecuredBagVisualizeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_OnRep_BagTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSecuredBagVisualizeComponent, nullptr, "OnRep_BagTypes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_OnRep_BagTypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_OnRep_BagTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_OnRep_BagTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_OnRep_BagTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSecuredBagVisualizeComponent_NoRegister()
	{
		return USBZSecuredBagVisualizeComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBagAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBagAdded;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BagTypes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocationArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnLocationArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_AddBagHandle, "AddBagHandle" }, // 3065471690
		{ &Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_Multicast_AddBagType, "Multicast_AddBagType" }, // 756785583
		{ &Z_Construct_UFunction_USBZSecuredBagVisualizeComponent_OnRep_BagTypes, "OnRep_BagTypes" }, // 1751049553
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZSecuredBagVisualizeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSecuredBagVisualizeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_OnBagAdded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecuredBagVisualizeComponent" },
		{ "ModuleRelativePath", "Public/SBZSecuredBagVisualizeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_OnBagAdded = { "OnBagAdded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSecuredBagVisualizeComponent, OnBagAdded), Z_Construct_UDelegateFunction_Starbreeze_SBZSecuredBagVisualizeBagAddedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_OnBagAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_OnBagAdded_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_BagTypes_Inner = { "BagTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_BagTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecuredBagVisualizeComponent" },
		{ "ModuleRelativePath", "Public/SBZSecuredBagVisualizeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_BagTypes = { "BagTypes", "OnRep_BagTypes", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSecuredBagVisualizeComponent, BagTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_BagTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_BagTypes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_SpawnLocationArray_Inner = { "SpawnLocationArray", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_SpawnLocationArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecuredBagVisualizeComponent" },
		{ "ModuleRelativePath", "Public/SBZSecuredBagVisualizeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_SpawnLocationArray = { "SpawnLocationArray", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSecuredBagVisualizeComponent, SpawnLocationArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_SpawnLocationArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_SpawnLocationArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_OnBagAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_BagTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_BagTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_SpawnLocationArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::NewProp_SpawnLocationArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSecuredBagVisualizeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::ClassParams = {
		&USBZSecuredBagVisualizeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSecuredBagVisualizeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSecuredBagVisualizeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSecuredBagVisualizeComponent, 64389986);
	template<> STARBREEZE_API UClass* StaticClass<USBZSecuredBagVisualizeComponent>()
	{
		return USBZSecuredBagVisualizeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSecuredBagVisualizeComponent(Z_Construct_UClass_USBZSecuredBagVisualizeComponent, &USBZSecuredBagVisualizeComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSecuredBagVisualizeComponent"), false, nullptr, nullptr, nullptr);

	void USBZSecuredBagVisualizeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_BagTypes(TEXT("BagTypes"));

		const bool bIsValid = true
			&& Name_BagTypes == ClassReps[(int32)ENetFields_Private::BagTypes].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZSecuredBagVisualizeComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSecuredBagVisualizeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
