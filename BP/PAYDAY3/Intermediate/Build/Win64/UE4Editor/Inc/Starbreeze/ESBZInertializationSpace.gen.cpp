// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ESBZInertializationSpace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESBZInertializationSpace() {}
// Cross Module References
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZInertializationSpace();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static UEnum* ESBZInertializationSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Starbreeze_ESBZInertializationSpace, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ESBZInertializationSpace"));
		}
		return Singleton;
	}
	template<> STARBREEZE_API UEnum* StaticEnum<ESBZInertializationSpace>()
	{
		return ESBZInertializationSpace_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESBZInertializationSpace(ESBZInertializationSpace_StaticEnum, TEXT("/Script/Starbreeze"), TEXT("ESBZInertializationSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Starbreeze_ESBZInertializationSpace_Hash() { return 1162763182U; }
	UEnum* Z_Construct_UEnum_Starbreeze_ESBZInertializationSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESBZInertializationSpace"), 0, Get_Z_Construct_UEnum_Starbreeze_ESBZInertializationSpace_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESBZInertializationSpace::Default", (int64)ESBZInertializationSpace::Default },
				{ "ESBZInertializationSpace::WorldSpace", (int64)ESBZInertializationSpace::WorldSpace },
				{ "ESBZInertializationSpace::WorldRotation", (int64)ESBZInertializationSpace::WorldRotation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "ESBZInertializationSpace::Default" },
				{ "ModuleRelativePath", "Public/ESBZInertializationSpace.h" },
				{ "WorldRotation.Name", "ESBZInertializationSpace::WorldRotation" },
				{ "WorldSpace.Name", "ESBZInertializationSpace::WorldSpace" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Starbreeze,
				nullptr,
				"ESBZInertializationSpace",
				"ESBZInertializationSpace",
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
