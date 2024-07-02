// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularSlotMeshContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularSlotMeshContainer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularSlotMeshContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularSlotMeshContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZModularSlotMeshContainer::StaticRegisterNativesUSBZModularSlotMeshContainer()
	{
	}
	UClass* Z_Construct_UClass_USBZModularSlotMeshContainer_NoRegister()
	{
		return USBZModularSlotMeshContainer::StaticClass();
	}
	struct Z_Construct_UClass_USBZModularSlotMeshContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZModularSlotMeshContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularSlotMeshContainer_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularSlotMeshContainer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZModularSlotMeshContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZModularSlotMeshContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZModularSlotMeshContainer_Statics::ClassParams = {
		&USBZModularSlotMeshContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZModularSlotMeshContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularSlotMeshContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZModularSlotMeshContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZModularSlotMeshContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZModularSlotMeshContainer, 3563594278);
	template<> STARBREEZE_API UClass* StaticClass<USBZModularSlotMeshContainer>()
	{
		return USBZModularSlotMeshContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZModularSlotMeshContainer(Z_Construct_UClass_USBZModularSlotMeshContainer, &USBZModularSlotMeshContainer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZModularSlotMeshContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZModularSlotMeshContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
