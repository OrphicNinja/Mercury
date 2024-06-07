// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkMidiEventType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkMidiEventType() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkMidiEventType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* EAkMidiEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkMidiEventType, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkMidiEventType"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkMidiEventType>()
	{
		return EAkMidiEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkMidiEventType(EAkMidiEventType_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkMidiEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkMidiEventType_Hash() { return 611816386U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkMidiEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkMidiEventType"), 0, Get_Z_Construct_UEnum_AkAudio_EAkMidiEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkMidiEventType::AkMidiEventTypeInvalid", (int64)EAkMidiEventType::AkMidiEventTypeInvalid },
				{ "EAkMidiEventType::AkMidiEventTypeNoteOff", (int64)EAkMidiEventType::AkMidiEventTypeNoteOff },
				{ "EAkMidiEventType::AkMidiEventTypeNoteOn", (int64)EAkMidiEventType::AkMidiEventTypeNoteOn },
				{ "EAkMidiEventType::AkMidiEventTypeNoteAftertouch", (int64)EAkMidiEventType::AkMidiEventTypeNoteAftertouch },
				{ "EAkMidiEventType::AkMidiEventTypeController", (int64)EAkMidiEventType::AkMidiEventTypeController },
				{ "EAkMidiEventType::AkMidiEventTypeProgramChange", (int64)EAkMidiEventType::AkMidiEventTypeProgramChange },
				{ "EAkMidiEventType::AkMidiEventTypeChannelAftertouch", (int64)EAkMidiEventType::AkMidiEventTypeChannelAftertouch },
				{ "EAkMidiEventType::AkMidiEventTypePitchBend", (int64)EAkMidiEventType::AkMidiEventTypePitchBend },
				{ "EAkMidiEventType::AkMidiEventTypeSysex", (int64)EAkMidiEventType::AkMidiEventTypeSysex },
				{ "EAkMidiEventType::AkMidiEventTypeEscape", (int64)EAkMidiEventType::AkMidiEventTypeEscape },
				{ "EAkMidiEventType::AkMidiEventTypeMeta", (int64)EAkMidiEventType::AkMidiEventTypeMeta },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AkMidiEventTypeChannelAftertouch.Name", "EAkMidiEventType::AkMidiEventTypeChannelAftertouch" },
				{ "AkMidiEventTypeController.Name", "EAkMidiEventType::AkMidiEventTypeController" },
				{ "AkMidiEventTypeEscape.Name", "EAkMidiEventType::AkMidiEventTypeEscape" },
				{ "AkMidiEventTypeInvalid.Name", "EAkMidiEventType::AkMidiEventTypeInvalid" },
				{ "AkMidiEventTypeMeta.Name", "EAkMidiEventType::AkMidiEventTypeMeta" },
				{ "AkMidiEventTypeNoteAftertouch.Name", "EAkMidiEventType::AkMidiEventTypeNoteAftertouch" },
				{ "AkMidiEventTypeNoteOff.Name", "EAkMidiEventType::AkMidiEventTypeNoteOff" },
				{ "AkMidiEventTypeNoteOn.Name", "EAkMidiEventType::AkMidiEventTypeNoteOn" },
				{ "AkMidiEventTypePitchBend.Name", "EAkMidiEventType::AkMidiEventTypePitchBend" },
				{ "AkMidiEventTypeProgramChange.Name", "EAkMidiEventType::AkMidiEventTypeProgramChange" },
				{ "AkMidiEventTypeSysex.Name", "EAkMidiEventType::AkMidiEventTypeSysex" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAkMidiEventType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkMidiEventType",
				"EAkMidiEventType",
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
