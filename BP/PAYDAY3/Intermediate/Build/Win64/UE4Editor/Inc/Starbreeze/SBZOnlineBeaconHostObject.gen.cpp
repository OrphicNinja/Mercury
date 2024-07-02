// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineBeaconHostObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineBeaconHostObject() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZOnlineBeaconHostObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZOnlineBeaconHostObject();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZOnlineBeaconHostObject::StaticRegisterNativesASBZOnlineBeaconHostObject()
	{
	}
	UClass* Z_Construct_UClass_ASBZOnlineBeaconHostObject_NoRegister()
	{
		return ASBZOnlineBeaconHostObject::StaticClass();
	}
	struct Z_Construct_UClass_ASBZOnlineBeaconHostObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZOnlineBeaconHostObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHostObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZOnlineBeaconHostObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZOnlineBeaconHostObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineBeaconHostObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZOnlineBeaconHostObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZOnlineBeaconHostObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZOnlineBeaconHostObject_Statics::ClassParams = {
		&ASBZOnlineBeaconHostObject::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZOnlineBeaconHostObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZOnlineBeaconHostObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZOnlineBeaconHostObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZOnlineBeaconHostObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZOnlineBeaconHostObject, 1930929085);
	template<> STARBREEZE_API UClass* StaticClass<ASBZOnlineBeaconHostObject>()
	{
		return ASBZOnlineBeaconHostObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZOnlineBeaconHostObject(Z_Construct_UClass_ASBZOnlineBeaconHostObject, &ASBZOnlineBeaconHostObject::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZOnlineBeaconHostObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZOnlineBeaconHostObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
