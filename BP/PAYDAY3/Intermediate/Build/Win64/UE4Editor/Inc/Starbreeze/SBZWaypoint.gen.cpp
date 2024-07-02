// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWaypoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWaypoint() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWaypoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWaypoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZWaypoint::execAddMarker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMarker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZWaypoint::execRemoveMarker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMarker();
		P_NATIVE_END;
	}
	void ASBZWaypoint::StaticRegisterNativesASBZWaypoint()
	{
		UClass* Class = ASBZWaypoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMarker", &ASBZWaypoint::execAddMarker },
			{ "RemoveMarker", &ASBZWaypoint::execRemoveMarker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZWaypoint_AddMarker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWaypoint_AddMarker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWaypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWaypoint_AddMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWaypoint, nullptr, "AddMarker", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWaypoint_AddMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWaypoint_AddMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWaypoint_AddMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWaypoint_AddMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZWaypoint_RemoveMarker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZWaypoint_RemoveMarker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWaypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZWaypoint_RemoveMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZWaypoint, nullptr, "RemoveMarker", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZWaypoint_RemoveMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZWaypoint_RemoveMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZWaypoint_RemoveMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZWaypoint_RemoveMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZWaypoint_NoRegister()
	{
		return ASBZWaypoint::StaticClass();
	}
	struct Z_Construct_UClass_ASBZWaypoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowMarkerOnSpawn_MetaData[];
#endif
		static void NewProp_bShowMarkerOnSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowMarkerOnSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZWaypoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZWaypoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZWaypoint_AddMarker, "AddMarker" }, // 2245271602
		{ &Z_Construct_UFunction_ASBZWaypoint_RemoveMarker, "RemoveMarker" }, // 1053631606
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWaypoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWaypoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWaypoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWaypoint_Statics::NewProp_bShowMarkerOnSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWaypoint" },
		{ "ModuleRelativePath", "Public/SBZWaypoint.h" },
	};
#endif
	void Z_Construct_UClass_ASBZWaypoint_Statics::NewProp_bShowMarkerOnSpawn_SetBit(void* Obj)
	{
		((ASBZWaypoint*)Obj)->bShowMarkerOnSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZWaypoint_Statics::NewProp_bShowMarkerOnSpawn = { "bShowMarkerOnSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZWaypoint), &Z_Construct_UClass_ASBZWaypoint_Statics::NewProp_bShowMarkerOnSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZWaypoint_Statics::NewProp_bShowMarkerOnSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWaypoint_Statics::NewProp_bShowMarkerOnSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWaypoint_Statics::NewProp_MarkerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWaypoint" },
		{ "ModuleRelativePath", "Public/SBZWaypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWaypoint_Statics::NewProp_MarkerAsset = { "MarkerAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWaypoint, MarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZWaypoint_Statics::NewProp_MarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWaypoint_Statics::NewProp_MarkerAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWaypoint_Statics::NewProp_bShowMarkerOnSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWaypoint_Statics::NewProp_MarkerAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZWaypoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZWaypoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZWaypoint_Statics::ClassParams = {
		&ASBZWaypoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZWaypoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWaypoint_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZWaypoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWaypoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZWaypoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZWaypoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZWaypoint, 1894783519);
	template<> STARBREEZE_API UClass* StaticClass<ASBZWaypoint>()
	{
		return ASBZWaypoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZWaypoint(Z_Construct_UClass_ASBZWaypoint, &ASBZWaypoint::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZWaypoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZWaypoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
