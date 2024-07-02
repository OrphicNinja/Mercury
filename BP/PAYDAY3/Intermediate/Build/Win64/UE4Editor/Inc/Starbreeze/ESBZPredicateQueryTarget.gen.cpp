// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZPredicateQueryTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZPredicateQueryTarget() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPredicateQueryTarget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZPredicateQueryTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZPredicateQueryTarget, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZPredicateQueryTarget"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZPredicateQueryTarget>()
	{
		return ESBZPredicateQueryTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZPredicateQueryTarget(ESBZPredicateQueryTarget_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZPredicateQueryTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZPredicateQueryTarget_Hash() { return 568718918U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZPredicateQueryTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZPredicateQueryTarget"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZPredicateQueryTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZPredicateQueryTarget::ListenerActor", (int64)ESBZPredicateQueryTarget::ListenerActor },
				{ "ESBZPredicateQueryTarget::StimuliActor", (int64)ESBZPredicateQueryTarget::StimuliActor },
				{ "ESBZPredicateQueryTarget::Stimuli", (int64)ESBZPredicateQueryTarget::Stimuli },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ListenerActor.Name", "ESBZPredicateQueryTarget::ListenerActor" },
				{ "ModuleRelativePath", "Public/ESBZPredicateQueryTarget.h" },
				{ "Stimuli.Name", "ESBZPredicateQueryTarget::Stimuli" },
				{ "StimuliActor.Name", "ESBZPredicateQueryTarget::StimuliActor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZPredicateQueryTarget",
				"ESBZPredicateQueryTarget",
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
