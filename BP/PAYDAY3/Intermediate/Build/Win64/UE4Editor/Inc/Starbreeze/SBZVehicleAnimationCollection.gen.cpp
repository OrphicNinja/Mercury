// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleAnimationCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleAnimationCollection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleAnimationCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleAnimationCollection();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleDoorAnimationContainer();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorState();
// End Cross Module References
	void USBZVehicleAnimationCollection::StaticRegisterNativesUSBZVehicleAnimationCollection()
	{
	}
	UClass* Z_Construct_UClass_USBZVehicleAnimationCollection_NoRegister()
	{
		return USBZVehicleAnimationCollection::StaticClass();
	}
	struct Z_Construct_UClass_USBZVehicleAnimationCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DoorAnimationContainers_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DoorAnimationContainers_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DoorAnimationContainers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorAnimationContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DoorAnimationContainers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVehicleAnimationCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleAnimationCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::NewProp_DoorAnimationContainers_ValueProp = { "DoorAnimationContainers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZVehicleDoorAnimationContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::NewProp_DoorAnimationContainers_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::NewProp_DoorAnimationContainers_Key_KeyProp = { "DoorAnimationContainers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::NewProp_DoorAnimationContainers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleAnimationCollection" },
		{ "ModuleRelativePath", "Public/SBZVehicleAnimationCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::NewProp_DoorAnimationContainers = { "DoorAnimationContainers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleAnimationCollection, DoorAnimationContainers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::NewProp_DoorAnimationContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::NewProp_DoorAnimationContainers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::NewProp_DoorAnimationContainers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::NewProp_DoorAnimationContainers_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::NewProp_DoorAnimationContainers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::NewProp_DoorAnimationContainers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVehicleAnimationCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::ClassParams = {
		&USBZVehicleAnimationCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVehicleAnimationCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVehicleAnimationCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVehicleAnimationCollection, 3418135224);
	template<> STARBREEZE_API UClass* StaticClass<USBZVehicleAnimationCollection>()
	{
		return USBZVehicleAnimationCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVehicleAnimationCollection(Z_Construct_UClass_USBZVehicleAnimationCollection, &USBZVehicleAnimationCollection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVehicleAnimationCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVehicleAnimationCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
