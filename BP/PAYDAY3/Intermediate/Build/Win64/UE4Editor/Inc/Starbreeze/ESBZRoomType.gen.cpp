// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZRoomType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZRoomType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRoomType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZRoomType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZRoomType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZRoomType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZRoomType>()
	{
		return ESBZRoomType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZRoomType(ESBZRoomType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZRoomType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZRoomType_Hash() { return 4082547919U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZRoomType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZRoomType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZRoomType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZRoomType::None", (int64)ESBZRoomType::None },
				{ "ESBZRoomType::Public", (int64)ESBZRoomType::Public },
				{ "ESBZRoomType::Private", (int64)ESBZRoomType::Private },
				{ "ESBZRoomType::Secure", (int64)ESBZRoomType::Secure },
				{ "ESBZRoomType::MAX", (int64)ESBZRoomType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MAX.Name", "ESBZRoomType::MAX" },
				{ "ModuleRelativePath", "Public/ESBZRoomType.h" },
				{ "None.Name", "ESBZRoomType::None" },
				{ "Private.Name", "ESBZRoomType::Private" },
				{ "Public.Name", "ESBZRoomType::Public" },
				{ "Secure.Name", "ESBZRoomType::Secure" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZRoomType",
				"ESBZRoomType",
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
