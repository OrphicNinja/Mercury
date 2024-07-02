// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDoor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDoor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDoor();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZDoor::StaticRegisterNativesASBZDoor()
	{
	}
	UClass* Z_Construct_UClass_ASBZDoor_NoRegister()
	{
		return ASBZDoor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZGate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDoor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDoor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZDoor_Statics::ClassParams = {
		&ASBZDoor::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZDoor, 3919057781);
	template<> STARBREEZE_API UClass* StaticClass<ASBZDoor>()
	{
		return ASBZDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZDoor(Z_Construct_UClass_ASBZDoor, &ASBZDoor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
