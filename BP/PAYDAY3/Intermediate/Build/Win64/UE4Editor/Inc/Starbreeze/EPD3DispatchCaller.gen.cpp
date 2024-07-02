// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/EPD3DispatchCaller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPD3DispatchCaller() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DispatchCaller();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* EPD3DispatchCaller_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_EPD3DispatchCaller, Z_Construct_UPackage__Script_Starbreeze(), TEXT("EPD3DispatchCaller"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<EPD3DispatchCaller>()
	{
		return EPD3DispatchCaller_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPD3DispatchCaller(EPD3DispatchCaller_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("EPD3DispatchCaller"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_EPD3DispatchCaller_Hash() { return 763870235U; }
	UEnum* Z_Construct_UEnum_Starbreeze_EPD3DispatchCaller()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPD3DispatchCaller"), 0, Get_Z_Construct_UEnum_Starbreeze_EPD3DispatchCaller_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPD3DispatchCaller::Cop", (int64)EPD3DispatchCaller::Cop },
				{ "EPD3DispatchCaller::Civilian", (int64)EPD3DispatchCaller::Civilian },
				{ "EPD3DispatchCaller::Camera", (int64)EPD3DispatchCaller::Camera },
				{ "EPD3DispatchCaller::Dispatch", (int64)EPD3DispatchCaller::Dispatch },
				{ "EPD3DispatchCaller::MAX", (int64)EPD3DispatchCaller::MAX },
				{ "EPD3DispatchCaller::Default", (int64)EPD3DispatchCaller::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Camera.Name", "EPD3DispatchCaller::Camera" },
				{ "Civilian.Name", "EPD3DispatchCaller::Civilian" },
				{ "Cop.Name", "EPD3DispatchCaller::Cop" },
				{ "Default.Name", "EPD3DispatchCaller::Default" },
				{ "Dispatch.Name", "EPD3DispatchCaller::Dispatch" },
				{ "MAX.Name", "EPD3DispatchCaller::MAX" },
				{ "ModuleRelativePath", "Public/EPD3DispatchCaller.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"EPD3DispatchCaller",
				"EPD3DispatchCaller",
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
