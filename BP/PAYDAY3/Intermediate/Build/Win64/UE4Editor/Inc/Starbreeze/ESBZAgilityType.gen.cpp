// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZAgilityType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZAgilityType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZAgilityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZAgilityType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZAgilityType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZAgilityType>()
	{
		return ESBZAgilityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZAgilityType(ESBZAgilityType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZAgilityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZAgilityType_Hash() { return 777002613U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZAgilityType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZAgilityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZAgilityType::JumpingDown", (int64)ESBZAgilityType::JumpingDown },
				{ "ESBZAgilityType::JumpingDownRolling", (int64)ESBZAgilityType::JumpingDownRolling },
				{ "ESBZAgilityType::Vaulting", (int64)ESBZAgilityType::Vaulting },
				{ "ESBZAgilityType::Mantling", (int64)ESBZAgilityType::Mantling },
				{ "ESBZAgilityType::GrapplingHook", (int64)ESBZAgilityType::GrapplingHook },
				{ "ESBZAgilityType::RappellingThroughWindow", (int64)ESBZAgilityType::RappellingThroughWindow },
				{ "ESBZAgilityType::Rappelling", (int64)ESBZAgilityType::Rappelling },
				{ "ESBZAgilityType::RappellingFromHelicopter", (int64)ESBZAgilityType::RappellingFromHelicopter },
				{ "ESBZAgilityType::SlideUnder", (int64)ESBZAgilityType::SlideUnder },
				{ "ESBZAgilityType::SlideUnderFallDown", (int64)ESBZAgilityType::SlideUnderFallDown },
				{ "ESBZAgilityType::ClimbOver", (int64)ESBZAgilityType::ClimbOver },
				{ "ESBZAgilityType::ClimbOnTop", (int64)ESBZAgilityType::ClimbOnTop },
				{ "ESBZAgilityType::JumpingStraight", (int64)ESBZAgilityType::JumpingStraight },
				{ "ESBZAgilityType::CeilingVent", (int64)ESBZAgilityType::CeilingVent },
				{ "ESBZAgilityType::WallRunningRight", (int64)ESBZAgilityType::WallRunningRight },
				{ "ESBZAgilityType::WallRunningLeft", (int64)ESBZAgilityType::WallRunningLeft },
				{ "ESBZAgilityType::ExitFromCarSide", (int64)ESBZAgilityType::ExitFromCarSide },
				{ "ESBZAgilityType::ExitFromCarBack", (int64)ESBZAgilityType::ExitFromCarBack },
				{ "ESBZAgilityType::SpawnProneToStand", (int64)ESBZAgilityType::SpawnProneToStand },
				{ "ESBZAgilityType::SpawnCrouchToStand", (int64)ESBZAgilityType::SpawnCrouchToStand },
				{ "ESBZAgilityType::Invalid", (int64)ESBZAgilityType::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CeilingVent.Name", "ESBZAgilityType::CeilingVent" },
				{ "ClimbOnTop.Name", "ESBZAgilityType::ClimbOnTop" },
				{ "ClimbOver.Name", "ESBZAgilityType::ClimbOver" },
				{ "ExitFromCarBack.Name", "ESBZAgilityType::ExitFromCarBack" },
				{ "ExitFromCarSide.Name", "ESBZAgilityType::ExitFromCarSide" },
				{ "GrapplingHook.Name", "ESBZAgilityType::GrapplingHook" },
				{ "Invalid.Name", "ESBZAgilityType::Invalid" },
				{ "JumpingDown.Name", "ESBZAgilityType::JumpingDown" },
				{ "JumpingDownRolling.Name", "ESBZAgilityType::JumpingDownRolling" },
				{ "JumpingStraight.Name", "ESBZAgilityType::JumpingStraight" },
				{ "Mantling.Name", "ESBZAgilityType::Mantling" },
				{ "ModuleRelativePath", "Public/ESBZAgilityType.h" },
				{ "Rappelling.Name", "ESBZAgilityType::Rappelling" },
				{ "RappellingFromHelicopter.Name", "ESBZAgilityType::RappellingFromHelicopter" },
				{ "RappellingThroughWindow.Name", "ESBZAgilityType::RappellingThroughWindow" },
				{ "SlideUnder.Name", "ESBZAgilityType::SlideUnder" },
				{ "SlideUnderFallDown.Name", "ESBZAgilityType::SlideUnderFallDown" },
				{ "SpawnCrouchToStand.Name", "ESBZAgilityType::SpawnCrouchToStand" },
				{ "SpawnProneToStand.Name", "ESBZAgilityType::SpawnProneToStand" },
				{ "Vaulting.Name", "ESBZAgilityType::Vaulting" },
				{ "WallRunningLeft.Name", "ESBZAgilityType::WallRunningLeft" },
				{ "WallRunningRight.Name", "ESBZAgilityType::WallRunningRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZAgilityType",
				"ESBZAgilityType",
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
