// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_GetRelocatePosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_GetRelocatePosition() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_GetRelocatePosition_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_GetRelocatePosition();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTTask_GetRelocatePosition::StaticRegisterNativesUSBZBTTask_GetRelocatePosition()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_GetRelocatePosition_NoRegister()
	{
		return USBZBTTask_GetRelocatePosition::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_GetRelocatePosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_GetRelocatePosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_GetRelocatePosition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_GetRelocatePosition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_GetRelocatePosition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_GetRelocatePosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_GetRelocatePosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_GetRelocatePosition_Statics::ClassParams = {
		&USBZBTTask_GetRelocatePosition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_GetRelocatePosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_GetRelocatePosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_GetRelocatePosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_GetRelocatePosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_GetRelocatePosition, 168625496);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_GetRelocatePosition>()
	{
		return USBZBTTask_GetRelocatePosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_GetRelocatePosition(Z_Construct_UClass_USBZBTTask_GetRelocatePosition, &USBZBTTask_GetRelocatePosition::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_GetRelocatePosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_GetRelocatePosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
