// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAccelByteUserNull.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAccelByteUserNull() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteUserNull_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteUserNull();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteUser();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAccelByteUserNull::StaticRegisterNativesUSBZAccelByteUserNull()
	{
	}
	UClass* Z_Construct_UClass_USBZAccelByteUserNull_NoRegister()
	{
		return USBZAccelByteUserNull::StaticClass();
	}
	struct Z_Construct_UClass_USBZAccelByteUserNull_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAccelByteUserNull_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAccelByteUser,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteUserNull_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAccelByteUserNull.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAccelByteUserNull.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAccelByteUserNull_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAccelByteUserNull>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAccelByteUserNull_Statics::ClassParams = {
		&USBZAccelByteUserNull::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteUserNull_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteUserNull_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAccelByteUserNull()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAccelByteUserNull_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAccelByteUserNull, 3165181807);
	template<> STARBREEZE_API UClass* StaticClass<USBZAccelByteUserNull>()
	{
		return USBZAccelByteUserNull::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAccelByteUserNull(Z_Construct_UClass_USBZAccelByteUserNull, &USBZAccelByteUserNull::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAccelByteUserNull"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAccelByteUserNull);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
