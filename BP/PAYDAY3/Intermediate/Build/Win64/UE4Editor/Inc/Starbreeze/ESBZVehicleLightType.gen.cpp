// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZVehicleLightType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZVehicleLightType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleLightType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZVehicleLightType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZVehicleLightType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZVehicleLightType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZVehicleLightType>()
	{
		return ESBZVehicleLightType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZVehicleLightType(ESBZVehicleLightType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZVehicleLightType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZVehicleLightType_Hash() { return 3860421762U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleLightType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZVehicleLightType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZVehicleLightType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZVehicleLightType::Headlights", (int64)ESBZVehicleLightType::Headlights },
				{ "ESBZVehicleLightType::TailLights", (int64)ESBZVehicleLightType::TailLights },
				{ "ESBZVehicleLightType::FogLights", (int64)ESBZVehicleLightType::FogLights },
				{ "ESBZVehicleLightType::BrakeLights", (int64)ESBZVehicleLightType::BrakeLights },
				{ "ESBZVehicleLightType::ReverseLights", (int64)ESBZVehicleLightType::ReverseLights },
				{ "ESBZVehicleLightType::TurnLeft", (int64)ESBZVehicleLightType::TurnLeft },
				{ "ESBZVehicleLightType::TurnRight", (int64)ESBZVehicleLightType::TurnRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BrakeLights.Name", "ESBZVehicleLightType::BrakeLights" },
				{ "FogLights.Name", "ESBZVehicleLightType::FogLights" },
				{ "Headlights.Name", "ESBZVehicleLightType::Headlights" },
				{ "ModuleRelativePath", "Public/ESBZVehicleLightType.h" },
				{ "ReverseLights.Name", "ESBZVehicleLightType::ReverseLights" },
				{ "TailLights.Name", "ESBZVehicleLightType::TailLights" },
				{ "TurnLeft.Name", "ESBZVehicleLightType::TurnLeft" },
				{ "TurnRight.Name", "ESBZVehicleLightType::TurnRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZVehicleLightType",
				"ESBZVehicleLightType",
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
