// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuCameraManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMainMenuCameraManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMainMenuCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZMainMenuCameraManager::execGetMainMenuCameraManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZMainMenuCameraManager**)Z_Param__Result=ASBZMainMenuCameraManager::GetMainMenuCameraManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMainMenuCameraManager::execSwitchToCamera)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CameraName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchToCamera(Z_Param_Out_CameraName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMainMenuCameraManager::execSwitchToDefaultCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchToDefaultCamera();
		P_NATIVE_END;
	}
	void ASBZMainMenuCameraManager::StaticRegisterNativesASBZMainMenuCameraManager()
	{
		UClass* Class = ASBZMainMenuCameraManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMainMenuCameraManager", &ASBZMainMenuCameraManager::execGetMainMenuCameraManager },
			{ "SwitchToCamera", &ASBZMainMenuCameraManager::execSwitchToCamera },
			{ "SwitchToDefaultCamera", &ASBZMainMenuCameraManager::execSwitchToDefaultCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics
	{
		struct SBZMainMenuCameraManager_eventGetMainMenuCameraManager_Parms
		{
			const UObject* WorldContextObject;
			ASBZMainMenuCameraManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCameraManager_eventGetMainMenuCameraManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCameraManager_eventGetMainMenuCameraManager_Parms, ReturnValue), Z_Construct_UClass_ASBZMainMenuCameraManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCameraManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMainMenuCameraManager, nullptr, "GetMainMenuCameraManager", nullptr, nullptr, sizeof(SBZMainMenuCameraManager_eventGetMainMenuCameraManager_Parms), Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera_Statics
	{
		struct SBZMainMenuCameraManager_eventSwitchToCamera_Parms
		{
			FName CameraName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CameraName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera_Statics::NewProp_CameraName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera_Statics::NewProp_CameraName = { "CameraName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCameraManager_eventSwitchToCamera_Parms, CameraName), METADATA_PARAMS(Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera_Statics::NewProp_CameraName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera_Statics::NewProp_CameraName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera_Statics::NewProp_CameraName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMainMenuCameraManager, nullptr, "SwitchToCamera", nullptr, nullptr, sizeof(SBZMainMenuCameraManager_eventSwitchToCamera_Parms), Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToDefaultCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToDefaultCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToDefaultCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMainMenuCameraManager, nullptr, "SwitchToDefaultCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToDefaultCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToDefaultCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToDefaultCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToDefaultCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZMainMenuCameraManager_NoRegister()
	{
		return ASBZMainMenuCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ASBZMainMenuCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefaultCamera;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cameras_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Cameras_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cameras_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Cameras;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyCameraName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LobbyCameraName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZMainMenuCameraManager_GetMainMenuCameraManager, "GetMainMenuCameraManager" }, // 1961296502
		{ &Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToCamera, "SwitchToCamera" }, // 339913243
		{ &Z_Construct_UFunction_ASBZMainMenuCameraManager_SwitchToDefaultCamera, "SwitchToDefaultCamera" }, // 3807296623
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuCameraManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCameraManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_DefaultCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCameraManager" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_DefaultCamera = { "DefaultCamera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMainMenuCameraManager, DefaultCamera), METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_DefaultCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_DefaultCamera_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_Cameras_ValueProp = { "Cameras", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_Cameras_Key_KeyProp = { "Cameras_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_Cameras_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCameraManager" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_Cameras = { "Cameras", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMainMenuCameraManager, Cameras), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_Cameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_Cameras_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_LobbyCameraName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCameraManager" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCameraManager.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_LobbyCameraName = { "LobbyCameraName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMainMenuCameraManager, LobbyCameraName), METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_LobbyCameraName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_LobbyCameraName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_DefaultCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_Cameras_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_Cameras_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_Cameras,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::NewProp_LobbyCameraName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZMainMenuCameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::ClassParams = {
		&ASBZMainMenuCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZMainMenuCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZMainMenuCameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZMainMenuCameraManager, 2475499482);
	template<> STARBREEZE_API UClass* StaticClass<ASBZMainMenuCameraManager>()
	{
		return ASBZMainMenuCameraManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZMainMenuCameraManager(Z_Construct_UClass_ASBZMainMenuCameraManager, &ASBZMainMenuCameraManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZMainMenuCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZMainMenuCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
