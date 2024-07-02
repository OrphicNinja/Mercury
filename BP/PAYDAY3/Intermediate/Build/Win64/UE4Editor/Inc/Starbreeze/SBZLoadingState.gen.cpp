// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLoadingState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLoadingState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLoadingState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLoadingState();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(ASBZLoadingState::execServerSetLoadingProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLoadingProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetLoadingProgress_Validate(Z_Param_InLoadingProgress))
		{
			RPC_ValidateFailed(TEXT("ServerSetLoadingProgress_Validate"));
			return;
		}
		P_THIS->ServerSetLoadingProgress_Implementation(Z_Param_InLoadingProgress);
		P_NATIVE_END;
	}
	static FName NAME_ASBZLoadingState_ServerSetLoadingProgress = FName(TEXT("ServerSetLoadingProgress"));
	void ASBZLoadingState::ServerSetLoadingProgress(float InLoadingProgress)
	{
		SBZLoadingState_eventServerSetLoadingProgress_Parms Parms;
		Parms.InLoadingProgress=InLoadingProgress;
		ProcessEvent(FindFunctionChecked(NAME_ASBZLoadingState_ServerSetLoadingProgress),&Parms);
	}
	void ASBZLoadingState::StaticRegisterNativesASBZLoadingState()
	{
		UClass* Class = ASBZLoadingState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerSetLoadingProgress", &ASBZLoadingState::execServerSetLoadingProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZLoadingState_ServerSetLoadingProgress_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InLoadingProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZLoadingState_ServerSetLoadingProgress_Statics::NewProp_InLoadingProgress = { "InLoadingProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadingState_eventServerSetLoadingProgress_Parms, InLoadingProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZLoadingState_ServerSetLoadingProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZLoadingState_ServerSetLoadingProgress_Statics::NewProp_InLoadingProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLoadingState_ServerSetLoadingProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadingState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLoadingState_ServerSetLoadingProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLoadingState, nullptr, "ServerSetLoadingProgress", nullptr, nullptr, sizeof(SBZLoadingState_eventServerSetLoadingProgress_Parms), Z_Construct_UFunction_ASBZLoadingState_ServerSetLoadingProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLoadingState_ServerSetLoadingProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLoadingState_ServerSetLoadingProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLoadingState_ServerSetLoadingProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLoadingState_ServerSetLoadingProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLoadingState_ServerSetLoadingProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZLoadingState_NoRegister()
	{
		return ASBZLoadingState::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLoadingState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoadingProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLoadingState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZLoadingState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZLoadingState_ServerSetLoadingProgress, "ServerSetLoadingProgress" }, // 4281199080
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLoadingState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZLoadingState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLoadingState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLoadingState_Statics::NewProp_LoadingProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoadingState" },
		{ "ModuleRelativePath", "Public/SBZLoadingState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZLoadingState_Statics::NewProp_LoadingProgress = { "LoadingProgress", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLoadingState, LoadingProgress), METADATA_PARAMS(Z_Construct_UClass_ASBZLoadingState_Statics::NewProp_LoadingProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLoadingState_Statics::NewProp_LoadingProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZLoadingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLoadingState_Statics::NewProp_LoadingProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLoadingState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLoadingState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLoadingState_Statics::ClassParams = {
		&ASBZLoadingState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZLoadingState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLoadingState_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLoadingState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLoadingState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLoadingState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLoadingState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLoadingState, 2231912872);
	template<> STARBREEZE_API UClass* StaticClass<ASBZLoadingState>()
	{
		return ASBZLoadingState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLoadingState(Z_Construct_UClass_ASBZLoadingState, &ASBZLoadingState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZLoadingState"), false, nullptr, nullptr, nullptr);

	void ASBZLoadingState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_LoadingProgress(TEXT("LoadingProgress"));

		const bool bIsValid = true
			&& Name_LoadingProgress == ClassReps[(int32)ENetFields_Private::LoadingProgress].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZLoadingState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLoadingState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
