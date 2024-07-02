// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAvoidVehicleAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAvoidVehicleAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAvoidVehicleAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAvoidVehicleAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIAvoidVehicleAbility::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	void USBZAIAvoidVehicleAbility::StaticRegisterNativesUSBZAIAvoidVehicleAbility()
	{
		UClass* Class = USBZAIAvoidVehicleAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Tick", &USBZAIAvoidVehicleAbility::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIAvoidVehicleAbility_Tick_Statics
	{
		struct SBZAIAvoidVehicleAbility_eventTick_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAIAvoidVehicleAbility_Tick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAvoidVehicleAbility_eventTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIAvoidVehicleAbility_Tick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAvoidVehicleAbility_Tick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAvoidVehicleAbility_Tick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAvoidVehicleAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAvoidVehicleAbility_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAvoidVehicleAbility, nullptr, "Tick", nullptr, nullptr, sizeof(SBZAIAvoidVehicleAbility_eventTick_Parms), Z_Construct_UFunction_USBZAIAvoidVehicleAbility_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAvoidVehicleAbility_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAvoidVehicleAbility_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAvoidVehicleAbility_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAvoidVehicleAbility_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAvoidVehicleAbility_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIAvoidVehicleAbility_NoRegister()
	{
		return USBZAIAvoidVehicleAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AICharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AICharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVehicle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentVehicle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIAvoidVehicleAbility_Tick, "Tick" }, // 4072685382
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAvoidVehicleAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAvoidVehicleAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::NewProp_AICharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAvoidVehicleAbility" },
		{ "ModuleRelativePath", "Public/SBZAIAvoidVehicleAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::NewProp_AICharacter = { "AICharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAvoidVehicleAbility, AICharacter), Z_Construct_UClass_ASBZAIBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::NewProp_AICharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::NewProp_AICharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::NewProp_CurrentVehicle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAvoidVehicleAbility" },
		{ "ModuleRelativePath", "Public/SBZAIAvoidVehicleAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::NewProp_CurrentVehicle = { "CurrentVehicle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAvoidVehicleAbility, CurrentVehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::NewProp_CurrentVehicle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::NewProp_CurrentVehicle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::NewProp_AICharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::NewProp_CurrentVehicle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAvoidVehicleAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::ClassParams = {
		&USBZAIAvoidVehicleAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAvoidVehicleAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAvoidVehicleAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAvoidVehicleAbility, 3033246452);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAvoidVehicleAbility>()
	{
		return USBZAIAvoidVehicleAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAvoidVehicleAbility(Z_Construct_UClass_USBZAIAvoidVehicleAbility, &USBZAIAvoidVehicleAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAvoidVehicleAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAvoidVehicleAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
