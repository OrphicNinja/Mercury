// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAirNavigationGenerationErrorCode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAirNavigationGenerationErrorCode() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAirNavigationGenerationErrorCode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAirNavigationGenerationErrorCode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAirNavigationGenerationErrorCode, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAirNavigationGenerationErrorCode"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAirNavigationGenerationErrorCode>()
	{
		return ESBZAirNavigationGenerationErrorCode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAirNavigationGenerationErrorCode(ESBZAirNavigationGenerationErrorCode_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAirNavigationGenerationErrorCode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAirNavigationGenerationErrorCode_Hash() { return 3871306584U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAirNavigationGenerationErrorCode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAirNavigationGenerationErrorCode"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAirNavigationGenerationErrorCode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAirNavigationGenerationErrorCode::Success", (int64)ESBZAirNavigationGenerationErrorCode::Success },
				{ "ESBZAirNavigationGenerationErrorCode::MaxSizeExceeded", (int64)ESBZAirNavigationGenerationErrorCode::MaxSizeExceeded },
				{ "ESBZAirNavigationGenerationErrorCode::MaxNodesExceeded", (int64)ESBZAirNavigationGenerationErrorCode::MaxNodesExceeded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MaxNodesExceeded.Name", "ESBZAirNavigationGenerationErrorCode::MaxNodesExceeded" },
				{ "MaxSizeExceeded.Name", "ESBZAirNavigationGenerationErrorCode::MaxSizeExceeded" },
				{ "ModuleRelativePath", "Public/ESBZAirNavigationGenerationErrorCode.h" },
				{ "Success.Name", "ESBZAirNavigationGenerationErrorCode::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAirNavigationGenerationErrorCode",
				"ESBZAirNavigationGenerationErrorCode",
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
