// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZPartyError.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZPartyError() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPartyError();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZPartyError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZPartyError, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZPartyError"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZPartyError>()
	{
		return ESBZPartyError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZPartyError(ESBZPartyError_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZPartyError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZPartyError_Hash() { return 1485490558U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZPartyError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZPartyError"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZPartyError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZPartyError::DifferentGameClientsVersion", (int64)ESBZPartyError::DifferentGameClientsVersion },
				{ "ESBZPartyError::FriendNotFound", (int64)ESBZPartyError::FriendNotFound },
				{ "ESBZPartyError::PartyLeaderLeft", (int64)ESBZPartyError::PartyLeaderLeft },
				{ "ESBZPartyError::DifferentHostingProvider", (int64)ESBZPartyError::DifferentHostingProvider },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DifferentGameClientsVersion.Name", "ESBZPartyError::DifferentGameClientsVersion" },
				{ "DifferentHostingProvider.Name", "ESBZPartyError::DifferentHostingProvider" },
				{ "FriendNotFound.Name", "ESBZPartyError::FriendNotFound" },
				{ "ModuleRelativePath", "Public/ESBZPartyError.h" },
				{ "PartyLeaderLeft.Name", "ESBZPartyError::PartyLeaderLeft" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZPartyError",
				"ESBZPartyError",
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
