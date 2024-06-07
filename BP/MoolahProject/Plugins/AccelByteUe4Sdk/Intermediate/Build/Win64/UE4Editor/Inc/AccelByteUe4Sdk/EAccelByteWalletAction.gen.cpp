// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteWalletAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteWalletAction() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteWalletAction();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteWalletAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteWalletAction, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteWalletAction"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteWalletAction>()
	{
		return EAccelByteWalletAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteWalletAction(EAccelByteWalletAction_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteWalletAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteWalletAction_Hash() { return 3508614073U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteWalletAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteWalletAction"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteWalletAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteWalletAction::NONE", (int64)EAccelByteWalletAction::NONE },
				{ "EAccelByteWalletAction::CREDIT", (int64)EAccelByteWalletAction::CREDIT },
				{ "EAccelByteWalletAction::PAYMENT", (int64)EAccelByteWalletAction::PAYMENT },
				{ "EAccelByteWalletAction::DEBIT", (int64)EAccelByteWalletAction::DEBIT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CREDIT.Name", "EAccelByteWalletAction::CREDIT" },
				{ "DEBIT.Name", "EAccelByteWalletAction::DEBIT" },
				{ "ModuleRelativePath", "Public/EAccelByteWalletAction.h" },
				{ "NONE.Name", "EAccelByteWalletAction::NONE" },
				{ "PAYMENT.Name", "EAccelByteWalletAction::PAYMENT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteWalletAction",
				"EAccelByteWalletAction",
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
