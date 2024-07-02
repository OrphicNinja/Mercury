// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAISquadOrder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAISquadOrder() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquadOrder_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquadOrder();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquad_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void USBZAISquadOrder::StaticRegisterNativesUSBZAISquadOrder()
	{
	}
	UClass* Z_Construct_UClass_USBZAISquadOrder_NoRegister()
	{
		return USBZAISquadOrder::StaticClass();
	}
	struct Z_Construct_UClass_USBZAISquadOrder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerSquad_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerSquad;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaitingMembers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitingMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WaitingMembers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoredMembers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoredMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredMembers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAISquadOrder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISquadOrder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAISquadOrder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAISquadOrder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_SpawnWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISquadOrder" },
		{ "ModuleRelativePath", "Public/SBZAISquadOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_SpawnWeight = { "SpawnWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISquadOrder, SpawnWeight), METADATA_PARAMS(Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_SpawnWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_SpawnWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_OwnerSquad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISquadOrder" },
		{ "ModuleRelativePath", "Public/SBZAISquadOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_OwnerSquad = { "OwnerSquad", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISquadOrder, OwnerSquad), Z_Construct_UClass_USBZAISquad_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_OwnerSquad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_OwnerSquad_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_WaitingMembers_Inner = { "WaitingMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_WaitingMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISquadOrder" },
		{ "ModuleRelativePath", "Public/SBZAISquadOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_WaitingMembers = { "WaitingMembers", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISquadOrder, WaitingMembers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_WaitingMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_WaitingMembers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_IgnoredMembers_Inner = { "IgnoredMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_IgnoredMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISquadOrder" },
		{ "ModuleRelativePath", "Public/SBZAISquadOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_IgnoredMembers = { "IgnoredMembers", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISquadOrder, IgnoredMembers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_IgnoredMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_IgnoredMembers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAISquadOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_SpawnWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_OwnerSquad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_WaitingMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_WaitingMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_IgnoredMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISquadOrder_Statics::NewProp_IgnoredMembers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAISquadOrder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAISquadOrder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAISquadOrder_Statics::ClassParams = {
		&USBZAISquadOrder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAISquadOrder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISquadOrder_Statics::PropPointers),
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAISquadOrder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISquadOrder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAISquadOrder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAISquadOrder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAISquadOrder, 1521811786);
	template<> STARBREEZE_API UClass* StaticClass<USBZAISquadOrder>()
	{
		return USBZAISquadOrder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAISquadOrder(Z_Construct_UClass_USBZAISquadOrder, &USBZAISquadOrder::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAISquadOrder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAISquadOrder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
