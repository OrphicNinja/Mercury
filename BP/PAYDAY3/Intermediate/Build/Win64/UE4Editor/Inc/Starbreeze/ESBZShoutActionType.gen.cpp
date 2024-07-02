// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZShoutActionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZShoutActionType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZShoutActionType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZShoutActionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZShoutActionType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZShoutActionType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZShoutActionType>()
	{
		return ESBZShoutActionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZShoutActionType(ESBZShoutActionType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZShoutActionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZShoutActionType_Hash() { return 3481051204U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZShoutActionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZShoutActionType"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZShoutActionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZShoutActionType::None", (int64)ESBZShoutActionType::None },
				{ "ESBZShoutActionType::Mark", (int64)ESBZShoutActionType::Mark },
				{ "ESBZShoutActionType::HelpMe", (int64)ESBZShoutActionType::HelpMe },
				{ "ESBZShoutActionType::HelpOther", (int64)ESBZShoutActionType::HelpOther },
				{ "ESBZShoutActionType::Callout", (int64)ESBZShoutActionType::Callout },
				{ "ESBZShoutActionType::Comment", (int64)ESBZShoutActionType::Comment },
				{ "ESBZShoutActionType::GetDown", (int64)ESBZShoutActionType::GetDown },
				{ "ESBZShoutActionType::CopSurrender", (int64)ESBZShoutActionType::CopSurrender },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Callout.Name", "ESBZShoutActionType::Callout" },
				{ "Comment.Name", "ESBZShoutActionType::Comment" },
				{ "CopSurrender.Name", "ESBZShoutActionType::CopSurrender" },
				{ "GetDown.Name", "ESBZShoutActionType::GetDown" },
				{ "HelpMe.Name", "ESBZShoutActionType::HelpMe" },
				{ "HelpOther.Name", "ESBZShoutActionType::HelpOther" },
				{ "Mark.Name", "ESBZShoutActionType::Mark" },
				{ "ModuleRelativePath", "Public/ESBZShoutActionType.h" },
				{ "None.Name", "ESBZShoutActionType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZShoutActionType",
				"ESBZShoutActionType",
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
