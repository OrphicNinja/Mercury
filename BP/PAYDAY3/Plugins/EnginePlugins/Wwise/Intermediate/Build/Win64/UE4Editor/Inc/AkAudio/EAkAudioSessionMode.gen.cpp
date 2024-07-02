// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkAudioSessionMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkAudioSessionMode() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionMode();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* EAkAudioSessionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioSessionMode, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioSessionMode"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionMode>()
	{
		return EAkAudioSessionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkAudioSessionMode(EAkAudioSessionMode_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkAudioSessionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Hash() { return 3258443151U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkAudioSessionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkAudioSessionMode"), 0, Get_Z_Construct_UEnum_AkAudio_EAkAudioSessionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkAudioSessionMode::Default", (int64)EAkAudioSessionMode::Default },
				{ "EAkAudioSessionMode::VoiceChat", (int64)EAkAudioSessionMode::VoiceChat },
				{ "EAkAudioSessionMode::GameChat", (int64)EAkAudioSessionMode::GameChat },
				{ "EAkAudioSessionMode::VideoRecording", (int64)EAkAudioSessionMode::VideoRecording },
				{ "EAkAudioSessionMode::Measurement", (int64)EAkAudioSessionMode::Measurement },
				{ "EAkAudioSessionMode::MoviePlayback", (int64)EAkAudioSessionMode::MoviePlayback },
				{ "EAkAudioSessionMode::VideoChat", (int64)EAkAudioSessionMode::VideoChat },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Default.Name", "EAkAudioSessionMode::Default" },
				{ "GameChat.Name", "EAkAudioSessionMode::GameChat" },
				{ "Measurement.Name", "EAkAudioSessionMode::Measurement" },
				{ "ModuleRelativePath", "Public/EAkAudioSessionMode.h" },
				{ "MoviePlayback.Name", "EAkAudioSessionMode::MoviePlayback" },
				{ "VideoChat.Name", "EAkAudioSessionMode::VideoChat" },
				{ "VideoRecording.Name", "EAkAudioSessionMode::VideoRecording" },
				{ "VoiceChat.Name", "EAkAudioSessionMode::VoiceChat" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkAudioSessionMode",
				"EAkAudioSessionMode",
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
