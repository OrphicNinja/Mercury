// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/DrawRoomComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawRoomComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UDrawRoomComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UDrawRoomComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UDrawRoomComponent::StaticRegisterNativesUDrawRoomComponent()
	{
	}
	UClass* Z_Construct_UClass_UDrawRoomComponent_NoRegister()
	{
		return UDrawRoomComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDrawRoomComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawRoomComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawRoomComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "DrawRoomComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DrawRoomComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawRoomComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawRoomComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDrawRoomComponent_Statics::ClassParams = {
		&UDrawRoomComponent::StaticClass,
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
		0x00A830A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDrawRoomComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawRoomComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawRoomComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDrawRoomComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDrawRoomComponent, 770525470);
	template<> AKAUDIO_API UClass* StaticClass<UDrawRoomComponent>()
	{
		return UDrawRoomComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDrawRoomComponent(Z_Construct_UClass_UDrawRoomComponent, &UDrawRoomComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UDrawRoomComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawRoomComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
