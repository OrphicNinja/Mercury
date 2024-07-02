// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICrewController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICrewController() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICrewController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICrewController();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIController();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICrewState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAICrewController::execOnCrewStateDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCrewStateDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewController::execOnRep_CrewState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CrewState();
		P_NATIVE_END;
	}
	void ASBZAICrewController::StaticRegisterNativesASBZAICrewController()
	{
		UClass* Class = ASBZAICrewController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCrewStateDestroyed", &ASBZAICrewController::execOnCrewStateDestroyed },
			{ "OnRep_CrewState", &ASBZAICrewController::execOnRep_CrewState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAICrewController_OnCrewStateDestroyed_Statics
	{
		struct SBZAICrewController_eventOnCrewStateDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICrewController_OnCrewStateDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewController_eventOnCrewStateDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewController_OnCrewStateDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewController_OnCrewStateDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewController_OnCrewStateDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewController_OnCrewStateDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewController, nullptr, "OnCrewStateDestroyed", nullptr, nullptr, sizeof(SBZAICrewController_eventOnCrewStateDestroyed_Parms), Z_Construct_UFunction_ASBZAICrewController_OnCrewStateDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewController_OnCrewStateDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewController_OnCrewStateDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewController_OnCrewStateDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewController_OnCrewStateDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewController_OnCrewStateDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewController_OnRep_CrewState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewController_OnRep_CrewState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewController_OnRep_CrewState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewController, nullptr, "OnRep_CrewState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewController_OnRep_CrewState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewController_OnRep_CrewState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewController_OnRep_CrewState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewController_OnRep_CrewState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAICrewController_NoRegister()
	{
		return ASBZAICrewController::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAICrewController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrewState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrewState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustodyDurationArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustodyDurationArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastWardRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastWardRoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAICrewController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAICrewController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAICrewController_OnCrewStateDestroyed, "OnCrewStateDestroyed" }, // 2907490168
		{ &Z_Construct_UFunction_ASBZAICrewController_OnRep_CrewState, "OnRep_CrewState" }, // 3845546104
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZAICrewController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICrewController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewController_Statics::NewProp_CrewState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewController" },
		{ "ModuleRelativePath", "Public/SBZAICrewController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewController_Statics::NewProp_CrewState = { "CrewState", "OnRep_CrewState", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewController, CrewState), Z_Construct_UClass_ASBZAICrewState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewController_Statics::NewProp_CrewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewController_Statics::NewProp_CrewState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewController_Statics::NewProp_CustodyDurationArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewController" },
		{ "ModuleRelativePath", "Public/SBZAICrewController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAICrewController_Statics::NewProp_CustodyDurationArray = { "CustodyDurationArray", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(CustodyDurationArray, ASBZAICrewController), STRUCT_OFFSET(ASBZAICrewController, CustodyDurationArray), METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewController_Statics::NewProp_CustodyDurationArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewController_Statics::NewProp_CustodyDurationArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewController_Statics::NewProp_LastWardRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewController" },
		{ "ModuleRelativePath", "Public/SBZAICrewController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewController_Statics::NewProp_LastWardRoom = { "LastWardRoom", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewController, LastWardRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewController_Statics::NewProp_LastWardRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewController_Statics::NewProp_LastWardRoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAICrewController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewController_Statics::NewProp_CrewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewController_Statics::NewProp_CustodyDurationArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewController_Statics::NewProp_LastWardRoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAICrewController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAICrewController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAICrewController_Statics::ClassParams = {
		&ASBZAICrewController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAICrewController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAICrewController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAICrewController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAICrewController, 421098660);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAICrewController>()
	{
		return ASBZAICrewController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAICrewController(Z_Construct_UClass_ASBZAICrewController, &ASBZAICrewController::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAICrewController"), false, nullptr, nullptr, nullptr);

	void ASBZAICrewController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CrewState(TEXT("CrewState"));

		const bool bIsValid = true
			&& Name_CrewState == ClassReps[(int32)ENetFields_Private::CrewState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZAICrewController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAICrewController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
