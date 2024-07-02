// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAirNavigation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAirNavigation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAirNavigation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAirNavigation();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAirNavigationTree();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAirNavigation::execGenerateNavigationData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateNavigationData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAirNavigation::execHasValidNavigationAt)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ASBZAirNavigation::HasValidNavigationAt(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	void ASBZAirNavigation::StaticRegisterNativesASBZAirNavigation()
	{
		UClass* Class = ASBZAirNavigation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateNavigationData", &ASBZAirNavigation::execGenerateNavigationData },
			{ "HasValidNavigationAt", &ASBZAirNavigation::execHasValidNavigationAt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAirNavigation_GenerateNavigationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAirNavigation_GenerateNavigationData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAirNavigation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAirNavigation_GenerateNavigationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAirNavigation, nullptr, "GenerateNavigationData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAirNavigation_GenerateNavigationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAirNavigation_GenerateNavigationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAirNavigation_GenerateNavigationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAirNavigation_GenerateNavigationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics
	{
		struct SBZAirNavigation_eventHasValidNavigationAt_Parms
		{
			FVector Location;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAirNavigation_eventHasValidNavigationAt_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::NewProp_Location_MetaData)) };
	void Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAirNavigation_eventHasValidNavigationAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAirNavigation_eventHasValidNavigationAt_Parms), &Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAirNavigation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAirNavigation, nullptr, "HasValidNavigationAt", nullptr, nullptr, sizeof(SBZAirNavigation_eventHasValidNavigationAt_Parms), Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAirNavigation_NoRegister()
	{
		return ASBZAirNavigation::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAirNavigation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAirNavigation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAirNavigation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAirNavigation_GenerateNavigationData, "GenerateNavigationData" }, // 428034559
		{ &Z_Construct_UFunction_ASBZAirNavigation_HasValidNavigationAt, "HasValidNavigationAt" }, // 2947359789
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAirNavigation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZAirNavigation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAirNavigation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAirNavigation_Statics::NewProp_NavData_Inner = { "NavData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAirNavigationTree, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAirNavigation_Statics::NewProp_NavData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirNavigation" },
		{ "ModuleRelativePath", "Public/SBZAirNavigation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAirNavigation_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAirNavigation, NavData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAirNavigation_Statics::NewProp_NavData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAirNavigation_Statics::NewProp_NavData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAirNavigation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAirNavigation_Statics::NewProp_NavData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAirNavigation_Statics::NewProp_NavData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAirNavigation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAirNavigation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAirNavigation_Statics::ClassParams = {
		&ASBZAirNavigation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAirNavigation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAirNavigation_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAirNavigation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAirNavigation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAirNavigation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAirNavigation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAirNavigation, 3253883371);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAirNavigation>()
	{
		return ASBZAirNavigation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAirNavigation(Z_Construct_UClass_ASBZAirNavigation, &ASBZAirNavigation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAirNavigation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAirNavigation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
