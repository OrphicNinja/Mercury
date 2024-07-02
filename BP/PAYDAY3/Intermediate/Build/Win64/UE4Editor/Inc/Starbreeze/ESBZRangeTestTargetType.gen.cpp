// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZRangeTestTargetType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZRangeTestTargetType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRangeTestTargetType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZRangeTestTargetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZRangeTestTargetType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZRangeTestTargetType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZRangeTestTargetType>()
	{
		return ESBZRangeTestTargetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZRangeTestTargetType(ESBZRangeTestTargetType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZRangeTestTargetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZRangeTestTargetType_Hash() { return 1777853604U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZRangeTestTargetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZRangeTestTargetType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZRangeTestTargetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZRangeTestTargetType::Enemy", (int64)ESBZRangeTestTargetType::Enemy },
				{ "ESBZRangeTestTargetType::Player", (int64)ESBZRangeTestTargetType::Player },
				{ "ESBZRangeTestTargetType::Cop", (int64)ESBZRangeTestTargetType::Cop },
				{ "ESBZRangeTestTargetType::NonAlertedCop", (int64)ESBZRangeTestTargetType::NonAlertedCop },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cop.Name", "ESBZRangeTestTargetType::Cop" },
				{ "Enemy.Name", "ESBZRangeTestTargetType::Enemy" },
				{ "ModuleRelativePath", "Public/ESBZRangeTestTargetType.h" },
				{ "NonAlertedCop.Name", "ESBZRangeTestTargetType::NonAlertedCop" },
				{ "Player.Name", "ESBZRangeTestTargetType::Player" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZRangeTestTargetType",
				"ESBZRangeTestTargetType",
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
