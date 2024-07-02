// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZDisabledAimOffsetType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZDisabledAimOffsetType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDisabledAimOffsetType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZDisabledAimOffsetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZDisabledAimOffsetType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZDisabledAimOffsetType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZDisabledAimOffsetType>()
	{
		return ESBZDisabledAimOffsetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZDisabledAimOffsetType(ESBZDisabledAimOffsetType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZDisabledAimOffsetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZDisabledAimOffsetType_Hash() { return 4045832853U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZDisabledAimOffsetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZDisabledAimOffsetType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZDisabledAimOffsetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZDisabledAimOffsetType::All", (int64)ESBZDisabledAimOffsetType::All },
				{ "ESBZDisabledAimOffsetType::Head", (int64)ESBZDisabledAimOffsetType::Head },
				{ "ESBZDisabledAimOffsetType::UpperBody", (int64)ESBZDisabledAimOffsetType::UpperBody },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ESBZDisabledAimOffsetType::All" },
				{ "BlueprintType", "true" },
				{ "Head.Name", "ESBZDisabledAimOffsetType::Head" },
				{ "ModuleRelativePath", "Public/ESBZDisabledAimOffsetType.h" },
				{ "UpperBody.Name", "ESBZDisabledAimOffsetType::UpperBody" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZDisabledAimOffsetType",
				"ESBZDisabledAimOffsetType",
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
