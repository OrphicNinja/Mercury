// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBasePlayerCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBasePlayerCameraManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBasePlayerCameraManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBasePlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
// End Cross Module References
	void ASBZBasePlayerCameraManager::StaticRegisterNativesASBZBasePlayerCameraManager()
	{
	}
	UClass* Z_Construct_UClass_ASBZBasePlayerCameraManager_NoRegister()
	{
		return ASBZBasePlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultListenerComponentArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultListenerComponentArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultListenerComponentArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultListenerComponentArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBasePlayerCameraManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBasePlayerCameraManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::NewProp_DefaultListenerComponentArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBasePlayerCameraManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBasePlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::NewProp_DefaultListenerComponentArray_Inner = { "DefaultListenerComponentArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::NewProp_DefaultListenerComponentArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::NewProp_DefaultListenerComponentArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::NewProp_DefaultListenerComponentArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBasePlayerCameraManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBasePlayerCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::NewProp_DefaultListenerComponentArray = { "DefaultListenerComponentArray", nullptr, (EPropertyFlags)0x001000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBasePlayerCameraManager, DefaultListenerComponentArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::NewProp_DefaultListenerComponentArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::NewProp_DefaultListenerComponentArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::NewProp_DefaultListenerComponentArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::NewProp_DefaultListenerComponentArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZBasePlayerCameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::ClassParams = {
		&ASBZBasePlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZBasePlayerCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZBasePlayerCameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZBasePlayerCameraManager, 4092908116);
	template<> STARBREEZE_API UClass* StaticClass<ASBZBasePlayerCameraManager>()
	{
		return ASBZBasePlayerCameraManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZBasePlayerCameraManager(Z_Construct_UClass_ASBZBasePlayerCameraManager, &ASBZBasePlayerCameraManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZBasePlayerCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZBasePlayerCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
