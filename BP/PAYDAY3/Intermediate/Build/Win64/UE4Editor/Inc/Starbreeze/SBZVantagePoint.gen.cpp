// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVantagePoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVantagePoint() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZVantagePoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZVantagePoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZVantagePoint::execOnOccupantKilled)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOccupantKilled(Z_Param_Pawn);
		P_NATIVE_END;
	}
	void ASBZVantagePoint::StaticRegisterNativesASBZVantagePoint()
	{
		UClass* Class = ASBZVantagePoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOccupantKilled", &ASBZVantagePoint::execOnOccupantKilled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZVantagePoint_OnOccupantKilled_Statics
	{
		struct SBZVantagePoint_eventOnOccupantKilled_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZVantagePoint_OnOccupantKilled_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVantagePoint_eventOnOccupantKilled_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZVantagePoint_OnOccupantKilled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZVantagePoint_OnOccupantKilled_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZVantagePoint_OnOccupantKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVantagePoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZVantagePoint_OnOccupantKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZVantagePoint, nullptr, "OnOccupantKilled", nullptr, nullptr, sizeof(SBZVantagePoint_eventOnOccupantKilled_Parms), Z_Construct_UFunction_ASBZVantagePoint_OnOccupantKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVantagePoint_OnOccupantKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZVantagePoint_OnOccupantKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZVantagePoint_OnOccupantKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZVantagePoint_OnOccupantKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZVantagePoint_OnOccupantKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZVantagePoint_NoRegister()
	{
		return ASBZVantagePoint::StaticClass();
	}
	struct Z_Construct_UClass_ASBZVantagePoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZVantagePoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZVantagePoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZVantagePoint_OnOccupantKilled, "OnOccupantKilled" }, // 1162486403
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZVantagePoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVantagePoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVantagePoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZVantagePoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZVantagePoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZVantagePoint_Statics::ClassParams = {
		&ASBZVantagePoint::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZVantagePoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZVantagePoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZVantagePoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZVantagePoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZVantagePoint, 4286374625);
	template<> STARBREEZE_API UClass* StaticClass<ASBZVantagePoint>()
	{
		return ASBZVantagePoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZVantagePoint(Z_Construct_UClass_ASBZVantagePoint, &ASBZVantagePoint::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZVantagePoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZVantagePoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
