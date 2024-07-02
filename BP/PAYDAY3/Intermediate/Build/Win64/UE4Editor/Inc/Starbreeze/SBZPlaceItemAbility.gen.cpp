// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceItemAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceItemAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceItemAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceItemAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableCharges_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZPlaceItemAbility::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	void USBZPlaceItemAbility::StaticRegisterNativesUSBZPlaceItemAbility()
	{
		UClass* Class = USBZPlaceItemAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Tick", &USBZPlaceItemAbility::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPlaceItemAbility_Tick_Statics
	{
		struct SBZPlaceItemAbility_eventTick_Parms
		{
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPlaceItemAbility_Tick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlaceItemAbility_eventTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlaceItemAbility_Tick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlaceItemAbility_Tick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlaceItemAbility_Tick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlaceItemAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlaceItemAbility_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlaceItemAbility, nullptr, "Tick", nullptr, nullptr, sizeof(SBZPlaceItemAbility_eventTick_Parms), Z_Construct_UFunction_USBZPlaceItemAbility_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlaceItemAbility_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlaceItemAbility_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlaceItemAbility_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlaceItemAbility_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlaceItemAbility_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPlaceItemAbility_NoRegister()
	{
		return USBZPlaceItemAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlaceItemAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GhostActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceableActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaceableActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlaceItemAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPlaceItemAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPlaceItemAbility_Tick, "Tick" }, // 4186834743
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceItemAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceItemAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceItemAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceItemAbility_Statics::NewProp_OwnerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceItemAbility" },
		{ "ModuleRelativePath", "Public/SBZPlaceItemAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlaceItemAbility_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceItemAbility, OwnerCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlaceItemAbility_Statics::NewProp_OwnerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceItemAbility_Statics::NewProp_OwnerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceItemAbility_Statics::NewProp_GhostActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceItemAbility" },
		{ "ModuleRelativePath", "Public/SBZPlaceItemAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlaceItemAbility_Statics::NewProp_GhostActor = { "GhostActor", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceItemAbility, GhostActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlaceItemAbility_Statics::NewProp_GhostActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceItemAbility_Statics::NewProp_GhostActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceItemAbility_Statics::NewProp_PlaceableActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceItemAbility" },
		{ "ModuleRelativePath", "Public/SBZPlaceItemAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlaceItemAbility_Statics::NewProp_PlaceableActor = { "PlaceableActor", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceItemAbility, PlaceableActor), Z_Construct_UClass_ASBZPlaceableCharges_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlaceItemAbility_Statics::NewProp_PlaceableActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceItemAbility_Statics::NewProp_PlaceableActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlaceItemAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceItemAbility_Statics::NewProp_OwnerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceItemAbility_Statics::NewProp_GhostActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceItemAbility_Statics::NewProp_PlaceableActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlaceItemAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlaceItemAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlaceItemAbility_Statics::ClassParams = {
		&USBZPlaceItemAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPlaceItemAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceItemAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlaceItemAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceItemAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlaceItemAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlaceItemAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlaceItemAbility, 149644733);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlaceItemAbility>()
	{
		return USBZPlaceItemAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlaceItemAbility(Z_Construct_UClass_USBZPlaceItemAbility, &USBZPlaceItemAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlaceItemAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlaceItemAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
