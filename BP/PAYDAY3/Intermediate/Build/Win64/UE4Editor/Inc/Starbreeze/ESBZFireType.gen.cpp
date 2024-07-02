// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZFireType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZFireType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFireType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZFireType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZFireType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZFireType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZFireType>()
	{
		return ESBZFireType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZFireType(ESBZFireType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZFireType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZFireType_Hash() { return 3670686330U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZFireType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZFireType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZFireType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZFireType::Semi", (int64)ESBZFireType::Semi },
				{ "ESBZFireType::Burst", (int64)ESBZFireType::Burst },
				{ "ESBZFireType::Auto", (int64)ESBZFireType::Auto },
				{ "ESBZFireType::Pump", (int64)ESBZFireType::Pump },
				{ "ESBZFireType::Bolt", (int64)ESBZFireType::Bolt },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Name", "ESBZFireType::Auto" },
				{ "BlueprintType", "true" },
				{ "Bolt.Name", "ESBZFireType::Bolt" },
				{ "Burst.Name", "ESBZFireType::Burst" },
				{ "ModuleRelativePath", "Public/ESBZFireType.h" },
				{ "Pump.Name", "ESBZFireType::Pump" },
				{ "Semi.Name", "ESBZFireType::Semi" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZFireType",
				"ESBZFireType",
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
