// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkChannelMask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkChannelMask() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkChannelMask();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* EAkChannelMask_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkChannelMask, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkChannelMask"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkChannelMask>()
	{
		return EAkChannelMask_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkChannelMask(EAkChannelMask_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkChannelMask"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkChannelMask_Hash() { return 3790206932U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkChannelMask()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkChannelMask"), 0, Get_Z_Construct_UEnum_AkAudio_EAkChannelMask_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkChannelMask::FrontLeft", (int64)EAkChannelMask::FrontLeft },
				{ "EAkChannelMask::FrontRight", (int64)EAkChannelMask::FrontRight },
				{ "EAkChannelMask::FrontCenter", (int64)EAkChannelMask::FrontCenter },
				{ "EAkChannelMask::LowFrequency", (int64)EAkChannelMask::LowFrequency },
				{ "EAkChannelMask::BackLeft", (int64)EAkChannelMask::BackLeft },
				{ "EAkChannelMask::BackRight", (int64)EAkChannelMask::BackRight },
				{ "EAkChannelMask::BackCenter", (int64)EAkChannelMask::BackCenter },
				{ "EAkChannelMask::SideLeft", (int64)EAkChannelMask::SideLeft },
				{ "EAkChannelMask::SideRight", (int64)EAkChannelMask::SideRight },
				{ "EAkChannelMask::Top", (int64)EAkChannelMask::Top },
				{ "EAkChannelMask::HeightFrontLeft", (int64)EAkChannelMask::HeightFrontLeft },
				{ "EAkChannelMask::HeightFrontCenter", (int64)EAkChannelMask::HeightFrontCenter },
				{ "EAkChannelMask::HeightFrontRight", (int64)EAkChannelMask::HeightFrontRight },
				{ "EAkChannelMask::HeightBackLeft", (int64)EAkChannelMask::HeightBackLeft },
				{ "EAkChannelMask::HeightBackCenter", (int64)EAkChannelMask::HeightBackCenter },
				{ "EAkChannelMask::HeightBackRight", (int64)EAkChannelMask::HeightBackRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BackCenter.Name", "EAkChannelMask::BackCenter" },
				{ "BackLeft.Name", "EAkChannelMask::BackLeft" },
				{ "BackRight.Name", "EAkChannelMask::BackRight" },
				{ "BlueprintType", "true" },
				{ "FrontCenter.Name", "EAkChannelMask::FrontCenter" },
				{ "FrontLeft.Name", "EAkChannelMask::FrontLeft" },
				{ "FrontRight.Name", "EAkChannelMask::FrontRight" },
				{ "HeightBackCenter.Name", "EAkChannelMask::HeightBackCenter" },
				{ "HeightBackLeft.Name", "EAkChannelMask::HeightBackLeft" },
				{ "HeightBackRight.Name", "EAkChannelMask::HeightBackRight" },
				{ "HeightFrontCenter.Name", "EAkChannelMask::HeightFrontCenter" },
				{ "HeightFrontLeft.Name", "EAkChannelMask::HeightFrontLeft" },
				{ "HeightFrontRight.Name", "EAkChannelMask::HeightFrontRight" },
				{ "LowFrequency.Name", "EAkChannelMask::LowFrequency" },
				{ "ModuleRelativePath", "Public/EAkChannelMask.h" },
				{ "SideLeft.Name", "EAkChannelMask::SideLeft" },
				{ "SideRight.Name", "EAkChannelMask::SideRight" },
				{ "Top.Name", "EAkChannelMask::Top" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkChannelMask",
				"EAkChannelMask",
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
