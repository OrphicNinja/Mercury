// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAgilityWarpingDirection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAgilityWarpingDirection() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityWarpingDirection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAgilityWarpingDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAgilityWarpingDirection, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAgilityWarpingDirection"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAgilityWarpingDirection>()
	{
		return ESBZAgilityWarpingDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAgilityWarpingDirection(ESBZAgilityWarpingDirection_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAgilityWarpingDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAgilityWarpingDirection_Hash() { return 1454758047U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityWarpingDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAgilityWarpingDirection"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAgilityWarpingDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAgilityWarpingDirection::FacingFront", (int64)ESBZAgilityWarpingDirection::FacingFront },
				{ "ESBZAgilityWarpingDirection::FacingBack", (int64)ESBZAgilityWarpingDirection::FacingBack },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FacingBack.Name", "ESBZAgilityWarpingDirection::FacingBack" },
				{ "FacingFront.Name", "ESBZAgilityWarpingDirection::FacingFront" },
				{ "ModuleRelativePath", "Public/ESBZAgilityWarpingDirection.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAgilityWarpingDirection",
				"ESBZAgilityWarpingDirection",
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
