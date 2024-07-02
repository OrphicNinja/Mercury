// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZChatCommandTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZChatCommandTypes() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZChatCommandTypes();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZChatCommandTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZChatCommandTypes, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZChatCommandTypes"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZChatCommandTypes>()
	{
		return ESBZChatCommandTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZChatCommandTypes(ESBZChatCommandTypes_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZChatCommandTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZChatCommandTypes_Hash() { return 3345575544U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZChatCommandTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZChatCommandTypes"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZChatCommandTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZChatCommandTypes::CommandWhisperTo", (int64)ESBZChatCommandTypes::CommandWhisperTo },
				{ "ESBZChatCommandTypes::CommandPartyChat", (int64)ESBZChatCommandTypes::CommandPartyChat },
				{ "ESBZChatCommandTypes::CommandGroupChat", (int64)ESBZChatCommandTypes::CommandGroupChat },
				{ "ESBZChatCommandTypes::CommandInvitePlayer", (int64)ESBZChatCommandTypes::CommandInvitePlayer },
				{ "ESBZChatCommandTypes::CommandVoteKick", (int64)ESBZChatCommandTypes::CommandVoteKick },
				{ "ESBZChatCommandTypes::CommandMute", (int64)ESBZChatCommandTypes::CommandMute },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CommandGroupChat.Name", "ESBZChatCommandTypes::CommandGroupChat" },
				{ "CommandInvitePlayer.Name", "ESBZChatCommandTypes::CommandInvitePlayer" },
				{ "CommandMute.Name", "ESBZChatCommandTypes::CommandMute" },
				{ "CommandPartyChat.Name", "ESBZChatCommandTypes::CommandPartyChat" },
				{ "CommandVoteKick.Name", "ESBZChatCommandTypes::CommandVoteKick" },
				{ "CommandWhisperTo.Name", "ESBZChatCommandTypes::CommandWhisperTo" },
				{ "ModuleRelativePath", "Public/ESBZChatCommandTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZChatCommandTypes",
				"ESBZChatCommandTypes",
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
