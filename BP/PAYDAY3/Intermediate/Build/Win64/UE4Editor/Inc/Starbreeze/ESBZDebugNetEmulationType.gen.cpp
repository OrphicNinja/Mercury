// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZDebugNetEmulationType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZDebugNetEmulationType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDebugNetEmulationType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZDebugNetEmulationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZDebugNetEmulationType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZDebugNetEmulationType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZDebugNetEmulationType>()
	{
		return ESBZDebugNetEmulationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZDebugNetEmulationType(ESBZDebugNetEmulationType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZDebugNetEmulationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZDebugNetEmulationType_Hash() { return 3055576035U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZDebugNetEmulationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZDebugNetEmulationType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZDebugNetEmulationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZDebugNetEmulationType::None", (int64)ESBZDebugNetEmulationType::None },
				{ "ESBZDebugNetEmulationType::Average", (int64)ESBZDebugNetEmulationType::Average },
				{ "ESBZDebugNetEmulationType::Bad", (int64)ESBZDebugNetEmulationType::Bad },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Average.Name", "ESBZDebugNetEmulationType::Average" },
				{ "Bad.Name", "ESBZDebugNetEmulationType::Bad" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESBZDebugNetEmulationType.h" },
				{ "None.Name", "ESBZDebugNetEmulationType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZDebugNetEmulationType",
				"ESBZDebugNetEmulationType",
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
