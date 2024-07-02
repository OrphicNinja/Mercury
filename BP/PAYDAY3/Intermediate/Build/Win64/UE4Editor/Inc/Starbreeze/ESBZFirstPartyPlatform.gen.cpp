// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZFirstPartyPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZFirstPartyPlatform() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZFirstPartyPlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZFirstPartyPlatform"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZFirstPartyPlatform>()
	{
		return ESBZFirstPartyPlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZFirstPartyPlatform(ESBZFirstPartyPlatform_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZFirstPartyPlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform_Hash() { return 2759080985U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZFirstPartyPlatform"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZFirstPartyPlatform::Unknown", (int64)ESBZFirstPartyPlatform::Unknown },
				{ "ESBZFirstPartyPlatform::Null", (int64)ESBZFirstPartyPlatform::Null },
				{ "ESBZFirstPartyPlatform::Steam", (int64)ESBZFirstPartyPlatform::Steam },
				{ "ESBZFirstPartyPlatform::PlayStationNetwork", (int64)ESBZFirstPartyPlatform::PlayStationNetwork },
				{ "ESBZFirstPartyPlatform::XboxLive", (int64)ESBZFirstPartyPlatform::XboxLive },
				{ "ESBZFirstPartyPlatform::EpicOnlineSystem", (int64)ESBZFirstPartyPlatform::EpicOnlineSystem },
				{ "ESBZFirstPartyPlatform::MAX", (int64)ESBZFirstPartyPlatform::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EpicOnlineSystem.Name", "ESBZFirstPartyPlatform::EpicOnlineSystem" },
				{ "MAX.Name", "ESBZFirstPartyPlatform::MAX" },
				{ "ModuleRelativePath", "Public/ESBZFirstPartyPlatform.h" },
				{ "Null.Name", "ESBZFirstPartyPlatform::Null" },
				{ "PlayStationNetwork.Name", "ESBZFirstPartyPlatform::PlayStationNetwork" },
				{ "Steam.Name", "ESBZFirstPartyPlatform::Steam" },
				{ "Unknown.Name", "ESBZFirstPartyPlatform::Unknown" },
				{ "XboxLive.Name", "ESBZFirstPartyPlatform::XboxLive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZFirstPartyPlatform",
				"ESBZFirstPartyPlatform",
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
