// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ERepNodeRoutingStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERepNodeRoutingStrategy() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ERepNodeRoutingStrategy();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ERepNodeRoutingStrategy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ERepNodeRoutingStrategy, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ERepNodeRoutingStrategy"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ERepNodeRoutingStrategy>()
	{
		return ERepNodeRoutingStrategy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERepNodeRoutingStrategy(ERepNodeRoutingStrategy_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ERepNodeRoutingStrategy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ERepNodeRoutingStrategy_Hash() { return 115369654U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ERepNodeRoutingStrategy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERepNodeRoutingStrategy"), 0, Get_Z_Construct_UEnum_Starbreeze_ERepNodeRoutingStrategy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERepNodeRoutingStrategy::NotRouted", (int64)ERepNodeRoutingStrategy::NotRouted },
				{ "ERepNodeRoutingStrategy::DependentActor", (int64)ERepNodeRoutingStrategy::DependentActor },
				{ "ERepNodeRoutingStrategy::RelevantAllConnections", (int64)ERepNodeRoutingStrategy::RelevantAllConnections },
				{ "ERepNodeRoutingStrategy::Spatialize_Static", (int64)ERepNodeRoutingStrategy::Spatialize_Static },
				{ "ERepNodeRoutingStrategy::Spatialize_Dynamic", (int64)ERepNodeRoutingStrategy::Spatialize_Dynamic },
				{ "ERepNodeRoutingStrategy::Spatialize_Dormancy", (int64)ERepNodeRoutingStrategy::Spatialize_Dormancy },
				{ "ERepNodeRoutingStrategy::Spatialize_Dynamic_Frequency", (int64)ERepNodeRoutingStrategy::Spatialize_Dynamic_Frequency },
				{ "ERepNodeRoutingStrategy::PrototypingOnly", (int64)ERepNodeRoutingStrategy::PrototypingOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DependentActor.Name", "ERepNodeRoutingStrategy::DependentActor" },
				{ "ModuleRelativePath", "Public/ERepNodeRoutingStrategy.h" },
				{ "NotRouted.Name", "ERepNodeRoutingStrategy::NotRouted" },
				{ "PrototypingOnly.Name", "ERepNodeRoutingStrategy::PrototypingOnly" },
				{ "RelevantAllConnections.Name", "ERepNodeRoutingStrategy::RelevantAllConnections" },
				{ "Spatialize_Dormancy.Name", "ERepNodeRoutingStrategy::Spatialize_Dormancy" },
				{ "Spatialize_Dynamic.Name", "ERepNodeRoutingStrategy::Spatialize_Dynamic" },
				{ "Spatialize_Dynamic_Frequency.Name", "ERepNodeRoutingStrategy::Spatialize_Dynamic_Frequency" },
				{ "Spatialize_Static.Name", "ERepNodeRoutingStrategy::Spatialize_Static" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ERepNodeRoutingStrategy",
				"ERepNodeRoutingStrategy",
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
