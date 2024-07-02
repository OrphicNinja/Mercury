// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWhizzby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWhizzby() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWhizzby_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWhizzby();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_NoRegister();
// End Cross Module References
	void ASBZWhizzby::StaticRegisterNativesASBZWhizzby()
	{
	}
	UClass* Z_Construct_UClass_ASBZWhizzby_NoRegister()
	{
		return ASBZWhizzby::StaticClass();
	}
	struct Z_Construct_UClass_ASBZWhizzby_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraFeedbackComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraFeedbackComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZWhizzby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWhizzby_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWhizzby.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWhizzby.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWhizzby_Statics::NewProp_PlayerFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWhizzby" },
		{ "ModuleRelativePath", "Public/SBZWhizzby.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZWhizzby_Statics::NewProp_PlayerFeedback = { "PlayerFeedback", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWhizzby, PlayerFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZWhizzby_Statics::NewProp_PlayerFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWhizzby_Statics::NewProp_PlayerFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWhizzby_Statics::NewProp_PlayerCameraFeedbackComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWhizzby" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWhizzby.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWhizzby_Statics::NewProp_PlayerCameraFeedbackComponent = { "PlayerCameraFeedbackComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWhizzby, PlayerCameraFeedbackComponent), Z_Construct_UClass_USBZPlayerCameraFeedbackComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZWhizzby_Statics::NewProp_PlayerCameraFeedbackComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWhizzby_Statics::NewProp_PlayerCameraFeedbackComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZWhizzby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWhizzby_Statics::NewProp_PlayerFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWhizzby_Statics::NewProp_PlayerCameraFeedbackComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZWhizzby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZWhizzby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZWhizzby_Statics::ClassParams = {
		&ASBZWhizzby::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZWhizzby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWhizzby_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZWhizzby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWhizzby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZWhizzby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZWhizzby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZWhizzby, 3083681581);
	template<> STARBREEZE_API UClass* StaticClass<ASBZWhizzby>()
	{
		return ASBZWhizzby::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZWhizzby(Z_Construct_UClass_ASBZWhizzby, &ASBZWhizzby::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZWhizzby"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZWhizzby);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
