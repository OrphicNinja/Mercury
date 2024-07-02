// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_Search.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_Search() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Search_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Search();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquadOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
// End Cross Module References
	void USBZAIOrder_Search::StaticRegisterNativesUSBZAIOrder_Search()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_Search_NoRegister()
	{
		return USBZAIOrder_Search::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_Search_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomToSearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomToSearch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_Search_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAISquadOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Search_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_Search.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Search.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Search_Statics::NewProp_RoomToSearch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_Search" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Search.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_Search_Statics::NewProp_RoomToSearch = { "RoomToSearch", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_Search, RoomToSearch), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Search_Statics::NewProp_RoomToSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Search_Statics::NewProp_RoomToSearch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_Search_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Search_Statics::NewProp_RoomToSearch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_Search_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_Search>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_Search_Statics::ClassParams = {
		&USBZAIOrder_Search::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIOrder_Search_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Search_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Search_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Search_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_Search()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_Search_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_Search, 731077999);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_Search>()
	{
		return USBZAIOrder_Search::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_Search(Z_Construct_UClass_USBZAIOrder_Search, &USBZAIOrder_Search::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_Search"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_Search);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
