// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZCameraDetectionLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZCameraDetectionLevel() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCameraDetectionLevel();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZCameraDetectionLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZCameraDetectionLevel, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZCameraDetectionLevel"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZCameraDetectionLevel>()
	{
		return ESBZCameraDetectionLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZCameraDetectionLevel(ESBZCameraDetectionLevel_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZCameraDetectionLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZCameraDetectionLevel_Hash() { return 2411023455U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZCameraDetectionLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZCameraDetectionLevel"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZCameraDetectionLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZCameraDetectionLevel::None", (int64)ESBZCameraDetectionLevel::None },
				{ "ESBZCameraDetectionLevel::Investigate", (int64)ESBZCameraDetectionLevel::Investigate },
				{ "ESBZCameraDetectionLevel::Criminal", (int64)ESBZCameraDetectionLevel::Criminal },
				{ "ESBZCameraDetectionLevel::Alarm", (int64)ESBZCameraDetectionLevel::Alarm },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alarm.Name", "ESBZCameraDetectionLevel::Alarm" },
				{ "BlueprintType", "true" },
				{ "Criminal.Name", "ESBZCameraDetectionLevel::Criminal" },
				{ "Investigate.Name", "ESBZCameraDetectionLevel::Investigate" },
				{ "ModuleRelativePath", "Public/ESBZCameraDetectionLevel.h" },
				{ "None.Name", "ESBZCameraDetectionLevel::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZCameraDetectionLevel",
				"ESBZCameraDetectionLevel",
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
