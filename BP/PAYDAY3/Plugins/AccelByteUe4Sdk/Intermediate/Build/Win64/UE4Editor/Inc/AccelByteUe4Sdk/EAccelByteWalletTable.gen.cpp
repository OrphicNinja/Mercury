// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteWalletTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteWalletTable() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteWalletTable();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteWalletTable_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteWalletTable, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteWalletTable"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteWalletTable>()
	{
		return EAccelByteWalletTable_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteWalletTable(EAccelByteWalletTable_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteWalletTable"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteWalletTable_Hash() { return 356416645U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteWalletTable()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteWalletTable"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteWalletTable_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteWalletTable::Playstation", (int64)EAccelByteWalletTable::Playstation },
				{ "EAccelByteWalletTable::Xbox", (int64)EAccelByteWalletTable::Xbox },
				{ "EAccelByteWalletTable::Steam", (int64)EAccelByteWalletTable::Steam },
				{ "EAccelByteWalletTable::Epic", (int64)EAccelByteWalletTable::Epic },
				{ "EAccelByteWalletTable::IOS", (int64)EAccelByteWalletTable::IOS },
				{ "EAccelByteWalletTable::GooglePlay", (int64)EAccelByteWalletTable::GooglePlay },
				{ "EAccelByteWalletTable::Twitch", (int64)EAccelByteWalletTable::Twitch },
				{ "EAccelByteWalletTable::System", (int64)EAccelByteWalletTable::System },
				{ "EAccelByteWalletTable::Nintendo", (int64)EAccelByteWalletTable::Nintendo },
				{ "EAccelByteWalletTable::Other", (int64)EAccelByteWalletTable::Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Epic.Name", "EAccelByteWalletTable::Epic" },
				{ "GooglePlay.Name", "EAccelByteWalletTable::GooglePlay" },
				{ "IOS.Name", "EAccelByteWalletTable::IOS" },
				{ "ModuleRelativePath", "Public/EAccelByteWalletTable.h" },
				{ "Nintendo.Name", "EAccelByteWalletTable::Nintendo" },
				{ "Other.Name", "EAccelByteWalletTable::Other" },
				{ "Playstation.Name", "EAccelByteWalletTable::Playstation" },
				{ "Steam.Name", "EAccelByteWalletTable::Steam" },
				{ "System.Name", "EAccelByteWalletTable::System" },
				{ "Twitch.Name", "EAccelByteWalletTable::Twitch" },
				{ "Xbox.Name", "EAccelByteWalletTable::Xbox" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteWalletTable",
				"EAccelByteWalletTable",
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
