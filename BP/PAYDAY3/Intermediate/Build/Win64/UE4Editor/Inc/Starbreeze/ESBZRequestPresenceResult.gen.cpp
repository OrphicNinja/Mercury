// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZRequestPresenceResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZRequestPresenceResult() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRequestPresenceResult();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZRequestPresenceResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZRequestPresenceResult, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZRequestPresenceResult"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZRequestPresenceResult>()
	{
		return ESBZRequestPresenceResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZRequestPresenceResult(ESBZRequestPresenceResult_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZRequestPresenceResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZRequestPresenceResult_Hash() { return 3912462163U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZRequestPresenceResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZRequestPresenceResult"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZRequestPresenceResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZRequestPresenceResult::Success", (int64)ESBZRequestPresenceResult::Success },
				{ "ESBZRequestPresenceResult::AlreadyConnectedOnOtherPlatform", (int64)ESBZRequestPresenceResult::AlreadyConnectedOnOtherPlatform },
				{ "ESBZRequestPresenceResult::GetPresenceFailed", (int64)ESBZRequestPresenceResult::GetPresenceFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlreadyConnectedOnOtherPlatform.Name", "ESBZRequestPresenceResult::AlreadyConnectedOnOtherPlatform" },
				{ "BlueprintType", "true" },
				{ "GetPresenceFailed.Name", "ESBZRequestPresenceResult::GetPresenceFailed" },
				{ "ModuleRelativePath", "Public/ESBZRequestPresenceResult.h" },
				{ "Success.Name", "ESBZRequestPresenceResult::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZRequestPresenceResult",
				"ESBZRequestPresenceResult",
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
