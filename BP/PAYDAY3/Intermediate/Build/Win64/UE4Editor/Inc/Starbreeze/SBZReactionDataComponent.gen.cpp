// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReactionDataComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReactionDataComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionDataComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionDataComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReactionData();
// End Cross Module References
	void USBZReactionDataComponent::StaticRegisterNativesUSBZReactionDataComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZReactionDataComponent_NoRegister()
	{
		return USBZReactionDataComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZReactionDataComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Reaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReactionDataComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionDataComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZReactionDataComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReactionDataComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionDataComponent_Statics::NewProp_Reaction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReactionDataComponent" },
		{ "ModuleRelativePath", "Public/SBZReactionDataComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZReactionDataComponent_Statics::NewProp_Reaction = { "Reaction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReactionDataComponent, Reaction), Z_Construct_UScriptStruct_FSBZReactionData, METADATA_PARAMS(Z_Construct_UClass_USBZReactionDataComponent_Statics::NewProp_Reaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionDataComponent_Statics::NewProp_Reaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZReactionDataComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReactionDataComponent_Statics::NewProp_Reaction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReactionDataComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReactionDataComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReactionDataComponent_Statics::ClassParams = {
		&USBZReactionDataComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZReactionDataComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionDataComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReactionDataComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionDataComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReactionDataComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReactionDataComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReactionDataComponent, 3868576219);
	template<> STARBREEZE_API UClass* StaticClass<USBZReactionDataComponent>()
	{
		return USBZReactionDataComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReactionDataComponent(Z_Construct_UClass_USBZReactionDataComponent, &USBZReactionDataComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReactionDataComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReactionDataComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
