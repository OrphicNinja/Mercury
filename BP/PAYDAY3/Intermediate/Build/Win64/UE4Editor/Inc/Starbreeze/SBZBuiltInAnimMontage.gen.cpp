// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBuiltInAnimMontage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBuiltInAnimMontage() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBuiltInAnimMontage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBuiltInAnimMontage();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack();
// End Cross Module References
	void USBZBuiltInAnimMontage::StaticRegisterNativesUSBZBuiltInAnimMontage()
	{
	}
	UClass* Z_Construct_UClass_USBZBuiltInAnimMontage_NoRegister()
	{
		return USBZBuiltInAnimMontage::StaticClass();
	}
	struct Z_Construct_UClass_USBZBuiltInAnimMontage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoStopWhenFinished_MetaData[];
#endif
		static void NewProp_bAutoStopWhenFinished_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoStopWhenFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLooping_MetaData[];
#endif
		static void NewProp_bIsLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneTracks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBuiltInAnimMontage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_bAutoStopWhenFinished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBuiltInAnimMontage" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontage.h" },
	};
#endif
	void Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_bAutoStopWhenFinished_SetBit(void* Obj)
	{
		((USBZBuiltInAnimMontage*)Obj)->bAutoStopWhenFinished = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_bAutoStopWhenFinished = { "bAutoStopWhenFinished", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBuiltInAnimMontage), &Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_bAutoStopWhenFinished_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_bAutoStopWhenFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_bAutoStopWhenFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_bIsLooping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBuiltInAnimMontage" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontage.h" },
	};
#endif
	void Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_bIsLooping_SetBit(void* Obj)
	{
		((USBZBuiltInAnimMontage*)Obj)->bIsLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBuiltInAnimMontage), &Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_bIsLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_bIsLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_Group_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBuiltInAnimMontage" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBuiltInAnimMontage, Group), METADATA_PARAMS(Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_BoneTracks_Inner = { "BoneTracks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_BoneTracks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBuiltInAnimMontage" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_BoneTracks = { "BoneTracks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBuiltInAnimMontage, BoneTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_BoneTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_BoneTracks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_bAutoStopWhenFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_bIsLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_BoneTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::NewProp_BoneTracks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBuiltInAnimMontage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::ClassParams = {
		&USBZBuiltInAnimMontage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBuiltInAnimMontage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBuiltInAnimMontage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBuiltInAnimMontage, 429173519);
	template<> STARBREEZE_API UClass* StaticClass<USBZBuiltInAnimMontage>()
	{
		return USBZBuiltInAnimMontage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBuiltInAnimMontage(Z_Construct_UClass_USBZBuiltInAnimMontage, &USBZBuiltInAnimMontage::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBuiltInAnimMontage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBuiltInAnimMontage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
