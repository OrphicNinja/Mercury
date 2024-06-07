// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemAccelByte/Public/EAccelByteLoginType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteLoginType() {}
// Cross Module References
	ONLINESUBSYSTEMACCELBYTE_API UEnum* Z_Construct_UEnum_OnlineSubsystemAccelByte_EAccelByteLoginType();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemAccelByte();
// End Cross Module References
	static UEnum* EAccelByteLoginType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemAccelByte_EAccelByteLoginType, Z_Construct_UPackage__Script_OnlineSubsystemAccelByte(), TEXT("EAccelByteLoginType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMACCELBYTE_API UEnum* StaticEnum<EAccelByteLoginType>()
	{
		return EAccelByteLoginType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteLoginType(EAccelByteLoginType_StaticEnum, TEXT("/Script/OnlineSubsystemAccelByte"), TEXT("EAccelByteLoginType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemAccelByte_EAccelByteLoginType_Hash() { return 3652733504U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemAccelByte_EAccelByteLoginType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemAccelByte();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteLoginType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemAccelByte_EAccelByteLoginType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteLoginType::None", (int64)EAccelByteLoginType::None },
				{ "EAccelByteLoginType::DeviceId", (int64)EAccelByteLoginType::DeviceId },
				{ "EAccelByteLoginType::AccelByte", (int64)EAccelByteLoginType::AccelByte },
				{ "EAccelByteLoginType::Xbox", (int64)EAccelByteLoginType::Xbox },
				{ "EAccelByteLoginType::PS4", (int64)EAccelByteLoginType::PS4 },
				{ "EAccelByteLoginType::PS5", (int64)EAccelByteLoginType::PS5 },
				{ "EAccelByteLoginType::Launcher", (int64)EAccelByteLoginType::Launcher },
				{ "EAccelByteLoginType::Steam", (int64)EAccelByteLoginType::Steam },
				{ "EAccelByteLoginType::EOS", (int64)EAccelByteLoginType::EOS },
				{ "EAccelByteLoginType::ExchangeCode", (int64)EAccelByteLoginType::ExchangeCode },
				{ "EAccelByteLoginType::PublisherCode", (int64)EAccelByteLoginType::PublisherCode },
				{ "EAccelByteLoginType::RefreshToken", (int64)EAccelByteLoginType::RefreshToken },
				{ "EAccelByteLoginType::CachedToken", (int64)EAccelByteLoginType::CachedToken },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AccelByte.Name", "EAccelByteLoginType::AccelByte" },
				{ "BlueprintType", "true" },
				{ "CachedToken.Name", "EAccelByteLoginType::CachedToken" },
				{ "DeviceId.Name", "EAccelByteLoginType::DeviceId" },
				{ "EOS.Name", "EAccelByteLoginType::EOS" },
				{ "ExchangeCode.Name", "EAccelByteLoginType::ExchangeCode" },
				{ "Launcher.Name", "EAccelByteLoginType::Launcher" },
				{ "ModuleRelativePath", "Public/EAccelByteLoginType.h" },
				{ "None.Name", "EAccelByteLoginType::None" },
				{ "PS4.Name", "EAccelByteLoginType::PS4" },
				{ "PS5.Name", "EAccelByteLoginType::PS5" },
				{ "PublisherCode.Name", "EAccelByteLoginType::PublisherCode" },
				{ "RefreshToken.Name", "EAccelByteLoginType::RefreshToken" },
				{ "Steam.Name", "EAccelByteLoginType::Steam" },
				{ "Xbox.Name", "EAccelByteLoginType::Xbox" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemAccelByte,
				nullptr,
				"EAccelByteLoginType",
				"EAccelByteLoginType",
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
