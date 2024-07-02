// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReactionPredicate_RoomType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReactionPredicate_RoomType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate_RoomType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate_RoomType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPredicateQueryTarget();
// End Cross Module References
	void USBZReactionPredicate_RoomType::StaticRegisterNativesUSBZReactionPredicate_RoomType()
	{
	}
	UClass* Z_Construct_UClass_USBZReactionPredicate_RoomType_NoRegister()
	{
		return USBZReactionPredicate_RoomType::StaticClass();
	}
	struct Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedRooms_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AllowedRooms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZReactionPredicate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReactionPredicate_RoomType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReactionPredicate_RoomType.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::NewProp_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReactionPredicate_RoomType" },
		{ "ModuleRelativePath", "Public/SBZReactionPredicate_RoomType.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReactionPredicate_RoomType, Target), Z_Construct_UEnum_Starbreeze_ESBZPredicateQueryTarget, METADATA_PARAMS(Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::NewProp_AllowedRooms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReactionPredicate_RoomType" },
		{ "ModuleRelativePath", "Public/SBZReactionPredicate_RoomType.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::NewProp_AllowedRooms = { "AllowedRooms", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReactionPredicate_RoomType, AllowedRooms), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::NewProp_AllowedRooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::NewProp_AllowedRooms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::NewProp_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::NewProp_AllowedRooms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReactionPredicate_RoomType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::ClassParams = {
		&USBZReactionPredicate_RoomType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReactionPredicate_RoomType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReactionPredicate_RoomType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReactionPredicate_RoomType, 582551150);
	template<> STARBREEZE_API UClass* StaticClass<USBZReactionPredicate_RoomType>()
	{
		return USBZReactionPredicate_RoomType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReactionPredicate_RoomType(Z_Construct_UClass_USBZReactionPredicate_RoomType, &USBZReactionPredicate_RoomType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReactionPredicate_RoomType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReactionPredicate_RoomType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
