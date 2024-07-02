// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRoomPathFinder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRoomPathFinder() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomPathFinder_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomPathFinder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void USBZRoomPathFinder::StaticRegisterNativesUSBZRoomPathFinder()
	{
	}
	UClass* Z_Construct_UClass_USBZRoomPathFinder_NoRegister()
	{
		return USBZRoomPathFinder::StaticClass();
	}
	struct Z_Construct_UClass_USBZRoomPathFinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_Frontier_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frontier_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Frontier;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Visited_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Visited_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visited_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Visited;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRoomPathFinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRoomPathFinder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZRoomPathFinder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRoomPathFinder.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Frontier_Inner = { "Frontier", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Frontier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomPathFinder" },
		{ "ModuleRelativePath", "Public/SBZRoomPathFinder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Frontier = { "Frontier", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRoomPathFinder, Frontier), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Frontier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Frontier_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Visited_ValueProp = { "Visited", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Visited_Key_KeyProp = { "Visited_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Visited_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomPathFinder" },
		{ "ModuleRelativePath", "Public/SBZRoomPathFinder.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Visited = { "Visited", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRoomPathFinder, Visited), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Visited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Visited_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZRoomPathFinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Frontier_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Frontier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Visited_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Visited_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRoomPathFinder_Statics::NewProp_Visited,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRoomPathFinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRoomPathFinder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRoomPathFinder_Statics::ClassParams = {
		&USBZRoomPathFinder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZRoomPathFinder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZRoomPathFinder_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZRoomPathFinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRoomPathFinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRoomPathFinder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRoomPathFinder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRoomPathFinder, 1410385919);
	template<> STARBREEZE_API UClass* StaticClass<USBZRoomPathFinder>()
	{
		return USBZRoomPathFinder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRoomPathFinder(Z_Construct_UClass_USBZRoomPathFinder, &USBZRoomPathFinder::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRoomPathFinder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRoomPathFinder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
