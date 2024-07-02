// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZSlotReservationStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZSlotReservationStatus() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSlotReservationStatus();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZSlotReservationStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZSlotReservationStatus, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZSlotReservationStatus"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZSlotReservationStatus>()
	{
		return ESBZSlotReservationStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZSlotReservationStatus(ESBZSlotReservationStatus_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZSlotReservationStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZSlotReservationStatus_Hash() { return 2711583797U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZSlotReservationStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZSlotReservationStatus"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZSlotReservationStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZSlotReservationStatus::Failure", (int64)ESBZSlotReservationStatus::Failure },
				{ "ESBZSlotReservationStatus::Success", (int64)ESBZSlotReservationStatus::Success },
				{ "ESBZSlotReservationStatus::SlotAlreadyReserved", (int64)ESBZSlotReservationStatus::SlotAlreadyReserved },
				{ "ESBZSlotReservationStatus::NoFreeSlots", (int64)ESBZSlotReservationStatus::NoFreeSlots },
				{ "ESBZSlotReservationStatus::InvalidPlayerIdReceived", (int64)ESBZSlotReservationStatus::InvalidPlayerIdReceived },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failure.Name", "ESBZSlotReservationStatus::Failure" },
				{ "InvalidPlayerIdReceived.Name", "ESBZSlotReservationStatus::InvalidPlayerIdReceived" },
				{ "ModuleRelativePath", "Public/ESBZSlotReservationStatus.h" },
				{ "NoFreeSlots.Name", "ESBZSlotReservationStatus::NoFreeSlots" },
				{ "SlotAlreadyReserved.Name", "ESBZSlotReservationStatus::SlotAlreadyReserved" },
				{ "Success.Name", "ESBZSlotReservationStatus::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZSlotReservationStatus",
				"ESBZSlotReservationStatus",
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
