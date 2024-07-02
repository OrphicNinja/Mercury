// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillEscapistSlideTackle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillEscapistSlideTackle() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillEscapistSlideTackle_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillEscapistSlideTackle();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZSkillEscapistSlideTackle::StaticRegisterNativesUSBZSkillEscapistSlideTackle()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillEscapistSlideTackle_NoRegister()
	{
		return USBZSkillEscapistSlideTackle::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedAITypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AffectedAITypes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillEscapistSlideTackle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillEscapistSlideTackle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics::NewProp_AffectedAITypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillEscapistSlideTackle" },
		{ "ModuleRelativePath", "Public/SBZSkillEscapistSlideTackle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics::NewProp_AffectedAITypes = { "AffectedAITypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillEscapistSlideTackle, AffectedAITypes), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics::NewProp_AffectedAITypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics::NewProp_AffectedAITypes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics::NewProp_AffectedAITypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillEscapistSlideTackle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics::ClassParams = {
		&USBZSkillEscapistSlideTackle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillEscapistSlideTackle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillEscapistSlideTackle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillEscapistSlideTackle, 2436329559);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillEscapistSlideTackle>()
	{
		return USBZSkillEscapistSlideTackle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillEscapistSlideTackle(Z_Construct_UClass_USBZSkillEscapistSlideTackle, &USBZSkillEscapistSlideTackle::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillEscapistSlideTackle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillEscapistSlideTackle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
