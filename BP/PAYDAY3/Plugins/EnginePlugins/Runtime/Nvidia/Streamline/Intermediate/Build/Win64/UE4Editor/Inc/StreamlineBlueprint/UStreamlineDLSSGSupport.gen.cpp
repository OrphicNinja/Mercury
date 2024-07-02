// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamlineBlueprint/Public/UStreamlineDLSSGSupport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUStreamlineDLSSGSupport() {}
// Cross Module References
	STREAMLINEBLUEPRINT_API UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport();
	UPackage* Z_Construct_UPackage__Script_StreamlineBlueprint();
// End Cross Module References
	static UEnum* UStreamlineDLSSGSupport_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport, Z_Construct_UPackage__Script_StreamlineBlueprint(), TEXT("UStreamlineDLSSGSupport"));
		}
		return Singleton;
	}
	template<> STREAMLINEBLUEPRINT_API UEnum* StaticEnum<UStreamlineDLSSGSupport>()
	{
		return UStreamlineDLSSGSupport_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_UStreamlineDLSSGSupport(UStreamlineDLSSGSupport_StaticEnum, TEXT("/Script/StreamlineBlueprint"), TEXT("UStreamlineDLSSGSupport"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport_Hash() { return 1963578064U; }
	UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StreamlineBlueprint();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("UStreamlineDLSSGSupport"), 0, Get_Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "UStreamlineDLSSGSupport::Supported", (int64)UStreamlineDLSSGSupport::Supported },
				{ "UStreamlineDLSSGSupport::NotSupported", (int64)UStreamlineDLSSGSupport::NotSupported },
				{ "UStreamlineDLSSGSupport::NotSupportedIncompatibleHardware", (int64)UStreamlineDLSSGSupport::NotSupportedIncompatibleHardware },
				{ "UStreamlineDLSSGSupport::NotSupportedDriverOutOfDate", (int64)UStreamlineDLSSGSupport::NotSupportedDriverOutOfDate },
				{ "UStreamlineDLSSGSupport::NotSupportedOperatingSystemOutOfDate", (int64)UStreamlineDLSSGSupport::NotSupportedOperatingSystemOutOfDate },
				{ "UStreamlineDLSSGSupport::NotSupportedByPlatformAtBuildTime", (int64)UStreamlineDLSSGSupport::NotSupportedByPlatformAtBuildTime },
				{ "UStreamlineDLSSGSupport::NotSupportedIncompatibleAPICaptureToolActive", (int64)UStreamlineDLSSGSupport::NotSupportedIncompatibleAPICaptureToolActive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/UStreamlineDLSSGSupport.h" },
				{ "NotSupported.Name", "UStreamlineDLSSGSupport::NotSupported" },
				{ "NotSupportedByPlatformAtBuildTime.Name", "UStreamlineDLSSGSupport::NotSupportedByPlatformAtBuildTime" },
				{ "NotSupportedDriverOutOfDate.Name", "UStreamlineDLSSGSupport::NotSupportedDriverOutOfDate" },
				{ "NotSupportedIncompatibleAPICaptureToolActive.Name", "UStreamlineDLSSGSupport::NotSupportedIncompatibleAPICaptureToolActive" },
				{ "NotSupportedIncompatibleHardware.Name", "UStreamlineDLSSGSupport::NotSupportedIncompatibleHardware" },
				{ "NotSupportedOperatingSystemOutOfDate.Name", "UStreamlineDLSSGSupport::NotSupportedOperatingSystemOutOfDate" },
				{ "Supported.Name", "UStreamlineDLSSGSupport::Supported" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
				nullptr,
				"UStreamlineDLSSGSupport",
				"UStreamlineDLSSGSupport",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
