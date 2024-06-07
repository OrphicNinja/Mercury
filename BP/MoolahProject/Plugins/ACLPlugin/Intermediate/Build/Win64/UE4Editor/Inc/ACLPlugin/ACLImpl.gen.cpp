// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPlugin/Public/ACLImpl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACLImpl() {}
// Cross Module References
	ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel();
	UPackage* Z_Construct_UPackage__Script_ACLPlugin();
	ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLVectorFormat();
	ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLRotationFormat();
// End Cross Module References
	static UEnum* ACLCompressionLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel, Z_Construct_UPackage__Script_ACLPlugin(), TEXT("ACLCompressionLevel"));
		}
		return Singleton;
	}
	template<> ACLPLUGIN_API UEnum* StaticEnum<ACLCompressionLevel>()
	{
		return ACLCompressionLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ACLCompressionLevel(ACLCompressionLevel_StaticEnum, TEXT("/Script/ACLPlugin"), TEXT("ACLCompressionLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Hash() { return 1442886422U; }
	UEnum* Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACLPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ACLCompressionLevel"), 0, Get_Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ACLCL_Lowest", (int64)ACLCL_Lowest },
				{ "ACLCL_Low", (int64)ACLCL_Low },
				{ "ACLCL_Medium", (int64)ACLCL_Medium },
				{ "ACLCL_High", (int64)ACLCL_High },
				{ "ACLCL_Highest", (int64)ACLCL_Highest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACLCL_High.DisplayName", "High" },
				{ "ACLCL_High.Name", "ACLCL_High" },
				{ "ACLCL_Highest.DisplayName", "Highest" },
				{ "ACLCL_Highest.Name", "ACLCL_Highest" },
				{ "ACLCL_Low.DisplayName", "Low" },
				{ "ACLCL_Low.Name", "ACLCL_Low" },
				{ "ACLCL_Lowest.DisplayName", "Lowest" },
				{ "ACLCL_Lowest.Name", "ACLCL_Lowest" },
				{ "ACLCL_Medium.DisplayName", "Medium" },
				{ "ACLCL_Medium.Name", "ACLCL_Medium" },
				{ "Comment", "/** An enum for ACL compression levels. */" },
				{ "ModuleRelativePath", "Public/ACLImpl.h" },
				{ "ToolTip", "An enum for ACL compression levels." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACLPlugin,
				nullptr,
				"ACLCompressionLevel",
				"ACLCompressionLevel",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ACLVectorFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACLPlugin_ACLVectorFormat, Z_Construct_UPackage__Script_ACLPlugin(), TEXT("ACLVectorFormat"));
		}
		return Singleton;
	}
	template<> ACLPLUGIN_API UEnum* StaticEnum<ACLVectorFormat>()
	{
		return ACLVectorFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ACLVectorFormat(ACLVectorFormat_StaticEnum, TEXT("/Script/ACLPlugin"), TEXT("ACLVectorFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Hash() { return 1007341883U; }
	UEnum* Z_Construct_UEnum_ACLPlugin_ACLVectorFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACLPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ACLVectorFormat"), 0, Get_Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ACLVF_Vector3_96", (int64)ACLVF_Vector3_96 },
				{ "ACLVF_Vector3_Variable", (int64)ACLVF_Vector3_Variable },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACLVF_Vector3_96.DisplayName", "Vector3 Full Bit Rate" },
				{ "ACLVF_Vector3_96.Name", "ACLVF_Vector3_96" },
				{ "ACLVF_Vector3_Variable.DisplayName", "Vector3 Variable Bit Rate" },
				{ "ACLVF_Vector3_Variable.Name", "ACLVF_Vector3_Variable" },
				{ "Comment", "/** An enum for ACL Vector3 formats. */" },
				{ "ModuleRelativePath", "Public/ACLImpl.h" },
				{ "ToolTip", "An enum for ACL Vector3 formats." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACLPlugin,
				nullptr,
				"ACLVectorFormat",
				"ACLVectorFormat",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ACLRotationFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACLPlugin_ACLRotationFormat, Z_Construct_UPackage__Script_ACLPlugin(), TEXT("ACLRotationFormat"));
		}
		return Singleton;
	}
	template<> ACLPLUGIN_API UEnum* StaticEnum<ACLRotationFormat>()
	{
		return ACLRotationFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ACLRotationFormat(ACLRotationFormat_StaticEnum, TEXT("/Script/ACLPlugin"), TEXT("ACLRotationFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Hash() { return 3630746007U; }
	UEnum* Z_Construct_UEnum_ACLPlugin_ACLRotationFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACLPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ACLRotationFormat"), 0, Get_Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ACLRF_Quat_128", (int64)ACLRF_Quat_128 },
				{ "ACLRF_QuatDropW_96", (int64)ACLRF_QuatDropW_96 },
				{ "ACLRF_QuatDropW_Variable", (int64)ACLRF_QuatDropW_Variable },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACLRF_Quat_128.DisplayName", "Quat Full Bit Rate" },
				{ "ACLRF_Quat_128.Name", "ACLRF_Quat_128" },
				{ "ACLRF_QuatDropW_96.DisplayName", "Quat Drop W Full Bit Rate" },
				{ "ACLRF_QuatDropW_96.Name", "ACLRF_QuatDropW_96" },
				{ "ACLRF_QuatDropW_Variable.DisplayName", "Quat Drop W Variable Bit Rate" },
				{ "ACLRF_QuatDropW_Variable.Name", "ACLRF_QuatDropW_Variable" },
				{ "Comment", "/** An enum for ACL rotation formats. */" },
				{ "ModuleRelativePath", "Public/ACLImpl.h" },
				{ "ToolTip", "An enum for ACL rotation formats." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACLPlugin,
				nullptr,
				"ACLRotationFormat",
				"ACLRotationFormat",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
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
