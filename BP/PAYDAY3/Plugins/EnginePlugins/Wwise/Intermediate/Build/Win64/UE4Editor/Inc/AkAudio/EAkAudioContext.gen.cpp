// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkAudioContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkAudioContext() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAudioContext();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* EAkAudioContext_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAudioContext, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAudioContext"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioContext>()
	{
		return EAkAudioContext_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkAudioContext(EAkAudioContext_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkAudioContext"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkAudioContext_Hash() { return 3465238851U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkAudioContext()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkAudioContext"), 0, Get_Z_Construct_UEnum_AkAudio_EAkAudioContext_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkAudioContext::Foreign", (int64)EAkAudioContext::Foreign },
				{ "EAkAudioContext::GameplayAudio", (int64)EAkAudioContext::GameplayAudio },
				{ "EAkAudioContext::EditorAudio", (int64)EAkAudioContext::EditorAudio },
				{ "EAkAudioContext::AlwaysActive", (int64)EAkAudioContext::AlwaysActive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysActive.Name", "EAkAudioContext::AlwaysActive" },
				{ "BlueprintType", "true" },
				{ "EditorAudio.Name", "EAkAudioContext::EditorAudio" },
				{ "Foreign.Name", "EAkAudioContext::Foreign" },
				{ "GameplayAudio.Name", "EAkAudioContext::GameplayAudio" },
				{ "ModuleRelativePath", "Public/EAkAudioContext.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkAudioContext",
				"EAkAudioContext",
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
