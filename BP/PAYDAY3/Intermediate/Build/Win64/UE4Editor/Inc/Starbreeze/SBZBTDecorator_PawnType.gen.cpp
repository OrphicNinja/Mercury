// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_PawnType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_PawnType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_PawnType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_PawnType();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZBTDecorator_PawnType::StaticRegisterNativesUSBZBTDecorator_PawnType()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_PawnType_NoRegister()
	{
		return USBZBTDecorator_PawnType::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_PawnType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInverse_MetaData[];
#endif
		static void NewProp_bInverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_PawnType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_PawnType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_SelectedActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_PawnType" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_PawnType.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_SelectedActor = { "SelectedActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_PawnType, SelectedActor), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_SelectedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_SelectedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_bInverse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_PawnType" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_PawnType.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_bInverse_SetBit(void* Obj)
	{
		((USBZBTDecorator_PawnType*)Obj)->bInverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_bInverse = { "bInverse", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTDecorator_PawnType), &Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_bInverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_bInverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_bInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_PawnType" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_PawnType.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_PawnType, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_SelectedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_bInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::NewProp_Tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_PawnType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::ClassParams = {
		&USBZBTDecorator_PawnType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_PawnType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_PawnType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_PawnType, 177450358);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_PawnType>()
	{
		return USBZBTDecorator_PawnType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_PawnType(Z_Construct_UClass_USBZBTDecorator_PawnType, &USBZBTDecorator_PawnType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_PawnType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_PawnType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
