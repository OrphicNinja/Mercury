// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnTelegraphAttackComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnTelegraphAttackComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnTelegraphAttackComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnTelegraphAttackComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWeapon_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZOnTelegraphAttackComponent::execOnTelegraphAttackChanged)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_UBOOL(Z_Param_bActivated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTelegraphAttackChanged(Z_Param_InActor,Z_Param_bActivated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnTelegraphAttackComponent::execOnUnequip)
	{
		P_GET_OBJECT(ASBZEquippable,Z_Param_Equippable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnequip(Z_Param_Equippable);
		P_NATIVE_END;
	}
	void USBZOnTelegraphAttackComponent::StaticRegisterNativesUSBZOnTelegraphAttackComponent()
	{
		UClass* Class = USBZOnTelegraphAttackComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTelegraphAttackChanged", &USBZOnTelegraphAttackComponent::execOnTelegraphAttackChanged },
			{ "OnUnequip", &USBZOnTelegraphAttackComponent::execOnUnequip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged_Statics
	{
		struct SBZOnTelegraphAttackComponent_eventOnTelegraphAttackChanged_Parms
		{
			AActor* InActor;
			bool bActivated;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static void NewProp_bActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnTelegraphAttackComponent_eventOnTelegraphAttackChanged_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged_Statics::NewProp_bActivated_SetBit(void* Obj)
	{
		((SBZOnTelegraphAttackComponent_eventOnTelegraphAttackChanged_Parms*)Obj)->bActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged_Statics::NewProp_bActivated = { "bActivated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnTelegraphAttackComponent_eventOnTelegraphAttackChanged_Parms), &Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged_Statics::NewProp_bActivated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged_Statics::NewProp_bActivated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnTelegraphAttackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnTelegraphAttackComponent, nullptr, "OnTelegraphAttackChanged", nullptr, nullptr, sizeof(SBZOnTelegraphAttackComponent_eventOnTelegraphAttackChanged_Parms), Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip_Statics
	{
		struct SBZOnTelegraphAttackComponent_eventOnUnequip_Parms
		{
			const ASBZEquippable* Equippable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Equippable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Equippable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip_Statics::NewProp_Equippable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip_Statics::NewProp_Equippable = { "Equippable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnTelegraphAttackComponent_eventOnUnequip_Parms, Equippable), Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip_Statics::NewProp_Equippable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip_Statics::NewProp_Equippable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip_Statics::NewProp_Equippable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnTelegraphAttackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnTelegraphAttackComponent, nullptr, "OnUnequip", nullptr, nullptr, sizeof(SBZOnTelegraphAttackComponent_eventOnUnequip_Parms), Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZOnTelegraphAttackComponent_NoRegister()
	{
		return USBZOnTelegraphAttackComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnTelegraphAttackChanged, "OnTelegraphAttackChanged" }, // 2836224320
		{ &Z_Construct_UFunction_USBZOnTelegraphAttackComponent_OnUnequip, "OnUnequip" }, // 3376276976
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZOnTelegraphAttackComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOnTelegraphAttackComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::NewProp_Owner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnTelegraphAttackComponent" },
		{ "ModuleRelativePath", "Public/SBZOnTelegraphAttackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnTelegraphAttackComponent, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::NewProp_OwnerWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnTelegraphAttackComponent" },
		{ "ModuleRelativePath", "Public/SBZOnTelegraphAttackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::NewProp_OwnerWeapon = { "OwnerWeapon", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOnTelegraphAttackComponent, OwnerWeapon), Z_Construct_UClass_ASBZWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::NewProp_OwnerWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::NewProp_OwnerWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::NewProp_OwnerWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZOnTelegraphAttackComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::ClassParams = {
		&USBZOnTelegraphAttackComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZOnTelegraphAttackComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZOnTelegraphAttackComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZOnTelegraphAttackComponent, 4117318582);
	template<> STARBREEZE_API UClass* StaticClass<USBZOnTelegraphAttackComponent>()
	{
		return USBZOnTelegraphAttackComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZOnTelegraphAttackComponent(Z_Construct_UClass_USBZOnTelegraphAttackComponent, &USBZOnTelegraphAttackComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZOnTelegraphAttackComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZOnTelegraphAttackComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
