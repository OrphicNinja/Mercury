// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleAnimation.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleAnimation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleAnimation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleAnimation();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBuiltInAnimMontage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZVehicleAnimation::execPlayBuiltInAnimMontage)
	{
		P_GET_OBJECT(USBZBuiltInAnimMontage,Z_Param_AnimMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->PlayBuiltInAnimMontage(Z_Param_AnimMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleAnimation::execStopBuiltInAnimMontage)
	{
		P_GET_OBJECT(USBZBuiltInAnimMontage,Z_Param_AnimMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopBuiltInAnimMontage(Z_Param_AnimMontage);
		P_NATIVE_END;
	}
	void USBZVehicleAnimation::StaticRegisterNativesUSBZVehicleAnimation()
	{
		UClass* Class = USBZVehicleAnimation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayBuiltInAnimMontage", &USBZVehicleAnimation::execPlayBuiltInAnimMontage },
			{ "StopBuiltInAnimMontage", &USBZVehicleAnimation::execStopBuiltInAnimMontage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics
	{
		struct SBZVehicleAnimation_eventPlayBuiltInAnimMontage_Parms
		{
			const USBZBuiltInAnimMontage* AnimMontage;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAnimation_eventPlayBuiltInAnimMontage_Parms, AnimMontage), Z_Construct_UClass_USBZBuiltInAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics::NewProp_AnimMontage_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAnimation_eventPlayBuiltInAnimMontage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics::NewProp_AnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAnimation, nullptr, "PlayBuiltInAnimMontage", nullptr, nullptr, sizeof(SBZVehicleAnimation_eventPlayBuiltInAnimMontage_Parms), Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage_Statics
	{
		struct SBZVehicleAnimation_eventStopBuiltInAnimMontage_Parms
		{
			const USBZBuiltInAnimMontage* AnimMontage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleAnimation_eventStopBuiltInAnimMontage_Parms, AnimMontage), Z_Construct_UClass_USBZBuiltInAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage_Statics::NewProp_AnimMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage_Statics::NewProp_AnimMontage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleAnimation, nullptr, "StopBuiltInAnimMontage", nullptr, nullptr, sizeof(SBZVehicleAnimation_eventStopBuiltInAnimMontage_Parms), Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZVehicleAnimation_NoRegister()
	{
		return USBZVehicleAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USBZVehicleAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuiltInAnimMontagesHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuiltInAnimMontagesHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVehicleAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZVehicleAnimation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZVehicleAnimation_PlayBuiltInAnimMontage, "PlayBuiltInAnimMontage" }, // 4131447303
		{ &Z_Construct_UFunction_USBZVehicleAnimation_StopBuiltInAnimMontage, "StopBuiltInAnimMontage" }, // 2085387392
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SBZVehicleAnimation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAnimation_Statics::NewProp_BuiltInAnimMontagesHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAnimation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleAnimation_Statics::NewProp_BuiltInAnimMontagesHandler = { "BuiltInAnimMontagesHandler", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAnimation, BuiltInAnimMontagesHandler), Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAnimation_Statics::NewProp_BuiltInAnimMontagesHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAnimation_Statics::NewProp_BuiltInAnimMontagesHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVehicleAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAnimation_Statics::NewProp_BuiltInAnimMontagesHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVehicleAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVehicleAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVehicleAnimation_Statics::ClassParams = {
		&USBZVehicleAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZVehicleAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAnimation_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVehicleAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVehicleAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVehicleAnimation, 846369784);
	template<> STARBREEZE_API UClass* StaticClass<USBZVehicleAnimation>()
	{
		return USBZVehicleAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVehicleAnimation(Z_Construct_UClass_USBZVehicleAnimation, &USBZVehicleAnimation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVehicleAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVehicleAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
