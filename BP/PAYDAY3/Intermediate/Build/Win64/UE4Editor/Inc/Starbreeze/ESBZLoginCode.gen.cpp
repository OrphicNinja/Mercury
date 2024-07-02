// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZLoginCode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZLoginCode() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZLoginCode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZLoginCode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZLoginCode, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZLoginCode"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZLoginCode>()
	{
		return ESBZLoginCode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZLoginCode(ESBZLoginCode_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZLoginCode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZLoginCode_Hash() { return 1988250757U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZLoginCode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZLoginCode"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZLoginCode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZLoginCode::Success", (int64)ESBZLoginCode::Success },
				{ "ESBZLoginCode::LoginFailed", (int64)ESBZLoginCode::LoginFailed },
				{ "ESBZLoginCode::NebulaConnectionFailed", (int64)ESBZLoginCode::NebulaConnectionFailed },
				{ "ESBZLoginCode::LoginBadRequest", (int64)ESBZLoginCode::LoginBadRequest },
				{ "ESBZLoginCode::LoginWrongCreds", (int64)ESBZLoginCode::LoginWrongCreds },
				{ "ESBZLoginCode::LoginLinkingTokenNotFound", (int64)ESBZLoginCode::LoginLinkingTokenNotFound },
				{ "ESBZLoginCode::LoginLinkingDiffNAccount", (int64)ESBZLoginCode::LoginLinkingDiffNAccount },
				{ "ESBZLoginCode::LoginPlayerBanned", (int64)ESBZLoginCode::LoginPlayerBanned },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LoginBadRequest.Name", "ESBZLoginCode::LoginBadRequest" },
				{ "LoginFailed.Name", "ESBZLoginCode::LoginFailed" },
				{ "LoginLinkingDiffNAccount.Name", "ESBZLoginCode::LoginLinkingDiffNAccount" },
				{ "LoginLinkingTokenNotFound.Name", "ESBZLoginCode::LoginLinkingTokenNotFound" },
				{ "LoginPlayerBanned.Name", "ESBZLoginCode::LoginPlayerBanned" },
				{ "LoginWrongCreds.Name", "ESBZLoginCode::LoginWrongCreds" },
				{ "ModuleRelativePath", "Public/ESBZLoginCode.h" },
				{ "NebulaConnectionFailed.Name", "ESBZLoginCode::NebulaConnectionFailed" },
				{ "Success.Name", "ESBZLoginCode::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZLoginCode",
				"ESBZLoginCode",
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
