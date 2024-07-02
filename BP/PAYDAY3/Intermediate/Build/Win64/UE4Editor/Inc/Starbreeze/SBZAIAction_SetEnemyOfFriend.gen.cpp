// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAction_SetEnemyOfFriend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAction_SetEnemyOfFriend() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_SetEnemyOfFriend_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_SetEnemyOfFriend();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIAction_SetEnemyOfFriend::StaticRegisterNativesUSBZAIAction_SetEnemyOfFriend()
	{
	}
	UClass* Z_Construct_UClass_USBZAIAction_SetEnemyOfFriend_NoRegister()
	{
		return USBZAIAction_SetEnemyOfFriend::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAction_SetEnemyOfFriend_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAction_SetEnemyOfFriend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIAction,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_SetEnemyOfFriend_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAction_SetEnemyOfFriend.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_SetEnemyOfFriend.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAction_SetEnemyOfFriend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAction_SetEnemyOfFriend>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAction_SetEnemyOfFriend_Statics::ClassParams = {
		&USBZAIAction_SetEnemyOfFriend::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_SetEnemyOfFriend_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SetEnemyOfFriend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAction_SetEnemyOfFriend()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAction_SetEnemyOfFriend_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAction_SetEnemyOfFriend, 3519271054);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAction_SetEnemyOfFriend>()
	{
		return USBZAIAction_SetEnemyOfFriend::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAction_SetEnemyOfFriend(Z_Construct_UClass_USBZAIAction_SetEnemyOfFriend, &USBZAIAction_SetEnemyOfFriend::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAction_SetEnemyOfFriend"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAction_SetEnemyOfFriend);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
