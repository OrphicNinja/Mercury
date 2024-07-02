// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAcousticPortalConnectorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAcousticPortalConnectorComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAcousticPortalConnectorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAcousticPortalConnectorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAkAcousticPortal_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAcousticPortalConnectorComponent::execSetPortalOpenState)
	{
		P_GET_UBOOL(Z_Param_bIsOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPortalOpenState(Z_Param_bIsOpen);
		P_NATIVE_END;
	}
	void USBZAcousticPortalConnectorComponent::StaticRegisterNativesUSBZAcousticPortalConnectorComponent()
	{
		UClass* Class = USBZAcousticPortalConnectorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPortalOpenState", &USBZAcousticPortalConnectorComponent::execSetPortalOpenState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAcousticPortalConnectorComponent_SetPortalOpenState_Statics
	{
		struct SBZAcousticPortalConnectorComponent_eventSetPortalOpenState_Parms
		{
			bool bIsOpen;
		};
		static void NewProp_bIsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZAcousticPortalConnectorComponent_SetPortalOpenState_Statics::NewProp_bIsOpen_SetBit(void* Obj)
	{
		((SBZAcousticPortalConnectorComponent_eventSetPortalOpenState_Parms*)Obj)->bIsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAcousticPortalConnectorComponent_SetPortalOpenState_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAcousticPortalConnectorComponent_eventSetPortalOpenState_Parms), &Z_Construct_UFunction_USBZAcousticPortalConnectorComponent_SetPortalOpenState_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAcousticPortalConnectorComponent_SetPortalOpenState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAcousticPortalConnectorComponent_SetPortalOpenState_Statics::NewProp_bIsOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAcousticPortalConnectorComponent_SetPortalOpenState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAcousticPortalConnectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAcousticPortalConnectorComponent_SetPortalOpenState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAcousticPortalConnectorComponent, nullptr, "SetPortalOpenState", nullptr, nullptr, sizeof(SBZAcousticPortalConnectorComponent_eventSetPortalOpenState_Parms), Z_Construct_UFunction_USBZAcousticPortalConnectorComponent_SetPortalOpenState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAcousticPortalConnectorComponent_SetPortalOpenState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAcousticPortalConnectorComponent_SetPortalOpenState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAcousticPortalConnectorComponent_SetPortalOpenState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAcousticPortalConnectorComponent_SetPortalOpenState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAcousticPortalConnectorComponent_SetPortalOpenState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAcousticPortalConnectorComponent_NoRegister()
	{
		return USBZAcousticPortalConnectorComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedPortal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectedPortal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAcousticPortalConnectorComponent_SetPortalOpenState, "SetPortalOpenState" }, // 3003875574
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAcousticPortalConnectorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAcousticPortalConnectorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::NewProp_ConnectedPortal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAcousticPortalConnectorComponent" },
		{ "ModuleRelativePath", "Public/SBZAcousticPortalConnectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::NewProp_ConnectedPortal = { "ConnectedPortal", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAcousticPortalConnectorComponent, ConnectedPortal), Z_Construct_UClass_ASBZAkAcousticPortal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::NewProp_ConnectedPortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::NewProp_ConnectedPortal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::NewProp_ConnectedPortal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAcousticPortalConnectorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::ClassParams = {
		&USBZAcousticPortalConnectorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAcousticPortalConnectorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAcousticPortalConnectorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAcousticPortalConnectorComponent, 2619718144);
	template<> STARBREEZE_API UClass* StaticClass<USBZAcousticPortalConnectorComponent>()
	{
		return USBZAcousticPortalConnectorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAcousticPortalConnectorComponent(Z_Construct_UClass_USBZAcousticPortalConnectorComponent, &USBZAcousticPortalConnectorComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAcousticPortalConnectorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAcousticPortalConnectorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
