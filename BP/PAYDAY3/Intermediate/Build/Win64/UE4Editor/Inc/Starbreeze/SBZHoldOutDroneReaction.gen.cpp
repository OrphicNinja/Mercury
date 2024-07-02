// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutDroneReaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutDroneReaction() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutDroneReaction_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutDroneReaction();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutAIDrone_NoRegister();
// End Cross Module References
	static FName NAME_ASBZHoldOutDroneReaction_OnLifeSpanChangedDueToInvalidation = FName(TEXT("OnLifeSpanChangedDueToInvalidation"));
	void ASBZHoldOutDroneReaction::OnLifeSpanChangedDueToInvalidation(float NewLifeSpan)
	{
		SBZHoldOutDroneReaction_eventOnLifeSpanChangedDueToInvalidation_Parms Parms;
		Parms.NewLifeSpan=NewLifeSpan;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHoldOutDroneReaction_OnLifeSpanChangedDueToInvalidation),&Parms);
	}
	void ASBZHoldOutDroneReaction::StaticRegisterNativesASBZHoldOutDroneReaction()
	{
	}
	struct Z_Construct_UFunction_ASBZHoldOutDroneReaction_OnLifeSpanChangedDueToInvalidation_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLifeSpan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZHoldOutDroneReaction_OnLifeSpanChangedDueToInvalidation_Statics::NewProp_NewLifeSpan = { "NewLifeSpan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutDroneReaction_eventOnLifeSpanChangedDueToInvalidation_Parms, NewLifeSpan), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutDroneReaction_OnLifeSpanChangedDueToInvalidation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutDroneReaction_OnLifeSpanChangedDueToInvalidation_Statics::NewProp_NewLifeSpan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutDroneReaction_OnLifeSpanChangedDueToInvalidation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutDroneReaction_OnLifeSpanChangedDueToInvalidation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutDroneReaction, nullptr, "OnLifeSpanChangedDueToInvalidation", nullptr, nullptr, sizeof(SBZHoldOutDroneReaction_eventOnLifeSpanChangedDueToInvalidation_Parms), Z_Construct_UFunction_ASBZHoldOutDroneReaction_OnLifeSpanChangedDueToInvalidation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutDroneReaction_OnLifeSpanChangedDueToInvalidation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutDroneReaction_OnLifeSpanChangedDueToInvalidation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutDroneReaction_OnLifeSpanChangedDueToInvalidation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutDroneReaction_OnLifeSpanChangedDueToInvalidation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutDroneReaction_OnLifeSpanChangedDueToInvalidation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZHoldOutDroneReaction_NoRegister()
	{
		return ASBZHoldOutDroneReaction::StaticClass();
	}
	struct Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeSpanWhenInvalidated_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpanWhenInvalidated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Drone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Drone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZHoldOutDroneReaction_OnLifeSpanChangedDueToInvalidation, "OnLifeSpanChangedDueToInvalidation" }, // 2765236736
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHoldOutDroneReaction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneReaction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::NewProp_LifeSpanWhenInvalidated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutDroneReaction" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::NewProp_LifeSpanWhenInvalidated = { "LifeSpanWhenInvalidated", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutDroneReaction, LifeSpanWhenInvalidated), METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::NewProp_LifeSpanWhenInvalidated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::NewProp_LifeSpanWhenInvalidated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::NewProp_Drone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutDroneReaction" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneReaction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::NewProp_Drone = { "Drone", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutDroneReaction, Drone), Z_Construct_UClass_ASBZHoldOutAIDrone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::NewProp_Drone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::NewProp_Drone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::NewProp_LifeSpanWhenInvalidated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::NewProp_Drone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZHoldOutDroneReaction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::ClassParams = {
		&ASBZHoldOutDroneReaction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZHoldOutDroneReaction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZHoldOutDroneReaction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZHoldOutDroneReaction, 1951207794);
	template<> STARBREEZE_API UClass* StaticClass<ASBZHoldOutDroneReaction>()
	{
		return ASBZHoldOutDroneReaction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZHoldOutDroneReaction(Z_Construct_UClass_ASBZHoldOutDroneReaction, &ASBZHoldOutDroneReaction::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZHoldOutDroneReaction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZHoldOutDroneReaction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
