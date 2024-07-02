// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZHostingProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZHostingProvider() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHostingProvider();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZHostingProvider_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZHostingProvider, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZHostingProvider"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZHostingProvider>()
	{
		return ESBZHostingProvider_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZHostingProvider(ESBZHostingProvider_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZHostingProvider"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZHostingProvider_Hash() { return 1967365965U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZHostingProvider()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZHostingProvider"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZHostingProvider_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZHostingProvider::Accelbyte", (int64)ESBZHostingProvider::Accelbyte },
				{ "ESBZHostingProvider::AmazonGameLift", (int64)ESBZHostingProvider::AmazonGameLift },
				{ "ESBZHostingProvider::EdgeGap", (int64)ESBZHostingProvider::EdgeGap },
				{ "ESBZHostingProvider::MAX", (int64)ESBZHostingProvider::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Accelbyte.Name", "ESBZHostingProvider::Accelbyte" },
				{ "AmazonGameLift.Name", "ESBZHostingProvider::AmazonGameLift" },
				{ "BlueprintType", "true" },
				{ "EdgeGap.Name", "ESBZHostingProvider::EdgeGap" },
				{ "MAX.Name", "ESBZHostingProvider::MAX" },
				{ "ModuleRelativePath", "Public/ESBZHostingProvider.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZHostingProvider",
				"ESBZHostingProvider",
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
