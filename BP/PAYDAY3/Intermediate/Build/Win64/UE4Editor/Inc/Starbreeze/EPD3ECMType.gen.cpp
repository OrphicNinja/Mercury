// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/EPD3ECMType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPD3ECMType() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3ECMType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* EPD3ECMType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_EPD3ECMType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("EPD3ECMType"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<EPD3ECMType>()
	{
		return EPD3ECMType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPD3ECMType(EPD3ECMType_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("EPD3ECMType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_EPD3ECMType_Hash() { return 94788362U; }
	UEnum* Z_Construct_UEnum_Starbreeze_EPD3ECMType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPD3ECMType"), 0, Get_Z_Construct_UEnum_Starbreeze_EPD3ECMType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPD3ECMType::Radio", (int64)EPD3ECMType::Radio },
				{ "EPD3ECMType::Pager", (int64)EPD3ECMType::Pager },
				{ "EPD3ECMType::Camera", (int64)EPD3ECMType::Camera },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Camera.Name", "EPD3ECMType::Camera" },
				{ "ModuleRelativePath", "Public/EPD3ECMType.h" },
				{ "Pager.Name", "EPD3ECMType::Pager" },
				{ "Radio.Name", "EPD3ECMType::Radio" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"EPD3ECMType",
				"EPD3ECMType",
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
