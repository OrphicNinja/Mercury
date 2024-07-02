// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMeshPartSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMeshPartSlot() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeshPartSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeshPartSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularSlotMeshContainer_NoRegister();
// End Cross Module References
	void USBZMeshPartSlot::StaticRegisterNativesUSBZMeshPartSlot()
	{
	}
	UClass* Z_Construct_UClass_USBZMeshPartSlot_NoRegister()
	{
		return USBZMeshPartSlot::StaticClass();
	}
	struct Z_Construct_UClass_USBZMeshPartSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMeshPartSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZModularPartSlotBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeshPartSlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMeshPartSlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMeshPartSlot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeshPartSlot_Statics::NewProp_SpawnPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMeshPartSlot" },
		{ "ModuleRelativePath", "Public/SBZMeshPartSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMeshPartSlot_Statics::NewProp_SpawnPriority = { "SpawnPriority", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMeshPartSlot, SpawnPriority), METADATA_PARAMS(Z_Construct_UClass_USBZMeshPartSlot_Statics::NewProp_SpawnPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeshPartSlot_Statics::NewProp_SpawnPriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMeshPartSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMeshPartSlot_Statics::NewProp_SpawnPriority,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZMeshPartSlot_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZModularSlotMeshContainer_NoRegister, (int32)VTABLE_OFFSET(USBZMeshPartSlot, ISBZModularSlotMeshContainer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMeshPartSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMeshPartSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMeshPartSlot_Statics::ClassParams = {
		&USBZMeshPartSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMeshPartSlot_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeshPartSlot_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000900A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMeshPartSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeshPartSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMeshPartSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMeshPartSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMeshPartSlot, 4184172088);
	template<> STARBREEZE_API UClass* StaticClass<USBZMeshPartSlot>()
	{
		return USBZMeshPartSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMeshPartSlot(Z_Construct_UClass_USBZMeshPartSlot, &USBZMeshPartSlot::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMeshPartSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMeshPartSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
