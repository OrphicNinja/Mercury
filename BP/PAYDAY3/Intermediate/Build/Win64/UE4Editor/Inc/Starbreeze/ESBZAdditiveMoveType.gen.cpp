// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAdditiveMoveType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAdditiveMoveType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAdditiveMoveType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAdditiveMoveType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAdditiveMoveType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAdditiveMoveType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAdditiveMoveType>()
	{
		return ESBZAdditiveMoveType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAdditiveMoveType(ESBZAdditiveMoveType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAdditiveMoveType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAdditiveMoveType_Hash() { return 3911049303U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAdditiveMoveType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAdditiveMoveType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAdditiveMoveType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAdditiveMoveType::Equipped", (int64)ESBZAdditiveMoveType::Equipped },
				{ "ESBZAdditiveMoveType::EquippedADS", (int64)ESBZAdditiveMoveType::EquippedADS },
				{ "ESBZAdditiveMoveType::LeftHandEquipped", (int64)ESBZAdditiveMoveType::LeftHandEquipped },
				{ "ESBZAdditiveMoveType::LeftHandEquippedADS", (int64)ESBZAdditiveMoveType::LeftHandEquippedADS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Equipped.Name", "ESBZAdditiveMoveType::Equipped" },
				{ "EquippedADS.Name", "ESBZAdditiveMoveType::EquippedADS" },
				{ "LeftHandEquipped.Name", "ESBZAdditiveMoveType::LeftHandEquipped" },
				{ "LeftHandEquippedADS.Name", "ESBZAdditiveMoveType::LeftHandEquippedADS" },
				{ "ModuleRelativePath", "Public/ESBZAdditiveMoveType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAdditiveMoveType",
				"ESBZAdditiveMoveType",
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
