// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZVolumeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZVolumeType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZVolumeType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZVolumeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZVolumeType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZVolumeType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZVolumeType>()
	{
		return ESBZVolumeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZVolumeType(ESBZVolumeType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZVolumeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZVolumeType_Hash() { return 2832403871U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZVolumeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZVolumeType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZVolumeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZVolumeType::Master", (int64)ESBZVolumeType::Master },
				{ "ESBZVolumeType::Music", (int64)ESBZVolumeType::Music },
				{ "ESBZVolumeType::VO", (int64)ESBZVolumeType::VO },
				{ "ESBZVolumeType::SFX", (int64)ESBZVolumeType::SFX },
				{ "ESBZVolumeType::HUD", (int64)ESBZVolumeType::HUD },
				{ "ESBZVolumeType::VOIP", (int64)ESBZVolumeType::VOIP },
				{ "ESBZVolumeType::Cinematic", (int64)ESBZVolumeType::Cinematic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cinematic.Name", "ESBZVolumeType::Cinematic" },
				{ "HUD.Name", "ESBZVolumeType::HUD" },
				{ "Master.Name", "ESBZVolumeType::Master" },
				{ "ModuleRelativePath", "Public/ESBZVolumeType.h" },
				{ "Music.Name", "ESBZVolumeType::Music" },
				{ "SFX.Name", "ESBZVolumeType::SFX" },
				{ "VO.Name", "ESBZVolumeType::VO" },
				{ "VOIP.Name", "ESBZVolumeType::VOIP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZVolumeType",
				"ESBZVolumeType",
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
