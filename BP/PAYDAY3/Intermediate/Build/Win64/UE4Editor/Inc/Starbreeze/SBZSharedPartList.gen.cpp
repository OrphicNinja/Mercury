// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSharedPartList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSharedPartList() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSharedPartList_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSharedPartList();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister();
// End Cross Module References
	void USBZSharedPartList::StaticRegisterNativesUSBZSharedPartList()
	{
	}
	UClass* Z_Construct_UClass_USBZSharedPartList_NoRegister()
	{
		return USBZSharedPartList::StaticClass();
	}
	struct Z_Construct_UClass_USBZSharedPartList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SharedModParts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedModParts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SharedModParts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSharedPartList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSharedPartList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSharedPartList.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSharedPartList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSharedPartList_Statics::NewProp_SharedModParts_Inner = { "SharedModParts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSharedPartList_Statics::NewProp_SharedModParts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSharedPartList" },
		{ "ModuleRelativePath", "Public/SBZSharedPartList.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSharedPartList_Statics::NewProp_SharedModParts = { "SharedModParts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSharedPartList, SharedModParts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSharedPartList_Statics::NewProp_SharedModParts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSharedPartList_Statics::NewProp_SharedModParts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSharedPartList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSharedPartList_Statics::NewProp_SharedModParts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSharedPartList_Statics::NewProp_SharedModParts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSharedPartList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSharedPartList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSharedPartList_Statics::ClassParams = {
		&USBZSharedPartList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSharedPartList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSharedPartList_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSharedPartList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSharedPartList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSharedPartList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSharedPartList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSharedPartList, 1269714563);
	template<> STARBREEZE_API UClass* StaticClass<USBZSharedPartList>()
	{
		return USBZSharedPartList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSharedPartList(Z_Construct_UClass_USBZSharedPartList, &USBZSharedPartList::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSharedPartList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSharedPartList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
