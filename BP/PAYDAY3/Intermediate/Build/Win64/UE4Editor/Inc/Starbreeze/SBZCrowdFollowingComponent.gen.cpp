// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCrowdFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCrowdFollowingComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCrowdFollowingComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCrowdFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZCrowdFollowingComponent::StaticRegisterNativesUSBZCrowdFollowingComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZCrowdFollowingComponent_NoRegister()
	{
		return USBZCrowdFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZCrowdFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCrowdFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCrowdFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCrowdFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZCrowdFollowingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCrowdFollowingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCrowdFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCrowdFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCrowdFollowingComponent_Statics::ClassParams = {
		&USBZCrowdFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCrowdFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCrowdFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCrowdFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCrowdFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCrowdFollowingComponent, 2867448621);
	template<> STARBREEZE_API UClass* StaticClass<USBZCrowdFollowingComponent>()
	{
		return USBZCrowdFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCrowdFollowingComponent(Z_Construct_UClass_USBZCrowdFollowingComponent, &USBZCrowdFollowingComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCrowdFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCrowdFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
