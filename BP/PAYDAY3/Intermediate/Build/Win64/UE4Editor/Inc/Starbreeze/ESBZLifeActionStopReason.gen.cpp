// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZLifeActionStopReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZLifeActionStopReason() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZLifeActionStopReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZLifeActionStopReason"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZLifeActionStopReason>()
	{
		return ESBZLifeActionStopReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZLifeActionStopReason(ESBZLifeActionStopReason_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZLifeActionStopReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason_Hash() { return 3862050337U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZLifeActionStopReason"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZLifeActionStopReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZLifeActionStopReason::Finished", (int64)ESBZLifeActionStopReason::Finished },
				{ "ESBZLifeActionStopReason::Interrupted", (int64)ESBZLifeActionStopReason::Interrupted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Finished.Name", "ESBZLifeActionStopReason::Finished" },
				{ "Interrupted.Name", "ESBZLifeActionStopReason::Interrupted" },
				{ "ModuleRelativePath", "Public/ESBZLifeActionStopReason.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZLifeActionStopReason",
				"ESBZLifeActionStopReason",
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
