// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/ERTPCValueType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERTPCValueType() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* ERTPCValueType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_ERTPCValueType, Z_Construct_UPackage__Script_AkAudio(), TEXT("ERTPCValueType"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<ERTPCValueType>()
	{
		return ERTPCValueType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERTPCValueType(ERTPCValueType_StaticEnum, TEXT("/Script/AkAudio"), TEXT("ERTPCValueType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_ERTPCValueType_Hash() { return 1118575605U; }
	UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERTPCValueType"), 0, Get_Z_Construct_UEnum_AkAudio_ERTPCValueType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERTPCValueType::Default", (int64)ERTPCValueType::Default },
				{ "ERTPCValueType::Global", (int64)ERTPCValueType::Global },
				{ "ERTPCValueType::GameObject", (int64)ERTPCValueType::GameObject },
				{ "ERTPCValueType::PlayingID", (int64)ERTPCValueType::PlayingID },
				{ "ERTPCValueType::Unavailable", (int64)ERTPCValueType::Unavailable },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "ERTPCValueType::Default" },
				{ "GameObject.Name", "ERTPCValueType::GameObject" },
				{ "Global.Name", "ERTPCValueType::Global" },
				{ "ModuleRelativePath", "Public/ERTPCValueType.h" },
				{ "PlayingID.Name", "ERTPCValueType::PlayingID" },
				{ "Unavailable.Name", "ERTPCValueType::Unavailable" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"ERTPCValueType",
				"ERTPCValueType",
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
