// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZShootingPointType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZShootingPointType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZShootingPointType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZShootingPointType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZShootingPointType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZShootingPointType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZShootingPointType>()
	{
		return ESBZShootingPointType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZShootingPointType(ESBZShootingPointType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZShootingPointType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZShootingPointType_Hash() { return 4165274591U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZShootingPointType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZShootingPointType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZShootingPointType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZShootingPointType::CrouchLeft", (int64)ESBZShootingPointType::CrouchLeft },
				{ "ESBZShootingPointType::StandLeft", (int64)ESBZShootingPointType::StandLeft },
				{ "ESBZShootingPointType::StandFront", (int64)ESBZShootingPointType::StandFront },
				{ "ESBZShootingPointType::StandFrontLow", (int64)ESBZShootingPointType::StandFrontLow },
				{ "ESBZShootingPointType::StandRight", (int64)ESBZShootingPointType::StandRight },
				{ "ESBZShootingPointType::CrouchRight", (int64)ESBZShootingPointType::CrouchRight },
				{ "ESBZShootingPointType::StandHigh", (int64)ESBZShootingPointType::StandHigh },
				{ "ESBZShootingPointType::Max", (int64)ESBZShootingPointType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CrouchLeft.Name", "ESBZShootingPointType::CrouchLeft" },
				{ "CrouchRight.Name", "ESBZShootingPointType::CrouchRight" },
				{ "Max.Name", "ESBZShootingPointType::Max" },
				{ "ModuleRelativePath", "Public/ESBZShootingPointType.h" },
				{ "StandFront.Name", "ESBZShootingPointType::StandFront" },
				{ "StandFrontLow.Name", "ESBZShootingPointType::StandFrontLow" },
				{ "StandHigh.Name", "ESBZShootingPointType::StandHigh" },
				{ "StandLeft.Name", "ESBZShootingPointType::StandLeft" },
				{ "StandRight.Name", "ESBZShootingPointType::StandRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZShootingPointType",
				"ESBZShootingPointType",
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
