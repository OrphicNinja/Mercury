// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZEvadeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZEvadeType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEvadeType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZEvadeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZEvadeType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZEvadeType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZEvadeType>()
	{
		return ESBZEvadeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZEvadeType(ESBZEvadeType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZEvadeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZEvadeType_Hash() { return 2115851858U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZEvadeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZEvadeType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZEvadeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZEvadeType::StandRightSlow", (int64)ESBZEvadeType::StandRightSlow },
				{ "ESBZEvadeType::StandRightFast", (int64)ESBZEvadeType::StandRightFast },
				{ "ESBZEvadeType::StandLeftSlow", (int64)ESBZEvadeType::StandLeftSlow },
				{ "ESBZEvadeType::StandLeftFast", (int64)ESBZEvadeType::StandLeftFast },
				{ "ESBZEvadeType::CrouchRightSlow", (int64)ESBZEvadeType::CrouchRightSlow },
				{ "ESBZEvadeType::CrouchRightFast", (int64)ESBZEvadeType::CrouchRightFast },
				{ "ESBZEvadeType::CrouchLeftSlow", (int64)ESBZEvadeType::CrouchLeftSlow },
				{ "ESBZEvadeType::CrouchLeftFast", (int64)ESBZEvadeType::CrouchLeftFast },
				{ "ESBZEvadeType::None", (int64)ESBZEvadeType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CrouchLeftFast.Name", "ESBZEvadeType::CrouchLeftFast" },
				{ "CrouchLeftSlow.Name", "ESBZEvadeType::CrouchLeftSlow" },
				{ "CrouchRightFast.Name", "ESBZEvadeType::CrouchRightFast" },
				{ "CrouchRightSlow.Name", "ESBZEvadeType::CrouchRightSlow" },
				{ "ModuleRelativePath", "Public/ESBZEvadeType.h" },
				{ "None.Name", "ESBZEvadeType::None" },
				{ "StandLeftFast.Name", "ESBZEvadeType::StandLeftFast" },
				{ "StandLeftSlow.Name", "ESBZEvadeType::StandLeftSlow" },
				{ "StandRightFast.Name", "ESBZEvadeType::StandRightFast" },
				{ "StandRightSlow.Name", "ESBZEvadeType::StandRightSlow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZEvadeType",
				"ESBZEvadeType",
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
