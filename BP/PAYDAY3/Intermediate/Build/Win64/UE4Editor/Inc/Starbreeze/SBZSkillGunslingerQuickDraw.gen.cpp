// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillGunslingerQuickDraw.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillGunslingerQuickDraw() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillGunslingerQuickDraw_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillGunslingerQuickDraw();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillGunslingerQuickDraw::StaticRegisterNativesUSBZSkillGunslingerQuickDraw()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillGunslingerQuickDraw_NoRegister()
	{
		return USBZSkillGunslingerQuickDraw::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillGunslingerQuickDraw_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillGunslingerQuickDraw_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillGunslingerQuickDraw_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillGunslingerQuickDraw.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillGunslingerQuickDraw.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillGunslingerQuickDraw_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillGunslingerQuickDraw>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillGunslingerQuickDraw_Statics::ClassParams = {
		&USBZSkillGunslingerQuickDraw::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillGunslingerQuickDraw_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillGunslingerQuickDraw_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillGunslingerQuickDraw()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillGunslingerQuickDraw_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillGunslingerQuickDraw, 10398899);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillGunslingerQuickDraw>()
	{
		return USBZSkillGunslingerQuickDraw::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillGunslingerQuickDraw(Z_Construct_UClass_USBZSkillGunslingerQuickDraw, &USBZSkillGunslingerQuickDraw::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillGunslingerQuickDraw"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillGunslingerQuickDraw);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
