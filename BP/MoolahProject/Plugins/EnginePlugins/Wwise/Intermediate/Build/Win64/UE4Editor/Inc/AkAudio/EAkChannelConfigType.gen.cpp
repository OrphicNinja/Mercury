// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkChannelConfigType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkChannelConfigType() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkChannelConfigType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* EAkChannelConfigType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkChannelConfigType, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkChannelConfigType"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkChannelConfigType>()
	{
		return EAkChannelConfigType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkChannelConfigType(EAkChannelConfigType_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkChannelConfigType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Hash() { return 2700317115U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkChannelConfigType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkChannelConfigType"), 0, Get_Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkChannelConfigType::Anonymous", (int64)EAkChannelConfigType::Anonymous },
				{ "EAkChannelConfigType::Standard", (int64)EAkChannelConfigType::Standard },
				{ "EAkChannelConfigType::Ambisonic", (int64)EAkChannelConfigType::Ambisonic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ambisonic.Name", "EAkChannelConfigType::Ambisonic" },
				{ "Anonymous.Name", "EAkChannelConfigType::Anonymous" },
				{ "ModuleRelativePath", "Public/EAkChannelConfigType.h" },
				{ "Standard.Name", "EAkChannelConfigType::Standard" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkChannelConfigType",
				"EAkChannelConfigType",
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
