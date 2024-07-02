// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRecoilComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRecoilComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRecoilComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRecoilComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRangedWeapon_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRecoilData_NoRegister();
// End Cross Module References
	void USBZRecoilComponent::StaticRegisterNativesUSBZRecoilComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZRecoilComponent_NoRegister()
	{
		return USBZRecoilComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZRecoilComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRecoilData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentRecoilData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRecoilComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRecoilComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZRecoilComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRecoilComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRecoilComponent_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecoilComponent" },
		{ "ModuleRelativePath", "Public/SBZRecoilComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZRecoilComponent_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRecoilComponent, PlayerCharacter), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZRecoilComponent_Statics::NewProp_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecoilComponent_Statics::NewProp_PlayerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRecoilComponent_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecoilComponent" },
		{ "ModuleRelativePath", "Public/SBZRecoilComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZRecoilComponent_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRecoilComponent, CurrentWeapon), Z_Construct_UClass_ASBZRangedWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZRecoilComponent_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecoilComponent_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRecoilComponent_Statics::NewProp_CurrentRecoilData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRecoilComponent" },
		{ "ModuleRelativePath", "Public/SBZRecoilComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZRecoilComponent_Statics::NewProp_CurrentRecoilData = { "CurrentRecoilData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRecoilComponent, CurrentRecoilData), Z_Construct_UClass_USBZRecoilData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZRecoilComponent_Statics::NewProp_CurrentRecoilData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecoilComponent_Statics::NewProp_CurrentRecoilData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZRecoilComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRecoilComponent_Statics::NewProp_PlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRecoilComponent_Statics::NewProp_CurrentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRecoilComponent_Statics::NewProp_CurrentRecoilData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRecoilComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRecoilComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRecoilComponent_Statics::ClassParams = {
		&USBZRecoilComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZRecoilComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecoilComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZRecoilComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRecoilComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRecoilComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRecoilComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRecoilComponent, 1732221315);
	template<> STARBREEZE_API UClass* StaticClass<USBZRecoilComponent>()
	{
		return USBZRecoilComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRecoilComponent(Z_Construct_UClass_USBZRecoilComponent, &USBZRecoilComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRecoilComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRecoilComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
