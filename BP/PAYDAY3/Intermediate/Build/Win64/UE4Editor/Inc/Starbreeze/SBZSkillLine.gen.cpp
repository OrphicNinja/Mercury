// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillLine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillLine() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillLine_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillLine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillLineData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkill_NoRegister();
// End Cross Module References
	void USBZSkillLine::StaticRegisterNativesUSBZSkillLine()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillLine_NoRegister()
	{
		return USBZSkillLine::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillLine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchMarker_MetaData[];
#endif
		static void NewProp_ResearchMarker_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResearchMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResearchLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResearchPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLineData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillLineData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skills_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skills_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Skills;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillLine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillLine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillLine.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillLine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchMarker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillLine" },
		{ "ModuleRelativePath", "Public/SBZSkillLine.h" },
	};
#endif
	void Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchMarker_SetBit(void* Obj)
	{
		((USBZSkillLine*)Obj)->ResearchMarker = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchMarker = { "ResearchMarker", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSkillLine), &Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchMarker_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ProgressLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillLine" },
		{ "ModuleRelativePath", "Public/SBZSkillLine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ProgressLevel = { "ProgressLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillLine, ProgressLevel), METADATA_PARAMS(Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ProgressLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ProgressLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillLine" },
		{ "ModuleRelativePath", "Public/SBZSkillLine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchLevel = { "ResearchLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillLine, ResearchLevel), METADATA_PARAMS(Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchPercentage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillLine" },
		{ "ModuleRelativePath", "Public/SBZSkillLine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchPercentage = { "ResearchPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillLine, ResearchPercentage), METADATA_PARAMS(Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillLine_Statics::NewProp_SkillLineData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillLine" },
		{ "ModuleRelativePath", "Public/SBZSkillLine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSkillLine_Statics::NewProp_SkillLineData = { "SkillLineData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillLine, SkillLineData), Z_Construct_UClass_USBZSkillLineData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSkillLine_Statics::NewProp_SkillLineData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLine_Statics::NewProp_SkillLineData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSkillLine_Statics::NewProp_Skills_Inner = { "Skills", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSkill_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillLine_Statics::NewProp_Skills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillLine" },
		{ "ModuleRelativePath", "Public/SBZSkillLine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSkillLine_Statics::NewProp_Skills = { "Skills", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillLine, Skills), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSkillLine_Statics::NewProp_Skills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLine_Statics::NewProp_Skills_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkillLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ProgressLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLine_Statics::NewProp_ResearchPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLine_Statics::NewProp_SkillLineData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLine_Statics::NewProp_Skills_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillLine_Statics::NewProp_Skills,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillLine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillLine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillLine_Statics::ClassParams = {
		&USBZSkillLine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSkillLine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLine_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillLine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillLine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillLine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillLine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillLine, 2500607125);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillLine>()
	{
		return USBZSkillLine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillLine(Z_Construct_UClass_USBZSkillLine, &USBZSkillLine::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillLine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillLine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
