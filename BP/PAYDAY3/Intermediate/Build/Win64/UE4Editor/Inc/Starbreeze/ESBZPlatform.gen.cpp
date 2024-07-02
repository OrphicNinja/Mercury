// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZPlatform() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlatform();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZPlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZPlatform, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZPlatform"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZPlatform>()
	{
		return ESBZPlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZPlatform(ESBZPlatform_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZPlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZPlatform_Hash() { return 1457830481U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZPlatform"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZPlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZPlatform::Unknown", (int64)ESBZPlatform::Unknown },
				{ "ESBZPlatform::Windows", (int64)ESBZPlatform::Windows },
				{ "ESBZPlatform::Playstation", (int64)ESBZPlatform::Playstation },
				{ "ESBZPlatform::Xbox", (int64)ESBZPlatform::Xbox },
				{ "ESBZPlatform::MAX", (int64)ESBZPlatform::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MAX.Name", "ESBZPlatform::MAX" },
				{ "ModuleRelativePath", "Public/ESBZPlatform.h" },
				{ "Playstation.Name", "ESBZPlatform::Playstation" },
				{ "Unknown.Name", "ESBZPlatform::Unknown" },
				{ "Windows.Name", "ESBZPlatform::Windows" },
				{ "Xbox.Name", "ESBZPlatform::Xbox" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZPlatform",
				"ESBZPlatform",
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
