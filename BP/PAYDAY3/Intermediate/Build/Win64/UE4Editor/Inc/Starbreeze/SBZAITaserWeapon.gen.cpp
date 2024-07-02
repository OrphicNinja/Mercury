// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAITaserWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAITaserWeapon() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAITaserWeapon_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAITaserWeapon();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRangedWeapon();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
	void ASBZAITaserWeapon::StaticRegisterNativesASBZAITaserWeapon()
	{
	}
	UClass* Z_Construct_UClass_ASBZAITaserWeapon_NoRegister()
	{
		return ASBZAITaserWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAITaserWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TasingComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TasingComment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAITaserWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZRangedWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAITaserWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAITaserWeapon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAITaserWeapon_Statics::NewProp_TasingComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITaserWeapon" },
		{ "ModuleRelativePath", "Public/SBZAITaserWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAITaserWeapon_Statics::NewProp_TasingComment = { "TasingComment", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAITaserWeapon, TasingComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserWeapon_Statics::NewProp_TasingComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserWeapon_Statics::NewProp_TasingComment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAITaserWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAITaserWeapon_Statics::NewProp_TasingComment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAITaserWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAITaserWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAITaserWeapon_Statics::ClassParams = {
		&ASBZAITaserWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZAITaserWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserWeapon_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAITaserWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAITaserWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAITaserWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAITaserWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAITaserWeapon, 1803831633);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAITaserWeapon>()
	{
		return ASBZAITaserWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAITaserWeapon(Z_Construct_UClass_ASBZAITaserWeapon, &ASBZAITaserWeapon::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAITaserWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAITaserWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
