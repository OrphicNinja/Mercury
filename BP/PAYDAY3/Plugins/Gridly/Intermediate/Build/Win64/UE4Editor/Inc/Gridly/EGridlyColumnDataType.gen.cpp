// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gridly/Public/EGridlyColumnDataType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGridlyColumnDataType() {}
// Cross Module References
	GRIDLY_API UEnum* Z_Construct_UEnum_Gridly_EGridlyColumnDataType();
	UPackage* Z_Construct_UPackage__Script_Gridly();
// End Cross Module References
	static UEnum* EGridlyColumnDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Gridly_EGridlyColumnDataType, Z_Construct_UPackage__Script_Gridly(), TEXT("EGridlyColumnDataType"));
		}
		return Singleton;
	}
	template<> GRIDLY_API UEnum* StaticEnum<EGridlyColumnDataType>()
	{
		return EGridlyColumnDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGridlyColumnDataType(EGridlyColumnDataType_StaticEnum, TEXT("/Script/Gridly"), TEXT("EGridlyColumnDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Gridly_EGridlyColumnDataType_Hash() { return 3227885932U; }
	UEnum* Z_Construct_UEnum_Gridly_EGridlyColumnDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Gridly();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGridlyColumnDataType"), 0, Get_Z_Construct_UEnum_Gridly_EGridlyColumnDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGridlyColumnDataType::String", (int64)EGridlyColumnDataType::String },
				{ "EGridlyColumnDataType::Number", (int64)EGridlyColumnDataType::Number },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EGridlyColumnDataType.h" },
				{ "Number.Name", "EGridlyColumnDataType::Number" },
				{ "String.Name", "EGridlyColumnDataType::String" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Gridly,
				nullptr,
				"EGridlyColumnDataType",
				"EGridlyColumnDataType",
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
