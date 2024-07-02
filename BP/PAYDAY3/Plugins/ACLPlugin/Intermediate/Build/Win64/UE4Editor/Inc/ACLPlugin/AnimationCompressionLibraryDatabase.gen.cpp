// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPlugin/Classes/AnimationCompressionLibraryDatabase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationCompressionLibraryDatabase() {}
// Cross Module References
	ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult();
	UPackage* Z_Construct_UPackage__Script_ACLPlugin();
	ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabase_NoRegister();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	static UEnum* ACLVisualFidelityChangeResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult, Z_Construct_UPackage__Script_ACLPlugin(), TEXT("ACLVisualFidelityChangeResult"));
		}
		return Singleton;
	}
	template<> ACLPLUGIN_API UEnum* StaticEnum<ACLVisualFidelityChangeResult>()
	{
		return ACLVisualFidelityChangeResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ACLVisualFidelityChangeResult(ACLVisualFidelityChangeResult_StaticEnum, TEXT("/Script/ACLPlugin"), TEXT("ACLVisualFidelityChangeResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult_Hash() { return 2849191854U; }
	UEnum* Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACLPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ACLVisualFidelityChangeResult"), 0, Get_Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ACLVisualFidelityChangeResult::Dispatched", (int64)ACLVisualFidelityChangeResult::Dispatched },
				{ "ACLVisualFidelityChangeResult::Completed", (int64)ACLVisualFidelityChangeResult::Completed },
				{ "ACLVisualFidelityChangeResult::Failed", (int64)ACLVisualFidelityChangeResult::Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** An enum to represent the result of latent visual fidelity change requests. */" },
				{ "Completed.Name", "ACLVisualFidelityChangeResult::Completed" },
				{ "Dispatched.Name", "ACLVisualFidelityChangeResult::Dispatched" },
				{ "Failed.Name", "ACLVisualFidelityChangeResult::Failed" },
				{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
				{ "ToolTip", "An enum to represent the result of latent visual fidelity change requests." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACLPlugin,
				nullptr,
				"ACLVisualFidelityChangeResult",
				"ACLVisualFidelityChangeResult",
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
	static UEnum* ACLVisualFidelity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity, Z_Construct_UPackage__Script_ACLPlugin(), TEXT("ACLVisualFidelity"));
		}
		return Singleton;
	}
	template<> ACLPLUGIN_API UEnum* StaticEnum<ACLVisualFidelity>()
	{
		return ACLVisualFidelity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ACLVisualFidelity(ACLVisualFidelity_StaticEnum, TEXT("/Script/ACLPlugin"), TEXT("ACLVisualFidelity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity_Hash() { return 566653035U; }
	UEnum* Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ACLPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ACLVisualFidelity"), 0, Get_Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ACLVisualFidelity::Highest", (int64)ACLVisualFidelity::Highest },
				{ "ACLVisualFidelity::Medium", (int64)ACLVisualFidelity::Medium },
				{ "ACLVisualFidelity::Lowest", (int64)ACLVisualFidelity::Lowest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** An enum to represent the ACL visual fidelity level. */" },
				{ "Highest.DisplayName", "Highest" },
				{ "Highest.Name", "ACLVisualFidelity::Highest" },
				{ "Lowest.DisplayName", "Lowest" },
				{ "Lowest.Name", "ACLVisualFidelity::Lowest" },
				{ "Medium.DisplayName", "Medium" },
				{ "Medium.Name", "ACLVisualFidelity::Medium" },
				{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
				{ "ToolTip", "An enum to represent the ACL visual fidelity level." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ACLPlugin,
				nullptr,
				"ACLVisualFidelity",
				"ACLVisualFidelity",
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
	DEFINE_FUNCTION(UAnimationCompressionLibraryDatabase::execGetVisualFidelity)
	{
		P_GET_OBJECT(UAnimationCompressionLibraryDatabase,Z_Param_DatabaseAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACLVisualFidelity*)Z_Param__Result=UAnimationCompressionLibraryDatabase::GetVisualFidelity(Z_Param_DatabaseAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationCompressionLibraryDatabase::execSetVisualFidelity)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UAnimationCompressionLibraryDatabase,Z_Param_DatabaseAsset);
		P_GET_ENUM_REF(ACLVisualFidelityChangeResult,Z_Param_Out_Result);
		P_GET_ENUM(ACLVisualFidelity,Z_Param_VisualFidelity);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationCompressionLibraryDatabase::SetVisualFidelity(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_DatabaseAsset,(ACLVisualFidelityChangeResult&)(Z_Param_Out_Result),ACLVisualFidelity(Z_Param_VisualFidelity));
		P_NATIVE_END;
	}
	void UAnimationCompressionLibraryDatabase::StaticRegisterNativesUAnimationCompressionLibraryDatabase()
	{
		UClass* Class = UAnimationCompressionLibraryDatabase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVisualFidelity", &UAnimationCompressionLibraryDatabase::execGetVisualFidelity },
			{ "SetVisualFidelity", &UAnimationCompressionLibraryDatabase::execSetVisualFidelity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics
	{
		struct AnimationCompressionLibraryDatabase_eventGetVisualFidelity_Parms
		{
			UAnimationCompressionLibraryDatabase* DatabaseAsset;
			ACLVisualFidelity ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DatabaseAsset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::NewProp_DatabaseAsset = { "DatabaseAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationCompressionLibraryDatabase_eventGetVisualFidelity_Parms, DatabaseAsset), Z_Construct_UClass_UAnimationCompressionLibraryDatabase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationCompressionLibraryDatabase_eventGetVisualFidelity_Parms, ReturnValue), Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::NewProp_DatabaseAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|ACL" },
		{ "DisplayName", "Get Database Visual Fidelity" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationCompressionLibraryDatabase, nullptr, "GetVisualFidelity", nullptr, nullptr, sizeof(AnimationCompressionLibraryDatabase_eventGetVisualFidelity_Parms), Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics
	{
		struct AnimationCompressionLibraryDatabase_eventSetVisualFidelity_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			UAnimationCompressionLibraryDatabase* DatabaseAsset;
			ACLVisualFidelityChangeResult Result;
			ACLVisualFidelity VisualFidelity;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DatabaseAsset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VisualFidelity_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VisualFidelity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationCompressionLibraryDatabase_eventSetVisualFidelity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationCompressionLibraryDatabase_eventSetVisualFidelity_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_DatabaseAsset = { "DatabaseAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationCompressionLibraryDatabase_eventSetVisualFidelity_Parms, DatabaseAsset), Z_Construct_UClass_UAnimationCompressionLibraryDatabase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationCompressionLibraryDatabase_eventSetVisualFidelity_Parms, Result), Z_Construct_UEnum_ACLPlugin_ACLVisualFidelityChangeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_VisualFidelity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_VisualFidelity = { "VisualFidelity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationCompressionLibraryDatabase_eventSetVisualFidelity_Parms, VisualFidelity), Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_DatabaseAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_VisualFidelity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::NewProp_VisualFidelity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|ACL" },
		{ "Comment", "/** Initiate a latent database change in quality by streaming in/out as necessary. */" },
		{ "CPP_Default_VisualFidelity", "Highest" },
		{ "DisplayName", "Set Database Visual Fidelity" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "Initiate a latent database change in quality by streaming in/out as necessary." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationCompressionLibraryDatabase, nullptr, "SetVisualFidelity", nullptr, nullptr, sizeof(AnimationCompressionLibraryDatabase_eventSetVisualFidelity_Parms), Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabase_NoRegister()
	{
		return UAnimationCompressionLibraryDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CookedCompressedBytes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedCompressedBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CookedCompressedBytes;
		static const UE4CodeGen_Private::FFInt64PropertyParams NewProp_CookedAnimSequenceMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedAnimSequenceMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CookedAnimSequenceMappings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighestImportanceProportion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighestImportanceProportion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediumImportanceProportion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MediumImportanceProportion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowestImportanceProportion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowestImportanceProportion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StripLowestImportanceTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StripLowestImportanceTier;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStreamRequestSizeKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxStreamRequestSizeKB;
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviewVisualFidelity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewVisualFidelity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviewVisualFidelity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimSequences;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_GetVisualFidelity, "GetVisualFidelity" }, // 421537934
		{ &Z_Construct_UFunction_UAnimationCompressionLibraryDatabase_SetVisualFidelity, "SetVisualFidelity" }, // 3070452737
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An ACL database object references several UAnimSequence instances that it contains. */" },
		{ "DisplayName", "ACL Database" },
		{ "IncludePath", "AnimationCompressionLibraryDatabase.h" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "An ACL database object references several UAnimSequence instances that it contains." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedCompressedBytes_Inner = { "CookedCompressedBytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedCompressedBytes_MetaData[] = {
		{ "Comment", "/** The raw binary data for our compressed database and anim sequences. Present only in cooked builds. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "The raw binary data for our compressed database and anim sequences. Present only in cooked builds." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedCompressedBytes = { "CookedCompressedBytes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, CookedCompressedBytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedCompressedBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedCompressedBytes_MetaData)) };
	const UE4CodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedAnimSequenceMappings_Inner = { "CookedAnimSequenceMappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedAnimSequenceMappings_MetaData[] = {
		{ "Comment", "/** Stores a mapping for each anim sequence, where its compresssed data lives in our compressed buffer. Each 64 bit value is split into 32 bits: (Hash << 32) | Offset. Present only in cooked builds. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "Stores a mapping for each anim sequence, where its compresssed data lives in our compressed buffer. Each 64 bit value is split into 32 bits: (Hash << 32) | Offset. Present only in cooked builds." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedAnimSequenceMappings = { "CookedAnimSequenceMappings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, CookedAnimSequenceMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedAnimSequenceMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedAnimSequenceMappings_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_HighestImportanceProportion_MetaData[] = {
		{ "Category", "Database" },
		{ "Comment", "/** What percentage of the key frames should remain in the anim sequences. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "What percentage of the key frames should remain in the anim sequences." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_HighestImportanceProportion = { "HighestImportanceProportion", nullptr, (EPropertyFlags)0x0040000800020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, HighestImportanceProportion), METADATA_PARAMS(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_HighestImportanceProportion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_HighestImportanceProportion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_MediumImportanceProportion_MetaData[] = {
		{ "Category", "Database" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** What percentage of the key frames should be moved to the database. Medium importance key frames are moved second. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "What percentage of the key frames should be moved to the database. Medium importance key frames are moved second." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_MediumImportanceProportion = { "MediumImportanceProportion", nullptr, (EPropertyFlags)0x0040000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, MediumImportanceProportion), METADATA_PARAMS(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_MediumImportanceProportion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_MediumImportanceProportion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_LowestImportanceProportion_MetaData[] = {
		{ "Category", "Database" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** What percentage of the key frames should be moved to the database. Least important key frames are moved first. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "What percentage of the key frames should be moved to the database. Least important key frames are moved first." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_LowestImportanceProportion = { "LowestImportanceProportion", nullptr, (EPropertyFlags)0x0040000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, LowestImportanceProportion), METADATA_PARAMS(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_LowestImportanceProportion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_LowestImportanceProportion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_StripLowestImportanceTier_MetaData[] = {
		{ "Category", "Database" },
		{ "Comment", "/** Whether or not to strip the lowest importance tier entirely from disk. Stripping the lowest tier means that the visual fidelity of Highest and Medium are equivalent. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "Whether or not to strip the lowest importance tier entirely from disk. Stripping the lowest tier means that the visual fidelity of Highest and Medium are equivalent." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_StripLowestImportanceTier = { "StripLowestImportanceTier", nullptr, (EPropertyFlags)0x0040000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, StripLowestImportanceTier), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_StripLowestImportanceTier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_StripLowestImportanceTier_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_MaxStreamRequestSizeKB_MetaData[] = {
		{ "Category", "Database" },
		{ "ClampMax", "1048576" },
		{ "ClampMin", "4" },
		{ "Comment", "/** The maximum size in KiloBytes of streaming requests. Setting this to 0 will force tiers to load in a single request regardless of their size. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "The maximum size in KiloBytes of streaming requests. Setting this to 0 will force tiers to load in a single request regardless of their size." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_MaxStreamRequestSizeKB = { "MaxStreamRequestSizeKB", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, MaxStreamRequestSizeKB), METADATA_PARAMS(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_MaxStreamRequestSizeKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_MaxStreamRequestSizeKB_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_PreviewVisualFidelity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_PreviewVisualFidelity_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** The level of quality to preview with the database when decompressing in the editor. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "The level of quality to preview with the database when decompressing in the editor." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_PreviewVisualFidelity = { "PreviewVisualFidelity", nullptr, (EPropertyFlags)0x0040000800002001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, PreviewVisualFidelity), Z_Construct_UEnum_ACLPlugin_ACLVisualFidelity, METADATA_PARAMS(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_PreviewVisualFidelity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_PreviewVisualFidelity_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_AnimSequences_Inner = { "AnimSequences", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_AnimSequences_MetaData[] = {
		{ "Category", "Metadata" },
		{ "Comment", "/** The anim sequences contained within the database. Built manually from the asset UI, content browser, or with a commandlet. */" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabase.h" },
		{ "ToolTip", "The anim sequences contained within the database. Built manually from the asset UI, content browser, or with a commandlet." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_AnimSequences = { "AnimSequences", nullptr, (EPropertyFlags)0x0040000800020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, AnimSequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_AnimSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_AnimSequences_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedCompressedBytes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedCompressedBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedAnimSequenceMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_CookedAnimSequenceMappings,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_HighestImportanceProportion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_MediumImportanceProportion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_LowestImportanceProportion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_StripLowestImportanceTier,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_MaxStreamRequestSizeKB,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_PreviewVisualFidelity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_PreviewVisualFidelity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_AnimSequences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::NewProp_AnimSequences,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationCompressionLibraryDatabase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::ClassParams = {
		&UAnimationCompressionLibraryDatabase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationCompressionLibraryDatabase, 1043629802);
	template<> ACLPLUGIN_API UClass* StaticClass<UAnimationCompressionLibraryDatabase>()
	{
		return UAnimationCompressionLibraryDatabase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationCompressionLibraryDatabase(Z_Construct_UClass_UAnimationCompressionLibraryDatabase, &UAnimationCompressionLibraryDatabase::StaticClass, TEXT("/Script/ACLPlugin"), TEXT("UAnimationCompressionLibraryDatabase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationCompressionLibraryDatabase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimationCompressionLibraryDatabase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
