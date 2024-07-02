// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTelegraphAttackEffectComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTelegraphAttackEffectComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTelegraphAttackEffectComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTelegraphAttackEffectComponent();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnTelegraphAttackComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
// End Cross Module References
	void USBZTelegraphAttackEffectComponent::StaticRegisterNativesUSBZTelegraphAttackEffectComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZTelegraphAttackEffectComponent_NoRegister()
	{
		return USBZTelegraphAttackEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TelegraphEffct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TelegraphEffct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectAttachmentSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectAttachmentSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZOnTelegraphAttackComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZTelegraphAttackEffectComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTelegraphAttackEffectComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::NewProp_TelegraphEffct_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTelegraphAttackEffectComponent" },
		{ "ModuleRelativePath", "Public/SBZTelegraphAttackEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::NewProp_TelegraphEffct = { "TelegraphEffct", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTelegraphAttackEffectComponent, TelegraphEffct), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::NewProp_TelegraphEffct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::NewProp_TelegraphEffct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::NewProp_EffectAttachmentSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTelegraphAttackEffectComponent" },
		{ "ModuleRelativePath", "Public/SBZTelegraphAttackEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::NewProp_EffectAttachmentSocket = { "EffectAttachmentSocket", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTelegraphAttackEffectComponent, EffectAttachmentSocket), METADATA_PARAMS(Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::NewProp_EffectAttachmentSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::NewProp_EffectAttachmentSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::NewProp_EffectComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTelegraphAttackEffectComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTelegraphAttackEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::NewProp_EffectComponent = { "EffectComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTelegraphAttackEffectComponent, EffectComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::NewProp_EffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::NewProp_EffectComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::NewProp_TelegraphEffct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::NewProp_EffectAttachmentSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::NewProp_EffectComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTelegraphAttackEffectComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::ClassParams = {
		&USBZTelegraphAttackEffectComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTelegraphAttackEffectComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTelegraphAttackEffectComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTelegraphAttackEffectComponent, 4005629573);
	template<> STARBREEZE_API UClass* StaticClass<USBZTelegraphAttackEffectComponent>()
	{
		return USBZTelegraphAttackEffectComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTelegraphAttackEffectComponent(Z_Construct_UClass_USBZTelegraphAttackEffectComponent, &USBZTelegraphAttackEffectComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTelegraphAttackEffectComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTelegraphAttackEffectComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
