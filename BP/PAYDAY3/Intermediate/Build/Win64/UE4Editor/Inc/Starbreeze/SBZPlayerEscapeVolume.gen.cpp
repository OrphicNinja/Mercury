// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerEscapeVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerEscapeVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerEscapeVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerEscapeVolume();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerTriggerVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZEscapeTimerDelegate__DelegateSignature();
// End Cross Module References
	void ASBZPlayerEscapeVolume::StaticRegisterNativesASBZPlayerEscapeVolume()
	{
	}
	UClass* Z_Construct_UClass_ASBZPlayerEscapeVolume_NoRegister()
	{
		return ASBZPlayerEscapeVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEscapeTimerDone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEscapeTimerDone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeTimeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EscapeTimeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableWhenEscapeTimeIsComplete_MetaData[];
#endif
		static void NewProp_bDisableWhenEscapeTimeIsComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableWhenEscapeTimeIsComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlayerTriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZPlayerEscapeVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerEscapeVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_OnEscapeTimerDone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEscapeVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerEscapeVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_OnEscapeTimerDone = { "OnEscapeTimerDone", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerEscapeVolume, OnEscapeTimerDone), Z_Construct_UDelegateFunction_Starbreeze_SBZEscapeTimerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_OnEscapeTimerDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_OnEscapeTimerDone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_EscapeTimeDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEscapeVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerEscapeVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_EscapeTimeDuration = { "EscapeTimeDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerEscapeVolume, EscapeTimeDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_EscapeTimeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_EscapeTimeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_bDisableWhenEscapeTimeIsComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEscapeVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerEscapeVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_bDisableWhenEscapeTimeIsComplete_SetBit(void* Obj)
	{
		((ASBZPlayerEscapeVolume*)Obj)->bDisableWhenEscapeTimeIsComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_bDisableWhenEscapeTimeIsComplete = { "bDisableWhenEscapeTimeIsComplete", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerEscapeVolume), &Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_bDisableWhenEscapeTimeIsComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_bDisableWhenEscapeTimeIsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_bDisableWhenEscapeTimeIsComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_OnEscapeTimerDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_EscapeTimeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::NewProp_bDisableWhenEscapeTimeIsComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlayerEscapeVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::ClassParams = {
		&ASBZPlayerEscapeVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlayerEscapeVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlayerEscapeVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlayerEscapeVolume, 1142787128);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlayerEscapeVolume>()
	{
		return ASBZPlayerEscapeVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlayerEscapeVolume(Z_Construct_UClass_ASBZPlayerEscapeVolume, &ASBZPlayerEscapeVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlayerEscapeVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlayerEscapeVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
