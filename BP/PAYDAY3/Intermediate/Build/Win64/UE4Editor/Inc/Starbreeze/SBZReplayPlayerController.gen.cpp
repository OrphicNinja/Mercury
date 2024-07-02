// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplayPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplayPlayerController() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplayPlayerController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZReplayPlayerController();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerController();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplayManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplayBaseWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZReplayPlayerController::execGetReplayManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZReplayManager**)Z_Param__Result=P_THIS->GetReplayManager();
		P_NATIVE_END;
	}
	void ASBZReplayPlayerController::StaticRegisterNativesASBZReplayPlayerController()
	{
		UClass* Class = ASBZReplayPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetReplayManager", &ASBZReplayPlayerController::execGetReplayManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZReplayPlayerController_GetReplayManager_Statics
	{
		struct SBZReplayPlayerController_eventGetReplayManager_Parms
		{
			USBZReplayManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZReplayPlayerController_GetReplayManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReplayPlayerController_eventGetReplayManager_Parms, ReturnValue), Z_Construct_UClass_USBZReplayManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZReplayPlayerController_GetReplayManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZReplayPlayerController_GetReplayManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZReplayPlayerController_GetReplayManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReplayPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZReplayPlayerController_GetReplayManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZReplayPlayerController, nullptr, "GetReplayManager", nullptr, nullptr, sizeof(SBZReplayPlayerController_eventGetReplayManager_Parms), Z_Construct_UFunction_ASBZReplayPlayerController_GetReplayManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplayPlayerController_GetReplayManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZReplayPlayerController_GetReplayManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZReplayPlayerController_GetReplayManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZReplayPlayerController_GetReplayManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZReplayPlayerController_GetReplayManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZReplayPlayerController_NoRegister()
	{
		return ASBZReplayPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASBZReplayPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplayManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplayWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZReplayPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZReplayPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZReplayPlayerController_GetReplayManager, "GetReplayManager" }, // 467548554
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplayPlayerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZReplayPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReplayPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplayPlayerController_Statics::NewProp_ReplayManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayPlayerController" },
		{ "ModuleRelativePath", "Public/SBZReplayPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZReplayPlayerController_Statics::NewProp_ReplayManager = { "ReplayManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZReplayPlayerController, ReplayManager), Z_Construct_UClass_USBZReplayManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZReplayPlayerController_Statics::NewProp_ReplayManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplayPlayerController_Statics::NewProp_ReplayManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZReplayPlayerController_Statics::NewProp_ReplayWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZReplayPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZReplayPlayerController_Statics::NewProp_ReplayWidget = { "ReplayWidget", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZReplayPlayerController, ReplayWidget), Z_Construct_UClass_USBZReplayBaseWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZReplayPlayerController_Statics::NewProp_ReplayWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplayPlayerController_Statics::NewProp_ReplayWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZReplayPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZReplayPlayerController_Statics::NewProp_ReplayManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZReplayPlayerController_Statics::NewProp_ReplayWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZReplayPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZReplayPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZReplayPlayerController_Statics::ClassParams = {
		&ASBZReplayPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZReplayPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplayPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZReplayPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZReplayPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZReplayPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZReplayPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZReplayPlayerController, 3946487185);
	template<> STARBREEZE_API UClass* StaticClass<ASBZReplayPlayerController>()
	{
		return ASBZReplayPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZReplayPlayerController(Z_Construct_UClass_ASBZReplayPlayerController, &ASBZReplayPlayerController::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZReplayPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZReplayPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
