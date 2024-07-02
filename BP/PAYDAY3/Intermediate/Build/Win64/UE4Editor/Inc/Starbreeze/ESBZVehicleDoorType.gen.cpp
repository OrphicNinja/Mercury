// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZVehicleDoorType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZVehicleDoorType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZVehicleDoorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZVehicleDoorType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZVehicleDoorType>()
	{
		return ESBZVehicleDoorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZVehicleDoorType(ESBZVehicleDoorType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZVehicleDoorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorType_Hash() { return 4008329750U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZVehicleDoorType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZVehicleDoorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZVehicleDoorType::Invalid", (int64)ESBZVehicleDoorType::Invalid },
				{ "ESBZVehicleDoorType::SideFrontLeft", (int64)ESBZVehicleDoorType::SideFrontLeft },
				{ "ESBZVehicleDoorType::SideFrontRight", (int64)ESBZVehicleDoorType::SideFrontRight },
				{ "ESBZVehicleDoorType::SideBackLeft", (int64)ESBZVehicleDoorType::SideBackLeft },
				{ "ESBZVehicleDoorType::SideBackRight", (int64)ESBZVehicleDoorType::SideBackRight },
				{ "ESBZVehicleDoorType::TopFront", (int64)ESBZVehicleDoorType::TopFront },
				{ "ESBZVehicleDoorType::TopBack", (int64)ESBZVehicleDoorType::TopBack },
				{ "ESBZVehicleDoorType::BackLeft", (int64)ESBZVehicleDoorType::BackLeft },
				{ "ESBZVehicleDoorType::BackRight", (int64)ESBZVehicleDoorType::BackRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BackLeft.Name", "ESBZVehicleDoorType::BackLeft" },
				{ "BackRight.Name", "ESBZVehicleDoorType::BackRight" },
				{ "BlueprintType", "true" },
				{ "Invalid.Name", "ESBZVehicleDoorType::Invalid" },
				{ "ModuleRelativePath", "Public/ESBZVehicleDoorType.h" },
				{ "SideBackLeft.Name", "ESBZVehicleDoorType::SideBackLeft" },
				{ "SideBackRight.Name", "ESBZVehicleDoorType::SideBackRight" },
				{ "SideFrontLeft.Name", "ESBZVehicleDoorType::SideFrontLeft" },
				{ "SideFrontRight.Name", "ESBZVehicleDoorType::SideFrontRight" },
				{ "TopBack.Name", "ESBZVehicleDoorType::TopBack" },
				{ "TopFront.Name", "ESBZVehicleDoorType::TopFront" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZVehicleDoorType",
				"ESBZVehicleDoorType",
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
