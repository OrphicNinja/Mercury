// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCosmeticProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCosmeticProp() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCosmeticProp_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCosmeticProp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPoolableActorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZCosmeticProp::execOnDropped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDropped_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCosmeticProp::execOnReceiveCPDs)
	{
		P_GET_TARRAY_REF(FSBZAnimationSpawnedActorCPD,Z_Param_Out_CPDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReceiveCPDs_Implementation(Z_Param_Out_CPDs);
		P_NATIVE_END;
	}
	static FName NAME_ASBZCosmeticProp_OnDropped = FName(TEXT("OnDropped"));
	void ASBZCosmeticProp::OnDropped()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZCosmeticProp_OnDropped),NULL);
	}
	static FName NAME_ASBZCosmeticProp_OnReceiveCPDs = FName(TEXT("OnReceiveCPDs"));
	void ASBZCosmeticProp::OnReceiveCPDs(TArray<FSBZAnimationSpawnedActorCPD> const& CPDs)
	{
		SBZCosmeticProp_eventOnReceiveCPDs_Parms Parms;
		Parms.CPDs=CPDs;
		ProcessEvent(FindFunctionChecked(NAME_ASBZCosmeticProp_OnReceiveCPDs),&Parms);
	}
	void ASBZCosmeticProp::StaticRegisterNativesASBZCosmeticProp()
	{
		UClass* Class = ASBZCosmeticProp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDropped", &ASBZCosmeticProp::execOnDropped },
			{ "OnReceiveCPDs", &ASBZCosmeticProp::execOnReceiveCPDs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZCosmeticProp_OnDropped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCosmeticProp_OnDropped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCosmeticProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCosmeticProp_OnDropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCosmeticProp, nullptr, "OnDropped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCosmeticProp_OnDropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCosmeticProp_OnDropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCosmeticProp_OnDropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCosmeticProp_OnDropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CPDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CPDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics::NewProp_CPDs_Inner = { "CPDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics::NewProp_CPDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics::NewProp_CPDs = { "CPDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCosmeticProp_eventOnReceiveCPDs_Parms, CPDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics::NewProp_CPDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics::NewProp_CPDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics::NewProp_CPDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics::NewProp_CPDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCosmeticProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCosmeticProp, nullptr, "OnReceiveCPDs", nullptr, nullptr, sizeof(SBZCosmeticProp_eventOnReceiveCPDs_Parms), Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZCosmeticProp_NoRegister()
	{
		return ASBZCosmeticProp::StaticClass();
	}
	struct Z_Construct_UClass_ASBZCosmeticProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZCosmeticProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZCosmeticProp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZCosmeticProp_OnDropped, "OnDropped" }, // 1775943491
		{ &Z_Construct_UFunction_ASBZCosmeticProp_OnReceiveCPDs, "OnReceiveCPDs" }, // 2215827843
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCosmeticProp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCosmeticProp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCosmeticProp.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCosmeticProp_Statics::NewProp_MeshArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticProp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCosmeticProp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCosmeticProp_Statics::NewProp_MeshArray_Inner = { "MeshArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCosmeticProp_Statics::NewProp_MeshArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCosmeticProp_Statics::NewProp_MeshArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCosmeticProp_Statics::NewProp_MeshArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticProp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCosmeticProp.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZCosmeticProp_Statics::NewProp_MeshArray = { "MeshArray", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCosmeticProp, MeshArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZCosmeticProp_Statics::NewProp_MeshArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCosmeticProp_Statics::NewProp_MeshArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZCosmeticProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCosmeticProp_Statics::NewProp_MeshArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCosmeticProp_Statics::NewProp_MeshArray,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZCosmeticProp_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZPoolableActorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZCosmeticProp, ISBZPoolableActorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZCosmeticProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZCosmeticProp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZCosmeticProp_Statics::ClassParams = {
		&ASBZCosmeticProp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZCosmeticProp_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCosmeticProp_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZCosmeticProp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCosmeticProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZCosmeticProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZCosmeticProp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZCosmeticProp, 134149207);
	template<> STARBREEZE_API UClass* StaticClass<ASBZCosmeticProp>()
	{
		return ASBZCosmeticProp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZCosmeticProp(Z_Construct_UClass_ASBZCosmeticProp, &ASBZCosmeticProp::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZCosmeticProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZCosmeticProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
