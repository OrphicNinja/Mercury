// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZMatchmakingProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZMatchmakingProvider() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMatchmakingProvider();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZMatchmakingProvider_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZMatchmakingProvider, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZMatchmakingProvider"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZMatchmakingProvider>()
	{
		return ESBZMatchmakingProvider_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZMatchmakingProvider(ESBZMatchmakingProvider_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZMatchmakingProvider"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZMatchmakingProvider_Hash() { return 4182102409U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZMatchmakingProvider()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZMatchmakingProvider"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZMatchmakingProvider_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZMatchmakingProvider::Accelbyte", (int64)ESBZMatchmakingProvider::Accelbyte },
				{ "ESBZMatchmakingProvider::AmazonGameLift", (int64)ESBZMatchmakingProvider::AmazonGameLift },
				{ "ESBZMatchmakingProvider::EdgeGap", (int64)ESBZMatchmakingProvider::EdgeGap },
				{ "ESBZMatchmakingProvider::MAX", (int64)ESBZMatchmakingProvider::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Accelbyte.Name", "ESBZMatchmakingProvider::Accelbyte" },
				{ "AmazonGameLift.Name", "ESBZMatchmakingProvider::AmazonGameLift" },
				{ "BlueprintType", "true" },
				{ "EdgeGap.Name", "ESBZMatchmakingProvider::EdgeGap" },
				{ "MAX.Name", "ESBZMatchmakingProvider::MAX" },
				{ "ModuleRelativePath", "Public/ESBZMatchmakingProvider.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZMatchmakingProvider",
				"ESBZMatchmakingProvider",
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
