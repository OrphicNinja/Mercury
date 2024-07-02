// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkAudioSessionCategoryOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkAudioSessionCategoryOptions() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* EAkAudioSessionCategoryOptions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioSessionCategoryOptions"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategoryOptions>()
	{
		return EAkAudioSessionCategoryOptions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkAudioSessionCategoryOptions(EAkAudioSessionCategoryOptions_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkAudioSessionCategoryOptions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Hash() { return 3917430662U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkAudioSessionCategoryOptions"), 0, Get_Z_Construct_UEnum_AkAudio_EAkAudioSessionCategoryOptions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkAudioSessionCategoryOptions::MixWithOthers", (int64)EAkAudioSessionCategoryOptions::MixWithOthers },
				{ "EAkAudioSessionCategoryOptions::DuckOthers", (int64)EAkAudioSessionCategoryOptions::DuckOthers },
				{ "EAkAudioSessionCategoryOptions::AllowBluetooth", (int64)EAkAudioSessionCategoryOptions::AllowBluetooth },
				{ "EAkAudioSessionCategoryOptions::DefaultToSpeaker", (int64)EAkAudioSessionCategoryOptions::DefaultToSpeaker },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllowBluetooth.Name", "EAkAudioSessionCategoryOptions::AllowBluetooth" },
				{ "BlueprintType", "true" },
				{ "DefaultToSpeaker.Name", "EAkAudioSessionCategoryOptions::DefaultToSpeaker" },
				{ "DuckOthers.Name", "EAkAudioSessionCategoryOptions::DuckOthers" },
				{ "MixWithOthers.Name", "EAkAudioSessionCategoryOptions::MixWithOthers" },
				{ "ModuleRelativePath", "Public/EAkAudioSessionCategoryOptions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkAudioSessionCategoryOptions",
				"EAkAudioSessionCategoryOptions",
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
