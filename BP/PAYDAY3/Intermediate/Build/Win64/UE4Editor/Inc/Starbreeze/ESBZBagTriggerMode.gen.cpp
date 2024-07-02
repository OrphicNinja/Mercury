// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZBagTriggerMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZBagTriggerMode() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZBagTriggerMode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZBagTriggerMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZBagTriggerMode, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZBagTriggerMode"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZBagTriggerMode>()
	{
		return ESBZBagTriggerMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZBagTriggerMode(ESBZBagTriggerMode_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZBagTriggerMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZBagTriggerMode_Hash() { return 3743846535U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZBagTriggerMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZBagTriggerMode"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZBagTriggerMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZBagTriggerMode::SecureAndDestroy", (int64)ESBZBagTriggerMode::SecureAndDestroy },
				{ "ESBZBagTriggerMode::DestroyOnly", (int64)ESBZBagTriggerMode::DestroyOnly },
				{ "ESBZBagTriggerMode::Teleport", (int64)ESBZBagTriggerMode::Teleport },
				{ "ESBZBagTriggerMode::Nothing", (int64)ESBZBagTriggerMode::Nothing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DestroyOnly.Name", "ESBZBagTriggerMode::DestroyOnly" },
				{ "ModuleRelativePath", "Public/ESBZBagTriggerMode.h" },
				{ "Nothing.Name", "ESBZBagTriggerMode::Nothing" },
				{ "SecureAndDestroy.Name", "ESBZBagTriggerMode::SecureAndDestroy" },
				{ "Teleport.Name", "ESBZBagTriggerMode::Teleport" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZBagTriggerMode",
				"ESBZBagTriggerMode",
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
