// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIUtilityDecider_FollowOrder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIUtilityDecider_FollowOrder() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void USBZAIUtilityDecider_FollowOrder::StaticRegisterNativesUSBZAIUtilityDecider_FollowOrder()
	{
	}
	UClass* Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_NoRegister()
	{
		return USBZAIUtilityDecider_FollowOrder::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InjectionTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InjectionTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIUtilityDecider,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIUtilityDecider_FollowOrder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_FollowOrder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::NewProp_CurrentOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_FollowOrder" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_FollowOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::NewProp_CurrentOrder = { "CurrentOrder", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_FollowOrder, CurrentOrder), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::NewProp_CurrentOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::NewProp_CurrentOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::NewProp_NewOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_FollowOrder" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_FollowOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::NewProp_NewOrder = { "NewOrder", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_FollowOrder, NewOrder), Z_Construct_UClass_USBZAIOrder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::NewProp_NewOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::NewProp_NewOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::NewProp_InjectionTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_FollowOrder" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_FollowOrder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::NewProp_InjectionTag = { "InjectionTag", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_FollowOrder, InjectionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::NewProp_InjectionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::NewProp_InjectionTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::NewProp_CurrentOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::NewProp_NewOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::NewProp_InjectionTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIUtilityDecider_FollowOrder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::ClassParams = {
		&USBZAIUtilityDecider_FollowOrder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIUtilityDecider_FollowOrder, 2433384525);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIUtilityDecider_FollowOrder>()
	{
		return USBZAIUtilityDecider_FollowOrder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIUtilityDecider_FollowOrder(Z_Construct_UClass_USBZAIUtilityDecider_FollowOrder, &USBZAIUtilityDecider_FollowOrder::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIUtilityDecider_FollowOrder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIUtilityDecider_FollowOrder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
