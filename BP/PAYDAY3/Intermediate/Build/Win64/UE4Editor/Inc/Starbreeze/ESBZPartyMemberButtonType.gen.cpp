// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZPartyMemberButtonType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZPartyMemberButtonType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPartyMemberButtonType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZPartyMemberButtonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZPartyMemberButtonType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZPartyMemberButtonType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZPartyMemberButtonType>()
	{
		return ESBZPartyMemberButtonType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZPartyMemberButtonType(ESBZPartyMemberButtonType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZPartyMemberButtonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZPartyMemberButtonType_Hash() { return 3620416068U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZPartyMemberButtonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZPartyMemberButtonType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZPartyMemberButtonType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZPartyMemberButtonType::PartyMember", (int64)ESBZPartyMemberButtonType::PartyMember },
				{ "ESBZPartyMemberButtonType::InviteIncoming", (int64)ESBZPartyMemberButtonType::InviteIncoming },
				{ "ESBZPartyMemberButtonType::InviteOutgoing", (int64)ESBZPartyMemberButtonType::InviteOutgoing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "InviteIncoming.Name", "ESBZPartyMemberButtonType::InviteIncoming" },
				{ "InviteOutgoing.Name", "ESBZPartyMemberButtonType::InviteOutgoing" },
				{ "ModuleRelativePath", "Public/ESBZPartyMemberButtonType.h" },
				{ "PartyMember.Name", "ESBZPartyMemberButtonType::PartyMember" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZPartyMemberButtonType",
				"ESBZPartyMemberButtonType",
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
