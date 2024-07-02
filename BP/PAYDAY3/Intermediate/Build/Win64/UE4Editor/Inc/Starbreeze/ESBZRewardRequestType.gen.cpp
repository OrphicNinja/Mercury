// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZRewardRequestType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZRewardRequestType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRewardRequestType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZRewardRequestType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZRewardRequestType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZRewardRequestType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZRewardRequestType>()
	{
		return ESBZRewardRequestType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZRewardRequestType(ESBZRewardRequestType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZRewardRequestType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZRewardRequestType_Hash() { return 489576077U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZRewardRequestType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZRewardRequestType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZRewardRequestType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZRewardRequestType::HeistCompleted", (int64)ESBZRewardRequestType::HeistCompleted },
				{ "ESBZRewardRequestType::Renown", (int64)ESBZRewardRequestType::Renown },
				{ "ESBZRewardRequestType::Infamy", (int64)ESBZRewardRequestType::Infamy },
				{ "ESBZRewardRequestType::Challenge", (int64)ESBZRewardRequestType::Challenge },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Challenge.Name", "ESBZRewardRequestType::Challenge" },
				{ "HeistCompleted.Name", "ESBZRewardRequestType::HeistCompleted" },
				{ "Infamy.Name", "ESBZRewardRequestType::Infamy" },
				{ "ModuleRelativePath", "Public/ESBZRewardRequestType.h" },
				{ "Renown.Name", "ESBZRewardRequestType::Renown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZRewardRequestType",
				"ESBZRewardRequestType",
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
