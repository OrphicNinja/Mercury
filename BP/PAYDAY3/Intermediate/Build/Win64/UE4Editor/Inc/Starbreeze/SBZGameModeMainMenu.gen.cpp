// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameModeMainMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameModeMainMenu() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGameModeMainMenu_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGameModeMainMenu();
	SBZUTILITYPLUGIN_API UClass* Z_Construct_UClass_ASBZGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMainMenuState();
// End Cross Module References
	DEFINE_FUNCTION(ASBZGameModeMainMenu::execGetMainMenuState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZMainMenuState*)Z_Param__Result=P_THIS->GetMainMenuState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZGameModeMainMenu::execSetMainMenuState)
	{
		P_GET_ENUM(ESBZMainMenuState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMainMenuState(ESBZMainMenuState(Z_Param_NewState));
		P_NATIVE_END;
	}
	void ASBZGameModeMainMenu::StaticRegisterNativesASBZGameModeMainMenu()
	{
		UClass* Class = ASBZGameModeMainMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMainMenuState", &ASBZGameModeMainMenu::execGetMainMenuState },
			{ "SetMainMenuState", &ASBZGameModeMainMenu::execSetMainMenuState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZGameModeMainMenu_GetMainMenuState_Statics
	{
		struct SBZGameModeMainMenu_eventGetMainMenuState_Parms
		{
			ESBZMainMenuState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZGameModeMainMenu_GetMainMenuState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZGameModeMainMenu_GetMainMenuState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameModeMainMenu_eventGetMainMenuState_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZMainMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGameModeMainMenu_GetMainMenuState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGameModeMainMenu_GetMainMenuState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGameModeMainMenu_GetMainMenuState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGameModeMainMenu_GetMainMenuState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameModeMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGameModeMainMenu_GetMainMenuState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGameModeMainMenu, nullptr, "GetMainMenuState", nullptr, nullptr, sizeof(SBZGameModeMainMenu_eventGetMainMenuState_Parms), Z_Construct_UFunction_ASBZGameModeMainMenu_GetMainMenuState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGameModeMainMenu_GetMainMenuState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGameModeMainMenu_GetMainMenuState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGameModeMainMenu_GetMainMenuState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGameModeMainMenu_GetMainMenuState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGameModeMainMenu_GetMainMenuState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZGameModeMainMenu_SetMainMenuState_Statics
	{
		struct SBZGameModeMainMenu_eventSetMainMenuState_Parms
		{
			ESBZMainMenuState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZGameModeMainMenu_SetMainMenuState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZGameModeMainMenu_SetMainMenuState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameModeMainMenu_eventSetMainMenuState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZMainMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZGameModeMainMenu_SetMainMenuState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGameModeMainMenu_SetMainMenuState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZGameModeMainMenu_SetMainMenuState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZGameModeMainMenu_SetMainMenuState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameModeMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZGameModeMainMenu_SetMainMenuState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZGameModeMainMenu, nullptr, "SetMainMenuState", nullptr, nullptr, sizeof(SBZGameModeMainMenu_eventSetMainMenuState_Parms), Z_Construct_UFunction_ASBZGameModeMainMenu_SetMainMenuState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGameModeMainMenu_SetMainMenuState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZGameModeMainMenu_SetMainMenuState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZGameModeMainMenu_SetMainMenuState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZGameModeMainMenu_SetMainMenuState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZGameModeMainMenu_SetMainMenuState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZGameModeMainMenu_NoRegister()
	{
		return ASBZGameModeMainMenu::StaticClass();
	}
	struct Z_Construct_UClass_ASBZGameModeMainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZGameModeMainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZGameModeMainMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZGameModeMainMenu_GetMainMenuState, "GetMainMenuState" }, // 2285341105
		{ &Z_Construct_UFunction_ASBZGameModeMainMenu_SetMainMenuState, "SetMainMenuState" }, // 2342067381
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZGameModeMainMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZGameModeMainMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameModeMainMenu.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZGameModeMainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZGameModeMainMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZGameModeMainMenu_Statics::ClassParams = {
		&ASBZGameModeMainMenu::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008002ADu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZGameModeMainMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZGameModeMainMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZGameModeMainMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZGameModeMainMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZGameModeMainMenu, 2486424014);
	template<> STARBREEZE_API UClass* StaticClass<ASBZGameModeMainMenu>()
	{
		return ASBZGameModeMainMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZGameModeMainMenu(Z_Construct_UClass_ASBZGameModeMainMenu, &ASBZGameModeMainMenu::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZGameModeMainMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZGameModeMainMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
