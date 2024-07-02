// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZHeistEndReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZHeistEndReason() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHeistEndReason();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZHeistEndReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZHeistEndReason, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZHeistEndReason"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZHeistEndReason>()
	{
		return ESBZHeistEndReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZHeistEndReason(ESBZHeistEndReason_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZHeistEndReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZHeistEndReason_Hash() { return 982333961U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZHeistEndReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZHeistEndReason"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZHeistEndReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZHeistEndReason::GameFinished", (int64)ESBZHeistEndReason::GameFinished },
				{ "ESBZHeistEndReason::PlayerDroppedOut", (int64)ESBZHeistEndReason::PlayerDroppedOut },
				{ "ESBZHeistEndReason::GameTerminated", (int64)ESBZHeistEndReason::GameTerminated },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GameFinished.Name", "ESBZHeistEndReason::GameFinished" },
				{ "GameTerminated.Name", "ESBZHeistEndReason::GameTerminated" },
				{ "ModuleRelativePath", "Public/ESBZHeistEndReason.h" },
				{ "PlayerDroppedOut.Name", "ESBZHeistEndReason::PlayerDroppedOut" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZHeistEndReason",
				"ESBZHeistEndReason",
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
