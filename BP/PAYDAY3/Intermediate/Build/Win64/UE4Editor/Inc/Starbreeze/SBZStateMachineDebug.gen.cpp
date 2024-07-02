// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineDebug.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineDebug() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStateMachineDebug_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStateMachineDebug();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZStateMachineDebug::StaticRegisterNativesASBZStateMachineDebug()
	{
	}
	UClass* Z_Construct_UClass_ASBZStateMachineDebug_NoRegister()
	{
		return ASBZStateMachineDebug::StaticClass();
	}
	struct Z_Construct_UClass_ASBZStateMachineDebug_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZStateMachineDebug_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStateMachineDebug_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "SBZStateMachineDebug.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDebug.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZStateMachineDebug_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZStateMachineDebug>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZStateMachineDebug_Statics::ClassParams = {
		&ASBZStateMachineDebug::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZStateMachineDebug_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStateMachineDebug_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZStateMachineDebug()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZStateMachineDebug_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZStateMachineDebug, 4223357182);
	template<> STARBREEZE_API UClass* StaticClass<ASBZStateMachineDebug>()
	{
		return ASBZStateMachineDebug::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZStateMachineDebug(Z_Construct_UClass_ASBZStateMachineDebug, &ASBZStateMachineDebug::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZStateMachineDebug"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZStateMachineDebug);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
