// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZPartyInvitationSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZPartyInvitationSystem() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPartyInvitationSystem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZPartyInvitationSystem_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZPartyInvitationSystem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZPartyInvitationSystem"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZPartyInvitationSystem>()
	{
		return ESBZPartyInvitationSystem_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZPartyInvitationSystem(ESBZPartyInvitationSystem_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZPartyInvitationSystem"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZPartyInvitationSystem_Hash() { return 4207803486U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZPartyInvitationSystem()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZPartyInvitationSystem"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZPartyInvitationSystem_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZPartyInvitationSystem::Accelbyte", (int64)ESBZPartyInvitationSystem::Accelbyte },
				{ "ESBZPartyInvitationSystem::Native", (int64)ESBZPartyInvitationSystem::Native },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Accelbyte.Name", "ESBZPartyInvitationSystem::Accelbyte" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZPartyInvitationSystem.h" },
				{ "Native.Name", "ESBZPartyInvitationSystem::Native" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZPartyInvitationSystem",
				"ESBZPartyInvitationSystem",
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
