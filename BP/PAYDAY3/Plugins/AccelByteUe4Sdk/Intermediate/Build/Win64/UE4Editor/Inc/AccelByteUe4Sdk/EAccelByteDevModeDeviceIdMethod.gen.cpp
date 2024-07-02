// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/EAccelByteDevModeDeviceIdMethod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAccelByteDevModeDeviceIdMethod() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteDevModeDeviceIdMethod();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	static UEnum* EAccelByteDevModeDeviceIdMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteDevModeDeviceIdMethod, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("EAccelByteDevModeDeviceIdMethod"));
		}
		return Singleton;
	}
	template<> ACCELBYTEUE4SDK_API UEnum* StaticEnum<EAccelByteDevModeDeviceIdMethod>()
	{
		return EAccelByteDevModeDeviceIdMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAccelByteDevModeDeviceIdMethod(EAccelByteDevModeDeviceIdMethod_StaticEnum, TEXT("/Script/AccelByteUe4Sdk"), TEXT("EAccelByteDevModeDeviceIdMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteDevModeDeviceIdMethod_Hash() { return 332727751U; }
	UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteDevModeDeviceIdMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAccelByteDevModeDeviceIdMethod"), 0, Get_Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteDevModeDeviceIdMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAccelByteDevModeDeviceIdMethod::UNSPECIFIED", (int64)EAccelByteDevModeDeviceIdMethod::UNSPECIFIED },
				{ "EAccelByteDevModeDeviceIdMethod::COMMANDLINE", (int64)EAccelByteDevModeDeviceIdMethod::COMMANDLINE },
				{ "EAccelByteDevModeDeviceIdMethod::PICK_RANDOM", (int64)EAccelByteDevModeDeviceIdMethod::PICK_RANDOM },
				{ "EAccelByteDevModeDeviceIdMethod::RANDOMIZE", (int64)EAccelByteDevModeDeviceIdMethod::RANDOMIZE },
				{ "EAccelByteDevModeDeviceIdMethod::PERSISTENT", (int64)EAccelByteDevModeDeviceIdMethod::PERSISTENT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "COMMANDLINE.Name", "EAccelByteDevModeDeviceIdMethod::COMMANDLINE" },
				{ "ModuleRelativePath", "Public/EAccelByteDevModeDeviceIdMethod.h" },
				{ "PERSISTENT.Name", "EAccelByteDevModeDeviceIdMethod::PERSISTENT" },
				{ "PICK_RANDOM.Name", "EAccelByteDevModeDeviceIdMethod::PICK_RANDOM" },
				{ "RANDOMIZE.Name", "EAccelByteDevModeDeviceIdMethod::RANDOMIZE" },
				{ "UNSPECIFIED.Name", "EAccelByteDevModeDeviceIdMethod::UNSPECIFIED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
				nullptr,
				"EAccelByteDevModeDeviceIdMethod",
				"EAccelByteDevModeDeviceIdMethod",
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
