// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZSecurityCompany.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZSecurityCompany() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZSecurityCompany_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZSecurityCompany"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZSecurityCompany>()
	{
		return ESBZSecurityCompany_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZSecurityCompany(ESBZSecurityCompany_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZSecurityCompany"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany_Hash() { return 2876767614U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZSecurityCompany"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZSecurityCompany::None", (int64)ESBZSecurityCompany::None },
				{ "ESBZSecurityCompany::GenSec", (int64)ESBZSecurityCompany::GenSec },
				{ "ESBZSecurityCompany::Senturian", (int64)ESBZSecurityCompany::Senturian },
				{ "ESBZSecurityCompany::AmGuard", (int64)ESBZSecurityCompany::AmGuard },
				{ "ESBZSecurityCompany::DebilitatingSpecials", (int64)ESBZSecurityCompany::DebilitatingSpecials },
				{ "ESBZSecurityCompany::FacialRecognition", (int64)ESBZSecurityCompany::FacialRecognition },
				{ "ESBZSecurityCompany::ArmorPiercing", (int64)ESBZSecurityCompany::ArmorPiercing },
				{ "ESBZSecurityCompany::BuddySystem", (int64)ESBZSecurityCompany::BuddySystem },
				{ "ESBZSecurityCompany::AlphaStrike", (int64)ESBZSecurityCompany::AlphaStrike },
				{ "ESBZSecurityCompany::HardBargain", (int64)ESBZSecurityCompany::HardBargain },
				{ "ESBZSecurityCompany::AICore", (int64)ESBZSecurityCompany::AICore },
				{ "ESBZSecurityCompany::ReflectorShields", (int64)ESBZSecurityCompany::ReflectorShields },
				{ "ESBZSecurityCompany::AIShielding", (int64)ESBZSecurityCompany::AIShielding },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AICore.Name", "ESBZSecurityCompany::AICore" },
				{ "AIShielding.Name", "ESBZSecurityCompany::AIShielding" },
				{ "AlphaStrike.Name", "ESBZSecurityCompany::AlphaStrike" },
				{ "AmGuard.Name", "ESBZSecurityCompany::AmGuard" },
				{ "ArmorPiercing.Name", "ESBZSecurityCompany::ArmorPiercing" },
				{ "BlueprintType", "true" },
				{ "BuddySystem.Name", "ESBZSecurityCompany::BuddySystem" },
				{ "DebilitatingSpecials.Name", "ESBZSecurityCompany::DebilitatingSpecials" },
				{ "FacialRecognition.Name", "ESBZSecurityCompany::FacialRecognition" },
				{ "GenSec.Name", "ESBZSecurityCompany::GenSec" },
				{ "HardBargain.Name", "ESBZSecurityCompany::HardBargain" },
				{ "ModuleRelativePath", "Public/ESBZSecurityCompany.h" },
				{ "None.Name", "ESBZSecurityCompany::None" },
				{ "ReflectorShields.Name", "ESBZSecurityCompany::ReflectorShields" },
				{ "Senturian.Name", "ESBZSecurityCompany::Senturian" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZSecurityCompany",
				"ESBZSecurityCompany",
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
