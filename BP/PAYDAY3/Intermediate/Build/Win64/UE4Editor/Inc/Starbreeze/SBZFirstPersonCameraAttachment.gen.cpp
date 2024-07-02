// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFirstPersonCameraAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFirstPersonCameraAttachment() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFirstPersonCameraAttachment_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFirstPersonCameraAttachment();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseWeaponData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWeapon_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponSightData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponTargetingData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
// End Cross Module References
	void USBZFirstPersonCameraAttachment::StaticRegisterNativesUSBZFirstPersonCameraAttachment()
	{
	}
	UClass* Z_Construct_UClass_USBZFirstPersonCameraAttachment_NoRegister()
	{
		return USBZFirstPersonCameraAttachment::StaticClass();
	}
	struct Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CameraSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SightSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchLookEaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchLookEaseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedWeaponData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedWeaponSightData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedWeaponSightData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedTargetingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedTargetingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingHideMeshArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetingHideMeshArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingHideMeshArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetingHideMeshArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SBZFirstPersonCameraAttachment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFirstPersonCameraAttachment.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_CameraSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFirstPersonCameraAttachment" },
		{ "ModuleRelativePath", "Public/SBZFirstPersonCameraAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_CameraSocket = { "CameraSocket", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFirstPersonCameraAttachment, CameraSocket), METADATA_PARAMS(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_CameraSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_CameraSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_SightSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFirstPersonCameraAttachment" },
		{ "ModuleRelativePath", "Public/SBZFirstPersonCameraAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_SightSocket = { "SightSocket", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFirstPersonCameraAttachment, SightSocket), METADATA_PARAMS(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_SightSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_SightSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_PitchLookEaseTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFirstPersonCameraAttachment" },
		{ "ModuleRelativePath", "Public/SBZFirstPersonCameraAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_PitchLookEaseTime = { "PitchLookEaseTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFirstPersonCameraAttachment, PitchLookEaseTime), METADATA_PARAMS(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_PitchLookEaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_PitchLookEaseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_OwningCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFirstPersonCameraAttachment" },
		{ "ModuleRelativePath", "Public/SBZFirstPersonCameraAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFirstPersonCameraAttachment, OwningCharacter), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_OwningCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_OwningCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedWeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFirstPersonCameraAttachment" },
		{ "ModuleRelativePath", "Public/SBZFirstPersonCameraAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedWeaponData = { "EquippedWeaponData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFirstPersonCameraAttachment, EquippedWeaponData), Z_Construct_UClass_USBZBaseWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedWeaponData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFirstPersonCameraAttachment" },
		{ "ModuleRelativePath", "Public/SBZFirstPersonCameraAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFirstPersonCameraAttachment, EquippedWeapon), Z_Construct_UClass_ASBZWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedWeaponSightData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFirstPersonCameraAttachment" },
		{ "ModuleRelativePath", "Public/SBZFirstPersonCameraAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedWeaponSightData = { "EquippedWeaponSightData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFirstPersonCameraAttachment, EquippedWeaponSightData), Z_Construct_UClass_USBZWeaponSightData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedWeaponSightData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedWeaponSightData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedTargetingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFirstPersonCameraAttachment" },
		{ "ModuleRelativePath", "Public/SBZFirstPersonCameraAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedTargetingData = { "EquippedTargetingData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFirstPersonCameraAttachment, EquippedTargetingData), Z_Construct_UClass_USBZWeaponTargetingData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedTargetingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedTargetingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_TargetingHideMeshArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFirstPersonCameraAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZFirstPersonCameraAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_TargetingHideMeshArray_Inner = { "TargetingHideMeshArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_TargetingHideMeshArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_TargetingHideMeshArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_TargetingHideMeshArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFirstPersonCameraAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZFirstPersonCameraAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_TargetingHideMeshArray = { "TargetingHideMeshArray", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFirstPersonCameraAttachment, TargetingHideMeshArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_TargetingHideMeshArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_TargetingHideMeshArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_CameraSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_SightSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_PitchLookEaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_OwningCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedWeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedWeaponSightData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_EquippedTargetingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_TargetingHideMeshArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::NewProp_TargetingHideMeshArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFirstPersonCameraAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::ClassParams = {
		&USBZFirstPersonCameraAttachment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFirstPersonCameraAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFirstPersonCameraAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFirstPersonCameraAttachment, 3147910722);
	template<> STARBREEZE_API UClass* StaticClass<USBZFirstPersonCameraAttachment>()
	{
		return USBZFirstPersonCameraAttachment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFirstPersonCameraAttachment(Z_Construct_UClass_USBZFirstPersonCameraAttachment, &USBZFirstPersonCameraAttachment::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFirstPersonCameraAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFirstPersonCameraAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
