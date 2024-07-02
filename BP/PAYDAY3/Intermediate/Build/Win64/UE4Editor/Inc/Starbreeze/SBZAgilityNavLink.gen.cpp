// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilityNavLink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilityNavLink() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAgilityNavLink_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAgilityNavLink();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSmartNavLink();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavLinkAgilityComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityTrajectoryInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister();
// End Cross Module References
	void ASBZAgilityNavLink::StaticRegisterNativesASBZAgilityNavLink()
	{
	}
	UClass* Z_Construct_UClass_ASBZAgilityNavLink_NoRegister()
	{
		return ASBZAgilityNavLink::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAgilityNavLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLinkAgilityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavLinkAgilityComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAgilityNavLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZSmartNavLink,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAgilityNavLink_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAgilityNavLink.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityNavLink.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAgilityNavLink_Statics::NewProp_LeftRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityNavLink" },
		{ "ModuleRelativePath", "Public/SBZAgilityNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAgilityNavLink_Statics::NewProp_LeftRoom = { "LeftRoom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAgilityNavLink, LeftRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAgilityNavLink_Statics::NewProp_LeftRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAgilityNavLink_Statics::NewProp_LeftRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAgilityNavLink_Statics::NewProp_RightRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityNavLink" },
		{ "ModuleRelativePath", "Public/SBZAgilityNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAgilityNavLink_Statics::NewProp_RightRoom = { "RightRoom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAgilityNavLink, RightRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAgilityNavLink_Statics::NewProp_RightRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAgilityNavLink_Statics::NewProp_RightRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAgilityNavLink_Statics::NewProp_NavLinkAgilityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityNavLink" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAgilityNavLink_Statics::NewProp_NavLinkAgilityComponent = { "NavLinkAgilityComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAgilityNavLink, NavLinkAgilityComponent), Z_Construct_UClass_USBZNavLinkAgilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAgilityNavLink_Statics::NewProp_NavLinkAgilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAgilityNavLink_Statics::NewProp_NavLinkAgilityComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAgilityNavLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAgilityNavLink_Statics::NewProp_LeftRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAgilityNavLink_Statics::NewProp_RightRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAgilityNavLink_Statics::NewProp_NavLinkAgilityComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAgilityNavLink_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAgilityTrajectoryInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAgilityNavLink, ISBZAgilityTrajectoryInterface), false },
			{ Z_Construct_UClass_USBZRoomConnectorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAgilityNavLink, ISBZRoomConnectorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAgilityNavLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAgilityNavLink>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAgilityNavLink_Statics::ClassParams = {
		&ASBZAgilityNavLink::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZAgilityNavLink_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAgilityNavLink_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAgilityNavLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAgilityNavLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAgilityNavLink()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAgilityNavLink_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAgilityNavLink, 3409117772);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAgilityNavLink>()
	{
		return ASBZAgilityNavLink::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAgilityNavLink(Z_Construct_UClass_ASBZAgilityNavLink, &ASBZAgilityNavLink::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAgilityNavLink"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAgilityNavLink);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
