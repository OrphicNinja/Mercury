// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZHackableActorUnlockMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZHackableActorUnlockMode() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHackableActorUnlockMode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZHackableActorUnlockMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZHackableActorUnlockMode, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZHackableActorUnlockMode"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZHackableActorUnlockMode>()
	{
		return ESBZHackableActorUnlockMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZHackableActorUnlockMode(ESBZHackableActorUnlockMode_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZHackableActorUnlockMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZHackableActorUnlockMode_Hash() { return 10205894U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZHackableActorUnlockMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZHackableActorUnlockMode"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZHackableActorUnlockMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZHackableActorUnlockMode::NoSecurity", (int64)ESBZHackableActorUnlockMode::NoSecurity },
				{ "ESBZHackableActorUnlockMode::HackUnlock", (int64)ESBZHackableActorUnlockMode::HackUnlock },
				{ "ESBZHackableActorUnlockMode::KeyItemUnlock", (int64)ESBZHackableActorUnlockMode::KeyItemUnlock },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HackUnlock.Name", "ESBZHackableActorUnlockMode::HackUnlock" },
				{ "KeyItemUnlock.Name", "ESBZHackableActorUnlockMode::KeyItemUnlock" },
				{ "ModuleRelativePath", "Public/ESBZHackableActorUnlockMode.h" },
				{ "NoSecurity.Name", "ESBZHackableActorUnlockMode::NoSecurity" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZHackableActorUnlockMode",
				"ESBZHackableActorUnlockMode",
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
