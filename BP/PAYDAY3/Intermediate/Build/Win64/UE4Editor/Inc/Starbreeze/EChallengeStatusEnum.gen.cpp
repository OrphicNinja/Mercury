// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/EChallengeStatusEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChallengeStatusEnum() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EChallengeStatusEnum();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* EChallengeStatusEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_EChallengeStatusEnum, Z_Construct_UPackage__Script_Starbreeze(), TEXT("EChallengeStatusEnum"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<EChallengeStatusEnum>()
	{
		return EChallengeStatusEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChallengeStatusEnum(EChallengeStatusEnum_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("EChallengeStatusEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_EChallengeStatusEnum_Hash() { return 2242021730U; }
	UEnum* Z_Construct_UEnum_Starbreeze_EChallengeStatusEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChallengeStatusEnum"), 0, Get_Z_Construct_UEnum_Starbreeze_EChallengeStatusEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChallengeStatusEnum::INIT", (int64)EChallengeStatusEnum::INIT },
				{ "EChallengeStatusEnum::INPROGRESS", (int64)EChallengeStatusEnum::INPROGRESS },
				{ "EChallengeStatusEnum::COMPLETED", (int64)EChallengeStatusEnum::COMPLETED },
				{ "EChallengeStatusEnum::UNAVAILABLE", (int64)EChallengeStatusEnum::UNAVAILABLE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "COMPLETED.Name", "EChallengeStatusEnum::COMPLETED" },
				{ "INIT.Name", "EChallengeStatusEnum::INIT" },
				{ "INPROGRESS.Name", "EChallengeStatusEnum::INPROGRESS" },
				{ "ModuleRelativePath", "Public/EChallengeStatusEnum.h" },
				{ "UNAVAILABLE.Name", "EChallengeStatusEnum::UNAVAILABLE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"EChallengeStatusEnum",
				"EChallengeStatusEnum",
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
