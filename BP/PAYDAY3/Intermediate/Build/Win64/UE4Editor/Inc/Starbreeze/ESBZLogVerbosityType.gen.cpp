// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZLogVerbosityType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZLogVerbosityType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZLogVerbosityType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZLogVerbosityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZLogVerbosityType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZLogVerbosityType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZLogVerbosityType>()
	{
		return ESBZLogVerbosityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZLogVerbosityType(ESBZLogVerbosityType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZLogVerbosityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZLogVerbosityType_Hash() { return 2630976426U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZLogVerbosityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZLogVerbosityType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZLogVerbosityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZLogVerbosityType::NoLogging", (int64)ESBZLogVerbosityType::NoLogging },
				{ "ESBZLogVerbosityType::Fatal", (int64)ESBZLogVerbosityType::Fatal },
				{ "ESBZLogVerbosityType::Error", (int64)ESBZLogVerbosityType::Error },
				{ "ESBZLogVerbosityType::Warning", (int64)ESBZLogVerbosityType::Warning },
				{ "ESBZLogVerbosityType::Display", (int64)ESBZLogVerbosityType::Display },
				{ "ESBZLogVerbosityType::Log", (int64)ESBZLogVerbosityType::Log },
				{ "ESBZLogVerbosityType::Verbose", (int64)ESBZLogVerbosityType::Verbose },
				{ "ESBZLogVerbosityType::VeryVerbose", (int64)ESBZLogVerbosityType::VeryVerbose },
				{ "ESBZLogVerbosityType::All", (int64)ESBZLogVerbosityType::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ESBZLogVerbosityType::All" },
				{ "BlueprintType", "true" },
				{ "Display.Name", "ESBZLogVerbosityType::Display" },
				{ "Error.Name", "ESBZLogVerbosityType::Error" },
				{ "Fatal.Name", "ESBZLogVerbosityType::Fatal" },
				{ "Log.Name", "ESBZLogVerbosityType::Log" },
				{ "ModuleRelativePath", "Public/ESBZLogVerbosityType.h" },
				{ "NoLogging.Name", "ESBZLogVerbosityType::NoLogging" },
				{ "Verbose.Name", "ESBZLogVerbosityType::Verbose" },
				{ "VeryVerbose.Name", "ESBZLogVerbosityType::VeryVerbose" },
				{ "Warning.Name", "ESBZLogVerbosityType::Warning" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZLogVerbosityType",
				"ESBZLogVerbosityType",
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
