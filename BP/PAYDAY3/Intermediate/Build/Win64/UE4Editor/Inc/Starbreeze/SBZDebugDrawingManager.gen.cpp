// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDebugDrawingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDebugDrawingManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDebugDrawingManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDebugDrawingManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(ASBZDebugDrawingManager::execReplicateShapes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_UncompressedPointsSize);
		P_GET_TARRAY(uint8,Z_Param_InCompressedPoints);
		P_GET_PROPERTY(FIntProperty,Z_Param_UncompressedLinesSize);
		P_GET_TARRAY(uint8,Z_Param_InCompressedLines);
		P_GET_PROPERTY(FIntProperty,Z_Param_UncompressedSpheresSize);
		P_GET_TARRAY(uint8,Z_Param_InCompressedSpheres);
		P_GET_PROPERTY(FIntProperty,Z_Param_UncompressedCapsulesSize);
		P_GET_TARRAY(uint8,Z_Param_InCompressedCapsules);
		P_GET_PROPERTY(FIntProperty,Z_Param_UncompressedTextsSize);
		P_GET_TARRAY(uint8,Z_Param_InCompressedTexts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplicateShapes_Implementation(Z_Param_UncompressedPointsSize,Z_Param_InCompressedPoints,Z_Param_UncompressedLinesSize,Z_Param_InCompressedLines,Z_Param_UncompressedSpheresSize,Z_Param_InCompressedSpheres,Z_Param_UncompressedCapsulesSize,Z_Param_InCompressedCapsules,Z_Param_UncompressedTextsSize,Z_Param_InCompressedTexts);
		P_NATIVE_END;
	}
	static FName NAME_ASBZDebugDrawingManager_ReplicateShapes = FName(TEXT("ReplicateShapes"));
	void ASBZDebugDrawingManager::ReplicateShapes(int32 UncompressedPointsSize, TArray<uint8> const& InCompressedPoints, int32 UncompressedLinesSize, TArray<uint8> const& InCompressedLines, int32 UncompressedSpheresSize, TArray<uint8> const& InCompressedSpheres, int32 UncompressedCapsulesSize, TArray<uint8> const& InCompressedCapsules, int32 UncompressedTextsSize, TArray<uint8> const& InCompressedTexts)
	{
		SBZDebugDrawingManager_eventReplicateShapes_Parms Parms;
		Parms.UncompressedPointsSize=UncompressedPointsSize;
		Parms.InCompressedPoints=InCompressedPoints;
		Parms.UncompressedLinesSize=UncompressedLinesSize;
		Parms.InCompressedLines=InCompressedLines;
		Parms.UncompressedSpheresSize=UncompressedSpheresSize;
		Parms.InCompressedSpheres=InCompressedSpheres;
		Parms.UncompressedCapsulesSize=UncompressedCapsulesSize;
		Parms.InCompressedCapsules=InCompressedCapsules;
		Parms.UncompressedTextsSize=UncompressedTextsSize;
		Parms.InCompressedTexts=InCompressedTexts;
		ProcessEvent(FindFunctionChecked(NAME_ASBZDebugDrawingManager_ReplicateShapes),&Parms);
	}
	void ASBZDebugDrawingManager::StaticRegisterNativesASBZDebugDrawingManager()
	{
		UClass* Class = ASBZDebugDrawingManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReplicateShapes", &ASBZDebugDrawingManager::execReplicateShapes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UncompressedPointsSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCompressedPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCompressedPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InCompressedPoints;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UncompressedLinesSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCompressedLines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCompressedLines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InCompressedLines;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UncompressedSpheresSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCompressedSpheres_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCompressedSpheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InCompressedSpheres;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UncompressedCapsulesSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCompressedCapsules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCompressedCapsules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InCompressedCapsules;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UncompressedTextsSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InCompressedTexts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCompressedTexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InCompressedTexts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_UncompressedPointsSize = { "UncompressedPointsSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDebugDrawingManager_eventReplicateShapes_Parms, UncompressedPointsSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedPoints_Inner = { "InCompressedPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedPoints = { "InCompressedPoints", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDebugDrawingManager_eventReplicateShapes_Parms, InCompressedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedPoints_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_UncompressedLinesSize = { "UncompressedLinesSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDebugDrawingManager_eventReplicateShapes_Parms, UncompressedLinesSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedLines_Inner = { "InCompressedLines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedLines_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedLines = { "InCompressedLines", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDebugDrawingManager_eventReplicateShapes_Parms, InCompressedLines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedLines_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_UncompressedSpheresSize = { "UncompressedSpheresSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDebugDrawingManager_eventReplicateShapes_Parms, UncompressedSpheresSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedSpheres_Inner = { "InCompressedSpheres", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedSpheres_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedSpheres = { "InCompressedSpheres", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDebugDrawingManager_eventReplicateShapes_Parms, InCompressedSpheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedSpheres_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_UncompressedCapsulesSize = { "UncompressedCapsulesSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDebugDrawingManager_eventReplicateShapes_Parms, UncompressedCapsulesSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedCapsules_Inner = { "InCompressedCapsules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedCapsules_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedCapsules = { "InCompressedCapsules", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDebugDrawingManager_eventReplicateShapes_Parms, InCompressedCapsules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedCapsules_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedCapsules_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_UncompressedTextsSize = { "UncompressedTextsSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDebugDrawingManager_eventReplicateShapes_Parms, UncompressedTextsSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedTexts_Inner = { "InCompressedTexts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedTexts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedTexts = { "InCompressedTexts", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDebugDrawingManager_eventReplicateShapes_Parms, InCompressedTexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedTexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedTexts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_UncompressedPointsSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_UncompressedLinesSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedLines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_UncompressedSpheresSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedSpheres_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedSpheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_UncompressedCapsulesSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedCapsules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedCapsules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_UncompressedTextsSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedTexts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::NewProp_InCompressedTexts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDebugDrawingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZDebugDrawingManager, nullptr, "ReplicateShapes", nullptr, nullptr, sizeof(SBZDebugDrawingManager_eventReplicateShapes_Parms), Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZDebugDrawingManager_NoRegister()
	{
		return ASBZDebugDrawingManager::StaticClass();
	}
	struct Z_Construct_UClass_ASBZDebugDrawingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZDebugDrawingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZDebugDrawingManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZDebugDrawingManager_ReplicateShapes, "ReplicateShapes" }, // 48791445
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZDebugDrawingManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDebugDrawingManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDebugDrawingManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZDebugDrawingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZDebugDrawingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZDebugDrawingManager_Statics::ClassParams = {
		&ASBZDebugDrawingManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZDebugDrawingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZDebugDrawingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZDebugDrawingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZDebugDrawingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZDebugDrawingManager, 340834016);
	template<> STARBREEZE_API UClass* StaticClass<ASBZDebugDrawingManager>()
	{
		return ASBZDebugDrawingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZDebugDrawingManager(Z_Construct_UClass_ASBZDebugDrawingManager, &ASBZDebugDrawingManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZDebugDrawingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZDebugDrawingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
