// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteAllowedAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteAllowedAction() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAllowedAction();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteAllowedAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAllowedAction, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteAllowedAction"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteAllowedAction>()
	{
		return EAccelByteAllowedAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteAllowedAction(EAccelByteAllowedAction_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteAllowedAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAllowedAction_Hash() { return 2153638866U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAllowedAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteAllowedAction"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAllowedAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteAllowedAction::None", (int64)EAccelByteAllowedAction::None },
				{ "EAccelByteAllowedAction::createGroup", (int64)EAccelByteAllowedAction::createGroup },
				{ "EAccelByteAllowedAction::joinGroup", (int64)EAccelByteAllowedAction::joinGroup },
				{ "EAccelByteAllowedAction::inviteUser", (int64)EAccelByteAllowedAction::inviteUser },
				{ "EAccelByteAllowedAction::kickUser", (int64)EAccelByteAllowedAction::kickUser },
				{ "EAccelByteAllowedAction::leaveGroup", (int64)EAccelByteAllowedAction::leaveGroup },
				{ "EAccelByteAllowedAction::responseJoinRequest", (int64)EAccelByteAllowedAction::responseJoinRequest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "createGroup.Name", "EAccelByteAllowedAction::createGroup" },
				{ "inviteUser.Name", "EAccelByteAllowedAction::inviteUser" },
				{ "joinGroup.Name", "EAccelByteAllowedAction::joinGroup" },
				{ "kickUser.Name", "EAccelByteAllowedAction::kickUser" },
				{ "leaveGroup.Name", "EAccelByteAllowedAction::leaveGroup" },
				{ "ModuleRelativePath", "Public/EAccelByteAllowedAction.h" },
				{ "None.Name", "EAccelByteAllowedAction::None" },
				{ "responseJoinRequest.Name", "EAccelByteAllowedAction::responseJoinRequest" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteAllowedAction",
				"EAccelByteAllowedAction",
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
