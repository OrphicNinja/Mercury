// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTraversalNavLink.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTraversalNavLink() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTraversalNavLink_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTraversalNavLink();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSmartNavLink();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavLinkTraversalComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTraversalTrajectoryInterface_NoRegister();
// End Cross Module References
	void ASBZTraversalNavLink::StaticRegisterNativesASBZTraversalNavLink()
	{
	}
	UClass* Z_Construct_UClass_ASBZTraversalNavLink_NoRegister()
	{
		return ASBZTraversalNavLink::StaticClass();
	}
	struct Z_Construct_UClass_ASBZTraversalNavLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLinkTraversalComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavLinkTraversalComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZTraversalNavLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZSmartNavLink,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTraversalNavLink_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTraversalNavLink.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTraversalNavLink.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTraversalNavLink_Statics::NewProp_NavLinkTraversalComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTraversalNavLink" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTraversalNavLink.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTraversalNavLink_Statics::NewProp_NavLinkTraversalComponent = { "NavLinkTraversalComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTraversalNavLink, NavLinkTraversalComponent), Z_Construct_UClass_USBZNavLinkTraversalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTraversalNavLink_Statics::NewProp_NavLinkTraversalComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTraversalNavLink_Statics::NewProp_NavLinkTraversalComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZTraversalNavLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTraversalNavLink_Statics::NewProp_NavLinkTraversalComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZTraversalNavLink_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZTraversalTrajectoryInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZTraversalNavLink, ISBZTraversalTrajectoryInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZTraversalNavLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZTraversalNavLink>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZTraversalNavLink_Statics::ClassParams = {
		&ASBZTraversalNavLink::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZTraversalNavLink_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTraversalNavLink_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZTraversalNavLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTraversalNavLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZTraversalNavLink()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZTraversalNavLink_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZTraversalNavLink, 586022447);
	template<> STARBREEZE_API UClass* StaticClass<ASBZTraversalNavLink>()
	{
		return ASBZTraversalNavLink::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZTraversalNavLink(Z_Construct_UClass_ASBZTraversalNavLink, &ASBZTraversalNavLink::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZTraversalNavLink"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZTraversalNavLink);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
