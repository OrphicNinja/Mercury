// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkActionOnEventType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkActionOnEventType() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkActionOnEventType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* AkActionOnEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkActionOnEventType, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkActionOnEventType"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkActionOnEventType>()
	{
		return AkActionOnEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AkActionOnEventType(AkActionOnEventType_StaticEnum, TEXT("/Script/AkAudio"), TEXT("AkActionOnEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_AkActionOnEventType_Hash() { return 553958674U; }
	UEnum* Z_Construct_UEnum_AkAudio_AkActionOnEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AkActionOnEventType"), 0, Get_Z_Construct_UEnum_AkAudio_AkActionOnEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AkActionOnEventType::Stop", (int64)AkActionOnEventType::Stop },
				{ "AkActionOnEventType::Pause", (int64)AkActionOnEventType::Pause },
				{ "AkActionOnEventType::Resume", (int64)AkActionOnEventType::Resume },
				{ "AkActionOnEventType::Break", (int64)AkActionOnEventType::Break },
				{ "AkActionOnEventType::ReleaseEnvelope", (int64)AkActionOnEventType::ReleaseEnvelope },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Break.Name", "AkActionOnEventType::Break" },
				{ "ModuleRelativePath", "Public/AkActionOnEventType.h" },
				{ "Pause.Name", "AkActionOnEventType::Pause" },
				{ "ReleaseEnvelope.Name", "AkActionOnEventType::ReleaseEnvelope" },
				{ "Resume.Name", "AkActionOnEventType::Resume" },
				{ "Stop.Name", "AkActionOnEventType::Stop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"AkActionOnEventType",
				"AkActionOnEventType",
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
