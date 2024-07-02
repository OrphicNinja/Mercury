// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIPointOfInterestDeadBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIPointOfInterestDeadBody() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIPointOfInterestDeadBody();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIPointOfInterest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSlot_NoRegister();
// End Cross Module References
	void ASBZAIPointOfInterestDeadBody::StaticRegisterNativesASBZAIPointOfInterestDeadBody()
	{
	}
	UClass* Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_NoRegister()
	{
		return ASBZAIPointOfInterestDeadBody::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZAIPointOfInterest,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIPointOfInterestDeadBody.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterestDeadBody.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::NewProp_LifeActionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIPointOfInterestDeadBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterestDeadBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::NewProp_LifeActionComponent = { "LifeActionComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIPointOfInterestDeadBody, LifeActionComponent), Z_Construct_UClass_USBZLifeActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::NewProp_LifeActionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::NewProp_LifeActionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::NewProp_LifeActionInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIPointOfInterestDeadBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterestDeadBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::NewProp_LifeActionInstance = { "LifeActionInstance", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIPointOfInterestDeadBody, LifeActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::NewProp_LifeActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::NewProp_LifeActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::NewProp_LifeActionSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIPointOfInterestDeadBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterestDeadBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::NewProp_LifeActionSlot = { "LifeActionSlot", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIPointOfInterestDeadBody, LifeActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::NewProp_LifeActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::NewProp_LifeActionSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::NewProp_LifeActionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::NewProp_LifeActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::NewProp_LifeActionSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAIPointOfInterestDeadBody>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::ClassParams = {
		&ASBZAIPointOfInterestDeadBody::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAIPointOfInterestDeadBody()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAIPointOfInterestDeadBody, 398439535);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAIPointOfInterestDeadBody>()
	{
		return ASBZAIPointOfInterestDeadBody::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAIPointOfInterestDeadBody(Z_Construct_UClass_ASBZAIPointOfInterestDeadBody, &ASBZAIPointOfInterestDeadBody::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAIPointOfInterestDeadBody"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAIPointOfInterestDeadBody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
