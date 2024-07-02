// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZVehicleLightCPD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZVehicleLightCPD() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleLightCPD();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZVehicleLightCPD_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZVehicleLightCPD, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZVehicleLightCPD"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZVehicleLightCPD>()
	{
		return ESBZVehicleLightCPD_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZVehicleLightCPD(ESBZVehicleLightCPD_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZVehicleLightCPD"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZVehicleLightCPD_Hash() { return 585291165U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZVehicleLightCPD()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZVehicleLightCPD"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZVehicleLightCPD_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZVehicleLightCPD::A", (int64)ESBZVehicleLightCPD::A },
				{ "ESBZVehicleLightCPD::B", (int64)ESBZVehicleLightCPD::B },
				{ "ESBZVehicleLightCPD::C", (int64)ESBZVehicleLightCPD::C },
				{ "ESBZVehicleLightCPD::D", (int64)ESBZVehicleLightCPD::D },
				{ "ESBZVehicleLightCPD::E", (int64)ESBZVehicleLightCPD::E },
				{ "ESBZVehicleLightCPD::F", (int64)ESBZVehicleLightCPD::F },
				{ "ESBZVehicleLightCPD::G", (int64)ESBZVehicleLightCPD::G },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A.Name", "ESBZVehicleLightCPD::A" },
				{ "B.Name", "ESBZVehicleLightCPD::B" },
				{ "BlueprintType", "true" },
				{ "C.Name", "ESBZVehicleLightCPD::C" },
				{ "D.Name", "ESBZVehicleLightCPD::D" },
				{ "E.Name", "ESBZVehicleLightCPD::E" },
				{ "F.Name", "ESBZVehicleLightCPD::F" },
				{ "G.Name", "ESBZVehicleLightCPD::G" },
				{ "ModuleRelativePath", "Public/ESBZVehicleLightCPD.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZVehicleLightCPD",
				"ESBZVehicleLightCPD",
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
