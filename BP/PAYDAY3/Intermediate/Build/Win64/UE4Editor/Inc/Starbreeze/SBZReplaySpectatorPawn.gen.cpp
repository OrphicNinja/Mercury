// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplaySpectatorPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplaySpectatorPawn() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplaySpectatorPawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplaySpectatorPawn();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGameSpectatorPawn();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReplaySpectatorView();
// End Cross Module References
	void ASBZReplaySpectatorPawn::StaticRegisterNativesASBZReplaySpectatorPawn()
	{
	}
	UClass* Z_Construct_UClass_ASBZReplaySpectatorPawn_NoRegister()
	{
		return ASBZReplaySpectatorPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpectatorView_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorView_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpectatorView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZGameSpectatorPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZReplaySpectatorPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReplaySpectatorPawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::NewProp_SpectatorView_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::NewProp_SpectatorView_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplaySpectatorPawn" },
		{ "ModuleRelativePath", "Public/SBZReplaySpectatorPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::NewProp_SpectatorView = { "SpectatorView", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZReplaySpectatorPawn, SpectatorView), Z_Construct_UEnum_Starbreeze_ESBZReplaySpectatorView, METADATA_PARAMS(Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::NewProp_SpectatorView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::NewProp_SpectatorView_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::NewProp_SpectatorView_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::NewProp_SpectatorView,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZReplaySpectatorPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::ClassParams = {
		&ASBZReplaySpectatorPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZReplaySpectatorPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZReplaySpectatorPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZReplaySpectatorPawn, 909540856);
	template<> STARBREEZE_API UClass* StaticClass<ASBZReplaySpectatorPawn>()
	{
		return ASBZReplaySpectatorPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZReplaySpectatorPawn(Z_Construct_UClass_ASBZReplaySpectatorPawn, &ASBZReplaySpectatorPawn::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZReplaySpectatorPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZReplaySpectatorPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
