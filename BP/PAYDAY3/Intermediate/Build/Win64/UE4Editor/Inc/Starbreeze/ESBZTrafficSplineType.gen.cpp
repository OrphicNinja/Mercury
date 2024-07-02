// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZTrafficSplineType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZTrafficSplineType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZTrafficSplineType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZTrafficSplineType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZTrafficSplineType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZTrafficSplineType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZTrafficSplineType>()
	{
		return ESBZTrafficSplineType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZTrafficSplineType(ESBZTrafficSplineType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZTrafficSplineType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZTrafficSplineType_Hash() { return 3228503009U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZTrafficSplineType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZTrafficSplineType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZTrafficSplineType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZTrafficSplineType::VehicleSpawner", (int64)ESBZTrafficSplineType::VehicleSpawner },
				{ "ESBZTrafficSplineType::ParkingSpot", (int64)ESBZTrafficSplineType::ParkingSpot },
				{ "ESBZTrafficSplineType::EndPoint", (int64)ESBZTrafficSplineType::EndPoint },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EndPoint.Name", "ESBZTrafficSplineType::EndPoint" },
				{ "ModuleRelativePath", "Public/ESBZTrafficSplineType.h" },
				{ "ParkingSpot.Name", "ESBZTrafficSplineType::ParkingSpot" },
				{ "VehicleSpawner.Name", "ESBZTrafficSplineType::VehicleSpawner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZTrafficSplineType",
				"ESBZTrafficSplineType",
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
