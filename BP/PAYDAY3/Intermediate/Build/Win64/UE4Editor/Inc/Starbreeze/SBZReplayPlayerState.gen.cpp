// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplayPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplayPlayerState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplayPlayerState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplayPlayerState();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZReplayPlayerState::StaticRegisterNativesASBZReplayPlayerState()
	{
	}
	UClass* Z_Construct_UClass_ASBZReplayPlayerState_NoRegister()
	{
		return ASBZReplayPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ASBZReplayPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZReplayPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplayPlayerState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZReplayPlayerState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReplayPlayerState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZReplayPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZReplayPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZReplayPlayerState_Statics::ClassParams = {
		&ASBZReplayPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZReplayPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplayPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZReplayPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZReplayPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZReplayPlayerState, 3537040136);
	template<> STARBREEZE_API UClass* StaticClass<ASBZReplayPlayerState>()
	{
		return ASBZReplayPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZReplayPlayerState(Z_Construct_UClass_ASBZReplayPlayerState, &ASBZReplayPlayerState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZReplayPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZReplayPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
