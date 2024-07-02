// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEventReactionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEventReactionComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEventReactionComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEventReactionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEventRequestContainer();
// End Cross Module References
	void USBZEventReactionComponent::StaticRegisterNativesUSBZEventReactionComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZEventReactionComponent_NoRegister()
	{
		return USBZEventReactionComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZEventReactionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestTimers_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestTimers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestTimers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RequestTimers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventReactionRequests_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventReactionRequests_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventReactionRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EventReactionRequests;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEventReactionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEventReactionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZEventReactionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEventReactionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_RequestTimers_ValueProp = { "RequestTimers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_RequestTimers_Key_KeyProp = { "RequestTimers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_RequestTimers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEventReactionComponent" },
		{ "ModuleRelativePath", "Public/SBZEventReactionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_RequestTimers = { "RequestTimers", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEventReactionComponent, RequestTimers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_RequestTimers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_RequestTimers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_EventReactionRequests_ValueProp = { "EventReactionRequests", nullptr, (EPropertyFlags)0x0000008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZEventRequestContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_EventReactionRequests_Key_KeyProp = { "EventReactionRequests_Key", nullptr, (EPropertyFlags)0x0000008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_EventReactionRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEventReactionComponent" },
		{ "ModuleRelativePath", "Public/SBZEventReactionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_EventReactionRequests = { "EventReactionRequests", nullptr, (EPropertyFlags)0x0040008000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEventReactionComponent, EventReactionRequests), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_EventReactionRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_EventReactionRequests_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEventReactionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_RequestTimers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_RequestTimers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_RequestTimers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_EventReactionRequests_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_EventReactionRequests_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEventReactionComponent_Statics::NewProp_EventReactionRequests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEventReactionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEventReactionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEventReactionComponent_Statics::ClassParams = {
		&USBZEventReactionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEventReactionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEventReactionComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEventReactionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEventReactionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEventReactionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEventReactionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEventReactionComponent, 2892512461);
	template<> STARBREEZE_API UClass* StaticClass<USBZEventReactionComponent>()
	{
		return USBZEventReactionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEventReactionComponent(Z_Construct_UClass_USBZEventReactionComponent, &USBZEventReactionComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEventReactionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEventReactionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
