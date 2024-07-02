// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZFramerateLimit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZFramerateLimit() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFramerateLimit();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZFramerateLimit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZFramerateLimit, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZFramerateLimit"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZFramerateLimit>()
	{
		return ESBZFramerateLimit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZFramerateLimit(ESBZFramerateLimit_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZFramerateLimit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZFramerateLimit_Hash() { return 2430772650U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZFramerateLimit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZFramerateLimit"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZFramerateLimit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZFramerateLimit::_30", (int64)ESBZFramerateLimit::_30 },
				{ "ESBZFramerateLimit::_60", (int64)ESBZFramerateLimit::_60 },
				{ "ESBZFramerateLimit::_120", (int64)ESBZFramerateLimit::_120 },
				{ "ESBZFramerateLimit::_144", (int64)ESBZFramerateLimit::_144 },
				{ "ESBZFramerateLimit::_160", (int64)ESBZFramerateLimit::_160 },
				{ "ESBZFramerateLimit::_165", (int64)ESBZFramerateLimit::_165 },
				{ "ESBZFramerateLimit::_180", (int64)ESBZFramerateLimit::_180 },
				{ "ESBZFramerateLimit::_200", (int64)ESBZFramerateLimit::_200 },
				{ "ESBZFramerateLimit::_240", (int64)ESBZFramerateLimit::_240 },
				{ "ESBZFramerateLimit::_360", (int64)ESBZFramerateLimit::_360 },
				{ "ESBZFramerateLimit::Unlimited", (int64)ESBZFramerateLimit::Unlimited },
				{ "ESBZFramerateLimit::Invalid", (int64)ESBZFramerateLimit::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "_120.Name", "ESBZFramerateLimit::_120" },
				{ "_144.Name", "ESBZFramerateLimit::_144" },
				{ "_160.Name", "ESBZFramerateLimit::_160" },
				{ "_165.Name", "ESBZFramerateLimit::_165" },
				{ "_180.Name", "ESBZFramerateLimit::_180" },
				{ "_200.Name", "ESBZFramerateLimit::_200" },
				{ "_240.Name", "ESBZFramerateLimit::_240" },
				{ "_30.Name", "ESBZFramerateLimit::_30" },
				{ "_360.Name", "ESBZFramerateLimit::_360" },
				{ "_60.Name", "ESBZFramerateLimit::_60" },
				{ "Invalid.Name", "ESBZFramerateLimit::Invalid" },
				{ "ModuleRelativePath", "Public/ESBZFramerateLimit.h" },
				{ "Unlimited.Name", "ESBZFramerateLimit::Unlimited" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZFramerateLimit",
				"ESBZFramerateLimit",
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
