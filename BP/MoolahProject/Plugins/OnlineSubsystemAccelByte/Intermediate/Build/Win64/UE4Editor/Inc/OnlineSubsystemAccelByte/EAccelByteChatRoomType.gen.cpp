// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemAccelByte/Public/EAccelByteChatRoomType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteChatRoomType() {}
// Cross Module References
	ONLINESUBSYSTEMACCELBYTE_API UEnum* Z_Construct_UEnum_OnlineSubsystemAccelByte_EAccelByteChatRoomType();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemAccelByte();
// End Cross Module References
	static UEnum* EAccelByteChatRoomType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemAccelByte_EAccelByteChatRoomType, Z_Construct_UPackage__Script_OnlineSubsystemAccelByte(), TEXT("EAccelByteChatRoomType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMACCELBYTE_API UEnum* StaticEnum<EAccelByteChatRoomType>()
	{
		return EAccelByteChatRoomType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteChatRoomType(EAccelByteChatRoomType_StaticEnum, TEXT("/Script/OnlineSubsystemAccelByte"), TEXT("EAccelByteChatRoomType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemAccelByte_EAccelByteChatRoomType_Hash() { return 282808377U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemAccelByte_EAccelByteChatRoomType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemAccelByte();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteChatRoomType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemAccelByte_EAccelByteChatRoomType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteChatRoomType::NORMAL", (int64)EAccelByteChatRoomType::NORMAL },
				{ "EAccelByteChatRoomType::PERSONAL", (int64)EAccelByteChatRoomType::PERSONAL },
				{ "EAccelByteChatRoomType::PARTY_V2", (int64)EAccelByteChatRoomType::PARTY_V2 },
				{ "EAccelByteChatRoomType::PARTY_V1", (int64)EAccelByteChatRoomType::PARTY_V1 },
				{ "EAccelByteChatRoomType::SESSION_V2", (int64)EAccelByteChatRoomType::SESSION_V2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAccelByteChatRoomType.h" },
				{ "NORMAL.Name", "EAccelByteChatRoomType::NORMAL" },
				{ "PARTY_V1.Name", "EAccelByteChatRoomType::PARTY_V1" },
				{ "PARTY_V2.Name", "EAccelByteChatRoomType::PARTY_V2" },
				{ "PERSONAL.Name", "EAccelByteChatRoomType::PERSONAL" },
				{ "SESSION_V2.Name", "EAccelByteChatRoomType::SESSION_V2" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemAccelByte,
				nullptr,
				"EAccelByteChatRoomType",
				"EAccelByteChatRoomType",
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
