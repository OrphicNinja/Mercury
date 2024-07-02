// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_Interact.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_Interact() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_Interact_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_Interact();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USBZBTTask_Interact::StaticRegisterNativesUSBZBTTask_Interact()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_Interact_NoRegister()
	{
		return USBZBTTask_Interact::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_Interact_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableActorBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractableActorBBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_Interact_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Interact_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_Interact.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Interact.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Interact_Statics::NewProp_InteractableActorBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Interact" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_Interact_Statics::NewProp_InteractableActorBBKey = { "InteractableActorBBKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Interact, InteractableActorBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Interact_Statics::NewProp_InteractableActorBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Interact_Statics::NewProp_InteractableActorBBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Interact_Statics::NewProp_InteractableActorBBKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_Interact_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_Interact>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_Interact_Statics::ClassParams = {
		&USBZBTTask_Interact::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_Interact_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Interact_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Interact_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Interact_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_Interact()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_Interact_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_Interact, 3227959955);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_Interact>()
	{
		return USBZBTTask_Interact::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_Interact(Z_Construct_UClass_USBZBTTask_Interact, &USBZBTTask_Interact::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_Interact"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_Interact);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
