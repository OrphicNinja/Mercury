// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZNegotiationTradeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZNegotiationTradeType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZNegotiationTradeType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZNegotiationTradeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZNegotiationTradeType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZNegotiationTradeType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZNegotiationTradeType>()
	{
		return ESBZNegotiationTradeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZNegotiationTradeType(ESBZNegotiationTradeType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZNegotiationTradeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZNegotiationTradeType_Hash() { return 2560464023U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZNegotiationTradeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZNegotiationTradeType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZNegotiationTradeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZNegotiationTradeType::None", (int64)ESBZNegotiationTradeType::None },
				{ "ESBZNegotiationTradeType::Time", (int64)ESBZNegotiationTradeType::Time },
				{ "ESBZNegotiationTradeType::Player", (int64)ESBZNegotiationTradeType::Player },
				{ "ESBZNegotiationTradeType::Pack", (int64)ESBZNegotiationTradeType::Pack },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZNegotiationTradeType.h" },
				{ "None.Name", "ESBZNegotiationTradeType::None" },
				{ "Pack.Name", "ESBZNegotiationTradeType::Pack" },
				{ "Player.Name", "ESBZNegotiationTradeType::Player" },
				{ "Time.Name", "ESBZNegotiationTradeType::Time" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZNegotiationTradeType",
				"ESBZNegotiationTradeType",
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
