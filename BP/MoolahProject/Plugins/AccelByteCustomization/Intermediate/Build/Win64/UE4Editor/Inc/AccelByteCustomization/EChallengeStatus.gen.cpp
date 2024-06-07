// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/EChallengeStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChallengeStatus() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UEnum* Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References
	static UEnum* EChallengeStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("EChallengeStatus"));
		}
		return Singleton;
	}
	template<> ACCELBYTECUSTOMIZATION_API UEnum* StaticEnum<EChallengeStatus>()
	{
		return EChallengeStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChallengeStatus(EChallengeStatus_StaticEnum, TEXT("/Script/AccelByteCustomization"), TEXT("EChallengeStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus_Hash() { return 3352756542U; }
	UEnum* Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChallengeStatus"), 0, Get_Z_Construct_UEnum_AccelByteCustomization_EChallengeStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChallengeStatus::INIT", (int64)EChallengeStatus::INIT },
				{ "EChallengeStatus::INPROGRESS", (int64)EChallengeStatus::INPROGRESS },
				{ "EChallengeStatus::COMPLETED", (int64)EChallengeStatus::COMPLETED },
				{ "EChallengeStatus::UNAVAILABLE", (int64)EChallengeStatus::UNAVAILABLE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "COMPLETED.Name", "EChallengeStatus::COMPLETED" },
				{ "INIT.Name", "EChallengeStatus::INIT" },
				{ "INPROGRESS.Name", "EChallengeStatus::INPROGRESS" },
				{ "ModuleRelativePath", "Public/EChallengeStatus.h" },
				{ "UNAVAILABLE.Name", "EChallengeStatus::UNAVAILABLE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteCustomization,
				nullptr,
				"EChallengeStatus",
				"EChallengeStatus",
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
