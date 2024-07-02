// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZDebugNetEmulationTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZDebugNetEmulationTarget() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDebugNetEmulationTarget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZDebugNetEmulationTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZDebugNetEmulationTarget, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZDebugNetEmulationTarget"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZDebugNetEmulationTarget>()
	{
		return ESBZDebugNetEmulationTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZDebugNetEmulationTarget(ESBZDebugNetEmulationTarget_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZDebugNetEmulationTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZDebugNetEmulationTarget_Hash() { return 54505589U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZDebugNetEmulationTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZDebugNetEmulationTarget"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZDebugNetEmulationTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZDebugNetEmulationTarget::Local", (int64)ESBZDebugNetEmulationTarget::Local },
				{ "ESBZDebugNetEmulationTarget::Server", (int64)ESBZDebugNetEmulationTarget::Server },
				{ "ESBZDebugNetEmulationTarget::All", (int64)ESBZDebugNetEmulationTarget::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ESBZDebugNetEmulationTarget::All" },
				{ "BlueprintType", "true" },
				{ "Local.Name", "ESBZDebugNetEmulationTarget::Local" },
				{ "ModuleRelativePath", "Public/ESBZDebugNetEmulationTarget.h" },
				{ "Server.Name", "ESBZDebugNetEmulationTarget::Server" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZDebugNetEmulationTarget",
				"ESBZDebugNetEmulationTarget",
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
