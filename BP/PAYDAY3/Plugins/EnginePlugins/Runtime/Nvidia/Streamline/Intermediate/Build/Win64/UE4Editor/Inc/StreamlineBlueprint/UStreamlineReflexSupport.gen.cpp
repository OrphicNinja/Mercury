// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamlineBlueprint/Public/UStreamlineReflexSupport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUStreamlineReflexSupport() {}
// Cross Module References
	STREAMLINEBLUEPRINT_API UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexSupport();
	UPackage* Z_Construct_UPackage__Script_StreamlineBlueprint();
// End Cross Module References
	static UEnum* UStreamlineReflexSupport_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexSupport, Z_Construct_UPackage__Script_StreamlineBlueprint(), TEXT("UStreamlineReflexSupport"));
		}
		return Singleton;
	}
	template<> STREAMLINEBLUEPRINT_API UEnum* StaticEnum<UStreamlineReflexSupport>()
	{
		return UStreamlineReflexSupport_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_UStreamlineReflexSupport(UStreamlineReflexSupport_StaticEnum, TEXT("/Script/StreamlineBlueprint"), TEXT("UStreamlineReflexSupport"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexSupport_Hash() { return 3233779792U; }
	UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexSupport()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StreamlineBlueprint();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("UStreamlineReflexSupport"), 0, Get_Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexSupport_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "UStreamlineReflexSupport::Supported", (int64)UStreamlineReflexSupport::Supported },
				{ "UStreamlineReflexSupport::NotSupported", (int64)UStreamlineReflexSupport::NotSupported },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/UStreamlineReflexSupport.h" },
				{ "NotSupported.Name", "UStreamlineReflexSupport::NotSupported" },
				{ "Supported.Name", "UStreamlineReflexSupport::Supported" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
				nullptr,
				"UStreamlineReflexSupport",
				"UStreamlineReflexSupport",
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
