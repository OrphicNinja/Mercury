// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemAccelByte/Public/EOnlineSessionP2PConnectedAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOnlineSessionP2PConnectedAction() {}
// Cross Module References
	ONLINESUBSYSTEMACCELBYTE_API UEnum* Z_Construct_UEnum_OnlineSubsystemAccelByte_EOnlineSessionP2PConnectedAction();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemAccelByte();
// End Cross Module References
	static UEnum* EOnlineSessionP2PConnectedAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemAccelByte_EOnlineSessionP2PConnectedAction, Z_Construct_UPackage__Script_OnlineSubsystemAccelByte(), TEXT("EOnlineSessionP2PConnectedAction"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMACCELBYTE_API UEnum* StaticEnum<EOnlineSessionP2PConnectedAction>()
	{
		return EOnlineSessionP2PConnectedAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnlineSessionP2PConnectedAction(EOnlineSessionP2PConnectedAction_StaticEnum, TEXT("/Script/OnlineSubsystemAccelByte"), TEXT("EOnlineSessionP2PConnectedAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemAccelByte_EOnlineSessionP2PConnectedAction_Hash() { return 1063693774U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemAccelByte_EOnlineSessionP2PConnectedAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemAccelByte();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnlineSessionP2PConnectedAction"), 0, Get_Z_Construct_UEnum_OnlineSubsystemAccelByte_EOnlineSessionP2PConnectedAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnlineSessionP2PConnectedAction::Join", (int64)EOnlineSessionP2PConnectedAction::Join },
				{ "EOnlineSessionP2PConnectedAction::Update", (int64)EOnlineSessionP2PConnectedAction::Update },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Join.Name", "EOnlineSessionP2PConnectedAction::Join" },
				{ "ModuleRelativePath", "Public/EOnlineSessionP2PConnectedAction.h" },
				{ "Update.Name", "EOnlineSessionP2PConnectedAction::Update" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemAccelByte,
				nullptr,
				"EOnlineSessionP2PConnectedAction",
				"EOnlineSessionP2PConnectedAction",
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
