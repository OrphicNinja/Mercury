// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZZiplineAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZZiplineAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZZiplineAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZZiplineAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZZiplineAbility::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	void USBZZiplineAbility::StaticRegisterNativesUSBZZiplineAbility()
	{
		UClass* Class = USBZZiplineAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Tick", &USBZZiplineAbility::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZZiplineAbility_Tick_Statics
	{
		struct SBZZiplineAbility_eventTick_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZZiplineAbility_Tick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZZiplineAbility_eventTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZZiplineAbility_Tick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZZiplineAbility_Tick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZZiplineAbility_Tick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZZiplineAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZZiplineAbility_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZZiplineAbility, nullptr, "Tick", nullptr, nullptr, sizeof(SBZZiplineAbility_eventTick_Parms), Z_Construct_UFunction_USBZZiplineAbility_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZZiplineAbility_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZZiplineAbility_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZZiplineAbility_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZZiplineAbility_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZZiplineAbility_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZZiplineAbility_NoRegister()
	{
		return USBZZiplineAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZZiplineAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZZiplineAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZZiplineAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZZiplineAbility_Tick, "Tick" }, // 1330157411
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZZiplineAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZZiplineAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZZiplineAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZZiplineAbility_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZiplineAbility" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZZiplineAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZZiplineAbility_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZZiplineAbility, MovementComponent), Z_Construct_UClass_USBZCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZZiplineAbility_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineAbility_Statics::NewProp_MovementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZZiplineAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZZiplineAbility_Statics::NewProp_MovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZZiplineAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZZiplineAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZZiplineAbility_Statics::ClassParams = {
		&USBZZiplineAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZZiplineAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineAbility_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZZiplineAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZZiplineAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZZiplineAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZZiplineAbility, 1275625055);
	template<> STARBREEZE_API UClass* StaticClass<USBZZiplineAbility>()
	{
		return USBZZiplineAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZZiplineAbility(Z_Construct_UClass_USBZZiplineAbility, &USBZZiplineAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZZiplineAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZZiplineAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
