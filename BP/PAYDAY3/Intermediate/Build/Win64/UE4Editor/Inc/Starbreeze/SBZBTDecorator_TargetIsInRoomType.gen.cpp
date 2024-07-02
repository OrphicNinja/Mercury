// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_TargetIsInRoomType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_TargetIsInRoomType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTDecorator_TargetIsInRoomType::StaticRegisterNativesUSBZBTDecorator_TargetIsInRoomType()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_NoRegister()
	{
		return USBZBTDecorator_TargetIsInRoomType::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoomType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_TargetIsInRoomType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_TargetIsInRoomType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics::NewProp_RoomType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_TargetIsInRoomType" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_TargetIsInRoomType.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_TargetIsInRoomType, RoomType), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics::NewProp_RoomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics::NewProp_RoomType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics::NewProp_RoomType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_TargetIsInRoomType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics::ClassParams = {
		&USBZBTDecorator_TargetIsInRoomType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_TargetIsInRoomType, 3467528520);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_TargetIsInRoomType>()
	{
		return USBZBTDecorator_TargetIsInRoomType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_TargetIsInRoomType(Z_Construct_UClass_USBZBTDecorator_TargetIsInRoomType, &USBZBTDecorator_TargetIsInRoomType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_TargetIsInRoomType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_TargetIsInRoomType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
