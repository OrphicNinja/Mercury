// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkCallbackType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkCallbackType() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* EAkCallbackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCallbackType, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkCallbackType"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkCallbackType>()
	{
		return EAkCallbackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkCallbackType(EAkCallbackType_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkCallbackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkCallbackType_Hash() { return 3212057703U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkCallbackType"), 0, Get_Z_Construct_UEnum_AkAudio_EAkCallbackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkCallbackType::EndOfEvent", (int64)EAkCallbackType::EndOfEvent },
				{ "EAkCallbackType::Marker", (int64)EAkCallbackType::Marker },
				{ "EAkCallbackType::Duration", (int64)EAkCallbackType::Duration },
				{ "EAkCallbackType::Starvation", (int64)EAkCallbackType::Starvation },
				{ "EAkCallbackType::MusicPlayStarted", (int64)EAkCallbackType::MusicPlayStarted },
				{ "EAkCallbackType::MusicSyncBeat", (int64)EAkCallbackType::MusicSyncBeat },
				{ "EAkCallbackType::MusicSyncBar", (int64)EAkCallbackType::MusicSyncBar },
				{ "EAkCallbackType::MusicSyncEntry", (int64)EAkCallbackType::MusicSyncEntry },
				{ "EAkCallbackType::MusicSyncExit", (int64)EAkCallbackType::MusicSyncExit },
				{ "EAkCallbackType::MusicSyncGrid", (int64)EAkCallbackType::MusicSyncGrid },
				{ "EAkCallbackType::MusicSyncUserCue", (int64)EAkCallbackType::MusicSyncUserCue },
				{ "EAkCallbackType::MusicSyncPoint", (int64)EAkCallbackType::MusicSyncPoint },
				{ "EAkCallbackType::MIDIEvent", (int64)EAkCallbackType::MIDIEvent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Duration.Name", "EAkCallbackType::Duration" },
				{ "EndOfEvent.Name", "EAkCallbackType::EndOfEvent" },
				{ "Marker.Name", "EAkCallbackType::Marker" },
				{ "MIDIEvent.Name", "EAkCallbackType::MIDIEvent" },
				{ "ModuleRelativePath", "Public/EAkCallbackType.h" },
				{ "MusicPlayStarted.Name", "EAkCallbackType::MusicPlayStarted" },
				{ "MusicSyncBar.Name", "EAkCallbackType::MusicSyncBar" },
				{ "MusicSyncBeat.Name", "EAkCallbackType::MusicSyncBeat" },
				{ "MusicSyncEntry.Name", "EAkCallbackType::MusicSyncEntry" },
				{ "MusicSyncExit.Name", "EAkCallbackType::MusicSyncExit" },
				{ "MusicSyncGrid.Name", "EAkCallbackType::MusicSyncGrid" },
				{ "MusicSyncPoint.Name", "EAkCallbackType::MusicSyncPoint" },
				{ "MusicSyncUserCue.Name", "EAkCallbackType::MusicSyncUserCue" },
				{ "Starvation.Name", "EAkCallbackType::Starvation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkCallbackType",
				"EAkCallbackType",
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
