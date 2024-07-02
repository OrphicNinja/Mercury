// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZForbidHurtNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZForbidHurtNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZForbidHurtNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZForbidHurtNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZForbidHurtNotifyState::StaticRegisterNativesUSBZForbidHurtNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZForbidHurtNotifyState_NoRegister()
	{
		return USBZForbidHurtNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZForbidHurtNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFlinchForbidden_MetaData[];
#endif
		static void NewProp_bIsFlinchForbidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFlinchForbidden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZForbidHurtNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZForbidHurtNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::NewProp_bIsFlinchForbidden_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZForbidHurtNotifyState" },
		{ "ModuleRelativePath", "Public/SBZForbidHurtNotifyState.h" },
	};
#endif
	void Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::NewProp_bIsFlinchForbidden_SetBit(void* Obj)
	{
		((USBZForbidHurtNotifyState*)Obj)->bIsFlinchForbidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::NewProp_bIsFlinchForbidden = { "bIsFlinchForbidden", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZForbidHurtNotifyState), &Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::NewProp_bIsFlinchForbidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::NewProp_bIsFlinchForbidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::NewProp_bIsFlinchForbidden_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::NewProp_bIsFlinchForbidden,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZForbidHurtNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::ClassParams = {
		&USBZForbidHurtNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZForbidHurtNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZForbidHurtNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZForbidHurtNotifyState, 2920219560);
	template<> STARBREEZE_API UClass* StaticClass<USBZForbidHurtNotifyState>()
	{
		return USBZForbidHurtNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZForbidHurtNotifyState(Z_Construct_UClass_USBZForbidHurtNotifyState, &USBZForbidHurtNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZForbidHurtNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZForbidHurtNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
