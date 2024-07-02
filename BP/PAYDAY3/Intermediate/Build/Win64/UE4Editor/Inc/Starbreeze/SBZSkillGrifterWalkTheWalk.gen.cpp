// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillGrifterWalkTheWalk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillGrifterWalkTheWalk() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillGrifterWalkTheWalk_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillGrifterWalkTheWalk();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillGrifterWalkTheWalk::StaticRegisterNativesUSBZSkillGrifterWalkTheWalk()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillGrifterWalkTheWalk_NoRegister()
	{
		return USBZSkillGrifterWalkTheWalk::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillGrifterWalkTheWalk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillGrifterWalkTheWalk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillGrifterWalkTheWalk_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillGrifterWalkTheWalk.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillGrifterWalkTheWalk.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillGrifterWalkTheWalk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillGrifterWalkTheWalk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillGrifterWalkTheWalk_Statics::ClassParams = {
		&USBZSkillGrifterWalkTheWalk::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillGrifterWalkTheWalk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillGrifterWalkTheWalk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillGrifterWalkTheWalk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillGrifterWalkTheWalk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillGrifterWalkTheWalk, 1844751704);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillGrifterWalkTheWalk>()
	{
		return USBZSkillGrifterWalkTheWalk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillGrifterWalkTheWalk(Z_Construct_UClass_USBZSkillGrifterWalkTheWalk, &USBZSkillGrifterWalkTheWalk::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillGrifterWalkTheWalk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillGrifterWalkTheWalk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
