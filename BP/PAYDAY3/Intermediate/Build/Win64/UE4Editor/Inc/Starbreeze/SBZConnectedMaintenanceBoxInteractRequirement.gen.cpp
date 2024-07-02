// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZConnectedMaintenanceBoxInteractRequirement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZConnectedMaintenanceBoxInteractRequirement() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZConnectedMaintenanceBoxInteractRequirement_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZConnectedMaintenanceBoxInteractRequirement();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractRequirement();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZConnectedMaintenanceBoxInteractRequirement::StaticRegisterNativesUSBZConnectedMaintenanceBoxInteractRequirement()
	{
	}
	UClass* Z_Construct_UClass_USBZConnectedMaintenanceBoxInteractRequirement_NoRegister()
	{
		return USBZConnectedMaintenanceBoxInteractRequirement::StaticClass();
	}
	struct Z_Construct_UClass_USBZConnectedMaintenanceBoxInteractRequirement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZConnectedMaintenanceBoxInteractRequirement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseInteractRequirement,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZConnectedMaintenanceBoxInteractRequirement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZConnectedMaintenanceBoxInteractRequirement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZConnectedMaintenanceBoxInteractRequirement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZConnectedMaintenanceBoxInteractRequirement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZConnectedMaintenanceBoxInteractRequirement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZConnectedMaintenanceBoxInteractRequirement_Statics::ClassParams = {
		&USBZConnectedMaintenanceBoxInteractRequirement::StaticClass,
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
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZConnectedMaintenanceBoxInteractRequirement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZConnectedMaintenanceBoxInteractRequirement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZConnectedMaintenanceBoxInteractRequirement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZConnectedMaintenanceBoxInteractRequirement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZConnectedMaintenanceBoxInteractRequirement, 1461536277);
	template<> STARBREEZE_API UClass* StaticClass<USBZConnectedMaintenanceBoxInteractRequirement>()
	{
		return USBZConnectedMaintenanceBoxInteractRequirement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZConnectedMaintenanceBoxInteractRequirement(Z_Construct_UClass_USBZConnectedMaintenanceBoxInteractRequirement, &USBZConnectedMaintenanceBoxInteractRequirement::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZConnectedMaintenanceBoxInteractRequirement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZConnectedMaintenanceBoxInteractRequirement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
