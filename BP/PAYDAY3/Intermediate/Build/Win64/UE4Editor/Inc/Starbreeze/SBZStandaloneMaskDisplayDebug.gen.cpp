// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStandaloneMaskDisplayDebug.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStandaloneMaskDisplayDebug() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskPreconfigData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMask_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZStandaloneMaskDisplayDebug::execToggleMaskStrapVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleMaskStrapVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZStandaloneMaskDisplayDebug::execUpdateSprayCanTextureSizeMinus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSprayCanTextureSizeMinus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZStandaloneMaskDisplayDebug::execUpdateSprayCanTextureSizePlus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSprayCanTextureSizePlus();
		P_NATIVE_END;
	}
	void ASBZStandaloneMaskDisplayDebug::StaticRegisterNativesASBZStandaloneMaskDisplayDebug()
	{
		UClass* Class = ASBZStandaloneMaskDisplayDebug::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleMaskStrapVisibility", &ASBZStandaloneMaskDisplayDebug::execToggleMaskStrapVisibility },
			{ "UpdateSprayCanTextureSizeMinus", &ASBZStandaloneMaskDisplayDebug::execUpdateSprayCanTextureSizeMinus },
			{ "UpdateSprayCanTextureSizePlus", &ASBZStandaloneMaskDisplayDebug::execUpdateSprayCanTextureSizePlus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_ToggleMaskStrapVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_ToggleMaskStrapVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStandaloneMaskDisplayDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_ToggleMaskStrapVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug, nullptr, "ToggleMaskStrapVisibility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_ToggleMaskStrapVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_ToggleMaskStrapVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_ToggleMaskStrapVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_ToggleMaskStrapVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizeMinus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizeMinus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStandaloneMaskDisplayDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizeMinus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug, nullptr, "UpdateSprayCanTextureSizeMinus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizeMinus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizeMinus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizeMinus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizeMinus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizePlus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizePlus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStandaloneMaskDisplayDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizePlus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug, nullptr, "UpdateSprayCanTextureSizePlus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizePlus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizePlus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizePlus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizePlus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_NoRegister()
	{
		return ASBZStandaloneMaskDisplayDebug::StaticClass();
	}
	struct Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserMaskData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserMaskData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModDataMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ModDataMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprayCanTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprayCanTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorIndexTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorIndexTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_ToggleMaskStrapVisibility, "ToggleMaskStrapVisibility" }, // 4269737922
		{ &Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizeMinus, "UpdateSprayCanTextureSizeMinus" }, // 2019449249
		{ &Z_Construct_UFunction_ASBZStandaloneMaskDisplayDebug_UpdateSprayCanTextureSizePlus, "UpdateSprayCanTextureSizePlus" }, // 2553983172
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStandaloneMaskDisplayDebug.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStandaloneMaskDisplayDebug.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_UserMaskData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneMaskDisplayDebug" },
		{ "ModuleRelativePath", "Public/SBZStandaloneMaskDisplayDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_UserMaskData = { "UserMaskData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStandaloneMaskDisplayDebug, UserMaskData), Z_Construct_UClass_USBZMaskPreconfigData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_UserMaskData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_UserMaskData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_ModDataMap_ValueProp = { "ModDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZMaskPartConfigGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_ModDataMap_Key_KeyProp = { "ModDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_ModDataMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneMaskDisplayDebug" },
		{ "ModuleRelativePath", "Public/SBZStandaloneMaskDisplayDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_ModDataMap = { "ModDataMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStandaloneMaskDisplayDebug, ModDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_ModDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_ModDataMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_SprayCanTextureSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneMaskDisplayDebug" },
		{ "ModuleRelativePath", "Public/SBZStandaloneMaskDisplayDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_SprayCanTextureSize = { "SprayCanTextureSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStandaloneMaskDisplayDebug, SprayCanTextureSize), METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_SprayCanTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_SprayCanTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_ColorIndexTextureSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneMaskDisplayDebug" },
		{ "ModuleRelativePath", "Public/SBZStandaloneMaskDisplayDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_ColorIndexTextureSize = { "ColorIndexTextureSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStandaloneMaskDisplayDebug, ColorIndexTextureSize), METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_ColorIndexTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_ColorIndexTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneMaskDisplayDebug" },
		{ "ModuleRelativePath", "Public/SBZStandaloneMaskDisplayDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStandaloneMaskDisplayDebug, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_SpawnTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_SpawnedMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneMaskDisplayDebug" },
		{ "ModuleRelativePath", "Public/SBZStandaloneMaskDisplayDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_SpawnedMask = { "SpawnedMask", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStandaloneMaskDisplayDebug, SpawnedMask), Z_Construct_UClass_ASBZMask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_SpawnedMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_SpawnedMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_UserMaskData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_ModDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_ModDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_ModDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_SprayCanTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_ColorIndexTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_SpawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::NewProp_SpawnedMask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZStandaloneMaskDisplayDebug>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::ClassParams = {
		&ASBZStandaloneMaskDisplayDebug::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZStandaloneMaskDisplayDebug, 266078087);
	template<> STARBREEZE_API UClass* StaticClass<ASBZStandaloneMaskDisplayDebug>()
	{
		return ASBZStandaloneMaskDisplayDebug::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZStandaloneMaskDisplayDebug(Z_Construct_UClass_ASBZStandaloneMaskDisplayDebug, &ASBZStandaloneMaskDisplayDebug::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZStandaloneMaskDisplayDebug"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZStandaloneMaskDisplayDebug);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
