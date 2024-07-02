// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMeleeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMeleeComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionResult();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosive_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMeleeComponent::execMulticast_ReplicateExplosion)
	{
		P_GET_STRUCT(FSBZExplosionResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReplicateExplosion_Implementation(Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMeleeComponent::execMulticast_SetEnforcerSolidNetIDArray)
	{
		P_GET_TARRAY(int32,Z_Param_InEnforcerSolidNetIDArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetEnforcerSolidNetIDArray_Implementation(Z_Param_InEnforcerSolidNetIDArray);
		P_NATIVE_END;
	}
	static FName NAME_USBZMeleeComponent_Multicast_ReplicateExplosion = FName(TEXT("Multicast_ReplicateExplosion"));
	void USBZMeleeComponent::Multicast_ReplicateExplosion(FSBZExplosionResult const& Result)
	{
		SBZMeleeComponent_eventMulticast_ReplicateExplosion_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_USBZMeleeComponent_Multicast_ReplicateExplosion),&Parms);
	}
	static FName NAME_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray = FName(TEXT("Multicast_SetEnforcerSolidNetIDArray"));
	void USBZMeleeComponent::Multicast_SetEnforcerSolidNetIDArray(TArray<int32> const& InEnforcerSolidNetIDArray)
	{
		SBZMeleeComponent_eventMulticast_SetEnforcerSolidNetIDArray_Parms Parms;
		Parms.InEnforcerSolidNetIDArray=InEnforcerSolidNetIDArray;
		ProcessEvent(FindFunctionChecked(NAME_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray),&Parms);
	}
	void USBZMeleeComponent::StaticRegisterNativesUSBZMeleeComponent()
	{
		UClass* Class = USBZMeleeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ReplicateExplosion", &USBZMeleeComponent::execMulticast_ReplicateExplosion },
			{ "Multicast_SetEnforcerSolidNetIDArray", &USBZMeleeComponent::execMulticast_SetEnforcerSolidNetIDArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMeleeComponent_eventMulticast_ReplicateExplosion_Parms, Result), Z_Construct_UScriptStruct_FSBZExplosionResult, METADATA_PARAMS(Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMeleeComponent, nullptr, "Multicast_ReplicateExplosion", nullptr, nullptr, sizeof(SBZMeleeComponent_eventMulticast_ReplicateExplosion_Parms), Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InEnforcerSolidNetIDArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEnforcerSolidNetIDArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InEnforcerSolidNetIDArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics::NewProp_InEnforcerSolidNetIDArray_Inner = { "InEnforcerSolidNetIDArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics::NewProp_InEnforcerSolidNetIDArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics::NewProp_InEnforcerSolidNetIDArray = { "InEnforcerSolidNetIDArray", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMeleeComponent_eventMulticast_SetEnforcerSolidNetIDArray_Parms, InEnforcerSolidNetIDArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics::NewProp_InEnforcerSolidNetIDArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics::NewProp_InEnforcerSolidNetIDArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics::NewProp_InEnforcerSolidNetIDArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics::NewProp_InEnforcerSolidNetIDArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMeleeComponent, nullptr, "Multicast_SetEnforcerSolidNetIDArray", nullptr, nullptr, sizeof(SBZMeleeComponent_eventMulticast_SetEnforcerSolidNetIDArray_Parms), Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMeleeComponent_NoRegister()
	{
		return USBZMeleeComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZMeleeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostDamagePhysicsEffectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostDamagePhysicsEffectData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFriendlyFireAllowedOverride_MetaData[];
#endif
		static void NewProp_bIsFriendlyFireAllowedOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFriendlyFireAllowedOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMeleeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMeleeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMeleeComponent_Multicast_ReplicateExplosion, "Multicast_ReplicateExplosion" }, // 3518976577
		{ &Z_Construct_UFunction_USBZMeleeComponent_Multicast_SetEnforcerSolidNetIDArray, "Multicast_SetEnforcerSolidNetIDArray" }, // 565071201
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZMeleeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMeleeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_OwningCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeComponent" },
		{ "ModuleRelativePath", "Public/SBZMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeComponent, OwningCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_OwningCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_OwningCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_PostDamagePhysicsEffectData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeComponent" },
		{ "ModuleRelativePath", "Public/SBZMeleeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_PostDamagePhysicsEffectData = { "PostDamagePhysicsEffectData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeleeComponent, PostDamagePhysicsEffectData), Z_Construct_UScriptStruct_FSBZExplosivePhysicsEffectData, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_PostDamagePhysicsEffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_PostDamagePhysicsEffectData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_bIsFriendlyFireAllowedOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeleeComponent" },
		{ "ModuleRelativePath", "Public/SBZMeleeComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_bIsFriendlyFireAllowedOverride_SetBit(void* Obj)
	{
		((USBZMeleeComponent*)Obj)->bIsFriendlyFireAllowedOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_bIsFriendlyFireAllowedOverride = { "bIsFriendlyFireAllowedOverride", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMeleeComponent), &Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_bIsFriendlyFireAllowedOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_bIsFriendlyFireAllowedOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_bIsFriendlyFireAllowedOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMeleeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_OwningCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_PostDamagePhysicsEffectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeleeComponent_Statics::NewProp_bIsFriendlyFireAllowedOverride,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZMeleeComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZExplosive_NoRegister, (int32)VTABLE_OFFSET(USBZMeleeComponent, ISBZExplosive), false },
			{ Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister, (int32)VTABLE_OFFSET(USBZMeleeComponent, ISBZHurtReactionDataInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMeleeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMeleeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMeleeComponent_Statics::ClassParams = {
		&USBZMeleeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMeleeComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMeleeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMeleeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMeleeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMeleeComponent, 1355358423);
	template<> STARBREEZE_API UClass* StaticClass<USBZMeleeComponent>()
	{
		return USBZMeleeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMeleeComponent(Z_Construct_UClass_USBZMeleeComponent, &USBZMeleeComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMeleeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMeleeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
