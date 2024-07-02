// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_PlaceDeployable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_PlaceDeployable() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_PlaceDeployable_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_PlaceDeployable();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_PlaceActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableCharges_NoRegister();
// End Cross Module References
	void USBZBTService_PlaceDeployable::StaticRegisterNativesUSBZBTService_PlaceDeployable()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_PlaceDeployable_NoRegister()
	{
		return USBZBTService_PlaceDeployable::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deployables_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Deployables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBTService_PlaceActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_PlaceDeployable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_PlaceDeployable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics::NewProp_Deployables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_PlaceDeployable" },
		{ "ModuleRelativePath", "Public/SBZBTService_PlaceDeployable.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics::NewProp_Deployables = { "Deployables", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Deployables, USBZBTService_PlaceDeployable), STRUCT_OFFSET(USBZBTService_PlaceDeployable, Deployables), Z_Construct_UClass_ASBZPlaceableCharges_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics::NewProp_Deployables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics::NewProp_Deployables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics::NewProp_Deployables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_PlaceDeployable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics::ClassParams = {
		&USBZBTService_PlaceDeployable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_PlaceDeployable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_PlaceDeployable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_PlaceDeployable, 2135362220);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_PlaceDeployable>()
	{
		return USBZBTService_PlaceDeployable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_PlaceDeployable(Z_Construct_UClass_USBZBTService_PlaceDeployable, &USBZBTService_PlaceDeployable::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_PlaceDeployable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_PlaceDeployable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
