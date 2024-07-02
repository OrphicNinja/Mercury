// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZTrafficVehicleControlType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZTrafficVehicleControlType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZTrafficVehicleControlType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZTrafficVehicleControlType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZTrafficVehicleControlType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZTrafficVehicleControlType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZTrafficVehicleControlType>()
	{
		return ESBZTrafficVehicleControlType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZTrafficVehicleControlType(ESBZTrafficVehicleControlType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZTrafficVehicleControlType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZTrafficVehicleControlType_Hash() { return 1611461064U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZTrafficVehicleControlType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZTrafficVehicleControlType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZTrafficVehicleControlType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZTrafficVehicleControlType::StopAtDistance", (int64)ESBZTrafficVehicleControlType::StopAtDistance },
				{ "ESBZTrafficVehicleControlType::Start", (int64)ESBZTrafficVehicleControlType::Start },
				{ "ESBZTrafficVehicleControlType::SetCruisingSpeed", (int64)ESBZTrafficVehicleControlType::SetCruisingSpeed },
				{ "ESBZTrafficVehicleControlType::SetDeceleration", (int64)ESBZTrafficVehicleControlType::SetDeceleration },
				{ "ESBZTrafficVehicleControlType::SetAcceleration", (int64)ESBZTrafficVehicleControlType::SetAcceleration },
				{ "ESBZTrafficVehicleControlType::SoundHorn", (int64)ESBZTrafficVehicleControlType::SoundHorn },
				{ "ESBZTrafficVehicleControlType::None", (int64)ESBZTrafficVehicleControlType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZTrafficVehicleControlType.h" },
				{ "None.Name", "ESBZTrafficVehicleControlType::None" },
				{ "SetAcceleration.Name", "ESBZTrafficVehicleControlType::SetAcceleration" },
				{ "SetCruisingSpeed.Name", "ESBZTrafficVehicleControlType::SetCruisingSpeed" },
				{ "SetDeceleration.Name", "ESBZTrafficVehicleControlType::SetDeceleration" },
				{ "SoundHorn.Name", "ESBZTrafficVehicleControlType::SoundHorn" },
				{ "Start.Name", "ESBZTrafficVehicleControlType::Start" },
				{ "StopAtDistance.Name", "ESBZTrafficVehicleControlType::StopAtDistance" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZTrafficVehicleControlType",
				"ESBZTrafficVehicleControlType",
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
